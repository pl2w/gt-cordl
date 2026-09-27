#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentScreen_ConsentCost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsentScreen_ConsentCost)
// Forward declare root types
namespace GlobalNamespace {
struct ConsentScreen_ConsentCost;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConsentScreen_ConsentCost);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsentScreen_ConsentCost, "", "ConsentScreen/ConsentCost");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConsentScreen/ConsentCost
struct CORDL_TYPE ConsentScreen_ConsentCost {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ConsentScreen_ConsentCost() ;

// Ctor Parameters [CppParam { name: "DisplayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Amount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CurrentBalance", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "HasBalance", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ConsentScreen_ConsentCost(::StringW  DisplayName, int32_t  Amount, int32_t  CurrentBalance, bool  HasBalance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3097};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field DisplayName, offset: 0x0, size: 0x8, def value: None
 ::StringW  DisplayName;

/// @brief Field Amount, offset: 0x8, size: 0x4, def value: None
 int32_t  Amount;

/// @brief Field CurrentBalance, offset: 0xc, size: 0x4, def value: None
 int32_t  CurrentBalance;

/// @brief Field HasBalance, offset: 0x10, size: 0x1, def value: None
 bool  HasBalance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsentScreen_ConsentCost, DisplayName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen_ConsentCost, Amount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen_ConsentCost, CurrentBalance) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen_ConsentCost, HasBalance) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsentScreen_ConsentCost) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
