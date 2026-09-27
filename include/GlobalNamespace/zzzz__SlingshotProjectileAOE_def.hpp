#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectileAOE.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
CORDL_MODULE_EXPORT(SlingshotProjectileAOE)
// Forward declare root types
namespace GlobalNamespace {
class SlingshotProjectileAOE;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotProjectileAOE*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectileAOE*, "", "SlingshotProjectileAOE");
// Dependencies SlingshotProjectile
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotProjectileAOE
class CORDL_TYPE SlingshotProjectileAOE : public ::GlobalNamespace::SlingshotProjectile {
public:
// Declarations
static inline ::GlobalNamespace::SlingshotProjectileAOE* New_ctor() ;

/// @brief Method .ctor, addr 0x573bf14, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectileAOE() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileAOE", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotProjectileAOE(SlingshotProjectileAOE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileAOE", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotProjectileAOE(SlingshotProjectileAOE const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1219};

/// @brief Size padding 0x188 - 0x190 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SlingshotProjectileAOE) == 0x188, "Size mismatch!");

} // namespace end def GlobalNamespace
