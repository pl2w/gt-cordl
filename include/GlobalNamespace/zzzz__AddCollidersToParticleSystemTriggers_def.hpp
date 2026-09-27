#pragma once
// IWYU pragma private; include "GlobalNamespace/AddCollidersToParticleSystemTriggers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddCollidersToParticleSystemTriggers)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class AddCollidersToParticleSystemTriggers;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AddCollidersToParticleSystemTriggers*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AddCollidersToParticleSystemTriggers*, "", "AddCollidersToParticleSystemTriggers");
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AddCollidersToParticleSystemTriggers
class CORDL_TYPE AddCollidersToParticleSystemTriggers : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field collidersToAdd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersToAdd, put=__cordl_internal_set_collidersToAdd)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  collidersToAdd;

/// @brief Field count, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field index, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field particleSystemToUpdate, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystemToUpdate, put=__cordl_internal_set_particleSystemToUpdate)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystemToUpdate;

static inline ::GlobalNamespace::AddCollidersToParticleSystemTriggers* New_ctor() ;

/// @brief Method Update, addr 0x579f3b8, size 0x1dc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_collidersToAdd() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_collidersToAdd() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystemToUpdate() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystemToUpdate() ;

constexpr void __cordl_internal_set_collidersToAdd(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_particleSystemToUpdate(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x579f594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddCollidersToParticleSystemTriggers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddCollidersToParticleSystemTriggers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddCollidersToParticleSystemTriggers(AddCollidersToParticleSystemTriggers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddCollidersToParticleSystemTriggers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddCollidersToParticleSystemTriggers(AddCollidersToParticleSystemTriggers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1521};

/// @brief Field collidersToAdd, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___collidersToAdd;

/// @brief Field particleSystemToUpdate, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystemToUpdate;

/// @brief Field count, offset: 0x30, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field index, offset: 0x34, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AddCollidersToParticleSystemTriggers, ___collidersToAdd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AddCollidersToParticleSystemTriggers, ___particleSystemToUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AddCollidersToParticleSystemTriggers, ___count) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AddCollidersToParticleSystemTriggers, ___index) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AddCollidersToParticleSystemTriggers) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
