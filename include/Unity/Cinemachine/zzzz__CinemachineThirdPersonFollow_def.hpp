#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineThirdPersonFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineThirdPersonFollow_ObstacleSettings_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineThirdPersonFollow)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineThirdPersonFollow_ObstacleSettings;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableDistance;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiablePositionDamping;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifierValueSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineThirdPersonFollow;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineThirdPersonFollow*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineThirdPersonFollow*, "Unity.Cinemachine", "CinemachineThirdPersonFollow");
// [AddComponentMenu("Cinemachine/Procedural/Position Control/Cinemachine Third Person Follow")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineThirdPersonFollow.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachineThirdPersonFollow::ObstacleSettings, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineThirdPersonFollow
class CORDL_TYPE CinemachineThirdPersonFollow : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using ObstacleSettings = ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings;

/// @brief Field AvoidObstacles, offset 0x50, size 0x20 
 __declspec(property(get=__cordl_internal_get_AvoidObstacles, put=__cordl_internal_set_AvoidObstacles)) ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings  AvoidObstacles;

/// @brief Field CameraDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraDistance, put=__cordl_internal_set_CameraDistance)) float_t  CameraDistance;

/// @brief Field CameraSide, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraSide, put=__cordl_internal_set_CameraSide)) float_t  CameraSide;

 __declspec(property(get=get_CurrentObstacle, put=set_CurrentObstacle)) ::UnityW<::UnityEngine::Collider>  CurrentObstacle;

/// @brief Field Damping, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) ::UnityEngine::Vector3  Damping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field ShoulderOffset, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_ShoulderOffset, put=__cordl_internal_set_ShoulderOffset)) ::UnityEngine::Vector3  ShoulderOffset;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance)) float_t  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_Distance;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping)) ::UnityEngine::Vector3  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_PositionDamping;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)) float_t  Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_NormalizedModifierValue;

/// @brief Field VerticalArmLength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_VerticalArmLength, put=__cordl_internal_set_VerticalArmLength)) float_t  VerticalArmLength;

/// @brief Field <CurrentObstacle>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentObstacle_k__BackingField, put=__cordl_internal_set__CurrentObstacle_k__BackingField)) ::UnityW<::UnityEngine::Collider>  _CurrentObstacle_k__BackingField;

/// @brief Field m_CamPosCollisionCorrection, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CamPosCollisionCorrection, put=__cordl_internal_set_m_CamPosCollisionCorrection)) float_t  m_CamPosCollisionCorrection;

/// @brief Field m_DampingCorrection, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_DampingCorrection, put=__cordl_internal_set_m_DampingCorrection)) ::UnityEngine::Vector3  m_DampingCorrection;

/// @brief Field m_PreviousFollowTargetPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousFollowTargetPosition, put=__cordl_internal_set_m_PreviousFollowTargetPosition)) ::UnityEngine::Vector3  m_PreviousFollowTargetPosition;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept;

/// @brief Method GetHeading, addr 0xaea7da4, size 0x19c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetHeading(::UnityEngine::Quaternion  targetRot, ::UnityEngine::Vector3  up) ;

/// @brief Method GetMaxDampTime, addr 0xaea7834, size 0x40, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method GetRawRigPositions, addr 0xaea7f40, size 0xf8, virtual false, abstract: false, final false
inline void GetRawRigPositions(::UnityEngine::Vector3  root, ::UnityEngine::Quaternion  targetRot, ::UnityEngine::Quaternion  heading, ::by_ref<::UnityEngine::Vector3>  shoulder, ::by_ref<::UnityEngine::Vector3>  hand) ;

/// @brief Method GetRigPositions, addr 0xaea83a8, size 0x140, virtual false, abstract: false, final false
inline void GetRigPositions(::by_ref<::UnityEngine::Vector3>  root, ::by_ref<::UnityEngine::Vector3>  shoulder, ::by_ref<::UnityEngine::Vector3>  hand) ;

