#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineRotationComposer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineRotationComposer_FovCache_def.hpp"
#include "Unity/Cinemachine/zzzz__LookaheadSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__PositionPredictor_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineRotationComposer)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineRotationComposer_FovCache;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableComposition;
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
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineRotationComposer;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineRotationComposer*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineRotationComposer*, "Unity.Cinemachine", "CinemachineRotationComposer");
// [AddComponentMenu("Cinemachine/Procedural/Rotation Control/Cinemachine Rotation Composer")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)1)]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)2)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineRotationComposer.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachineRotationComposer::FovCache, Unity.Cinemachine.LookaheadSettings, Unity.Cinemachine.PositionPredictor, Unity.Cinemachine.ScreenComposerSettings, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineRotationComposer
class CORDL_TYPE CinemachineRotationComposer : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using FovCache = ::GlobalNamespace::CinemachineRotationComposer_FovCache;

 __declspec(property(get=get_CameraLooksAtTarget)) bool  CameraLooksAtTarget;

/// @brief Field CenterOnActivate, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_CenterOnActivate, put=__cordl_internal_set_CenterOnActivate)) bool  CenterOnActivate;

/// @brief Field Composition, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_Composition, put=__cordl_internal_set_Composition)) ::Unity::Cinemachine::ScreenComposerSettings  Composition;

/// @brief Field Damping, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) ::UnityEngine::Vector2  Damping;

 __declspec(property(get=get_GetEffectiveComposition)) ::Unity::Cinemachine::ScreenComposerSettings  GetEffectiveComposition;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field Lookahead, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_Lookahead, put=__cordl_internal_set_Lookahead)) ::Unity::Cinemachine::LookaheadSettings  Lookahead;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field TargetOffset, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_TargetOffset, put=__cordl_internal_set_TargetOffset)) ::UnityEngine::Vector3  TargetOffset;

 __declspec(property(get=get_TrackedPoint, put=set_TrackedPoint)) ::UnityEngine::Vector3  TrackedPoint;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition)) ::Unity::Cinemachine::ScreenComposerSettings  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_Composition;

/// @brief Field <TrackedPoint>k__BackingField, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get__TrackedPoint_k__BackingField, put=__cordl_internal_set__TrackedPoint_k__BackingField)) ::UnityEngine::Vector3  _TrackedPoint_k__BackingField;

/// @brief Field m_Cache, offset 0x108, size 0x60 
 __declspec(property(get=__cordl_internal_get_m_Cache, put=__cordl_internal_set_m_Cache)) ::GlobalNamespace::CinemachineRotationComposer_FovCache  m_Cache;

/// @brief Field m_CameraOrientationPrevFrame, offset 0xa4, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_CameraOrientationPrevFrame, put=__cordl_internal_set_m_CameraOrientationPrevFrame)) ::UnityEngine::Quaternion  m_CameraOrientationPrevFrame;

/// @brief Field m_CameraPosPrevFrame, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CameraPosPrevFrame, put=__cordl_internal_set_m_CameraPosPrevFrame)) ::UnityEngine::Vector3  m_CameraPosPrevFrame;

/// @brief Field m_CompositionLastFrame, offset 0xe0, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_CompositionLastFrame, put=__cordl_internal_set_m_CompositionLastFrame)) ::Unity::Cinemachine::ScreenComposerSettings  m_CompositionLastFrame;

/// @brief Field m_LookAtPrevFrame, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LookAtPrevFrame, put=__cordl_internal_set_m_LookAtPrevFrame)) ::UnityEngine::Vector3  m_LookAtPrevFrame;

/// @brief Field m_Predictor, offset 0xb4, size 0x2c 
 __declspec(property(get=__cordl_internal_get_m_Predictor, put=__cordl_internal_set_m_Predictor)) ::Unity::Cinemachine::PositionPredictor  m_Predictor;

/// @brief Field m_ScreenOffsetPrevFrame, offset 0x9c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScreenOffsetPrevFrame, put=__cordl_internal_set_m_ScreenOffsetPrevFrame)) ::UnityEngine::Vector2  m_ScreenOffsetPrevFrame;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*() noexcept;

