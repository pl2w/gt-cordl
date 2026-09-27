#pragma once
// IWYU pragma private; include "System/Net/HttpResponseHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpResponseHeader)
// Forward declare root types
namespace System::Net {
struct HttpResponseHeader;
}
// Write type traits
MARK_VAL_T(::System::Net::HttpResponseHeader);
DEFINE_IL2CPP_CLASS(::System::Net::HttpResponseHeader, "System.Net", "HttpResponseHeader");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpResponseHeader
struct CORDL_TYPE HttpResponseHeader {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpResponseHeader_Unwrapped
enum struct __HttpResponseHeader_Unwrapped : int32_t {
__E_CacheControl = static_cast<int32_t>(0x0),
__E_Connection = static_cast<int32_t>(0x1),
__E_Date = static_cast<int32_t>(0x2),
__E_KeepAlive = static_cast<int32_t>(0x3),
__E_Pragma = static_cast<int32_t>(0x4),
__E_Trailer = static_cast<int32_t>(0x5),
__E_TransferEncoding = static_cast<int32_t>(0x6),
__E_Upgrade = static_cast<int32_t>(0x7),
__E_Via = static_cast<int32_t>(0x8),
__E_Warning = static_cast<int32_t>(0x9),
__E_Allow = static_cast<int32_t>(0xa),
__E_ContentLength = static_cast<int32_t>(0xb),
__E_ContentType = static_cast<int32_t>(0xc),
__E_ContentEncoding = static_cast<int32_t>(0xd),
__E_ContentLanguage = static_cast<int32_t>(0xe),
__E_ContentLocation = static_cast<int32_t>(0xf),
__E_ContentMd5 = static_cast<int32_t>(0x10),
__E_ContentRange = static_cast<int32_t>(0x11),
__E_Expires = static_cast<int32_t>(0x12),
__E_LastModified = static_cast<int32_t>(0x13),
__E_AcceptRanges = static_cast<int32_t>(0x14),
__E_Age = static_cast<int32_t>(0x15),
__E_ETag = static_cast<int32_t>(0x16),
__E_Location = static_cast<int32_t>(0x17),
__E_ProxyAuthenticate = static_cast<int32_t>(0x18),
__E_RetryAfter = static_cast<int32_t>(0x19),
__E_Server = static_cast<int32_t>(0x1a),
__E_SetCookie = static_cast<int32_t>(0x1b),
__E_Vary = static_cast<int32_t>(0x1c),
__E_WwwAuthenticate = static_cast<int32_t>(0x1d),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpResponseHeader_Unwrapped () const noexcept {
return static_cast<__HttpResponseHeader_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpResponseHeader() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpResponseHeader(int32_t  value__) noexcept;

/// @brief Field AcceptRanges value: I32(20)
static ::System::Net::HttpResponseHeader const AcceptRanges;

/// @brief Field Age value: I32(21)
static ::System::Net::HttpResponseHeader const Age;

/// @brief Field Allow value: I32(10)
static ::System::Net::HttpResponseHeader const Allow;

/// @brief Field CacheControl value: I32(0)
static ::System::Net::HttpResponseHeader const CacheControl;

/// @brief Field Connection value: I32(1)
static ::System::Net::HttpResponseHeader const Connection;

/// @brief Field ContentEncoding value: I32(13)
static ::System::Net::HttpResponseHeader const ContentEncoding;

/// @brief Field ContentLanguage value: I32(14)
static ::System::Net::HttpResponseHeader const ContentLanguage;

/// @brief Field ContentLength value: I32(11)
static ::System::Net::HttpResponseHeader const ContentLength;

/// @brief Field ContentLocation value: I32(15)
static ::System::Net::HttpResponseHeader const ContentLocation;

/// @brief Field ContentMd5 value: I32(16)
static ::System::Net::HttpResponseHeader const ContentMd5;

/// @brief Field ContentRange value: I32(17)
static ::System::Net::HttpResponseHeader const ContentRange;

/// @brief Field ContentType value: I32(12)
static ::System::Net::HttpResponseHeader const ContentType;

/// @brief Field Date value: I32(2)
static ::System::Net::HttpResponseHeader const Date;

/// @brief Field ETag value: I32(22)
static ::System::Net::HttpResponseHeader const ETag;

/// @brief Field Expires value: I32(18)
static ::System::Net::HttpResponseHeader const Expires;

/// @brief Field KeepAlive value: I32(3)
static ::System::Net::HttpResponseHeader const KeepAlive;

/// @brief Field LastModified value: I32(19)
static ::System::Net::HttpResponseHeader const LastModified;

/// @brief Field Location value: I32(23)
static ::System::Net::HttpResponseHeader const Location;

/// @brief Field Pragma value: I32(4)
static ::System::Net::HttpResponseHeader const Pragma;

/// @brief Field ProxyAuthenticate value: I32(24)
static ::System::Net::HttpResponseHeader const ProxyAuthenticate;

/// @brief Field RetryAfter value: I32(25)
static ::System::Net::HttpResponseHeader const RetryAfter;

/// @brief Field Server value: I32(26)
static ::System::Net::HttpResponseHeader const Server;

/// @brief Field SetCookie value: I32(27)
static ::System::Net::HttpResponseHeader const SetCookie;

/// @brief Field Trailer value: I32(5)
static ::System::Net::HttpResponseHeader const Trailer;

/// @brief Field TransferEncoding value: I32(6)
static ::System::Net::HttpResponseHeader const TransferEncoding;

/// @brief Field Upgrade value: I32(7)
static ::System::Net::HttpResponseHeader const Upgrade;

/// @brief Field Vary value: I32(28)
static ::System::Net::HttpResponseHeader const Vary;

/// @brief Field Via value: I32(8)
static ::System::Net::HttpResponseHeader const Via;

/// @brief Field Warning value: I32(9)
static ::System::Net::HttpResponseHeader const Warning;

/// @brief Field WwwAuthenticate value: I32(29)
static ::System::Net::HttpResponseHeader const WwwAuthenticate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10500};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpResponseHeader, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpResponseHeader) == 0x4, "Size mismatch!");

} // namespace end def System::Net
