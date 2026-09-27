#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/XRTransformStabilizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRTransformStabilizer)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRRayProvider;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/CalculateRotationParams_000011D8$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/CalculateRotationParams_000011D8$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/CalculateStabilizedLerp_000011D7$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/CalculateStabilizedLerp_000011D7$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/StabilizeOptimalRotation_000011D6$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/StabilizeOptimalRotation_000011D6$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/StabilizePosition_000011D5$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/StabilizePosition_000011D5$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/StabilizeTransform_000011D4$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRTransformStabilizer/StabilizeTransform_000011D4$PostfixBurstDelegate");
// [BurstCompile]
// [AddComponentMenu("XR/XR Transform Stabilizer", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer.html")]
// [DefaultExecutionOrder(-29985)]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer
class CORDL_TYPE XRTransformStabilizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CalculateRotationParams_000011D8$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall;

using CalculateRotationParams_000011D8$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate;

using CalculateStabilizedLerp_000011D7$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall;

using CalculateStabilizedLerp_000011D7$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate;

using StabilizeOptimalRotation_000011D6$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall;

using StabilizeOptimalRotation_000011D6$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate;

using StabilizePosition_000011D5$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall;

using StabilizePosition_000011D5$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate;

using StabilizeTransform_000011D4$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall;

using StabilizeTransform_000011D4$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate;

 __declspec(property(get=get_aimTarget, put=set_aimTarget)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  aimTarget;

 __declspec(property(get=get_angleStabilization, put=set_angleStabilization)) float_t  angleStabilization;

/// @brief Field m_AimTarget, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AimTarget, put=__cordl_internal_set_m_AimTarget)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  m_AimTarget;

/// @brief Field m_AimTargetObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AimTargetObject, put=__cordl_internal_set_m_AimTargetObject)) ::UnityW<::UnityEngine::Object>  m_AimTargetObject;

/// @brief Field m_AngleStabilization, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AngleStabilization, put=__cordl_internal_set_m_AngleStabilization)) float_t  m_AngleStabilization;

/// @brief Field m_PositionStabilization, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PositionStabilization, put=__cordl_internal_set_m_PositionStabilization)) float_t  m_PositionStabilization;

/// @brief Field m_Target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Target, put=__cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::Transform>  m_Target;

/// @brief Field m_ThisTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ThisTransform, put=__cordl_internal_set_m_ThisTransform)) ::UnityW<::UnityEngine::Transform>  m_ThisTransform;

/// @brief Field m_UseLocalSpace, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseLocalSpace, put=__cordl_internal_set_m_UseLocalSpace)) bool  m_UseLocalSpace;

 __declspec(property(get=get_positionStabilization, put=set_positionStabilization)) float_t  positionStabilization;

 __declspec(property(get=get_targetTransform, put=set_targetTransform)) ::UnityW<::UnityEngine::Transform>  targetTransform;

 __declspec(property(get=get_useLocalSpace, put=set_useLocalSpace)) bool  useLocalSpace;

/// @brief Method ApplyStabilization, addr 0xb4b59f4, size 0x148, virtual false, abstract: false, final false
static inline void ApplyStabilization(::by_ref<::UnityEngine::Transform*>  toStabilize, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Transform*>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>  aimTarget, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, bool  useLocalSpace) ;

/// @brief Method ApplyStabilization, addr 0xb4afb58, size 0x9c, virtual false, abstract: false, final false
static inline void ApplyStabilization(::by_ref<::UnityEngine::Transform*>  toStabilize, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Transform*>  target, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, bool  useLocalSpace) ;

/// @brief Method ApplyStabilization, addr 0xb4afbf4, size 0xbc, virtual false, abstract: false, final false
static inline void ApplyStabilization(::by_ref<::UnityEngine::Transform*>  toStabilize, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Transform*>  target, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetEndpoint, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, bool  useLocalSpace) ;

/// @brief Method Awake, addr 0xb4b56d0, size 0xa8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculatePoses, addr 0xb4b5b3c, size 0xa8, virtual false, abstract: false, final false
static inline void CalculatePoses(::UnityEngine::Transform*  toStabilize, ::UnityEngine::Transform*  target, bool  useLocalSpace, ::by_ref<::UnityEngine::Pose>  currentPose, ::by_ref<::UnityEngine::Pose>  targetPose) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer::CalculateRotationParams_000011D8$PostfixBurstDelegate))]
/// @brief Method CalculateRotationParams, addr 0xb4b55b8, size 0x4, virtual false, abstract: false, final false
static inline void CalculateRotationParams(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale) ;

/// [BurstCompile]
/// @brief Method CalculateRotationParams$BurstManaged, addr 0xb4b6be0, size 0x1b0, virtual false, abstract: false, final false
static inline void CalculateRotationParams$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale) ;

