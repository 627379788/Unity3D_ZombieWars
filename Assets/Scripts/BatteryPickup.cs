using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BatteryPickup : MonoBehaviour
{
    [SerializeField] float increaseLightIntensity = 10f;
    [SerializeField] float increaseLightAngle = 70f;
    private void OnTriggerEnter(Collider other) {
        if (other.gameObject.tag == "Player") {
            FindObjectOfType<FlashLightSystem>().RestoreLightAngle(increaseLightAngle);
            FindObjectOfType<FlashLightSystem>().RestoreLightIntensity(increaseLightIntensity);
            Destroy(gameObject);
        }
    }
}
