#pragma once
// IWYU pragma private; include "GlobalNamespace/ISnapTurnOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISnapTurnOverride)
// Forward declare root types
namespace GlobalNamespace {
class ISnapTurnOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ISnapTurnOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ISnapTurnOverride*, "", "ISnapTurnOverride");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISnapTurnOverride
class CORDL_TYPE ISnapTurnOverride {
public:
// Declarations
/// @brief Method TurnOverrideActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TurnOverrideActive() ;

// Ctor Parameters [CppParam { name: "", ty: "ISnapTurnOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISnapTurnOverride(ISnapTurnOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1518};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
