#pragma once
// IWYU pragma private; include "Fusion/PageSizes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PageSizes)
// Forward declare root types
namespace Fusion {
struct PageSizes;
}
// Write type traits
MARK_VAL_T(::Fusion::PageSizes);
DEFINE_IL2CPP_CLASS(::Fusion::PageSizes, "Fusion", "PageSizes");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.PageSizes
struct CORDL_TYPE PageSizes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PageSizes_Unwrapped
enum struct __PageSizes_Unwrapped : int32_t {
__E__1Kb = static_cast<int32_t>(0xa),
__E__2Kb = static_cast<int32_t>(0xb),
__E__4Kb = static_cast<int32_t>(0xc),
__E__8Kb = static_cast<int32_t>(0xd),
__E__16Kb = static_cast<int32_t>(0xe),
__E__32Kb = static_cast<int32_t>(0xf),
__E__64Kb = static_cast<int32_t>(0x10),
__E__128Kb = static_cast<int32_t>(0x11),
__E__256Kb = static_cast<int32_t>(0x12),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PageSizes_Unwrapped () const noexcept {
return static_cast<__PageSizes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PageSizes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PageSizes(int32_t  value__) noexcept;

/// @brief Field _128Kb value: I32(17)
static ::Fusion::PageSizes const _128Kb;

/// @brief Field _16Kb value: I32(14)
static ::Fusion::PageSizes const _16Kb;

/// @brief Field _1Kb value: I32(10)
static ::Fusion::PageSizes const _1Kb;

/// @brief Field _256Kb value: I32(18)
static ::Fusion::PageSizes const _256Kb;

/// @brief Field _2Kb value: I32(11)
static ::Fusion::PageSizes const _2Kb;

/// @brief Field _32Kb value: I32(15)
static ::Fusion::PageSizes const _32Kb;

/// @brief Field _4Kb value: I32(12)
static ::Fusion::PageSizes const _4Kb;

/// @brief Field _64Kb value: I32(16)
static ::Fusion::PageSizes const _64Kb;

/// @brief Field _8Kb value: I32(13)
static ::Fusion::PageSizes const _8Kb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18794};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::PageSizes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::PageSizes) == 0x4, "Size mismatch!");

} // namespace end def Fusion
