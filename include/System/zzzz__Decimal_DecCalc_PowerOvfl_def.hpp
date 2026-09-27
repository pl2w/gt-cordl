#pragma once
// IWYU pragma private; include "System/Decimal_DecCalc_PowerOvfl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Decimal_DecCalc_PowerOvfl)
// Forward declare root types
namespace GlobalNamespace {
struct DecCalc_Decimal_PowerOvfl;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecCalc_Decimal_PowerOvfl);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecCalc_Decimal_PowerOvfl, "System", "Decimal/DecCalc/PowerOvfl");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Decimal/DecCalc/PowerOvfl
struct CORDL_TYPE DecCalc_Decimal_PowerOvfl {
public:
// Declarations
/// @brief Method .ctor, addr 0xa342f2c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint32_t  hi, uint32_t  mid, uint32_t  lo) ;

// Ctor Parameters []
// @brief default ctor
constexpr DecCalc_Decimal_PowerOvfl() ;

// Ctor Parameters [CppParam { name: "Hi", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MidLo", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr DecCalc_Decimal_PowerOvfl(uint32_t  Hi, uint64_t  MidLo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5776};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Hi, offset: 0x0, size: 0x4, def value: None
 uint32_t  Hi;

/// @brief Field MidLo, offset: 0x8, size: 0x8, def value: None
 uint64_t  MidLo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DecCalc_Decimal_PowerOvfl, Hi) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecCalc_Decimal_PowerOvfl, MidLo) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DecCalc_Decimal_PowerOvfl) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
