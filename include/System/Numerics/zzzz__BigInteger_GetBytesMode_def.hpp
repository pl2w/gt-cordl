#pragma once
// IWYU pragma private; include "System/Numerics/BigInteger_GetBytesMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger_GetBytesMode)
// Forward declare root types
namespace GlobalNamespace {
struct BigInteger_GetBytesMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BigInteger_GetBytesMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BigInteger_GetBytesMode, "System.Numerics", "BigInteger/GetBytesMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Numerics.BigInteger/GetBytesMode
struct CORDL_TYPE BigInteger_GetBytesMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BigInteger_GetBytesMode_Unwrapped
enum struct __BigInteger_GetBytesMode_Unwrapped : int32_t {
__E_AllocateArray = static_cast<int32_t>(0x0),
__E_Count = static_cast<int32_t>(0x1),
__E_Span = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BigInteger_GetBytesMode_Unwrapped () const noexcept {
return static_cast<__BigInteger_GetBytesMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BigInteger_GetBytesMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BigInteger_GetBytesMode(int32_t  value__) noexcept;

/// @brief Field AllocateArray value: I32(0)
static ::GlobalNamespace::BigInteger_GetBytesMode const AllocateArray;

/// @brief Field Count value: I32(1)
static ::GlobalNamespace::BigInteger_GetBytesMode const Count;

/// @brief Field Span value: I32(2)
static ::GlobalNamespace::BigInteger_GetBytesMode const Span;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31667};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BigInteger_GetBytesMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BigInteger_GetBytesMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
