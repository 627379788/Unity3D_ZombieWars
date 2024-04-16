using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAttack : MonoBehaviour
{
    PlayerHealth target;
    [SerializeField] float danger = 40f;
    void Start()
    {
        target = FindObjectOfType<PlayerHealth>();
    }

    public void AttackHitEvent(){
        if (target == null) return;
        target.TakeDamage(danger);
        target.GetComponent<DisplayDamage>().ShowDamageImpact();
        Debug.Log("Bang Band Band");
    }

}
