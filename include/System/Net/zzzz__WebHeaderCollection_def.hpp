#pragma once
// IWYU pragma private; include "System/Net/WebHeaderCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Net/zzzz__WebHeaderCollectionType_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_RfcChar_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebHeaderCollection)
namespace GlobalNamespace {
struct WebHeaderCollection_RfcChar;
}
namespace System::Collections::Specialized {
class NameObjectCollectionBase_KeysCollection;
}
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
struct DataParseStatus;
}
namespace System::Net {
class HeaderInfoTable;
}
namespace System::Net {
struct HttpRequestHeader;
}
namespace System::Net {
struct HttpResponseHeader;
}
namespace System::Net {
struct WebHeaderCollectionType;
}
namespace System::Net {
class WebHeaderCollection_HeaderEncoding;
}
namespace System::Net {
struct WebParseError;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebHeaderCollection_HeaderEncoding;
}
// Write type traits
MARK_REF_T(::System::Net::WebHeaderCollection*);
MARK_REF_T(::System::Net::WebHeaderCollection_HeaderEncoding*);
DEFINE_IL2CPP_CLASS(::System::Net::WebHeaderCollection*, "System.Net", "WebHeaderCollection");
DEFINE_IL2CPP_CLASS(::System::Net::WebHeaderCollection_HeaderEncoding*, "System.Net", "WebHeaderCollection/HeaderEncoding");
// [DefaultMember("Item")]
// [ComVisible(true)]
// Dependencies System.Collections.Specialized.NameValueCollection, System.Net.WebHeaderCollection::RfcChar, System.Net.WebHeaderCollectionType
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebHeaderCollection
class CORDL_TYPE WebHeaderCollection : public ::System::Collections::Specialized::NameValueCollection {
public:
// Declarations
using RfcChar = ::GlobalNamespace::WebHeaderCollection_RfcChar;

using HeaderEncoding = ::System::Net::WebHeaderCollection_HeaderEncoding;

 __declspec(property(get=get_AllKeys)) ::ArrayW<::StringW>  AllKeys;

 __declspec(property(get=get_AllowHttpRequestHeader)) bool  AllowHttpRequestHeader;

 __declspec(property(get=get_AllowHttpResponseHeader)) bool  AllowHttpResponseHeader;

 __declspec(property(get=get_CacheControl)) ::StringW  CacheControl;

 __declspec(property(get=get_ContentLength)) ::StringW  ContentLength;

 __declspec(property(get=get_ContentType)) ::StringW  ContentType;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Date)) ::StringW  Date;

 __declspec(property(get=get_ETag)) ::StringW  ETag;

 __declspec(property(get=get_Expires)) ::StringW  Expires;

/// @brief Field HInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HInfo, put=setStaticF_HInfo)) ::System::Net::HeaderInfoTable*  HInfo;

/// @brief Field HttpTrimCharacters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HttpTrimCharacters, put=setStaticF_HttpTrimCharacters)) ::ArrayW<char16_t>  HttpTrimCharacters;

 __declspec(property(get=get_InnerCollection)) ::System::Collections::Specialized::NameValueCollection*  InnerCollection;

 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*  Keys;

 __declspec(property(get=get_LastModified)) ::StringW  LastModified;

 __declspec(property(get=get_Location)) ::StringW  Location;

 __declspec(property(get=get_ProxyAuthenticate)) ::StringW  ProxyAuthenticate;

/// @brief Field RfcCharMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RfcCharMap, put=setStaticF_RfcCharMap)) ::ArrayW<::GlobalNamespace::WebHeaderCollection_RfcChar>  RfcCharMap;

 __declspec(property(get=get_Server)) ::StringW  Server;

 __declspec(property(get=get_SetCookie)) ::StringW  SetCookie;

 __declspec(property(get=get_SetCookie2)) ::StringW  SetCookie2;

 __declspec(property(get=get_Via)) ::StringW  Via;

