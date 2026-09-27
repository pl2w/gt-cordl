#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/HttpHeaderInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/Net/zzzz__HttpHeaderType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HttpHeaderInfo)
namespace WebSocketSharp::Net {
struct HttpHeaderType;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class HttpHeaderInfo;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::HttpHeaderInfo*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::HttpHeaderInfo*, "WebSocketSharp.Net", "HttpHeaderInfo");
// Dependencies System.Object, WebSocketSharp.Net.HttpHeaderType
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.HttpHeaderInfo
class CORDL_TYPE HttpHeaderInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HeaderName)) ::StringW  HeaderName;

 __declspec(property(get=get_IsMultiValueInRequest)) bool  IsMultiValueInRequest;

 __declspec(property(get=get_IsMultiValueInResponse)) bool  IsMultiValueInResponse;

 __declspec(property(get=get_IsRequest)) bool  IsRequest;

 __declspec(property(get=get_IsResponse)) bool  IsResponse;

/// @brief Field _headerName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerName, put=__cordl_internal_set__headerName)) ::StringW  _headerName;

/// @brief Field _headerType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__headerType, put=__cordl_internal_set__headerType)) ::WebSocketSharp::Net::HttpHeaderType  _headerType;

/// @brief Method IsMultiValue, addr 0xb9893e4, size 0x30, virtual false, abstract: false, final false
inline bool IsMultiValue(bool  response) ;

/// @brief Method IsRestricted, addr 0xb989414, size 0x24, virtual false, abstract: false, final false
inline bool IsRestricted(bool  response) ;

static inline ::WebSocketSharp::Net::HttpHeaderInfo* New_ctor(::StringW  headerName, ::WebSocketSharp::Net::HttpHeaderType  headerType) ;

constexpr ::StringW const& __cordl_internal_get__headerName() const;

constexpr ::StringW& __cordl_internal_get__headerName() ;

constexpr ::WebSocketSharp::Net::HttpHeaderType const& __cordl_internal_get__headerType() const;

constexpr ::WebSocketSharp::Net::HttpHeaderType& __cordl_internal_get__headerType() ;

constexpr void __cordl_internal_set__headerName(::StringW  value) ;

constexpr void __cordl_internal_set__headerType(::WebSocketSharp::Net::HttpHeaderType  value) ;

/// @brief Method .ctor, addr 0xb989370, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  headerName, ::WebSocketSharp::Net::HttpHeaderType  headerType) ;

/// @brief Method get_HeaderName, addr 0xb9893c4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_HeaderName() ;

/// @brief Method get_IsMultiValueInRequest, addr 0xb9893ac, size 0xc, virtual false, abstract: false, final false
inline bool get_IsMultiValueInRequest() ;

/// @brief Method get_IsMultiValueInResponse, addr 0xb9893b8, size 0xc, virtual false, abstract: false, final false
inline bool get_IsMultiValueInResponse() ;

/// @brief Method get_IsRequest, addr 0xb9893cc, size 0xc, virtual false, abstract: false, final false
inline bool get_IsRequest() ;

/// @brief Method get_IsResponse, addr 0xb9893d8, size 0xc, virtual false, abstract: false, final false
inline bool get_IsResponse() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpHeaderInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpHeaderInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpHeaderInfo(HttpHeaderInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpHeaderInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpHeaderInfo(HttpHeaderInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30365};

/// @brief Field _headerName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____headerName;

/// @brief Field _headerType, offset: 0x18, size: 0x4, def value: None
 ::WebSocketSharp::Net::HttpHeaderType  ____headerType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Net::HttpHeaderInfo, ____headerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::HttpHeaderInfo, ____headerType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Net::HttpHeaderInfo) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
