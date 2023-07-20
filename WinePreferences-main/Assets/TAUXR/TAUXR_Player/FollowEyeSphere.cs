using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowEyeSphere : MonoBehaviour
{
    [SerializeField] float lerpSpeed;

    void Start()
    {
        
    }

    void Update()
    {
        transform.position = Vector3.Lerp(transform.position, TAUXRPlayer.Instance.EyeGazeHitPosition, lerpSpeed * Time.deltaTime);    
        //transform.position = TAUXRPlayer.Instance.EyeGazeHitPosition;    
    }
}