/// @brief Field m_CommonHeaders, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CommonHeaders, put=__cordl_internal_set_m_CommonHeaders)) ::ArrayW<::StringW>  m_CommonHeaders;

/// @brief Field m_InnerCollection, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InnerCollection, put=__cordl_internal_set_m_InnerCollection)) ::System::Collections::Specialized::NameValueCollection*  m_InnerCollection;

/// @brief Field m_NumCommonHeaders, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumCommonHeaders, put=__cordl_internal_set_m_NumCommonHeaders)) int32_t  m_NumCommonHeaders;

/// @brief Field m_Type, offset 0x80, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_Type, put=__cordl_internal_set_m_Type)) ::System::Net::WebHeaderCollectionType  m_Type;

/// @brief Field s_CommonHeaderHints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CommonHeaderHints, put=setStaticF_s_CommonHeaderHints)) ::ArrayW<int8_t>  s_CommonHeaderHints;

/// @brief Field s_CommonHeaderNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CommonHeaderNames, put=setStaticF_s_CommonHeaderNames)) ::ArrayW<::StringW>  s_CommonHeaderNames;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Add, addr 0xac5fc64, size 0x2d0, virtual false, abstract: false, final false
inline void Add(::StringW  header) ;

/// @brief Method Add, addr 0xac5e47c, size 0x108, virtual false, abstract: false, final false
inline void Add(::System::Net::HttpRequestHeader  header, ::StringW  value) ;

/// @brief Method Add, addr 0xac5e584, size 0x1e8, virtual false, abstract: false, final false
inline void Add(::System::Net::HttpResponseHeader  header, ::StringW  value) ;

/// @brief Method Add, addr 0xac5fab4, size 0x1b0, virtual true, abstract: false, final false
inline void Add(::StringW  name, ::StringW  value) ;

/// @brief Method AddInternal, addr 0xac5f630, size 0x54, virtual false, abstract: false, final false
inline void AddInternal(::StringW  name, ::StringW  value) ;

/// @brief Method AddInternalNotCommon, addr 0xac5f7ac, size 0x4c, virtual false, abstract: false, final false
inline void AddInternalNotCommon(::StringW  name, ::StringW  value) ;

/// @brief Method AddWithoutValidate, addr 0xac5f044, size 0x1a4, virtual false, abstract: false, final false
inline void AddWithoutValidate(::StringW  headerName, ::StringW  headerValue) ;

/// @brief Method AllowMultiValues, addr 0xac5de38, size 0xac, virtual false, abstract: false, final false
static inline bool AllowMultiValues(::StringW  name) ;

/// @brief Method ChangeInternal, addr 0xac5f684, size 0x54, virtual false, abstract: false, final false
inline void ChangeInternal(::StringW  name, ::StringW  value) ;

/// @brief Method CheckBadChars, addr 0xac5f1e8, size 0x36c, virtual false, abstract: false, final false
static inline ::StringW CheckBadChars(::StringW  name, bool  isHeaderValue) ;

/// @brief Method CheckUpdate, addr 0xac5f734, size 0x78, virtual false, abstract: false, final false
inline void CheckUpdate(::StringW  name, ::StringW  value) ;

/// @brief Method Clear, addr 0xac622a8, size 0x48, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method ContainsNonAsciiChars, addr 0xac5f7f8, size 0x88, virtual false, abstract: false, final false
static inline bool ContainsNonAsciiChars(::StringW  token) ;

/// @brief Method Get, addr 0xac621b8, size 0x40, virtual true, abstract: false, final false
inline ::StringW Get(int32_t  index) ;

/// @brief Method Get, addr 0xac61d90, size 0x32c, virtual true, abstract: false, final false
inline ::StringW Get(::StringW  name) ;

/// @brief Method GetAsString, addr 0xac604f4, size 0x2a0, virtual false, abstract: false, final false
static inline ::StringW GetAsString(::System::Collections::Specialized::NameValueCollection*  cc, bool  winInetCompat, bool  forTrace) ;

