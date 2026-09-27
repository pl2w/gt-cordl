#pragma once
// IWYU pragma private; include "GlobalNamespace/iFlagForBaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(iFlagForBaking)
// Forward declare root types
namespace GlobalNamespace {
class iFlagForBaking;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::iFlagForBaking*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::iFlagForBaking*, "", "iFlagForBaking");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: iFlagForBaking
class CORDL_TYPE iFlagForBaking {
public:
// Declarations
/// @brief Method SetForBaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetForBaking() ;

/// @brief Method SetForGame, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetForGame() ;

// Ctor Parameters [CppParam { name: "", ty: "iFlagForBaking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
iFlagForBaking(iFlagForBaking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3504};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
