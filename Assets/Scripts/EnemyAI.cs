using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.AI;
using UnityStandardAssets.Characters.FirstPerson;

public class EnemyAI : MonoBehaviour
{
    Transform target;
    [SerializeField] float chaseDistance = 5f;
    [SerializeField] float turnSpeed = 20f;

    float targetToDistance = Mathf.Infinity;
    NavMeshAgent navMeshAgent;
    EnemyHealth enemyHealth;
    bool isIrritate = false;
    void Start()
    {
        enemyHealth = GetComponent<EnemyHealth>();
        navMeshAgent = GetComponent<NavMeshAgent>();
        target = FindObjectOfType<RigidbodyFirstPersonController>().transform;
    }

    void Update()
    {
        if (enemyHealth.IsDie) {
            enabled = false;
            navMeshAgent.enabled = false;
            return;
        }
        targetToDistance = Vector3.Distance(target.transform.position, transform.position);
        if (isIrritate) {
            EngageTarget();
        }
        else if(targetToDistance <= chaseDistance) {
            isIrritate = true;
        }
    }

    private void EngageTarget()
    {
        FaceTarget();
        if(targetToDistance > navMeshAgent.stoppingDistance) {
            ChaseTarget();
        }else {
            AttackTarget();
        }
    }

    void OnDamageTaken() {
        isIrritate = true;
    }

    private void AttackTarget()
    {
        GetComponent<Animator>().SetBool("Attack", true);
    }

    private void ChaseTarget()
    {
        var animator = GetComponent<Animator>();
        animator.SetBool("Attack", false);
        animator.SetTrigger("Move");
        navMeshAgent.SetDestination(target.position);

    }

    private void FaceTarget() {
        Vector3 direction = (target.position - transform.position).normalized;
        Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * turnSpeed);
    }

    void OnDrawGizmosSelected() {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, chaseDistance);
    }
}