/// @brief Method MutateCameraState, addr 0xaea7874, size 0x84, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineThirdPersonFollow* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xaea7cd0, size 0xd4, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnValidate, addr 0xaea74c0, size 0x74, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PositionCamera, addr 0xaea78f8, size 0x3d8, virtual false, abstract: false, final false
inline void PositionCamera(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaea7534, size 0x50, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResolveCollisions, addr 0xaea8038, size 0x370, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ResolveCollisions(::UnityEngine::Vector3  root, ::UnityEngine::Vector3  tip, float_t  deltaTime, float_t  cameraRadius, ::by_ref<float_t>  collisionCorrection) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance, addr 0xaea778c, size 0x8, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance, addr 0xaea7794, size 0x8, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance(float_t  value) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping, addr 0xaea7774, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping, addr 0xaea7780, size 0xc, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping(::UnityEngine::Vector3  value) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue, addr 0xaea75f4, size 0x180, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue() ;

constexpr ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings const& __cordl_internal_get_AvoidObstacles() const;

constexpr ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings& __cordl_internal_get_AvoidObstacles() ;

constexpr float_t const& __cordl_internal_get_CameraDistance() const;

constexpr float_t& __cordl_internal_get_CameraDistance() ;

constexpr float_t const& __cordl_internal_get_CameraSide() const;

constexpr float_t& __cordl_internal_get_CameraSide() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Damping() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Damping() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ShoulderOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ShoulderOffset() ;

constexpr float_t const& __cordl_internal_get_VerticalArmLength() const;

constexpr float_t& __cordl_internal_get_VerticalArmLength() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__CurrentObstacle_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__CurrentObstacle_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_CamPosCollisionCorrection() const;

constexpr float_t& __cordl_internal_get_m_CamPosCollisionCorrection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_DampingCorrection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_DampingCorrection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousFollowTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousFollowTargetPosition() ;

constexpr void __cordl_internal_set_AvoidObstacles(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings  value) ;

constexpr void __cordl_internal_set_CameraDistance(float_t  value) ;

constexpr void __cordl_internal_set_CameraSide(float_t  value) ;

constexpr void __cordl_internal_set_Damping(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ShoulderOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_VerticalArmLength(float_t  value) ;

constexpr void __cordl_internal_set__CurrentObstacle_k__BackingField(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_m_CamPosCollisionCorrection(float_t  value) ;

constexpr void __cordl_internal_set_m_DampingCorrection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PreviousFollowTargetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xaea84e8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentObstacle, addr 0xaea74b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_CurrentObstacle() ;

/// @brief Method get_IsValid, addr 0xaea779c, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaea782c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableDistance() noexcept;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiablePositionDamping() noexcept;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CurrentObstacle, addr 0xaea74b8, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentObstacle(::UnityEngine::Collider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineThirdPersonFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineThirdPersonFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineThirdPersonFollow(CinemachineThirdPersonFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineThirdPersonFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineThirdPersonFollow(CinemachineThirdPersonFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22249};

/// [Tooltip("How responsively the camera tracks the target.  Each axis (camera-local) can have its own setting.  Value is the approximate time it takes the camera to catch up to the target\'s new position.  Smaller values give a more rigid effect, larger values give a squishier one")]
/// @brief Field Damping, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Damping;

/// [Header("Rig")]
/// [Tooltip("Position of the shoulder pivot relative to the Follow target origin.  This offset is in target-local space")]
/// @brief Field ShoulderOffset, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ShoulderOffset;

/// [Tooltip("Vertical offset of the hand in relation to the shoulder.  Arm length will affect the follow target\'s screen position when the camera rotates vertically")]
/// @brief Field VerticalArmLength, offset: 0x40, size: 0x4, def value: None
 float_t  ___VerticalArmLength;

/// [Tooltip("Specifies which shoulder (left, right, or in-between) the camera is on")]
/// [Range(0, 1)]
/// @brief Field CameraSide, offset: 0x44, size: 0x4, def value: None
 float_t  ___CameraSide;

/// [Tooltip("How far behind the hand the camera will be placed")]
/// @brief Field CameraDistance, offset: 0x48, size: 0x4, def value: None
 float_t  ___CameraDistance;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field AvoidObstacles, offset: 0x50, size: 0x20, def value: None
 ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings  ___AvoidObstacles;

/// [CompilerGenerated]
/// @brief Field <CurrentObstacle>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____CurrentObstacle_k__BackingField;

/// @brief Field m_PreviousFollowTargetPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousFollowTargetPosition;

/// @brief Field m_DampingCorrection, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_DampingCorrection;

/// @brief Field m_CamPosCollisionCorrection, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_CamPosCollisionCorrection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ___Damping) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ___ShoulderOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ___VerticalArmLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ___CameraSide) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ___CameraDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ___AvoidObstacles) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ____CurrentObstacle_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ___m_PreviousFollowTargetPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ___m_DampingCorrection) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonFollow, ___m_CamPosCollisionCorrection) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineThirdPersonFollow) == 0x98, "Size mismatch!");

} // namespace end def Unity::Cinemachine
