using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using TMPro;
using UnityEngine;

public class Weapon : MonoBehaviour
{   
    [SerializeField] Camera FPSCamera;
    [SerializeField] float range = 100f;
    [SerializeField] float weaponPower = 30f;
    [SerializeField] ParticleSystem muzzleFlash;
    [SerializeField] GameObject hitEffectObj;
    [SerializeField] float fireInterval = 0.5f;
    [SerializeField] AmmoType ammoType;
    [SerializeField] TextMeshProUGUI ammoText;
    Ammo AmmoSlot;
    bool isShoot = true;
    void OnEnable() {
        isShoot = true;
    }
    void Start() {
        AmmoSlot = GetComponentInParent<Ammo>();
    }
    
    void Update()
    {
        DisplayAmmoAmout();
        if(Input.GetButtonDown("Fire1") && isShoot) { 
            StartCoroutine(Shoot());
        }
    }

    private void DisplayAmmoAmout()
    {
        ammoText.text = AmmoSlot.GetAmmoAmount(ammoType).ToString();
    }

    IEnumerator Shoot()
    {
        isShoot = false;
        if (AmmoSlot.GetAmmoAmount(ammoType) > 0){
            PlayMuzzleFlash();
            ProcessRaycast();
            AmmoSlot.ReduceCurrentAmmo(ammoType);
        }
        yield return new WaitForSeconds(fireInterval);
        isShoot = true;
    }

    private void PlayMuzzleFlash()
    {
        muzzleFlash.Play();
    }

    private void ProcessRaycast()
    {
        RaycastHit hit;
        if (Physics.Raycast(FPSCamera.transform.position, FPSCamera.transform.forward, out hit, range)) {
            EnemyHealth enemyHealth = hit.transform.GetComponent<EnemyHealth>();
            if (enemyHealth == null) return;
            CreateHitImpact(hit);
            enemyHealth.TakeDamage(weaponPower);
        }else {
            return;
        }
    }

    private void CreateHitImpact(RaycastHit hit)
    {
        GameObject hitEffect = Instantiate(hitEffectObj, hit.point, UnityEngine.Quaternion.LookRotation(hit.normal));
        Destroy(hitEffect, .1f);
    }
}
