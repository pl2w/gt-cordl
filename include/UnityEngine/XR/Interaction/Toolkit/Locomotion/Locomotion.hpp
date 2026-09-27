#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/ApplyBodyTransformationsEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/CharacterControllerBodyManipulator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/DelegateXRBodyTransformation.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/IConstrainedXRBodyManipulator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/IXRBodyPositionEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/IXRBodyTransformation.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionMediator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionState.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionStateExtensions.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/ScriptableConstrainedBodyManipulator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/UnderCameraBodyPositionEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyGroundPosition.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyPositionEvaluatorExtensions.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyScale.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyTransformer_OrderedTransformation.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyYawRotation.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRCameraForwardXZAlignment.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRMovableBody.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XROriginMovement.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XROriginUpAlignment.hpp"
#ifdef __cpp_modules
                    export module Locomotion;
                    #endif
                
