#pragma once
// IWYU pragma private; include "Meta/WitAi/MatchIntent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Conduit/zzzz__ConduitActionAttribute_def.hpp"
CORDL_MODULE_EXPORT(MatchIntent)
// Forward declare root types
namespace Meta::WitAi {
class MatchIntent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::MatchIntent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::MatchIntent*, "Meta.WitAi", "MatchIntent");
// [AttributeUsage((System.AttributeTargets)64, AllowMultiple = true)]
// Dependencies Meta.Conduit.ConduitActionAttribute
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.MatchIntent
class CORDL_TYPE MatchIntent : public ::Meta::Conduit::ConduitActionAttribute {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchIntent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchIntent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchIntent(MatchIntent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchIntent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchIntent(MatchIntent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25538};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::MatchIntent) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi
