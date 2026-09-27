#pragma once
// IWYU pragma private; include "emotitron/Compression/PackedBytesSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackedBytesSize)
// Forward declare root types
namespace emotitron::Compression {
struct PackedBytesSize;
}
// Write type traits
MARK_VAL_T(::emotitron::Compression::PackedBytesSize);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::PackedBytesSize, "emotitron.Compression", "PackedBytesSize");
// Dependencies 
namespace emotitron::Compression {
// Is value type: true
// CS Name: emotitron.Compression.PackedBytesSize
struct CORDL_TYPE PackedBytesSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PackedBytesSize_Unwrapped
enum struct __PackedBytesSize_Unwrapped : int32_t {
__E_UInt8 = static_cast<int32_t>(0x1),
__E_UInt16 = static_cast<int32_t>(0x2),
__E_UInt32 = static_cast<int32_t>(0x3),
__E_UInt64 = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PackedBytesSize_Unwrapped () const noexcept {
return static_cast<__PackedBytesSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PackedBytesSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PackedBytesSize(int32_t  value__) noexcept;

/// @brief Field UInt16 value: I32(2)
static ::emotitron::Compression::PackedBytesSize const UInt16;

/// @brief Field UInt32 value: I32(3)
static ::emotitron::Compression::PackedBytesSize const UInt32;

/// @brief Field UInt64 value: I32(4)
static ::emotitron::Compression::PackedBytesSize const UInt64;

/// @brief Field UInt8 value: I32(1)
static ::emotitron::Compression::PackedBytesSize const UInt8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5090};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::emotitron::Compression::PackedBytesSize, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::emotitron::Compression::PackedBytesSize) == 0x4, "Size mismatch!");

} // namespace end def emotitron::Compression