/// @brief Method ClampVerticalBounds, addr 0xaea5d78, size 0xe4, virtual false, abstract: false, final false
static inline bool ClampVerticalBounds(::by_ref<::UnityEngine::Rect>  r, ::UnityEngine::Vector3  dir, ::UnityEngine::Vector3  up, float_t  fov) ;

/// @brief Method ForceCameraPosition, addr 0xaea4d78, size 0xf0, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetLookAtPointAndSetTrackedPoint, addr 0xaea4ac0, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLookAtPointAndSetTrackedPoint(::UnityEngine::Vector3  lookAt, ::UnityEngine::Vector3  up, float_t  deltaTime) ;

/// @brief Method GetMaxDampTime, addr 0xaea4e68, size 0x10, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method MutateCameraState, addr 0xaea4efc, size 0x8e0, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineRotationComposer* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xaea4c78, size 0x100, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnValidate, addr 0xaea49d4, size 0x20, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PrePipelineMutateCameraState, addr 0xaea4e78, size 0x84, virtual true, abstract: false, final false
inline void PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaea4940, size 0x94, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method RotateToScreenBounds, addr 0xaea5b2c, size 0x220, virtual false, abstract: false, final false
inline void RotateToScreenBounds(::by_ref<::Unity::Cinemachine::CameraState>  state, ::UnityEngine::Rect  screenRect, ::UnityEngine::Vector3  trackedPoint, ::by_ref<::UnityEngine::Quaternion>  rigOrientation, ::UnityEngine::Vector2  fov, float_t  deltaTime) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.get_Composition, addr 0xaea5e5c, size 0x18, virtual true, abstract: false, final true
inline ::Unity::Cinemachine::ScreenComposerSettings Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.set_Composition, addr 0xaea5e74, size 0x18, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value) ;

constexpr bool const& __cordl_internal_get_CenterOnActivate() const;

constexpr bool& __cordl_internal_get_CenterOnActivate() ;

constexpr ::Unity::Cinemachine::ScreenComposerSettings const& __cordl_internal_get_Composition() const;

constexpr ::Unity::Cinemachine::ScreenComposerSettings& __cordl_internal_get_Composition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_Damping() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_Damping() ;

constexpr ::Unity::Cinemachine::LookaheadSettings const& __cordl_internal_get_Lookahead() const;

constexpr ::Unity::Cinemachine::LookaheadSettings& __cordl_internal_get_Lookahead() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_TargetOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_TargetOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TrackedPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TrackedPoint_k__BackingField() ;

constexpr ::GlobalNamespace::CinemachineRotationComposer_FovCache const& __cordl_internal_get_m_Cache() const;

constexpr ::GlobalNamespace::CinemachineRotationComposer_FovCache& __cordl_internal_get_m_Cache() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_CameraOrientationPrevFrame() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_CameraOrientationPrevFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CameraPosPrevFrame() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CameraPosPrevFrame() ;

constexpr ::Unity::Cinemachine::ScreenComposerSettings const& __cordl_internal_get_m_CompositionLastFrame() const;

constexpr ::Unity::Cinemachine::ScreenComposerSettings& __cordl_internal_get_m_CompositionLastFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LookAtPrevFrame() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LookAtPrevFrame() ;

constexpr ::Unity::Cinemachine::PositionPredictor const& __cordl_internal_get_m_Predictor() const;

constexpr ::Unity::Cinemachine::PositionPredictor& __cordl_internal_get_m_Predictor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ScreenOffsetPrevFrame() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ScreenOffsetPrevFrame() ;

constexpr void __cordl_internal_set_CenterOnActivate(bool  value) ;

constexpr void __cordl_internal_set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value) ;

