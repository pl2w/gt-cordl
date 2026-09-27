#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Deflater_CompressionLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Deflater_CompressionLevel)
// Forward declare root types
namespace GlobalNamespace {
struct Deflater_CompressionLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Deflater_CompressionLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Deflater_CompressionLevel, "ICSharpCode.SharpZipLib.Zip.Compression", "Deflater/CompressionLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.Deflater/CompressionLevel
struct CORDL_TYPE Deflater_CompressionLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Deflater_CompressionLevel_Unwrapped
enum struct __Deflater_CompressionLevel_Unwrapped : int32_t {
__E_BEST_COMPRESSION = static_cast<int32_t>(0x9),
__E_BEST_SPEED = static_cast<int32_t>(0x1),
__E_DEFAULT_COMPRESSION = static_cast<int32_t>(0xffffffff),
__E_NO_COMPRESSION = static_cast<int32_t>(0x0),
__E_DEFLATED = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Deflater_CompressionLevel_Unwrapped () const noexcept {
return static_cast<__Deflater_CompressionLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Deflater_CompressionLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Deflater_CompressionLevel(int32_t  value__) noexcept;

/// @brief Field BEST_COMPRESSION value: I32(9)
static ::GlobalNamespace::Deflater_CompressionLevel const BEST_COMPRESSION;

/// @brief Field BEST_SPEED value: I32(1)
static ::GlobalNamespace::Deflater_CompressionLevel const BEST_SPEED;

/// @brief Field DEFAULT_COMPRESSION value: I32(-1)
static ::GlobalNamespace::Deflater_CompressionLevel const DEFAULT_COMPRESSION;

/// @brief Field DEFLATED value: I32(8)
static ::GlobalNamespace::Deflater_CompressionLevel const DEFLATED;

/// @brief Field NO_COMPRESSION value: I32(0)
static ::GlobalNamespace::Deflater_CompressionLevel const NO_COMPRESSION;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Deflater_CompressionLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Deflater_CompressionLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
