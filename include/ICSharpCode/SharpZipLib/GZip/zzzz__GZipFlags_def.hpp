#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GZipFlags)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::GZip {
struct GZipFlags;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::GZip::GZipFlags);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::GZip::GZipFlags, "ICSharpCode.SharpZipLib.GZip", "GZipFlags");
// [Flags]
// Dependencies 
namespace ICSharpCode::SharpZipLib::GZip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.GZip.GZipFlags
struct CORDL_TYPE GZipFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __GZipFlags_Unwrapped
enum struct __GZipFlags_Unwrapped : uint8_t {
__E_FTEXT = static_cast<uint8_t>(0x1u),
__E_FHCRC = static_cast<uint8_t>(0x2u),
__E_FEXTRA = static_cast<uint8_t>(0x4u),
__E_FNAME = static_cast<uint8_t>(0x8u),
__E_FCOMMENT = static_cast<uint8_t>(0x10u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GZipFlags_Unwrapped () const noexcept {
return static_cast<__GZipFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GZipFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr GZipFlags(uint8_t  value__) noexcept;

/// @brief Field FCOMMENT value: U8(16)
static ::ICSharpCode::SharpZipLib::GZip::GZipFlags const FCOMMENT;

/// @brief Field FEXTRA value: U8(4)
static ::ICSharpCode::SharpZipLib::GZip::GZipFlags const FEXTRA;

/// @brief Field FHCRC value: U8(2)
static ::ICSharpCode::SharpZipLib::GZip::GZipFlags const FHCRC;

/// @brief Field FNAME value: U8(8)
static ::ICSharpCode::SharpZipLib::GZip::GZipFlags const FNAME;

/// @brief Field FTEXT value: U8(1)
static ::ICSharpCode::SharpZipLib::GZip::GZipFlags const FTEXT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::GZip::GZipFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::GZip::GZipFlags) == 0x1, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::GZip