/// @brief Method CalculateScaleFactor, addr 0xb4b5be4, size 0x38, virtual false, abstract: false, final false
static inline float_t CalculateScaleFactor(::UnityEngine::Transform*  toStabilize, bool  useLocalSpace) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer::CalculateStabilizedLerp_000011D7$PostfixBurstDelegate))]
/// @brief Method CalculateStabilizedLerp, addr 0xb4b55b4, size 0x4, virtual false, abstract: false, final false
static inline float_t CalculateStabilizedLerp(float_t  distance, float_t  timeSlice) ;

/// [BurstCompile]
/// @brief Method CalculateStabilizedLerp$BurstManaged, addr 0xb4b6b1c, size 0xc4, virtual false, abstract: false, final false
static inline float_t CalculateStabilizedLerp$BurstManaged(float_t  distance, float_t  timeSlice) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer* New_ctor() ;

/// @brief Method OnEnable, addr 0xb4b5778, size 0x130, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessStabilization, addr 0xb4b5e38, size 0x2f4, virtual false, abstract: false, final false
static inline void ProcessStabilization(::UnityEngine::Pose  currentPose, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  targetEndpoint, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, float_t  localScale, ::UnityEngine::Transform*  toStabilize, bool  useLocalSpace) ;

/// @brief Method ProcessStabilizationWithoutAimTarget, addr 0xb4b5c1c, size 0x21c, virtual false, abstract: false, final false
static inline void ProcessStabilizationWithoutAimTarget(::UnityEngine::Pose  currentPose, ::UnityEngine::Pose  targetPose, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, float_t  localScale, ::UnityEngine::Transform*  toStabilize, bool  useLocalSpace) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer::StabilizeOptimalRotation_000011D6$PostfixBurstDelegate))]
/// @brief Method StabilizeOptimalRotation, addr 0xb4b55b0, size 0x4, virtual false, abstract: false, final false
static inline void StabilizeOptimalRotation(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot) ;

/// [BurstCompile]
/// @brief Method StabilizeOptimalRotation$BurstManaged, addr 0xb4b6a2c, size 0xf0, virtual false, abstract: false, final false
static inline void StabilizeOptimalRotation$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer::StabilizePosition_000011D5$PostfixBurstDelegate))]
/// @brief Method StabilizePosition, addr 0xb4b55ac, size 0x4, virtual false, abstract: false, final false
static inline void StabilizePosition(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos) ;

/// [BurstCompile]
/// @brief Method StabilizePosition$BurstManaged, addr 0xb4b6928, size 0x104, virtual false, abstract: false, final false
static inline void StabilizePosition$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer::StabilizeTransform_000011D4$PostfixBurstDelegate))]
/// @brief Method StabilizeTransform, addr 0xb4b55a8, size 0x4, virtual false, abstract: false, final false
static inline void StabilizeTransform(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot) ;

/// [BurstCompile]
/// @brief Method StabilizeTransform$BurstManaged, addr 0xb4b6794, size 0x194, virtual false, abstract: false, final false
static inline void StabilizeTransform$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot) ;

/// @brief Method Update, addr 0xb4b58a8, size 0x14c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* const& __cordl_internal_get_m_AimTarget() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*& __cordl_internal_get_m_AimTarget() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_AimTargetObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_AimTargetObject() ;

constexpr float_t const& __cordl_internal_get_m_AngleStabilization() const;

constexpr float_t& __cordl_internal_get_m_AngleStabilization() ;

constexpr float_t const& __cordl_internal_get_m_PositionStabilization() const;

constexpr float_t& __cordl_internal_get_m_PositionStabilization() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Target() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ThisTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ThisTransform() ;

constexpr bool const& __cordl_internal_get_m_UseLocalSpace() const;

constexpr bool& __cordl_internal_get_m_UseLocalSpace() ;

constexpr void __cordl_internal_set_m_AimTarget(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  value) ;

constexpr void __cordl_internal_set_m_AimTargetObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_AngleStabilization(float_t  value) ;

constexpr void __cordl_internal_set_m_PositionStabilization(float_t  value) ;

constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_ThisTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_UseLocalSpace(bool  value) ;

/// @brief Method .ctor, addr 0xb4b6780, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_aimTarget, addr 0xb4b55cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* get_aimTarget() ;

/// @brief Method get_angleStabilization, addr 0xb4b56b0, size 0x8, virtual false, abstract: false, final false
inline float_t get_angleStabilization() ;

/// @brief Method get_positionStabilization, addr 0xb4b56c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_positionStabilization() ;

/// @brief Method get_targetTransform, addr 0xb4b55bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_targetTransform() ;

/// @brief Method get_useLocalSpace, addr 0xb4b56a0, size 0x8, virtual false, abstract: false, final false
inline bool get_useLocalSpace() ;

