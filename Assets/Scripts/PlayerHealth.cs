using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHealth : MonoBehaviour
{
    [SerializeField] float totalHealthValue = 100f;

    public void TakeDamage(float damage) {
        totalHealthValue -= damage;
        if (totalHealthValue <= 0) {
            GetComponent<DeathHandler>().HandleDeath();
        }
    }
}
