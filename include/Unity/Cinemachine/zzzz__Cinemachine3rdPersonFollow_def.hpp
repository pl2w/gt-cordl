#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Cinemachine3rdPersonFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Cinemachine3rdPersonFollow)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
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
namespace Unity::Cinemachine {
class CinemachineThirdPersonFollow;
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
class Cinemachine3rdPersonFollow;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Cinemachine3rdPersonFollow*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Cinemachine3rdPersonFollow*, "Unity.Cinemachine", "Cinemachine3rdPersonFollow");
// [Obsolete("Cinemachine3rdPersonFollow has been deprecated. Use CinemachineThirdPersonFollow instead")]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)1)]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/Cinemachine3rdPersonFollow.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, UnityEngine.LayerMask, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Cinemachine3rdPersonFollow
class CORDL_TYPE Cinemachine3rdPersonFollow : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
/// @brief Field CameraCollisionFilter, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraCollisionFilter, put=__cordl_internal_set_CameraCollisionFilter)) ::UnityEngine::LayerMask  CameraCollisionFilter;

/// @brief Field CameraDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraDistance, put=__cordl_internal_set_CameraDistance)) float_t  CameraDistance;

/// @brief Field CameraRadius, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraRadius, put=__cordl_internal_set_CameraRadius)) float_t  CameraRadius;

/// @brief Field CameraSide, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraSide, put=__cordl_internal_set_CameraSide)) float_t  CameraSide;

/// @brief Field Damping, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) ::UnityEngine::Vector3  Damping;

/// @brief Field DampingFromCollision, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_DampingFromCollision, put=__cordl_internal_set_DampingFromCollision)) float_t  DampingFromCollision;

/// @brief Field DampingIntoCollision, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DampingIntoCollision, put=__cordl_internal_set_DampingIntoCollision)) float_t  DampingIntoCollision;

/// @brief Field IgnoreTag, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_IgnoreTag, put=__cordl_internal_set_IgnoreTag)) ::StringW  IgnoreTag;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field ShoulderOffset, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_ShoulderOffset, put=__cordl_internal_set_ShoulderOffset)) ::UnityEngine::Vector3  ShoulderOffset;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance)) float_t  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_Distance;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping)) ::UnityEngine::Vector3  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_PositionDamping;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)) float_t  Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_NormalizedModifierValue;

/// @brief Field VerticalArmLength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_VerticalArmLength, put=__cordl_internal_set_VerticalArmLength)) float_t  VerticalArmLength;

/// @brief Field m_CamPosCollisionCorrection, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CamPosCollisionCorrection, put=__cordl_internal_set_m_CamPosCollisionCorrection)) float_t  m_CamPosCollisionCorrection;

/// @brief Field m_DampingCorrection, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_DampingCorrection, put=__cordl_internal_set_m_DampingCorrection)) ::UnityEngine::Vector3  m_DampingCorrection;

/// @brief Field m_PreviousFollowTargetPosition, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousFollowTargetPosition, put=__cordl_internal_set_m_PreviousFollowTargetPosition)) ::UnityEngine::Vector3  m_PreviousFollowTargetPosition;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept;

/// @brief Method GetHeading, addr 0xaec41bc, size 0x1b4, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetHeading(::UnityEngine::Quaternion  targetRot, ::UnityEngine::Vector3  up) ;

/// @brief Method GetMaxDampTime, addr 0xaec3d14, size 0x30, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method GetRawRigPositions, addr 0xaec4370, size 0xf8, virtual false, abstract: false, final false
inline void GetRawRigPositions(::UnityEngine::Vector3  root, ::UnityEngine::Quaternion  targetRot, ::UnityEngine::Quaternion  heading, ::by_ref<::UnityEngine::Vector3>  shoulder, ::by_ref<::UnityEngine::Vector3>  hand) ;

/// @brief Method GetRigPositions, addr 0xaec47b0, size 0x138, virtual false, abstract: false, final false
inline void GetRigPositions(::by_ref<::UnityEngine::Vector3>  root, ::by_ref<::UnityEngine::Vector3>  shoulder, ::by_ref<::UnityEngine::Vector3>  hand) ;

