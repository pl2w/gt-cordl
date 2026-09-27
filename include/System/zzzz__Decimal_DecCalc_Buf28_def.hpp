#pragma once
// IWYU pragma private; include "System/Decimal_DecCalc_Buf28.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Decimal_DecCalc_Buf24_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Decimal_DecCalc_Buf28)
// Forward declare root types
namespace GlobalNamespace {
struct DecCalc_Decimal_Buf28;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecCalc_Decimal_Buf28);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecCalc_Decimal_Buf28, "System", "Decimal/DecCalc/Buf28");
// Dependencies System.Decimal::DecCalc::Buf24
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Decimal/DecCalc/Buf28
struct CORDL_TYPE DecCalc_Decimal_Buf28 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DecCalc_Decimal_Buf28() ;

// Ctor Parameters [CppParam { name: "Buf24", ty: "::GlobalNamespace::DecCalc_Decimal_Buf24", modifiers: "", def_value: None, comment: None }, CppParam { name: "U6", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr DecCalc_Decimal_Buf28(::GlobalNamespace::DecCalc_Decimal_Buf24  Buf24, uint32_t  U6) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5780};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Buf24, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::DecCalc_Decimal_Buf24  Buf24;

/// @brief Field U6, offset: 0x18, size: 0x4, def value: None
 uint32_t  U6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DecCalc_Decimal_Buf28, Buf24) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecCalc_Decimal_Buf28, U6) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DecCalc_Decimal_Buf28) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
