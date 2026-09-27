#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePositionComposer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__LookaheadSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__PositionPredictor_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachinePositionComposer)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableComposition;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableDistance;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiablePositionDamping;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
struct ScreenComposerSettings;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachinePositionComposer;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachinePositionComposer*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachinePositionComposer*, "Unity.Cinemachine", "CinemachinePositionComposer");
// [AddComponentMenu("Cinemachine/Procedural/Position Control/Cinemachine Position Composer")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)1)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachinePositionComposer.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.LookaheadSettings, Unity.Cinemachine.PositionPredictor, Unity.Cinemachine.ScreenComposerSettings, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachinePositionComposer
class CORDL_TYPE CinemachinePositionComposer : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
 __declspec(property(get=get_BodyAppliesAfterAim)) bool  BodyAppliesAfterAim;

/// @brief Field CameraDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraDistance, put=__cordl_internal_set_CameraDistance)) float_t  CameraDistance;

/// @brief Field CenterOnActivate, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_CenterOnActivate, put=__cordl_internal_set_CenterOnActivate)) bool  CenterOnActivate;

/// @brief Field Composition, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_Composition, put=__cordl_internal_set_Composition)) ::Unity::Cinemachine::ScreenComposerSettings  Composition;

/// @brief Field Damping, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) ::UnityEngine::Vector3  Damping;

/// @brief Field DeadZoneDepth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DeadZoneDepth, put=__cordl_internal_set_DeadZoneDepth)) float_t  DeadZoneDepth;

 __declspec(property(get=get_GetEffectiveComposition)) ::Unity::Cinemachine::ScreenComposerSettings  GetEffectiveComposition;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field Lookahead, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_Lookahead, put=__cordl_internal_set_Lookahead)) ::Unity::Cinemachine::LookaheadSettings  Lookahead;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field TargetOffset, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_TargetOffset, put=__cordl_internal_set_TargetOffset)) ::UnityEngine::Vector3  TargetOffset;

 __declspec(property(get=get_TrackedPoint, put=set_TrackedPoint)) ::UnityEngine::Vector3  TrackedPoint;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition)) ::Unity::Cinemachine::ScreenComposerSettings  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_Composition;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance)) float_t  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_Distance;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping)) ::UnityEngine::Vector3  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_PositionDamping;

/// @brief Field <TrackedPoint>k__BackingField, offset 0xfc, size 0xc 
 __declspec(property(get=__cordl_internal_get__TrackedPoint_k__BackingField, put=__cordl_internal_set__TrackedPoint_k__BackingField)) ::UnityEngine::Vector3  _TrackedPoint_k__BackingField;

/// @brief Field m_InheritingPosition, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InheritingPosition, put=__cordl_internal_set_m_InheritingPosition)) bool  m_InheritingPosition;

/// @brief Field m_Predictor, offset 0x84, size 0x2c 
 __declspec(property(get=__cordl_internal_get_m_Predictor, put=__cordl_internal_set_m_Predictor)) ::Unity::Cinemachine::PositionPredictor  m_Predictor;

/// @brief Field m_PreviousCameraPosition, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousCameraPosition, put=__cordl_internal_set_m_PreviousCameraPosition)) ::UnityEngine::Vector3  m_PreviousCameraPosition;

/// @brief Field m_PreviousComposition, offset 0xcc, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_PreviousComposition, put=__cordl_internal_set_m_PreviousComposition)) ::Unity::Cinemachine::ScreenComposerSettings  m_PreviousComposition;

/// @brief Field m_PreviousDesiredDistance, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousDesiredDistance, put=__cordl_internal_set_m_PreviousDesiredDistance)) float_t  m_PreviousDesiredDistance;

/// @brief Field m_PreviousRotation, offset 0xbc, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PreviousRotation, put=__cordl_internal_set_m_PreviousRotation)) ::UnityEngine::Quaternion  m_PreviousRotation;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*() noexcept;

