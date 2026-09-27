#pragma once
// IWYU pragma private; include "GlobalNamespace/IPreDisable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPreDisable)
// Forward declare root types
namespace GlobalNamespace {
class IPreDisable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IPreDisable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IPreDisable*, "", "IPreDisable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPreDisable
class CORDL_TYPE IPreDisable {
public:
// Declarations
/// @brief Method PreDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PreDisable() ;

// Ctor Parameters [CppParam { name: "", ty: "IPreDisable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPreDisable(IPreDisable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3582};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