/// @brief Method set_aimTarget, addr 0xb4b55d4, size 0xcc, virtual false, abstract: false, final false
inline void set_aimTarget(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  value) ;

/// @brief Method set_angleStabilization, addr 0xb4b56b8, size 0x8, virtual false, abstract: false, final false
inline void set_angleStabilization(float_t  value) ;

/// @brief Method set_positionStabilization, addr 0xb4b56c8, size 0x8, virtual false, abstract: false, final false
inline void set_positionStabilization(float_t  value) ;

/// @brief Method set_targetTransform, addr 0xb4b55c4, size 0x8, virtual false, abstract: false, final false
inline void set_targetTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_useLocalSpace, addr 0xb4b56a8, size 0x8, virtual false, abstract: false, final false
inline void set_useLocalSpace(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer(XRTransformStabilizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer(XRTransformStabilizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11611};

/// @brief Field k_90FPS offset 0xffffffff size 0x4
static constexpr float_t  k_90FPS{static_cast<float_t>(0.011111111f)};

/// [SerializeField]
/// [Tooltip("The Transform component whose position and rotation will be matched and stabilized.")]
/// @brief Field m_Target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Target;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider))]
/// [Tooltip("Optional - When provided a ray, the stabilizer will calculate the rotation that keeps a ray\'s endpoint stable.")]
/// @brief Field m_AimTargetObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_AimTargetObject;

/// @brief Field m_AimTarget, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  ___m_AimTarget;

/// [SerializeField]
/// [Tooltip("If enabled, will read the target and apply stabilization in local space. Otherwise, in world space.")]
/// @brief Field m_UseLocalSpace, offset: 0x38, size: 0x1, def value: None
 bool  ___m_UseLocalSpace;

/// [Header("Stabilization Parameters")]
/// [SerializeField]
/// [Tooltip("Maximum distance (in degrees) that stabilization will be applied.")]
/// @brief Field m_AngleStabilization, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_AngleStabilization;

/// [SerializeField]
/// [Tooltip("Maximum distance (in meters) that stabilization will be applied.")]
/// @brief Field m_PositionStabilization, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_PositionStabilization;

/// @brief Field m_ThisTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ThisTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer, ___m_Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer, ___m_AimTargetObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer, ___m_AimTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer, ___m_UseLocalSpace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer, ___m_AngleStabilization) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer, ___m_PositionStabilization) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer, ___m_ThisTransform) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/CalculateRotationParams_000011D8$BurstDirectCall
class CORDL_TYPE XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4b7cb8, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4b7bc8, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b6650, size 0x130, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall(XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall(XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11610};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/CalculateRotationParams_000011D8$PostfixBurstDelegate
class CORDL_TYPE XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4b7a28, size 0x194, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method EndInvoke, addr 0xb4b7bbc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b7a0c, size 0x1c, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4b7958, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate(XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate(XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11609};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/CalculateStabilizedLerp_000011D7$BurstDirectCall
class CORDL_TYPE XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4b7940, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4b7850, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b6500, size 0x150, virtual false, abstract: false, final false
static inline float_t Invoke(float_t  distance, float_t  timeSlice) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall(XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall(XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11608};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/CalculateStabilizedLerp_000011D7$PostfixBurstDelegate
class CORDL_TYPE XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4b77ac, size 0x7c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  distance, float_t  timeSlice, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0xb4b7828, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b7798, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(float_t  distance, float_t  timeSlice) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4b76f8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate(XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate(XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11607};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/StabilizeOptimalRotation_000011D6$BurstDirectCall
class CORDL_TYPE XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4b76e0, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4b75f0, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b63f4, size 0x10c, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall(XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall(XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11606};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/StabilizeOptimalRotation_000011D6$PostfixBurstDelegate
class CORDL_TYPE XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4b7498, size 0x14c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_9) ;

/// @brief Method EndInvoke, addr 0xb4b75e4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b7484, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4b73d0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate(XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate(XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11605};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/StabilizePosition_000011D5$BurstDirectCall
class CORDL_TYPE XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4b73b8, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4b72c8, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b625c, size 0x198, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall(XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall(XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/StabilizePosition_000011D5$PostfixBurstDelegate
class CORDL_TYPE XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4b71b8, size 0x104, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb4b72bc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b71a4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4b70f0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate(XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate(XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11603};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/StabilizeTransform_000011D4$BurstDirectCall
class CORDL_TYPE XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4b70d8, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4b6fe8, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b612c, size 0x130, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall(XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall(XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11602};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer/StabilizeTransform_000011D4$PostfixBurstDelegate
class CORDL_TYPE XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4b6e58, size 0x184, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method EndInvoke, addr 0xb4b6fdc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b6e44, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4b6d90, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate(XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate(XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11601};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