/// @brief Method MutateCameraState, addr 0xaec3d44, size 0x84, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::Cinemachine3rdPersonFollow* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xaec40e8, size 0xd4, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnValidate, addr 0xaec3a08, size 0x74, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PositionCamera, addr 0xaec3dc8, size 0x320, virtual false, abstract: false, final false
inline void PositionCamera(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaec3a7c, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResolveCollisions, addr 0xaec4468, size 0x348, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ResolveCollisions(::UnityEngine::Vector3  root, ::UnityEngine::Vector3  tip, float_t  deltaTime, float_t  cameraRadius, ::by_ref<float_t>  collisionCorrection) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance, addr 0xaec3c6c, size 0x8, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance, addr 0xaec3c74, size 0x8, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance(float_t  value) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping, addr 0xaec3c54, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping, addr 0xaec3c60, size 0xc, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping(::UnityEngine::Vector3  value) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue, addr 0xaec3ad4, size 0x180, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue() ;

/// @brief Method UpgradeToCm3, addr 0xaec48e8, size 0xb0, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineThirdPersonFollow*  c) ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_CameraCollisionFilter() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_CameraCollisionFilter() ;

constexpr float_t const& __cordl_internal_get_CameraDistance() const;

constexpr float_t& __cordl_internal_get_CameraDistance() ;

constexpr float_t const& __cordl_internal_get_CameraRadius() const;

constexpr float_t& __cordl_internal_get_CameraRadius() ;

constexpr float_t const& __cordl_internal_get_CameraSide() const;

constexpr float_t& __cordl_internal_get_CameraSide() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Damping() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Damping() ;

constexpr float_t const& __cordl_internal_get_DampingFromCollision() const;

constexpr float_t& __cordl_internal_get_DampingFromCollision() ;

constexpr float_t const& __cordl_internal_get_DampingIntoCollision() const;

constexpr float_t& __cordl_internal_get_DampingIntoCollision() ;

constexpr ::StringW const& __cordl_internal_get_IgnoreTag() const;

constexpr ::StringW& __cordl_internal_get_IgnoreTag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ShoulderOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ShoulderOffset() ;

constexpr float_t const& __cordl_internal_get_VerticalArmLength() const;

constexpr float_t& __cordl_internal_get_VerticalArmLength() ;

constexpr float_t const& __cordl_internal_get_m_CamPosCollisionCorrection() const;

constexpr float_t& __cordl_internal_get_m_CamPosCollisionCorrection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_DampingCorrection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_DampingCorrection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousFollowTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousFollowTargetPosition() ;

constexpr void __cordl_internal_set_CameraCollisionFilter(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_CameraDistance(float_t  value) ;

constexpr void __cordl_internal_set_CameraRadius(float_t  value) ;

constexpr void __cordl_internal_set_CameraSide(float_t  value) ;

constexpr void __cordl_internal_set_Damping(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_DampingFromCollision(float_t  value) ;

constexpr void __cordl_internal_set_DampingIntoCollision(float_t  value) ;

constexpr void __cordl_internal_set_IgnoreTag(::StringW  value) ;

constexpr void __cordl_internal_set_ShoulderOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_VerticalArmLength(float_t  value) ;

constexpr void __cordl_internal_set_m_CamPosCollisionCorrection(float_t  value) ;

constexpr void __cordl_internal_set_m_DampingCorrection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PreviousFollowTargetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xaec4998, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0xaec3c7c, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaec3d0c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableDistance() noexcept;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiablePositionDamping() noexcept;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cinemachine3rdPersonFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cinemachine3rdPersonFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Cinemachine3rdPersonFollow(Cinemachine3rdPersonFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cinemachine3rdPersonFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cinemachine3rdPersonFollow(Cinemachine3rdPersonFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22390};

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

/// [Header("Obstacles")]
/// [Tooltip("Camera will avoid obstacles on these layers")]
/// @brief Field CameraCollisionFilter, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___CameraCollisionFilter;

/// [TagField]
/// [Tooltip("Obstacles with this tag will be ignored.  It is a good idea to set this field to the target\'s tag")]
/// @brief Field IgnoreTag, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___IgnoreTag;

/// [Tooltip("Specifies how close the camera can get to obstacles")]
/// [Range(0, 1)]
/// @brief Field CameraRadius, offset: 0x58, size: 0x4, def value: None
 float_t  ___CameraRadius;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera moves to correct for occlusions.  Higher numbers will move the camera more gradually.")]
/// @brief Field DampingIntoCollision, offset: 0x5c, size: 0x4, def value: None
 float_t  ___DampingIntoCollision;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera returns to its normal position after having been corrected by the built-in collision resolution system.  Higher numbers will move the camera more gradually back to normal.")]
/// @brief Field DampingFromCollision, offset: 0x60, size: 0x4, def value: None
 float_t  ___DampingFromCollision;

/// @brief Field m_PreviousFollowTargetPosition, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousFollowTargetPosition;

/// @brief Field m_DampingCorrection, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_DampingCorrection;

/// @brief Field m_CamPosCollisionCorrection, offset: 0x7c, size: 0x4, def value: None
 float_t  ___m_CamPosCollisionCorrection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___Damping) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___ShoulderOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___VerticalArmLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___CameraSide) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___CameraDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___CameraCollisionFilter) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___IgnoreTag) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___CameraRadius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___DampingIntoCollision) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___DampingFromCollision) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___m_PreviousFollowTargetPosition) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___m_DampingCorrection) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Cinemachine3rdPersonFollow, ___m_CamPosCollisionCorrection) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::Cinemachine3rdPersonFollow) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
