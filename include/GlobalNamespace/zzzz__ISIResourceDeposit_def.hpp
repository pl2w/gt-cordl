#pragma once
// IWYU pragma private; include "GlobalNamespace/ISIResourceDeposit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISIResourceDeposit)
namespace GlobalNamespace {
class SIResource;
}
// Forward declare root types
namespace GlobalNamespace {
class ISIResourceDeposit;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ISIResourceDeposit*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ISIResourceDeposit*, "", "ISIResourceDeposit");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISIResourceDeposit
class CORDL_TYPE ISIResourceDeposit {
public:
// Declarations
/// @brief Method ResourceDeposited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResourceDeposited(::GlobalNamespace::SIResource*  resource) ;

// Ctor Parameters [CppParam { name: "", ty: "ISIResourceDeposit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISIResourceDeposit(ISIResourceDeposit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{350};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
