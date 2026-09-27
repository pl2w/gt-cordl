#pragma once
// IWYU pragma private; include "System/Net/UnsafeNclNativeMethods_HttpApi_Enum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeNclNativeMethods_HttpApi_Enum)
// Forward declare root types
namespace GlobalNamespace {
struct HttpApi_UnsafeNclNativeMethods_Enum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum, "System.Net", "UnsafeNclNativeMethods/HttpApi/Enum");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.UnsafeNclNativeMethods/HttpApi/Enum
struct CORDL_TYPE HttpApi_UnsafeNclNativeMethods_Enum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpApi_UnsafeNclNativeMethods_Enum_Unwrapped
enum struct __HttpApi_UnsafeNclNativeMethods_Enum_Unwrapped : int32_t {
__E_HttpHeaderCacheControl = static_cast<int32_t>(0x0),
__E_HttpHeaderConnection = static_cast<int32_t>(0x1),
__E_HttpHeaderDate = static_cast<int32_t>(0x2),
__E_HttpHeaderKeepAlive = static_cast<int32_t>(0x3),
__E_HttpHeaderPragma = static_cast<int32_t>(0x4),
__E_HttpHeaderTrailer = static_cast<int32_t>(0x5),
__E_HttpHeaderTransferEncoding = static_cast<int32_t>(0x6),
__E_HttpHeaderUpgrade = static_cast<int32_t>(0x7),
__E_HttpHeaderVia = static_cast<int32_t>(0x8),
__E_HttpHeaderWarning = static_cast<int32_t>(0x9),
__E_HttpHeaderAllow = static_cast<int32_t>(0xa),
__E_HttpHeaderContentLength = static_cast<int32_t>(0xb),
__E_HttpHeaderContentType = static_cast<int32_t>(0xc),
__E_HttpHeaderContentEncoding = static_cast<int32_t>(0xd),
__E_HttpHeaderContentLanguage = static_cast<int32_t>(0xe),
__E_HttpHeaderContentLocation = static_cast<int32_t>(0xf),
__E_HttpHeaderContentMd5 = static_cast<int32_t>(0x10),
__E_HttpHeaderContentRange = static_cast<int32_t>(0x11),
__E_HttpHeaderExpires = static_cast<int32_t>(0x12),
__E_HttpHeaderLastModified = static_cast<int32_t>(0x13),
__E_HttpHeaderAcceptRanges = static_cast<int32_t>(0x14),
__E_HttpHeaderAge = static_cast<int32_t>(0x15),
__E_HttpHeaderEtag = static_cast<int32_t>(0x16),
__E_HttpHeaderLocation = static_cast<int32_t>(0x17),
__E_HttpHeaderProxyAuthenticate = static_cast<int32_t>(0x18),
__E_HttpHeaderRetryAfter = static_cast<int32_t>(0x19),
__E_HttpHeaderServer = static_cast<int32_t>(0x1a),
__E_HttpHeaderSetCookie = static_cast<int32_t>(0x1b),
__E_HttpHeaderVary = static_cast<int32_t>(0x1c),
__E_HttpHeaderWwwAuthenticate = static_cast<int32_t>(0x1d),
__E_HttpHeaderResponseMaximum = static_cast<int32_t>(0x1e),
__E_HttpHeaderMaximum = static_cast<int32_t>(0x29),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpApi_UnsafeNclNativeMethods_Enum_Unwrapped () const noexcept {
return static_cast<__HttpApi_UnsafeNclNativeMethods_Enum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpApi_UnsafeNclNativeMethods_Enum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpApi_UnsafeNclNativeMethods_Enum(int32_t  value__) noexcept;

/// @brief Field HttpHeaderAcceptRanges value: I32(20)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderAcceptRanges;

/// @brief Field HttpHeaderAge value: I32(21)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderAge;

/// @brief Field HttpHeaderAllow value: I32(10)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderAllow;

/// @brief Field HttpHeaderCacheControl value: I32(0)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderCacheControl;

/// @brief Field HttpHeaderConnection value: I32(1)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderConnection;

/// @brief Field HttpHeaderContentEncoding value: I32(13)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderContentEncoding;

/// @brief Field HttpHeaderContentLanguage value: I32(14)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderContentLanguage;

/// @brief Field HttpHeaderContentLength value: I32(11)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderContentLength;

/// @brief Field HttpHeaderContentLocation value: I32(15)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderContentLocation;

/// @brief Field HttpHeaderContentMd5 value: I32(16)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderContentMd5;

/// @brief Field HttpHeaderContentRange value: I32(17)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderContentRange;

/// @brief Field HttpHeaderContentType value: I32(12)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderContentType;

/// @brief Field HttpHeaderDate value: I32(2)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderDate;

/// @brief Field HttpHeaderEtag value: I32(22)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderEtag;

/// @brief Field HttpHeaderExpires value: I32(18)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderExpires;

/// @brief Field HttpHeaderKeepAlive value: I32(3)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderKeepAlive;

/// @brief Field HttpHeaderLastModified value: I32(19)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderLastModified;

/// @brief Field HttpHeaderLocation value: I32(23)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderLocation;

/// @brief Field HttpHeaderMaximum value: I32(41)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderMaximum;

/// @brief Field HttpHeaderPragma value: I32(4)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderPragma;

/// @brief Field HttpHeaderProxyAuthenticate value: I32(24)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderProxyAuthenticate;

/// @brief Field HttpHeaderResponseMaximum value: I32(30)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderResponseMaximum;

/// @brief Field HttpHeaderRetryAfter value: I32(25)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderRetryAfter;

/// @brief Field HttpHeaderServer value: I32(26)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderServer;

/// @brief Field HttpHeaderSetCookie value: I32(27)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderSetCookie;

/// @brief Field HttpHeaderTrailer value: I32(5)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderTrailer;

/// @brief Field HttpHeaderTransferEncoding value: I32(6)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderTransferEncoding;

/// @brief Field HttpHeaderUpgrade value: I32(7)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderUpgrade;

/// @brief Field HttpHeaderVary value: I32(28)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderVary;

/// @brief Field HttpHeaderVia value: I32(8)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderVia;

/// @brief Field HttpHeaderWarning value: I32(9)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderWarning;

/// @brief Field HttpHeaderWwwAuthenticate value: I32(29)
static ::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum const HttpHeaderWwwAuthenticate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpApi_UnsafeNclNativeMethods_Enum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
