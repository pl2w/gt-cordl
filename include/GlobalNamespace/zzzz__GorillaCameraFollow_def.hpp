#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCameraFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaCameraFollow)
namespace Unity::Cinemachine {
class Cinemachine3rdPersonFollow;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCamera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaCameraFollow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaCameraFollow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaCameraFollow*, "", "GorillaCameraFollow");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaCameraFollow
class CORDL_TYPE GorillaCameraFollow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field baseCameraRadius, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseCameraRadius, put=__cordl_internal_set_baseCameraRadius)) float_t  baseCameraRadius;

/// @brief Field baseFollowDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseFollowDistance, put=__cordl_internal_set_baseFollowDistance)) float_t  baseFollowDistance;

/// @brief Field baseShoulderOffset, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_baseShoulderOffset, put=__cordl_internal_set_baseShoulderOffset)) ::UnityEngine::Vector3  baseShoulderOffset;

/// @brief Field baseVerticalArmLength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseVerticalArmLength, put=__cordl_internal_set_baseVerticalArmLength)) float_t  baseVerticalArmLength;

/// @brief Field cameraParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraParent, put=__cordl_internal_set_cameraParent)) ::UnityW<::UnityEngine::GameObject>  cameraParent;

/// @brief Field cinemachineCamera, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cinemachineCamera, put=__cordl_internal_set_cinemachineCamera)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>  cinemachineCamera;

/// @brief Field cinemachineFollow, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cinemachineFollow, put=__cordl_internal_set_cinemachineFollow)) ::UnityW<::Unity::Cinemachine::Cinemachine3rdPersonFollow>  cinemachineFollow;

/// @brief Field eulerRotationOffset, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_eulerRotationOffset, put=__cordl_internal_set_eulerRotationOffset)) ::UnityEngine::Vector3  eulerRotationOffset;

/// @brief Field headOffset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_headOffset, put=__cordl_internal_set_headOffset)) ::UnityEngine::Vector3  headOffset;

/// @brief Field playerHead, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerHead, put=__cordl_internal_set_playerHead)) ::UnityW<::UnityEngine::Transform>  playerHead;

/// @brief Method LateUpdate, addr 0x579d4a0, size 0x118, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaCameraFollow* New_ctor() ;

/// @brief Method Start, addr 0x579d388, size 0x118, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_baseCameraRadius() const;

constexpr float_t& __cordl_internal_get_baseCameraRadius() ;

constexpr float_t const& __cordl_internal_get_baseFollowDistance() const;

constexpr float_t& __cordl_internal_get_baseFollowDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_baseShoulderOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_baseShoulderOffset() ;

constexpr float_t const& __cordl_internal_get_baseVerticalArmLength() const;

constexpr float_t& __cordl_internal_get_baseVerticalArmLength() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cameraParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cameraParent() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> const& __cordl_internal_get_cinemachineCamera() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>& __cordl_internal_get_cinemachineCamera() ;

constexpr ::UnityW<::Unity::Cinemachine::Cinemachine3rdPersonFollow> const& __cordl_internal_get_cinemachineFollow() const;

constexpr ::UnityW<::Unity::Cinemachine::Cinemachine3rdPersonFollow>& __cordl_internal_get_cinemachineFollow() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_eulerRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_eulerRotationOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_playerHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_playerHead() ;

constexpr void __cordl_internal_set_baseCameraRadius(float_t  value) ;

constexpr void __cordl_internal_set_baseFollowDistance(float_t  value) ;

constexpr void __cordl_internal_set_baseShoulderOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_baseVerticalArmLength(float_t  value) ;

constexpr void __cordl_internal_set_cameraParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_cinemachineCamera(::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>  value) ;

constexpr void __cordl_internal_set_cinemachineFollow(::UnityW<::Unity::Cinemachine::Cinemachine3rdPersonFollow>  value) ;

constexpr void __cordl_internal_set_eulerRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_headOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_playerHead(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x579d5b8, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCameraFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCameraFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCameraFollow(GorillaCameraFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCameraFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCameraFollow(GorillaCameraFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1498};

/// @brief Field playerHead, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___playerHead;

/// @brief Field cameraParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___cameraParent;

/// @brief Field headOffset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headOffset;

/// @brief Field eulerRotationOffset, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___eulerRotationOffset;

/// @brief Field cinemachineCamera, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>  ___cinemachineCamera;

/// @brief Field cinemachineFollow, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::Cinemachine3rdPersonFollow>  ___cinemachineFollow;

/// @brief Field baseCameraRadius, offset: 0x58, size: 0x4, def value: None
 float_t  ___baseCameraRadius;

/// @brief Field baseFollowDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___baseFollowDistance;

/// @brief Field baseVerticalArmLength, offset: 0x60, size: 0x4, def value: None
 float_t  ___baseVerticalArmLength;

/// @brief Field baseShoulderOffset, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___baseShoulderOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___playerHead) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___cameraParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___headOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___eulerRotationOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___cinemachineCamera) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___cinemachineFollow) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___baseCameraRadius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___baseFollowDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___baseVerticalArmLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraFollow, ___baseShoulderOffset) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaCameraFollow) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
