#pragma once
// IWYU pragma private; include "Drawing/AllowedDelay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AllowedDelay)
// Forward declare root types
namespace Drawing {
struct AllowedDelay;
}
// Write type traits
MARK_VAL_T(::Drawing::AllowedDelay);
DEFINE_IL2CPP_CLASS(::Drawing::AllowedDelay, "Drawing", "AllowedDelay");
// Dependencies 
namespace Drawing {
// Is value type: true
// CS Name: Drawing.AllowedDelay
struct CORDL_TYPE AllowedDelay {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AllowedDelay_Unwrapped
enum struct __AllowedDelay_Unwrapped : int32_t {
__E_EndOfFrame = static_cast<int32_t>(0x0),
__E_Infinite = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AllowedDelay_Unwrapped () const noexcept {
return static_cast<__AllowedDelay_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AllowedDelay() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AllowedDelay(int32_t  value__) noexcept;

/// @brief Field EndOfFrame value: I32(0)
static ::Drawing::AllowedDelay const EndOfFrame;

/// @brief Field Infinite value: I32(1)
static ::Drawing::AllowedDelay const Infinite;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27693};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::AllowedDelay, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Drawing::AllowedDelay) == 0x4, "Size mismatch!");

} // namespace end def Drawing
