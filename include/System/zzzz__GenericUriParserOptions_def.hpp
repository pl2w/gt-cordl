#pragma once
// IWYU pragma private; include "System/GenericUriParserOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericUriParserOptions)
// Forward declare root types
namespace System {
struct GenericUriParserOptions;
}
// Write type traits
MARK_VAL_T(::System::GenericUriParserOptions);
DEFINE_IL2CPP_CLASS(::System::GenericUriParserOptions, "System", "GenericUriParserOptions");
// [Flags]
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.GenericUriParserOptions
struct CORDL_TYPE GenericUriParserOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GenericUriParserOptions_Unwrapped
enum struct __GenericUriParserOptions_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_GenericAuthority = static_cast<int32_t>(0x1),
__E_AllowEmptyAuthority = static_cast<int32_t>(0x2),
__E_NoUserInfo = static_cast<int32_t>(0x4),
__E_NoPort = static_cast<int32_t>(0x8),
__E_NoQuery = static_cast<int32_t>(0x10),
__E_NoFragment = static_cast<int32_t>(0x20),
__E_DontConvertPathBackslashes = static_cast<int32_t>(0x40),
__E_DontCompressPath = static_cast<int32_t>(0x80),
__E_DontUnescapePathDotsAndSlashes = static_cast<int32_t>(0x100),
__E_Idn = static_cast<int32_t>(0x200),
__E_IriParsing = static_cast<int32_t>(0x400),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GenericUriParserOptions_Unwrapped () const noexcept {
return static_cast<__GenericUriParserOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GenericUriParserOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GenericUriParserOptions(int32_t  value__) noexcept;

/// @brief Field AllowEmptyAuthority value: I32(2)
static ::System::GenericUriParserOptions const AllowEmptyAuthority;

/// @brief Field Default value: I32(0)
static ::System::GenericUriParserOptions const Default;

/// @brief Field DontCompressPath value: I32(128)
static ::System::GenericUriParserOptions const DontCompressPath;

/// @brief Field DontConvertPathBackslashes value: I32(64)
static ::System::GenericUriParserOptions const DontConvertPathBackslashes;

/// @brief Field DontUnescapePathDotsAndSlashes value: I32(256)
static ::System::GenericUriParserOptions const DontUnescapePathDotsAndSlashes;

/// @brief Field GenericAuthority value: I32(1)
static ::System::GenericUriParserOptions const GenericAuthority;

/// @brief Field Idn value: I32(512)
static ::System::GenericUriParserOptions const Idn;

/// @brief Field IriParsing value: I32(1024)
static ::System::GenericUriParserOptions const IriParsing;

/// @brief Field NoFragment value: I32(32)
static ::System::GenericUriParserOptions const NoFragment;

/// @brief Field NoPort value: I32(8)
static ::System::GenericUriParserOptions const NoPort;

/// @brief Field NoQuery value: I32(16)
static ::System::GenericUriParserOptions const NoQuery;

/// @brief Field NoUserInfo value: I32(4)
static ::System::GenericUriParserOptions const NoUserInfo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::GenericUriParserOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::GenericUriParserOptions) == 0x4, "Size mismatch!");

} // namespace end def System
