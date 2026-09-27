#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/CompressionMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionMethod)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
struct CompressionMethod;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::Zip::CompressionMethod);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::CompressionMethod, "ICSharpCode.SharpZipLib.Zip", "CompressionMethod");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.CompressionMethod
struct CORDL_TYPE CompressionMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompressionMethod_Unwrapped
enum struct __CompressionMethod_Unwrapped : int32_t {
__E_Stored = static_cast<int32_t>(0x0),
__E_Deflated = static_cast<int32_t>(0x8),
__E_Deflate64 = static_cast<int32_t>(0x9),
__E_BZip2 = static_cast<int32_t>(0xc),
__E_LZMA = static_cast<int32_t>(0xe),
__E_PPMd = static_cast<int32_t>(0x62),
__E_WinZipAES = static_cast<int32_t>(0x63),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionMethod_Unwrapped () const noexcept {
return static_cast<__CompressionMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompressionMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CompressionMethod(int32_t  value__) noexcept;

/// @brief Field BZip2 value: I32(12)
static ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const BZip2;

/// @brief Field Deflate64 value: I32(9)
static ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const Deflate64;

/// @brief Field Deflated value: I32(8)
static ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const Deflated;

/// @brief Field LZMA value: I32(14)
static ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const LZMA;

/// @brief Field PPMd value: I32(98)
static ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const PPMd;

/// @brief Field Stored value: I32(0)
static ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const Stored;

/// @brief Field WinZipAES value: I32(99)
static ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const WinZipAES;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::CompressionMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::CompressionMethod) == 0x4, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
