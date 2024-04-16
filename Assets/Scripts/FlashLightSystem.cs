using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlashLightSystem : MonoBehaviour
{
    [SerializeField] float lightDecay = .1f;
    [SerializeField] float angleDecay = 1f;
    [SerializeField] float minimumAngle = 40f;
    Light myLight;
    void Start()
    {
        myLight = GetComponent<Light>();
    }

    void Update()
    {
        DecreaseLightAngle();
        DecreaseLightIntensity();
    }
    public void RestoreLightAngle(float restoreAngle)
    {
        myLight.spotAngle = restoreAngle;
    }
    public void RestoreLightIntensity(float restoreIntensity)
    {
        myLight.intensity += restoreIntensity;
    }
    void DecreaseLightIntensity()
    {
        myLight.intensity -= lightDecay * Time.deltaTime;
    }

    void DecreaseLightAngle()
    {
        if (myLight.spotAngle < minimumAngle) return;
        myLight.spotAngle -= angleDecay * Time.deltaTime;
    }
}
