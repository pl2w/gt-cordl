#pragma once
// IWYU pragma private; include "Modio/Mods/RevenueType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RevenueType)
// Forward declare root types
namespace Modio::Mods {
struct RevenueType;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::RevenueType);
DEFINE_IL2CPP_CLASS(::Modio::Mods::RevenueType, "Modio.Mods", "RevenueType");
// Dependencies 
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.RevenueType
struct CORDL_TYPE RevenueType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RevenueType_Unwrapped
enum struct __RevenueType_Unwrapped : int32_t {
__E_Free = static_cast<int32_t>(0x0),
__E_Paid = static_cast<int32_t>(0x1),
__E_FreeAndPaid = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RevenueType_Unwrapped () const noexcept {
return static_cast<__RevenueType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RevenueType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RevenueType(int32_t  value__) noexcept;

/// @brief Field Free value: I32(0)
static ::Modio::Mods::RevenueType const Free;

/// @brief Field FreeAndPaid value: I32(2)
static ::Modio::Mods::RevenueType const FreeAndPaid;

/// @brief Field Paid value: I32(1)
static ::Modio::Mods::RevenueType const Paid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17598};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::RevenueType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::RevenueType) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods
