#pragma once
// IWYU pragma private; include "Ionic/Zlib/CompressionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionMode)
// Forward declare root types
namespace Ionic::Zlib {
struct CompressionMode;
}
// Write type traits
MARK_VAL_T(::Ionic::Zlib::CompressionMode);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::CompressionMode, "Ionic.Zlib", "CompressionMode");
// Dependencies 
namespace Ionic::Zlib {
// Is value type: true
// CS Name: Ionic.Zlib.CompressionMode
struct CORDL_TYPE CompressionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompressionMode_Unwrapped
enum struct __CompressionMode_Unwrapped : int32_t {
__E_Compress = static_cast<int32_t>(0x0),
__E_Decompress = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionMode_Unwrapped () const noexcept {
return static_cast<__CompressionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompressionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CompressionMode(int32_t  value__) noexcept;

/// @brief Field Compress value: I32(0)
static ::Ionic::Zlib::CompressionMode const Compress;

/// @brief Field Decompress value: I32(1)
static ::Ionic::Zlib::CompressionMode const Decompress;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19469};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::CompressionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::CompressionMode) == 0x4, "Size mismatch!");

} // namespace end def Ionic::Zlib
