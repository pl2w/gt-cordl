#pragma once
// IWYU pragma private; include "GlobalNamespace/IBuildValidation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBuildValidation)
// Forward declare root types
namespace GlobalNamespace {
class IBuildValidation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IBuildValidation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBuildValidation*, "", "IBuildValidation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBuildValidation
class CORDL_TYPE IBuildValidation {
public:
// Declarations
/// @brief Method BuildValidationCheck, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool BuildValidationCheck() ;

// Ctor Parameters [CppParam { name: "", ty: "IBuildValidation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBuildValidation(IBuildValidation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2317};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
