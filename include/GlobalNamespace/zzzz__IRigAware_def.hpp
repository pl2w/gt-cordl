#pragma once
// IWYU pragma private; include "GlobalNamespace/IRigAware.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRigAware)
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class IRigAware;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IRigAware*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IRigAware*, "", "IRigAware");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IRigAware
class CORDL_TYPE IRigAware {
public:
// Declarations
/// @brief Method SetRig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetRig(::GlobalNamespace::VRRig*  rig) ;

// Ctor Parameters [CppParam { name: "", ty: "IRigAware", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRigAware(IRigAware const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
