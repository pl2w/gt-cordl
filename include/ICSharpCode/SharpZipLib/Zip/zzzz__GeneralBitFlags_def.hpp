#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/GeneralBitFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeneralBitFlags)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
struct GeneralBitFlags;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags, "ICSharpCode.SharpZipLib.Zip", "GeneralBitFlags");
// [Flags]
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.GeneralBitFlags
struct CORDL_TYPE GeneralBitFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GeneralBitFlags_Unwrapped
enum struct __GeneralBitFlags_Unwrapped : int32_t {
__E_Encrypted = static_cast<int32_t>(0x1),
__E_Method = static_cast<int32_t>(0x6),
__E_Descriptor = static_cast<int32_t>(0x8),
__E_ReservedPKware4 = static_cast<int32_t>(0x10),
__E_Patched = static_cast<int32_t>(0x20),
__E_StrongEncryption = static_cast<int32_t>(0x40),
__E_Unused7 = static_cast<int32_t>(0x80),
__E_Unused8 = static_cast<int32_t>(0x100),
__E_Unused9 = static_cast<int32_t>(0x200),
__E_Unused10 = static_cast<int32_t>(0x400),
__E_UnicodeText = static_cast<int32_t>(0x800),
__E_EnhancedCompress = static_cast<int32_t>(0x1000),
__E_HeaderMasked = static_cast<int32_t>(0x2000),
__E_ReservedPkware14 = static_cast<int32_t>(0x4000),
__E_ReservedPkware15 = static_cast<int32_t>(0x8000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GeneralBitFlags_Unwrapped () const noexcept {
return static_cast<__GeneralBitFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GeneralBitFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GeneralBitFlags(int32_t  value__) noexcept;

/// @brief Field Descriptor value: I32(8)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const Descriptor;

/// @brief Field Encrypted value: I32(1)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const Encrypted;

/// @brief Field EnhancedCompress value: I32(4096)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const EnhancedCompress;

/// @brief Field HeaderMasked value: I32(8192)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const HeaderMasked;

/// @brief Field Method value: I32(6)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const Method;

/// @brief Field Patched value: I32(32)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const Patched;

/// @brief Field ReservedPKware4 value: I32(16)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const ReservedPKware4;

/// @brief Field ReservedPkware14 value: I32(16384)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const ReservedPkware14;

/// @brief Field ReservedPkware15 value: I32(32768)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const ReservedPkware15;

/// @brief Field StrongEncryption value: I32(64)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const StrongEncryption;

/// @brief Field UnicodeText value: I32(2048)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const UnicodeText;

/// @brief Field Unused10 value: I32(1024)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const Unused10;

/// @brief Field Unused7 value: I32(128)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const Unused7;

/// @brief Field Unused8 value: I32(256)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const Unused8;

/// @brief Field Unused9 value: I32(512)
static ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags const Unused9;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags) == 0x4, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
