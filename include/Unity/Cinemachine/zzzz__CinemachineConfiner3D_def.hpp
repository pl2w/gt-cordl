#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner3D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineConfiner3D)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineConfiner3D_VcamExtraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineConfiner3D;
}
namespace Unity::Cinemachine {
class CinemachineConfiner3D_VcamExtraState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineConfiner3D*);
MARK_REF_T(::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineConfiner3D*, "Unity.Cinemachine", "CinemachineConfiner3D");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState*, "Unity.Cinemachine", "CinemachineConfiner3D/VcamExtraState");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Confiner 3D")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineConfiner3D.html")]
// Dependencies Unity.Cinemachine.CinemachineExtension
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineConfiner3D
class CORDL_TYPE CinemachineConfiner3D : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using VcamExtraState = ::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState;

/// @brief Field BoundingVolume, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BoundingVolume, put=__cordl_internal_set_BoundingVolume)) ::UnityW<::UnityEngine::Collider>  BoundingVolume;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field SlowingDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_SlowingDistance, put=__cordl_internal_set_SlowingDistance)) float_t  SlowingDistance;

/// @brief Method CameraWasDisplaced, addr 0xae8b5b4, size 0x18, virtual false, abstract: false, final false
inline bool CameraWasDisplaced(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method ConfinePoint, addr 0xae8bb14, size 0x11c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ConfinePoint(::UnityEngine::Vector3  p) ;

/// @brief Method GetCameraDisplacementDistance, addr 0xae8b5cc, size 0xc8, virtual false, abstract: false, final false
inline float_t GetCameraDisplacementDistance(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method GetDistanceFromEdge, addr 0xae8bc30, size 0xc4, virtual false, abstract: false, final false
inline float_t GetDistanceFromEdge(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  dirUnit, float_t  max) ;

/// @brief Method GetMaxDampTime, addr 0xae8b778, size 0x14, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

static inline ::Unity::Cinemachine::CinemachineConfiner3D* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xae8b78c, size 0xfc, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnValidate, addr 0xae8b6b8, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xae8b888, size 0x28c, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xae8b694, size 0x24, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_BoundingVolume() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_BoundingVolume() ;

constexpr float_t const& __cordl_internal_get_SlowingDistance() const;

constexpr float_t& __cordl_internal_get_SlowingDistance() ;

constexpr void __cordl_internal_set_BoundingVolume(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_SlowingDistance(float_t  value) ;

/// @brief Method .ctor, addr 0xae8bcf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0xae8b6d0, size 0xa8, virtual false, abstract: false, final false
inline bool get_IsValid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineConfiner3D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner3D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineConfiner3D(CinemachineConfiner3D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner3D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineConfiner3D(CinemachineConfiner3D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22155};

/// [Tooltip("The volume within which the camera is to be contained")]
/// @brief Field BoundingVolume, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___BoundingVolume;

/// [Tooltip("Size of the slow-down zone at the edge of the bounding volume.")]
/// @brief Field SlowingDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ___SlowingDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner3D, ___BoundingVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner3D, ___SlowingDistance) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineConfiner3D) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineConfiner3D/VcamExtraState
class CORDL_TYPE CinemachineConfiner3D_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field PreviousCameraPosition, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviousCameraPosition, put=__cordl_internal_set_PreviousCameraPosition)) ::UnityEngine::Vector3  PreviousCameraPosition;

/// @brief Field PreviousDisplacement, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviousDisplacement, put=__cordl_internal_set_PreviousDisplacement)) ::UnityEngine::Vector3  PreviousDisplacement;

static inline ::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviousCameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviousCameraPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviousDisplacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviousDisplacement() ;

constexpr void __cordl_internal_set_PreviousCameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PreviousDisplacement(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xae8bcfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineConfiner3D_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner3D_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineConfiner3D_VcamExtraState(CinemachineConfiner3D_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner3D_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineConfiner3D_VcamExtraState(CinemachineConfiner3D_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22154};

/// @brief Field PreviousDisplacement, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviousDisplacement;

/// @brief Field PreviousCameraPosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviousCameraPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState, ___PreviousDisplacement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState, ___PreviousCameraPosition) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
