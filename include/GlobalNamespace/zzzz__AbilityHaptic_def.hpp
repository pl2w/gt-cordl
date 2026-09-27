#pragma once
// IWYU pragma private; include "GlobalNamespace/AbilityHaptic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AbilityHaptic)
namespace GlobalNamespace {
class GameEntity;
}
// Forward declare root types
namespace GlobalNamespace {
class AbilityHaptic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AbilityHaptic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AbilityHaptic*, "", "AbilityHaptic");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AbilityHaptic
class CORDL_TYPE AbilityHaptic : public ::System::Object {
public:
// Declarations
/// @brief Field duration, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field strength, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_strength, put=__cordl_internal_set_strength)) float_t  strength;

static inline ::GlobalNamespace::AbilityHaptic* New_ctor() ;

/// @brief Method PlayIfHeldLocal, addr 0x58667b4, size 0x164, virtual false, abstract: false, final false
inline void PlayIfHeldLocal(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method PlayIfSnappedLocal, addr 0x5866918, size 0x2b0, virtual false, abstract: false, final false
inline void PlayIfSnappedLocal(::GlobalNamespace::GameEntity*  gameEntity) ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_strength() const;

constexpr float_t& __cordl_internal_get_strength() ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_strength(float_t  value) ;

/// @brief Method .ctor, addr 0x5866bc8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbilityHaptic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbilityHaptic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AbilityHaptic(AbilityHaptic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbilityHaptic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbilityHaptic(AbilityHaptic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1843};

/// @brief Field strength, offset: 0x10, size: 0x4, def value: None
 float_t  ___strength;

/// @brief Field duration, offset: 0x14, size: 0x4, def value: None
 float_t  ___duration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AbilityHaptic, ___strength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilityHaptic, ___duration) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AbilityHaptic) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