/// @brief Method GetEnumerator, addr 0xac620bc, size 0x74, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetKey, addr 0xac62238, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetKey(int32_t  index) ;

/// @brief Method GetObjectData, addr 0xac60e10, size 0x180, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetValues, addr 0xac60294, size 0x204, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> GetValues(::StringW  header) ;

/// @brief Method GetValues, addr 0xac621f8, size 0x40, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> GetValues(int32_t  index) ;

/// @brief Method InternalHasKeys, addr 0xac62190, size 0x28, virtual true, abstract: false, final false
inline bool InternalHasKeys() ;

/// @brief Method IsRestricted, addr 0xac6080c, size 0x58, virtual false, abstract: false, final false
static inline bool IsRestricted(::StringW  headerName) ;

/// @brief Method IsRestricted, addr 0xac60864, size 0xdc, virtual false, abstract: false, final false
static inline bool IsRestricted(::StringW  headerName, bool  response) ;

/// @brief Method IsValidToken, addr 0xac5f880, size 0xc0, virtual false, abstract: false, final false
static inline bool IsValidToken(::StringW  token) ;

static inline ::System::Net::WebHeaderCollection* New_ctor() ;

static inline ::System::Net::WebHeaderCollection* New_ctor(::System::Collections::Specialized::NameValueCollection*  cc) ;

static inline ::System::Net::WebHeaderCollection* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

static inline ::System::Net::WebHeaderCollection* New_ctor(::System::Net::WebHeaderCollectionType  type) ;

/// @brief Method NormalizeCommonHeaders, addr 0xac5dc78, size 0x118, virtual false, abstract: false, final false
inline void NormalizeCommonHeaders() ;

/// @brief Method OnDeserialization, addr 0xac60e0c, size 0x4, virtual true, abstract: false, final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method ParseHeaders, addr 0xac60f90, size 0x4d0, virtual false, abstract: false, final false
inline ::System::Net::DataParseStatus ParseHeaders(::ArrayW<uint8_t>  buffer, int32_t  size, ::by_ref<int32_t>  unparsed, ::by_ref<int32_t>  totalResponseHeadersLength, int32_t  maximumResponseHeadersLength, ::by_ref<::System::Net::WebParseError>  parseError) ;

/// @brief Method ParseHeadersStrict, addr 0xac61460, size 0x924, virtual false, abstract: false, final false
inline ::System::Net::DataParseStatus ParseHeadersStrict(::ArrayW<uint8_t>  buffer, int32_t  size, ::by_ref<int32_t>  unparsed, ::by_ref<int32_t>  totalResponseHeadersLength, int32_t  maximumResponseHeadersLength, ::by_ref<::System::Net::WebParseError>  parseError) ;

/// @brief Method Remove, addr 0xac5ee54, size 0xf8, virtual false, abstract: false, final false
inline void Remove(::System::Net::HttpRequestHeader  header) ;

/// @brief Method Remove, addr 0xac5ef4c, size 0xf8, virtual false, abstract: false, final false
inline void Remove(::System::Net::HttpResponseHeader  header) ;

/// @brief Method Remove, addr 0xac6015c, size 0x138, virtual true, abstract: false, final false
inline void Remove(::StringW  name) ;

/// @brief Method RemoveInternal, addr 0xac5f6d8, size 0x5c, virtual false, abstract: false, final false
inline void RemoveInternal(::StringW  name) ;

/// @brief Method Set, addr 0xac5e76c, size 0x108, virtual false, abstract: false, final false
inline void Set(::System::Net::HttpRequestHeader  header, ::StringW  value) ;

/// @brief Method Set, addr 0xac5e874, size 0x1e8, virtual false, abstract: false, final false
inline void Set(::System::Net::HttpResponseHeader  header, ::StringW  value) ;

/// @brief Method Set, addr 0xac5ff34, size 0x228, virtual true, abstract: false, final false
inline void Set(::StringW  name, ::StringW  value) ;