/// @brief Method ForceCameraPosition, addr 0xaea37fc, size 0xf0, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetMaxDampTime, addr 0xaea38ec, size 0x1c, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method MutateCameraState, addr 0xaea3bb4, size 0xab0, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachinePositionComposer* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xaea3700, size 0xfc, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransitionFromCamera, addr 0xaea3908, size 0x1b8, virtual true, abstract: false, final false
inline bool OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xaea35ac, size 0x4c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OrthoOffsetToScreenBounds, addr 0xaea3b14, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 OrthoOffsetToScreenBounds(::UnityEngine::Vector3  targetPos2D, ::UnityEngine::Rect  screenRect) ;

/// @brief Method Reset, addr 0xaea34dc, size 0xd0, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ScreenToOrtho, addr 0xaea3ac0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Rect ScreenToOrtho(::UnityEngine::Rect  rScreen, float_t  orthoSize, float_t  aspect) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.get_Composition, addr 0xaea35f8, size 0x14, virtual true, abstract: false, final true
inline ::Unity::Cinemachine::ScreenComposerSettings Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.set_Composition, addr 0xaea360c, size 0x14, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance, addr 0xaea3638, size 0x8, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance, addr 0xaea3640, size 0x8, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance(float_t  value) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping, addr 0xaea3620, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping, addr 0xaea362c, size 0xc, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping(::UnityEngine::Vector3  value) ;

constexpr float_t const& __cordl_internal_get_CameraDistance() const;

constexpr float_t& __cordl_internal_get_CameraDistance() ;

constexpr bool const& __cordl_internal_get_CenterOnActivate() const;

constexpr bool& __cordl_internal_get_CenterOnActivate() ;

constexpr ::Unity::Cinemachine::ScreenComposerSettings const& __cordl_internal_get_Composition() const;

constexpr ::Unity::Cinemachine::ScreenComposerSettings& __cordl_internal_get_Composition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Damping() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Damping() ;

constexpr float_t const& __cordl_internal_get_DeadZoneDepth() const;

constexpr float_t& __cordl_internal_get_DeadZoneDepth() ;

constexpr ::Unity::Cinemachine::LookaheadSettings const& __cordl_internal_get_Lookahead() const;

constexpr ::Unity::Cinemachine::LookaheadSettings& __cordl_internal_get_Lookahead() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_TargetOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_TargetOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TrackedPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TrackedPoint_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_InheritingPosition() const;

constexpr bool& __cordl_internal_get_m_InheritingPosition() ;

constexpr ::Unity::Cinemachine::PositionPredictor const& __cordl_internal_get_m_Predictor() const;

constexpr ::Unity::Cinemachine::PositionPredictor& __cordl_internal_get_m_Predictor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousCameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousCameraPosition() ;

constexpr ::Unity::Cinemachine::ScreenComposerSettings const& __cordl_internal_get_m_PreviousComposition() const;

constexpr ::Unity::Cinemachine::ScreenComposerSettings& __cordl_internal_get_m_PreviousComposition() ;

constexpr float_t const& __cordl_internal_get_m_PreviousDesiredDistance() const;

constexpr float_t& __cordl_internal_get_m_PreviousDesiredDistance() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_PreviousRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_PreviousRotation() ;

constexpr void __cordl_internal_set_CameraDistance(float_t  value) ;

constexpr void __cordl_internal_set_CenterOnActivate(bool  value) ;

constexpr void __cordl_internal_set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value) ;

