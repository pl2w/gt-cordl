#pragma once
// IWYU pragma private; include "GorillaTag/IRefreshable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRefreshable)
// Forward declare root types
namespace GorillaTag {
class IRefreshable;
}
// Write type traits
MARK_REF_T(::GorillaTag::IRefreshable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::IRefreshable*, "GorillaTag", "IRefreshable");
// Dependencies 
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.IRefreshable
class CORDL_TYPE IRefreshable {
public:
// Declarations
/// @brief Method Refresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Refresh() ;

// Ctor Parameters [CppParam { name: "", ty: "IRefreshable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRefreshable(IRefreshable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4609};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
