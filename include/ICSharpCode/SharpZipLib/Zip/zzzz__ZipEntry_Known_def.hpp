#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEntry_Known.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipEntry_Known)
// Forward declare root types
namespace GlobalNamespace {
struct ZipEntry_Known;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZipEntry_Known);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZipEntry_Known, "ICSharpCode.SharpZipLib.Zip", "ZipEntry/Known");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipEntry/Known
struct CORDL_TYPE ZipEntry_Known {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ZipEntry_Known_Unwrapped
enum struct __ZipEntry_Known_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Size = static_cast<uint8_t>(0x1u),
__E_CompressedSize = static_cast<uint8_t>(0x2u),
__E_Crc = static_cast<uint8_t>(0x4u),
__E_Time = static_cast<uint8_t>(0x8u),
__E_ExternalAttributes = static_cast<uint8_t>(0x10u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipEntry_Known_Unwrapped () const noexcept {
return static_cast<__ZipEntry_Known_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipEntry_Known() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipEntry_Known(uint8_t  value__) noexcept;

/// @brief Field CompressedSize value: U8(2)
static ::GlobalNamespace::ZipEntry_Known const CompressedSize;

/// @brief Field Crc value: U8(4)
static ::GlobalNamespace::ZipEntry_Known const Crc;

/// @brief Field ExternalAttributes value: U8(16)
static ::GlobalNamespace::ZipEntry_Known const ExternalAttributes;

/// @brief Field None value: U8(0)
static ::GlobalNamespace::ZipEntry_Known const None;

/// @brief Field Size value: U8(1)
static ::GlobalNamespace::ZipEntry_Known const Size;

/// @brief Field Time value: U8(8)
static ::GlobalNamespace::ZipEntry_Known const Time;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZipEntry_Known, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZipEntry_Known) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
