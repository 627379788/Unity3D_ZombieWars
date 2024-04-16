using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class WeaponSwitcher : MonoBehaviour
{
    [SerializeField] int currentWeapon = 0;
    void Start()
    {
        SetWeaponActive();
    }

    void Update()
    {
        int previousWeapon = currentWeapon;
        ProcessKeyInput();
        ProcessScrollWheel();
        if (previousWeapon != currentWeapon) {
            SetWeaponActive();
        }
    }

    private void ProcessScrollWheel()
    {
        float scrollAmount = Input.GetAxis("Mouse ScrollWheel");
        if(scrollAmount > 0) {
            currentWeapon = currentWeapon == transform.childCount - 1 ? 0 : currentWeapon + 1;
        }else if (scrollAmount < 0) {
            currentWeapon = currentWeapon == 0 ? transform.childCount - 1 : currentWeapon - 1;
        }
    }

    private void ProcessKeyInput()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1)) {
            currentWeapon = 0;
        }else if(Input.GetKeyDown(KeyCode.Alpha2)) {
            currentWeapon = 1;
        }else if(Input.GetKeyDown(KeyCode.Alpha3)) {
            currentWeapon = 2;
        }
    }

    private void SetWeaponActive()
    {
        int weaponIndex = 0;
        foreach(Transform weapon in transform) {
            if (currentWeapon == weaponIndex) {
                weapon.gameObject.SetActive(true);
            }else {
                weapon.gameObject.SetActive(false);
            }
            weaponIndex++;
        }
    }
}