constexpr void __cordl_internal_set_Damping(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_Lookahead(::Unity::Cinemachine::LookaheadSettings  value) ;

constexpr void __cordl_internal_set_TargetOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Cache(::GlobalNamespace::CinemachineRotationComposer_FovCache  value) ;

constexpr void __cordl_internal_set_m_CameraOrientationPrevFrame(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_CameraPosPrevFrame(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_CompositionLastFrame(::Unity::Cinemachine::ScreenComposerSettings  value) ;

constexpr void __cordl_internal_set_m_LookAtPrevFrame(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Predictor(::Unity::Cinemachine::PositionPredictor  value) ;

constexpr void __cordl_internal_set_m_ScreenOffsetPrevFrame(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0xaea5e8c, size 0x118, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CameraLooksAtTarget, addr 0xaea4a8c, size 0x8, virtual true, abstract: false, final false
inline bool get_CameraLooksAtTarget() ;

/// @brief Method get_GetEffectiveComposition, addr 0xaea4aac, size 0x14, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ScreenComposerSettings get_GetEffectiveComposition() ;

/// @brief Method get_IsValid, addr 0xaea49f4, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaea4a84, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// [CompilerGenerated]
/// @brief Method get_TrackedPoint, addr 0xaea4a94, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TrackedPoint() ;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableComposition() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TrackedPoint, addr 0xaea4aa0, size 0xc, virtual false, abstract: false, final false
inline void set_TrackedPoint(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineRotationComposer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineRotationComposer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineRotationComposer(CinemachineRotationComposer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineRotationComposer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineRotationComposer(CinemachineRotationComposer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22241};

/// [Header("Composition")]
/// [HideFoldout]
/// @brief Field Composition, offset: 0x28, size: 0x28, def value: None
 ::Unity::Cinemachine::ScreenComposerSettings  ___Composition;

/// [Tooltip("Force target to center of screen when this camera activates.  If false, will clamp target to the edges of the dead zone")]
/// @brief Field CenterOnActivate, offset: 0x50, size: 0x1, def value: None
 bool  ___CenterOnActivate;

/// [Header("Target Tracking")]
/// [Tooltip("Target offset from the target object\'s center in target-local space. Use this to fine-tune the tracking target position when the desired area is not the tracked object\'s center.")]
/// [FormerlySerializedAs("TrackedObjectOffset")]
/// @brief Field TargetOffset, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___TargetOffset;

/// [Tooltip("How aggressively the camera tries to follow the target in the screen space. Small numbers are more responsive, rapidly orienting the camera to keep the target in the dead zone. Larger numbers give a more heavy slowly responding camera. Using different vertical and horizontal settings can yield a wide range of camera behaviors.")]
/// @brief Field Damping, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___Damping;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field Lookahead, offset: 0x68, size: 0x10, def value: None
 ::Unity::Cinemachine::LookaheadSettings  ___Lookahead;

/// [CompilerGenerated]
/// @brief Field <TrackedPoint>k__BackingField, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TrackedPoint_k__BackingField;

/// @brief Field m_CameraPosPrevFrame, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CameraPosPrevFrame;

/// @brief Field m_LookAtPrevFrame, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LookAtPrevFrame;

/// @brief Field m_ScreenOffsetPrevFrame, offset: 0x9c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_ScreenOffsetPrevFrame;

/// @brief Field m_CameraOrientationPrevFrame, offset: 0xa4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_CameraOrientationPrevFrame;

/// @brief Field m_Predictor, offset: 0xb4, size: 0x2c, def value: None
 ::Unity::Cinemachine::PositionPredictor  ___m_Predictor;

/// @brief Field m_CompositionLastFrame, offset: 0xe0, size: 0x28, def value: None
 ::Unity::Cinemachine::ScreenComposerSettings  ___m_CompositionLastFrame;

/// @brief Field m_Cache, offset: 0x108, size: 0x60, def value: None
 ::GlobalNamespace::CinemachineRotationComposer_FovCache  ___m_Cache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___Composition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___CenterOnActivate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___TargetOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___Damping) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___Lookahead) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ____TrackedPoint_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___m_CameraPosPrevFrame) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___m_LookAtPrevFrame) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___m_ScreenOffsetPrevFrame) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___m_CameraOrientationPrevFrame) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___m_Predictor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___m_CompositionLastFrame) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineRotationComposer, ___m_Cache) == 0x108, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineRotationComposer) == 0x168, "Size mismatch!");

} // namespace end def Unity::Cinemachine