/// @brief Method SetAddVerified, addr 0xac5f554, size 0xdc, virtual false, abstract: false, final false
inline void SetAddVerified(::StringW  name, ::StringW  value) ;

/// @brief Method SetInternal, addr 0xac5ea5c, size 0x1dc, virtual false, abstract: false, final false
inline void SetInternal(::System::Net::HttpResponseHeader  header, ::StringW  value) ;

/// @brief Method SetInternal, addr 0xac5ec38, size 0x21c, virtual false, abstract: false, final false
inline void SetInternal(::StringW  name, ::StringW  value) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xac61d84, size 0xc, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method ThrowOnRestrictedHeader, addr 0xac5f940, size 0x174, virtual false, abstract: false, final false
inline void ThrowOnRestrictedHeader(::StringW  headerName) ;

/// @brief Method ToByteArray, addr 0xac607f0, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Method ToString, addr 0xac60498, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xac60794, size 0x5c, virtual false, abstract: false, final false
inline ::StringW ToString(bool  forTrace) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_CommonHeaders() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_CommonHeaders() ;

constexpr ::System::Collections::Specialized::NameValueCollection* const& __cordl_internal_get_m_InnerCollection() const;

constexpr ::System::Collections::Specialized::NameValueCollection*& __cordl_internal_get_m_InnerCollection() ;

constexpr int32_t const& __cordl_internal_get_m_NumCommonHeaders() const;

constexpr int32_t& __cordl_internal_get_m_NumCommonHeaders() ;

constexpr ::System::Net::WebHeaderCollectionType const& __cordl_internal_get_m_Type() const;

constexpr ::System::Net::WebHeaderCollectionType& __cordl_internal_get_m_Type() ;

