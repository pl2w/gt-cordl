#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibStreamFlavor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZlibStreamFlavor)
// Forward declare root types
namespace Ionic::Zlib {
struct ZlibStreamFlavor;
}
// Write type traits
MARK_VAL_T(::Ionic::Zlib::ZlibStreamFlavor);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::ZlibStreamFlavor, "Ionic.Zlib", "ZlibStreamFlavor");
// Dependencies 
namespace Ionic::Zlib {
// Is value type: true
// CS Name: Ionic.Zlib.ZlibStreamFlavor
struct CORDL_TYPE ZlibStreamFlavor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZlibStreamFlavor_Unwrapped
enum struct __ZlibStreamFlavor_Unwrapped : int32_t {
__E_ZLIB = static_cast<int32_t>(0x79e),
__E_DEFLATE = static_cast<int32_t>(0x79f),
__E_GZIP = static_cast<int32_t>(0x7a0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZlibStreamFlavor_Unwrapped () const noexcept {
return static_cast<__ZlibStreamFlavor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZlibStreamFlavor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZlibStreamFlavor(int32_t  value__) noexcept;

/// @brief Field DEFLATE value: I32(1951)
static ::Ionic::Zlib::ZlibStreamFlavor const DEFLATE;

/// @brief Field GZIP value: I32(1952)
static ::Ionic::Zlib::ZlibStreamFlavor const GZIP;

/// @brief Field ZLIB value: I32(1950)
static ::Ionic::Zlib::ZlibStreamFlavor const ZLIB;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19475};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::ZlibStreamFlavor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::ZlibStreamFlavor) == 0x4, "Size mismatch!");

} // namespace end def Ionic::Zlib