constexpr void __cordl_internal_set_Damping(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_DeadZoneDepth(float_t  value) ;

constexpr void __cordl_internal_set_Lookahead(::Unity::Cinemachine::LookaheadSettings  value) ;

constexpr void __cordl_internal_set_TargetOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InheritingPosition(bool  value) ;

constexpr void __cordl_internal_set_m_Predictor(::Unity::Cinemachine::PositionPredictor  value) ;

constexpr void __cordl_internal_set_m_PreviousCameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PreviousComposition(::Unity::Cinemachine::ScreenComposerSettings  value) ;

constexpr void __cordl_internal_set_m_PreviousDesiredDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_PreviousRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0xaea4664, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BodyAppliesAfterAim, addr 0xaea36e0, size 0x8, virtual true, abstract: false, final false
inline bool get_BodyAppliesAfterAim() ;

/// @brief Method get_GetEffectiveComposition, addr 0xaea34c4, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ScreenComposerSettings get_GetEffectiveComposition() ;

/// @brief Method get_IsValid, addr 0xaea3648, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaea36d8, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// [CompilerGenerated]
/// @brief Method get_TrackedPoint, addr 0xaea36e8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TrackedPoint() ;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableComposition() noexcept;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableDistance() noexcept;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiablePositionDamping() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TrackedPoint, addr 0xaea36f4, size 0xc, virtual false, abstract: false, final false
inline void set_TrackedPoint(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePositionComposer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePositionComposer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachinePositionComposer(CinemachinePositionComposer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePositionComposer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachinePositionComposer(CinemachinePositionComposer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22238};

/// @brief Field kMinimumCameraDistance offset 0xffffffff size 0x4
static constexpr float_t  kMinimumCameraDistance{static_cast<float_t>(0.01f)};

/// [Header("Camera Position")]
/// [Tooltip("The distance along the camera axis that will be maintained from the target")]
/// @brief Field CameraDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___CameraDistance;

/// [Tooltip("The camera will not move along its z-axis if the target is within this distance of the specified camera distance")]
/// @brief Field DeadZoneDepth, offset: 0x2c, size: 0x4, def value: None
 float_t  ___DeadZoneDepth;

/// [Header("Composition")]
/// [HideFoldout]
/// @brief Field Composition, offset: 0x30, size: 0x28, def value: None
 ::Unity::Cinemachine::ScreenComposerSettings  ___Composition;

/// [Tooltip("Force target to center of screen when this camera activates.  If false, will clamp target to the edges of the dead zone")]
/// @brief Field CenterOnActivate, offset: 0x58, size: 0x1, def value: None
 bool  ___CenterOnActivate;

/// [Header("Target Tracking")]
/// [Tooltip("Offset from the target object (in target-local co-ordinates).  The camera will attempt to frame the point which is the target\'s position plus this offset.  Use it to correct for cases when the target\'s origin is not the point of interest for the camera.")]
/// [FormerlySerializedAs("TrackedObjectOffset")]
/// @brief Field TargetOffset, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___TargetOffset;

/// [Tooltip("How aggressively the camera tries to follow the target in the screen space. Small numbers are more responsive, rapidly orienting the camera to keep the target in the dead zone. Larger numbers give a more heavy slowly responding camera. Using different vertical and horizontal settings can yield a wide range of camera behaviors.")]
/// @brief Field Damping, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Damping;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field Lookahead, offset: 0x74, size: 0x10, def value: None
 ::Unity::Cinemachine::LookaheadSettings  ___Lookahead;

/// @brief Field m_Predictor, offset: 0x84, size: 0x2c, def value: None
 ::Unity::Cinemachine::PositionPredictor  ___m_Predictor;

/// @brief Field m_PreviousCameraPosition, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousCameraPosition;

/// @brief Field m_PreviousRotation, offset: 0xbc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_PreviousRotation;

/// @brief Field m_PreviousComposition, offset: 0xcc, size: 0x28, def value: None
 ::Unity::Cinemachine::ScreenComposerSettings  ___m_PreviousComposition;

/// @brief Field m_PreviousDesiredDistance, offset: 0xf4, size: 0x4, def value: None
 float_t  ___m_PreviousDesiredDistance;

/// @brief Field m_InheritingPosition, offset: 0xf8, size: 0x1, def value: None
 bool  ___m_InheritingPosition;

/// [CompilerGenerated]
/// @brief Field <TrackedPoint>k__BackingField, offset: 0xfc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TrackedPoint_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___CameraDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___DeadZoneDepth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___Composition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___CenterOnActivate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___TargetOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___Damping) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___Lookahead) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___m_Predictor) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___m_PreviousCameraPosition) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___m_PreviousRotation) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___m_PreviousComposition) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___m_PreviousDesiredDistance) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ___m_InheritingPosition) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePositionComposer, ____TrackedPoint_k__BackingField) == 0xfc, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachinePositionComposer) == 0x108, "Size mismatch!");

} // namespace end def Unity::Cinemachine
