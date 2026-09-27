#pragma once
// IWYU pragma private; include "GlobalNamespace/OwlLook.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OwlLook)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OwlLook;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OwlLook*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OwlLook*, "", "OwlLook");
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour, VRRig
namespace GlobalNamespace {
// Is value type: false
// CS Name: OwlLook
class CORDL_TYPE OwlLook : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field head, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::UnityW<::UnityEngine::Transform>  head;

/// @brief Field lookAtAngleDegrees, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookAtAngleDegrees, put=__cordl_internal_set_lookAtAngleDegrees)) float_t  lookAtAngleDegrees;

/// @brief Field lookRadius, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookRadius, put=__cordl_internal_set_lookRadius)) float_t  lookRadius;

/// @brief Field lookTarget, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookTarget, put=__cordl_internal_set_lookTarget)) ::UnityW<::UnityEngine::Transform>  lookTarget;

/// @brief Field maxNeckY, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNeckY, put=__cordl_internal_set_maxNeckY)) float_t  maxNeckY;

/// @brief Field minNeckY, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_minNeckY, put=__cordl_internal_set_minNeckY)) float_t  minNeckY;

/// @brief Field myRig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field neck, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_neck, put=__cordl_internal_set_neck)) ::UnityW<::UnityEngine::Transform>  neck;

/// @brief Field overlapColliders, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapColliders, put=__cordl_internal_set_overlapColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapColliders;

/// @brief Field overlapRigs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapRigs, put=__cordl_internal_set_overlapRigs)) ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  overlapRigs;

/// @brief Field rigs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigs, put=__cordl_internal_set_rigs)) ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  rigs;

/// @brief Field rotSpeed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotSpeed, put=__cordl_internal_set_rotSpeed)) float_t  rotSpeed;

/// @brief Method Awake, addr 0x5760bb4, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5760c94, size 0x934, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::OwlLook* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_head() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_head() ;

constexpr float_t const& __cordl_internal_get_lookAtAngleDegrees() const;

constexpr float_t& __cordl_internal_get_lookAtAngleDegrees() ;

constexpr float_t const& __cordl_internal_get_lookRadius() const;

constexpr float_t& __cordl_internal_get_lookRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lookTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lookTarget() ;

constexpr float_t const& __cordl_internal_get_maxNeckY() const;

constexpr float_t& __cordl_internal_get_maxNeckY() ;

constexpr float_t const& __cordl_internal_get_minNeckY() const;

constexpr float_t& __cordl_internal_get_minNeckY() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_neck() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_neck() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_overlapColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_overlapColliders() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> const& __cordl_internal_get_overlapRigs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>& __cordl_internal_get_overlapRigs() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> const& __cordl_internal_get_rigs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>& __cordl_internal_get_rigs() ;

constexpr float_t const& __cordl_internal_get_rotSpeed() const;

constexpr float_t& __cordl_internal_get_rotSpeed() ;

constexpr void __cordl_internal_set_head(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lookAtAngleDegrees(float_t  value) ;

constexpr void __cordl_internal_set_lookRadius(float_t  value) ;

constexpr void __cordl_internal_set_lookTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_maxNeckY(float_t  value) ;

constexpr void __cordl_internal_set_minNeckY(float_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_neck(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_overlapRigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value) ;

constexpr void __cordl_internal_set_rigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value) ;

constexpr void __cordl_internal_set_rotSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x57615c8, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OwlLook() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OwlLook", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OwlLook(OwlLook && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OwlLook", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OwlLook(OwlLook const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1344};

/// @brief Field head, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___head;

/// @brief Field lookTarget, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lookTarget;

/// @brief Field neck, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___neck;

/// @brief Field lookRadius, offset: 0x38, size: 0x4, def value: None
 float_t  ___lookRadius;

/// @brief Field overlapColliders, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___overlapColliders;

/// @brief Field rigs, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  ___rigs;

/// @brief Field overlapRigs, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  ___overlapRigs;

/// @brief Field rotSpeed, offset: 0x58, size: 0x4, def value: None
 float_t  ___rotSpeed;

/// @brief Field lookAtAngleDegrees, offset: 0x5c, size: 0x4, def value: None
 float_t  ___lookAtAngleDegrees;

/// @brief Field maxNeckY, offset: 0x60, size: 0x4, def value: None
 float_t  ___maxNeckY;

/// @brief Field minNeckY, offset: 0x64, size: 0x4, def value: None
 float_t  ___minNeckY;

/// @brief Field myRig, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OwlLook, ___head) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___lookTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___neck) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___lookRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___overlapColliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___rigs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___overlapRigs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___rotSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___lookAtAngleDegrees) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___maxNeckY) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___minNeckY) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwlLook, ___myRig) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OwlLook) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
