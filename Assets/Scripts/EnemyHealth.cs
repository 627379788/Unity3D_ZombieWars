using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyHealth : MonoBehaviour
{
    [SerializeField] float bloodVolume = 100f;
    bool isDie = false;
    public bool IsDie {get{return isDie;}set{isDie = value;}}
    public void TakeDamage(float damageValue) {
        BroadcastMessage("OnDamageTaken", damageValue);
        bloodVolume -= damageValue;
        if (bloodVolume <= 0) {
            Die();
        }
    }

    private void Die()
    {
        if (isDie) return;
        isDie = true;
        GetComponent<Animator>().SetTrigger("Die");
    }
}