constexpr void __cordl_internal_set_m_CommonHeaders(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_m_InnerCollection(::System::Collections::Specialized::NameValueCollection*  value) ;

constexpr void __cordl_internal_set_m_NumCommonHeaders(int32_t  value) ;

constexpr void __cordl_internal_set_m_Type(::System::Net::WebHeaderCollectionType  value) ;

/// @brief Method .ctor, addr 0xac46194, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac60a3c, size 0x204, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Specialized::NameValueCollection*  cc) ;

/// @brief Method .ctor, addr 0xac60c40, size 0x1cc, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method .ctor, addr 0xac60940, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebHeaderCollectionType  type) ;

static inline ::System::Net::HeaderInfoTable* getStaticF_HInfo() ;

static inline ::ArrayW<char16_t> getStaticF_HttpTrimCharacters() ;

static inline ::ArrayW<::GlobalNamespace::WebHeaderCollection_RfcChar> getStaticF_RfcCharMap() ;

static inline ::ArrayW<int8_t> getStaticF_s_CommonHeaderHints() ;

static inline ::ArrayW<::StringW> getStaticF_s_CommonHeaderNames() ;

/// @brief Method get_AllKeys, addr 0xac62278, size 0x30, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_AllKeys() ;

/// @brief Method get_AllowHttpRequestHeader, addr 0xac5dee4, size 0x44, virtual false, abstract: false, final false
inline bool get_AllowHttpRequestHeader() ;

/// @brief Method get_AllowHttpResponseHeader, addr 0xac5df28, size 0x48, virtual false, abstract: false, final false
inline bool get_AllowHttpResponseHeader() ;

/// @brief Method get_CacheControl, addr 0xac5d468, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_CacheControl() ;

/// @brief Method get_ContentLength, addr 0xac5d3bc, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_ContentLength() ;

/// @brief Method get_ContentType, addr 0xac5d514, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_ContentType() ;

/// @brief Method get_Count, addr 0xac62130, size 0x30, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Date, addr 0xac5d5c0, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_Date() ;

/// @brief Method get_ETag, addr 0xac5d718, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_ETag() ;

/// @brief Method get_Expires, addr 0xac5d66c, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_Expires() ;

/// @brief Method get_InnerCollection, addr 0xac5dd90, size 0xa8, virtual false, abstract: false, final false
inline ::System::Collections::Specialized::NameValueCollection* get_InnerCollection() ;

/// @brief Method get_Item, addr 0xac5df70, size 0xf0, virtual false, abstract: false, final false
inline ::StringW get_Item(::System::Net::HttpRequestHeader  header) ;

/// @brief Method get_Item, addr 0xac5e160, size 0x13c, virtual false, abstract: false, final false
inline ::StringW get_Item(::System::Net::HttpResponseHeader  header) ;

/// @brief Method get_Keys, addr 0xac62160, size 0x30, virtual true, abstract: false, final false
inline ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* get_Keys() ;

/// @brief Method get_LastModified, addr 0xac5d7c4, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_LastModified() ;

/// @brief Method get_Location, addr 0xac5d870, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_Location() ;

/// @brief Method get_ProxyAuthenticate, addr 0xac5d91c, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_ProxyAuthenticate() ;

/// @brief Method get_Server, addr 0xac5db20, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_Server() ;

/// @brief Method get_SetCookie, addr 0xac5da74, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_SetCookie() ;

/// @brief Method get_SetCookie2, addr 0xac5d9c8, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_SetCookie2() ;

/// @brief Method get_Via, addr 0xac5dbcc, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_Via() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

static inline void setStaticF_HInfo(::System::Net::HeaderInfoTable*  value) ;

static inline void setStaticF_HttpTrimCharacters(::ArrayW<char16_t>  value) ;

static inline void setStaticF_RfcCharMap(::ArrayW<::GlobalNamespace::WebHeaderCollection_RfcChar>  value) ;

static inline void setStaticF_s_CommonHeaderHints(::ArrayW<int8_t>  value) ;

static inline void setStaticF_s_CommonHeaderNames(::ArrayW<::StringW>  value) ;

/// @brief Method set_Item, addr 0xac5e060, size 0x100, virtual false, abstract: false, final false
inline void set_Item(::System::Net::HttpRequestHeader  header, ::StringW  value) ;

/// @brief Method set_Item, addr 0xac5e29c, size 0x1e0, virtual false, abstract: false, final false
inline void set_Item(::System::Net::HttpResponseHeader  header, ::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebHeaderCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebHeaderCollection(WebHeaderCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebHeaderCollection(WebHeaderCollection const& ) = delete;

/// @brief Field ApproxAveHeaderLineSize offset 0xffffffff size 0x4
static constexpr int32_t  ApproxAveHeaderLineSize{static_cast<int32_t>(0x1e)};

/// @brief Field ApproxHighAvgNumHeaders offset 0xffffffff size 0x4
static constexpr int32_t  ApproxHighAvgNumHeaders{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10557};

/// @brief Field c_AcceptRanges offset 0xffffffff size 0x4
static constexpr int32_t  c_AcceptRanges{static_cast<int32_t>(0x0)};

/// @brief Field c_CacheControl offset 0xffffffff size 0x4
static constexpr int32_t  c_CacheControl{static_cast<int32_t>(0x2)};

/// @brief Field c_ContentLength offset 0xffffffff size 0x4
static constexpr int32_t  c_ContentLength{static_cast<int32_t>(0x1)};

/// @brief Field c_ContentType offset 0xffffffff size 0x4
static constexpr int32_t  c_ContentType{static_cast<int32_t>(0x3)};

/// @brief Field c_Date offset 0xffffffff size 0x4
static constexpr int32_t  c_Date{static_cast<int32_t>(0x4)};

/// @brief Field c_ETag offset 0xffffffff size 0x4
static constexpr int32_t  c_ETag{static_cast<int32_t>(0x6)};

/// @brief Field c_Expires offset 0xffffffff size 0x4
static constexpr int32_t  c_Expires{static_cast<int32_t>(0x5)};

/// @brief Field c_LastModified offset 0xffffffff size 0x4
static constexpr int32_t  c_LastModified{static_cast<int32_t>(0x7)};

/// @brief Field c_Location offset 0xffffffff size 0x4
static constexpr int32_t  c_Location{static_cast<int32_t>(0x8)};

/// @brief Field c_P3P offset 0xffffffff size 0x4
static constexpr int32_t  c_P3P{static_cast<int32_t>(0xa)};

/// @brief Field c_ProxyAuthenticate offset 0xffffffff size 0x4
static constexpr int32_t  c_ProxyAuthenticate{static_cast<int32_t>(0x9)};

/// @brief Field c_Server offset 0xffffffff size 0x4
static constexpr int32_t  c_Server{static_cast<int32_t>(0xd)};

/// @brief Field c_SetCookie offset 0xffffffff size 0x4
static constexpr int32_t  c_SetCookie{static_cast<int32_t>(0xc)};

/// @brief Field c_SetCookie2 offset 0xffffffff size 0x4
static constexpr int32_t  c_SetCookie2{static_cast<int32_t>(0xb)};

/// @brief Field c_Via offset 0xffffffff size 0x4
static constexpr int32_t  c_Via{static_cast<int32_t>(0xe)};

/// @brief Field c_WwwAuthenticate offset 0xffffffff size 0x4
static constexpr int32_t  c_WwwAuthenticate{static_cast<int32_t>(0xf)};

/// @brief Field c_XAspNetVersion offset 0xffffffff size 0x4
static constexpr int32_t  c_XAspNetVersion{static_cast<int32_t>(0x10)};

/// @brief Field c_XPoweredBy offset 0xffffffff size 0x4
static constexpr int32_t  c_XPoweredBy{static_cast<int32_t>(0x11)};

/// @brief Field m_CommonHeaders, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_CommonHeaders;

/// @brief Field m_NumCommonHeaders, offset: 0x70, size: 0x4, def value: None
 int32_t  ___m_NumCommonHeaders;

/// @brief Field m_InnerCollection, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Specialized::NameValueCollection*  ___m_InnerCollection;

/// @brief Field m_Type, offset: 0x80, size: 0x2, def value: None
 ::System::Net::WebHeaderCollectionType  ___m_Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_CommonHeaders) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_NumCommonHeaders) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_InnerCollection) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_Type) == 0x80, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebHeaderCollection) == 0x88, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebHeaderCollection/HeaderEncoding
