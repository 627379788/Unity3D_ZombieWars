using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ammo : MonoBehaviour
{
    [SerializeField] AmmoSlot[] ammoSlots;
    // 序列化自定义结构用System.Serializable
    [System.Serializable]
    private class AmmoSlot 
    {
        public AmmoType ammoType;
        public int ammoAmount;
    }

    public void ReduceCurrentAmmo(AmmoType ammoType) {
        GetAmmoSlot(ammoType).ammoAmount--;
    }
    public int GetAmmoAmount(AmmoType ammoType) {
        return GetAmmoSlot(ammoType).ammoAmount;
    }

    public void IncreaseCurrentAmmo(AmmoType ammoType, int ammoAmount) {
        GetAmmoSlot(ammoType).ammoAmount += ammoAmount;
    }

    private AmmoSlot GetAmmoSlot(AmmoType ammoType){
        foreach(AmmoSlot ammoSlot in ammoSlots) {
            if (ammoSlot.ammoType == ammoType) {
                return ammoSlot;
            }
        }
        return null;
    }
}
