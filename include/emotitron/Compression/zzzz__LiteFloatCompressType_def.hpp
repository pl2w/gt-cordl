#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteFloatCompressType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LiteFloatCompressType)
// Forward declare root types
namespace emotitron::Compression {
struct LiteFloatCompressType;
}
// Write type traits
MARK_VAL_T(::emotitron::Compression::LiteFloatCompressType);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::LiteFloatCompressType, "emotitron.Compression", "LiteFloatCompressType");
// Dependencies 
namespace emotitron::Compression {
// Is value type: true
// CS Name: emotitron.Compression.LiteFloatCompressType
struct CORDL_TYPE LiteFloatCompressType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LiteFloatCompressType_Unwrapped
enum struct __LiteFloatCompressType_Unwrapped : int32_t {
__E_Bits2 = static_cast<int32_t>(0x2),
__E_Bits3 = static_cast<int32_t>(0x3),
__E_Bits4 = static_cast<int32_t>(0x4),
__E_Bits5 = static_cast<int32_t>(0x5),
__E_Bits6 = static_cast<int32_t>(0x6),
__E_Bits7 = static_cast<int32_t>(0x7),
__E_Bits8 = static_cast<int32_t>(0x8),
__E_Bits9 = static_cast<int32_t>(0x9),
__E_Bits10 = static_cast<int32_t>(0xa),
__E_Bits12 = static_cast<int32_t>(0xc),
__E_Bits14 = static_cast<int32_t>(0xe),
__E_Half16 = static_cast<int32_t>(0x10),
__E_Full32 = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LiteFloatCompressType_Unwrapped () const noexcept {
return static_cast<__LiteFloatCompressType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LiteFloatCompressType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LiteFloatCompressType(int32_t  value__) noexcept;

/// @brief Field Bits10 value: I32(10)
static ::emotitron::Compression::LiteFloatCompressType const Bits10;

/// @brief Field Bits12 value: I32(12)
static ::emotitron::Compression::LiteFloatCompressType const Bits12;

/// @brief Field Bits14 value: I32(14)
static ::emotitron::Compression::LiteFloatCompressType const Bits14;

/// @brief Field Bits2 value: I32(2)
static ::emotitron::Compression::LiteFloatCompressType const Bits2;

/// @brief Field Bits3 value: I32(3)
static ::emotitron::Compression::LiteFloatCompressType const Bits3;

/// @brief Field Bits4 value: I32(4)
static ::emotitron::Compression::LiteFloatCompressType const Bits4;

/// @brief Field Bits5 value: I32(5)
static ::emotitron::Compression::LiteFloatCompressType const Bits5;

/// @brief Field Bits6 value: I32(6)
static ::emotitron::Compression::LiteFloatCompressType const Bits6;

/// @brief Field Bits7 value: I32(7)
static ::emotitron::Compression::LiteFloatCompressType const Bits7;

/// @brief Field Bits8 value: I32(8)
static ::emotitron::Compression::LiteFloatCompressType const Bits8;

/// @brief Field Bits9 value: I32(9)
static ::emotitron::Compression::LiteFloatCompressType const Bits9;

/// @brief Field Full32 value: I32(32)
static ::emotitron::Compression::LiteFloatCompressType const Full32;

/// @brief Field Half16 value: I32(16)
static ::emotitron::Compression::LiteFloatCompressType const Half16;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5097};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::emotitron::Compression::LiteFloatCompressType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::emotitron::Compression::LiteFloatCompressType) == 0x4, "Size mismatch!");

} // namespace end def emotitron::Compression