class CORDL_TYPE WebHeaderCollection_HeaderEncoding : public ::System::Object {
public:
// Declarations
/// [FriendAccessAllowed]
/// @brief Method DecodeUtf8FromString, addr 0xac62ad4, size 0x214, virtual false, abstract: false, final false
static inline ::StringW DecodeUtf8FromString(::StringW  input) ;

/// @brief Method GetByteCount, addr 0xac629c8, size 0x14, virtual false, abstract: false, final false
static inline int32_t GetByteCount(::StringW  myString) ;

/// @brief Method GetBytes, addr 0xac62a5c, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetBytes(::StringW  myString) ;

/// @brief Method GetBytes, addr 0xac629dc, size 0x80, virtual false, abstract: false, final false
static inline void GetBytes(::StringW  myString, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteIndex) ;

/// @brief Method GetString, addr 0xac628a4, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetString(::ArrayW<uint8_t>  bytes, int32_t  byteIndex, int32_t  byteCount) ;

/// @brief Method GetString, addr 0xac628cc, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW GetString(uint8_t*  pBytes, int32_t  byteCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebHeaderCollection_HeaderEncoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection_HeaderEncoding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebHeaderCollection_HeaderEncoding(WebHeaderCollection_HeaderEncoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection_HeaderEncoding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebHeaderCollection_HeaderEncoding(WebHeaderCollection_HeaderEncoding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10555};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebHeaderCollection_HeaderEncoding) == 0x10, "Size mismatch!");

} // namespace end def System::Net
