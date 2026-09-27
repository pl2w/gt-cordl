#pragma once
// IWYU pragma private; include "emotitron/Compression/PackedBitsSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackedBitsSize)
// Forward declare root types
namespace emotitron::Compression {
struct PackedBitsSize;
}
// Write type traits
MARK_VAL_T(::emotitron::Compression::PackedBitsSize);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::PackedBitsSize, "emotitron.Compression", "PackedBitsSize");
// Dependencies 
namespace emotitron::Compression {
// Is value type: true
// CS Name: emotitron.Compression.PackedBitsSize
struct CORDL_TYPE PackedBitsSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PackedBitsSize_Unwrapped
enum struct __PackedBitsSize_Unwrapped : int32_t {
__E_UInt8 = static_cast<int32_t>(0x4),
__E_UInt16 = static_cast<int32_t>(0x5),
__E_UInt32 = static_cast<int32_t>(0x6),
__E_UInt64 = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PackedBitsSize_Unwrapped () const noexcept {
return static_cast<__PackedBitsSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PackedBitsSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PackedBitsSize(int32_t  value__) noexcept;

/// @brief Field UInt16 value: I32(5)
static ::emotitron::Compression::PackedBitsSize const UInt16;

/// @brief Field UInt32 value: I32(6)
static ::emotitron::Compression::PackedBitsSize const UInt32;

/// @brief Field UInt64 value: I32(7)
static ::emotitron::Compression::PackedBitsSize const UInt64;

/// @brief Field UInt8 value: I32(4)
static ::emotitron::Compression::PackedBitsSize const UInt8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5089};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::emotitron::Compression::PackedBitsSize, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::emotitron::Compression::PackedBitsSize) == 0x4, "Size mismatch!");

} // namespace end def emotitron::Compression
