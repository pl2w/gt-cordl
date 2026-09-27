#pragma once
// IWYU pragma private; include "GlobalNamespace/KinematicWhenTargetInactive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(KinematicWhenTargetInactive)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class KinematicWhenTargetInactive;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KinematicWhenTargetInactive*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KinematicWhenTargetInactive*, "", "KinematicWhenTargetInactive");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rigidbody
namespace GlobalNamespace {
// Is value type: false
// CS Name: KinematicWhenTargetInactive
class CORDL_TYPE KinematicWhenTargetInactive : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field rigidBodies, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBodies, put=__cordl_internal_set_rigidBodies)) ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  rigidBodies;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::GameObject>  target;

/// @brief Method LateUpdate, addr 0x57928dc, size 0xec, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::KinematicWhenTargetInactive* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>> const& __cordl_internal_get_rigidBodies() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>& __cordl_internal_get_rigidBodies() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_rigidBodies(::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x57929c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KinematicWhenTargetInactive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KinematicWhenTargetInactive", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KinematicWhenTargetInactive(KinematicWhenTargetInactive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KinematicWhenTargetInactive", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KinematicWhenTargetInactive(KinematicWhenTargetInactive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1450};

/// @brief Field rigidBodies, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  ___rigidBodies;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KinematicWhenTargetInactive, ___rigidBodies) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KinematicWhenTargetInactive, ___target) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KinematicWhenTargetInactive) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
