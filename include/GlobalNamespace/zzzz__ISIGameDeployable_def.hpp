#pragma once
// IWYU pragma private; include "GlobalNamespace/ISIGameDeployable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISIGameDeployable)
namespace GlobalNamespace {
struct SIUpgradeSet;
}
// Forward declare root types
namespace GlobalNamespace {
class ISIGameDeployable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ISIGameDeployable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ISIGameDeployable*, "", "ISIGameDeployable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISIGameDeployable
class CORDL_TYPE ISIGameDeployable {
public:
// Declarations
/// @brief Method ApplyUpgrades, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ApplyUpgrades(::GlobalNamespace::SIUpgradeSet  upgrades) ;

// Ctor Parameters [CppParam { name: "", ty: "ISIGameDeployable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISIGameDeployable(ISIGameDeployable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
