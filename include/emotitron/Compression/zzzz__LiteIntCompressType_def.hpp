#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteIntCompressType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LiteIntCompressType)
// Forward declare root types
namespace emotitron::Compression {
struct LiteIntCompressType;
}
// Write type traits
MARK_VAL_T(::emotitron::Compression::LiteIntCompressType);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::LiteIntCompressType, "emotitron.Compression", "LiteIntCompressType");
// Dependencies 
namespace emotitron::Compression {
// Is value type: true
// CS Name: emotitron.Compression.LiteIntCompressType
struct CORDL_TYPE LiteIntCompressType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LiteIntCompressType_Unwrapped
enum struct __LiteIntCompressType_Unwrapped : int32_t {
__E_PackSigned = static_cast<int32_t>(0x0),
__E_PackUnsigned = static_cast<int32_t>(0x1),
__E_Range = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LiteIntCompressType_Unwrapped () const noexcept {
return static_cast<__LiteIntCompressType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LiteIntCompressType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LiteIntCompressType(int32_t  value__) noexcept;

/// @brief Field PackSigned value: I32(0)
static ::emotitron::Compression::LiteIntCompressType const PackSigned;

/// @brief Field PackUnsigned value: I32(1)
static ::emotitron::Compression::LiteIntCompressType const PackUnsigned;

/// @brief Field Range value: I32(2)
static ::emotitron::Compression::LiteIntCompressType const Range;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::emotitron::Compression::LiteIntCompressType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::emotitron::Compression::LiteIntCompressType) == 0x4, "Size mismatch!");

} // namespace end def emotitron::Compression
