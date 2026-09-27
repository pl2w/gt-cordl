#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersStunBomb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersToolThrowable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersStunBomb)
namespace GlobalNamespace {
class CrittersPawn;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersStunBomb;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersStunBomb*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersStunBomb*, "", "CrittersStunBomb");
// Dependencies CrittersToolThrowable
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersStunBomb
class CORDL_TYPE CrittersStunBomb : public ::GlobalNamespace::CrittersToolThrowable {
public:
// Declarations
/// @brief Field radius, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field stunDuration, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_stunDuration, put=__cordl_internal_set_stunDuration)) float_t  stunDuration;

static inline ::GlobalNamespace::CrittersStunBomb* New_ctor() ;

/// @brief Method OnImpact, addr 0x56f5050, size 0x288, virtual true, abstract: false, final false
inline void OnImpact(::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal) ;

/// @brief Method OnImpactCritter, addr 0x56f52d8, size 0x94, virtual true, abstract: false, final false
inline void OnImpactCritter(::GlobalNamespace::CrittersPawn*  impactedCritter) ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr float_t const& __cordl_internal_get_stunDuration() const;

constexpr float_t& __cordl_internal_get_stunDuration() ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_stunDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x56f536c, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersStunBomb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersStunBomb", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersStunBomb(CrittersStunBomb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersStunBomb", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersStunBomb(CrittersStunBomb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{124};

/// [Header("Stun Bomb")]
/// @brief Field radius, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field stunDuration, offset: 0x1ac, size: 0x4, def value: None
 float_t  ___stunDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersStunBomb, ___radius) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersStunBomb, ___stunDuration) == 0x1ac, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersStunBomb) == 0x1b0, "Size mismatch!");

} // namespace end def GlobalNamespace
