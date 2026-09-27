#pragma once
// IWYU pragma private; include "System/Net/Cookie.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CookieVariant_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cookie)
namespace System::Collections {
class IComparer;
}
namespace System::Net {
class Comparer;
}
namespace System::Net {
struct CookieVariant;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class Cookie;
}
// Write type traits
MARK_REF_T(::System::Net::Cookie*);
DEFINE_IL2CPP_CLASS(::System::Net::Cookie*, "System.Net", "Cookie");
// Dependencies System.DateTime, System.Net.CookieVariant, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Cookie
class CORDL_TYPE Cookie : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Comment, put=set_Comment)) ::StringW  Comment;

 __declspec(property(get=get_CommentUri, put=set_CommentUri)) ::System::Uri*  CommentUri;

 __declspec(property(get=get_Discard, put=set_Discard)) bool  Discard;

 __declspec(property(get=get_Domain, put=set_Domain)) ::StringW  Domain;

 __declspec(property(get=get_DomainImplicit, put=set_DomainImplicit)) bool  DomainImplicit;

 __declspec(property(get=get_DomainKey)) ::StringW  DomainKey;

 __declspec(property(get=get_Expired, put=set_Expired)) bool  Expired;

 __declspec(property(get=get_Expires, put=set_Expires)) ::System::DateTime  Expires;

 __declspec(property(get=get_HttpOnly, put=set_HttpOnly)) bool  HttpOnly;

/// @brief Field IsQuotedDomain, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsQuotedDomain, put=__cordl_internal_set_IsQuotedDomain)) bool  IsQuotedDomain;

/// @brief Field IsQuotedVersion, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsQuotedVersion, put=__cordl_internal_set_IsQuotedVersion)) bool  IsQuotedVersion;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Path, put=set_Path)) ::StringW  Path;

 __declspec(property(get=get_Plain)) bool  Plain;

 __declspec(property(get=get_Port, put=set_Port)) ::StringW  Port;

 __declspec(property(get=get_PortList)) ::ArrayW<int32_t>  PortList;

/// @brief Field PortSplitDelimiters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PortSplitDelimiters, put=setStaticF_PortSplitDelimiters)) ::ArrayW<char16_t>  PortSplitDelimiters;

/// @brief Field Reserved2Name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Reserved2Name, put=setStaticF_Reserved2Name)) ::ArrayW<char16_t>  Reserved2Name;

/// @brief Field Reserved2Value, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Reserved2Value, put=setStaticF_Reserved2Value)) ::ArrayW<char16_t>  Reserved2Value;

 __declspec(property(get=get_Secure, put=set_Secure)) bool  Secure;

 __declspec(property(get=get_TimeStamp)) ::System::DateTime  TimeStamp;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

 __declspec(property(get=get_Variant, put=set_Variant)) ::System::Net::CookieVariant  Variant;

 __declspec(property(get=get_Version, put=set_Version)) int32_t  Version;

 __declspec(property(get=get__Domain)) ::StringW  _Domain;

 __declspec(property(get=get__Path)) ::StringW  _Path;

 __declspec(property(get=get__Port)) ::StringW  _Port;

 __declspec(property(get=get__Version)) ::StringW  _Version;

/// @brief Field m_comment, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_comment, put=__cordl_internal_set_m_comment)) ::StringW  m_comment;

/// @brief Field m_commentUri, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_commentUri, put=__cordl_internal_set_m_commentUri)) ::System::Uri*  m_commentUri;

/// @brief Field m_cookieVariant, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cookieVariant, put=__cordl_internal_set_m_cookieVariant)) ::System::Net::CookieVariant  m_cookieVariant;

/// @brief Field m_discard, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_discard, put=__cordl_internal_set_m_discard)) bool  m_discard;

/// @brief Field m_domain, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_domain, put=__cordl_internal_set_m_domain)) ::StringW  m_domain;

/// @brief Field m_domainKey, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_domainKey, put=__cordl_internal_set_m_domainKey)) ::StringW  m_domainKey;

/// @brief Field m_domain_implicit, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_domain_implicit, put=__cordl_internal_set_m_domain_implicit)) bool  m_domain_implicit;

/// @brief Field m_expires, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_expires, put=__cordl_internal_set_m_expires)) ::System::DateTime  m_expires;

/// @brief Field m_httpOnly, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_httpOnly, put=__cordl_internal_set_m_httpOnly)) bool  m_httpOnly;

/// @brief Field m_name, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_name, put=__cordl_internal_set_m_name)) ::StringW  m_name;

/// @brief Field m_path, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_path, put=__cordl_internal_set_m_path)) ::StringW  m_path;

/// @brief Field m_path_implicit, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_path_implicit, put=__cordl_internal_set_m_path_implicit)) bool  m_path_implicit;

/// @brief Field m_port, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_port, put=__cordl_internal_set_m_port)) ::StringW  m_port;

/// @brief Field m_port_implicit, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_port_implicit, put=__cordl_internal_set_m_port_implicit)) bool  m_port_implicit;

/// @brief Field m_port_list, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_port_list, put=__cordl_internal_set_m_port_list)) ::ArrayW<int32_t>  m_port_list;

/// @brief Field m_secure, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_secure, put=__cordl_internal_set_m_secure)) bool  m_secure;

/// @brief Field m_timeStamp, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_timeStamp, put=__cordl_internal_set_m_timeStamp)) ::System::DateTime  m_timeStamp;

/// @brief Field m_value, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_value, put=__cordl_internal_set_m_value)) ::StringW  m_value;

/// @brief Field m_version, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_version, put=__cordl_internal_set_m_version)) int32_t  m_version;

/// @brief Field staticComparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_staticComparer, put=setStaticF_staticComparer)) ::System::Net::Comparer*  staticComparer;

/// @brief Method Clone, addr 0xac786bc, size 0x130, virtual false, abstract: false, final false
inline ::System::Net::Cookie* Clone() ;

/// @brief Method DomainCharsTest, addr 0xac79658, size 0x9c, virtual false, abstract: false, final false
static inline bool DomainCharsTest(::StringW  name) ;

/// @brief Method Equals, addr 0xac799a0, size 0xd0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  comparand) ;

/// @brief Method GetComparer, addr 0xac79948, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::IComparer* GetComparer() ;

/// @brief Method GetHashCode, addr 0xac79a70, size 0x1ec, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method InternalSetName, addr 0xac78514, size 0x110, virtual false, abstract: false, final false
inline bool InternalSetName(::StringW  value) ;

/// @brief Method IsDomainEqualToHost, addr 0xac78bb0, size 0x58, virtual false, abstract: false, final false
static inline bool IsDomainEqualToHost(::StringW  domain, ::StringW  host) ;

static inline ::System::Net::Cookie* New_ctor() ;

static inline ::System::Net::Cookie* New_ctor(::StringW  name, ::StringW  value) ;

static inline ::System::Net::Cookie* New_ctor(::StringW  name, ::StringW  value, ::StringW  path) ;

static inline ::System::Net::Cookie* New_ctor(::StringW  name, ::StringW  value, ::StringW  path, ::StringW  domain) ;

/// @brief Method ToServerString, addr 0xac79f04, size 0x3dc, virtual false, abstract: false, final false
inline ::StringW ToServerString() ;

/// @brief Method ToString, addr 0xac79c5c, size 0x2a8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method VerifySetDefaults, addr 0xac78c08, size 0xa50, virtual false, abstract: false, final false
inline bool VerifySetDefaults(::System::Net::CookieVariant  variant, ::System::Uri*  uri, bool  isLocalDomain, ::StringW  localDomain, bool  set_default, bool  isThrow) ;

constexpr bool const& __cordl_internal_get_IsQuotedDomain() const;

constexpr bool& __cordl_internal_get_IsQuotedDomain() ;

constexpr bool const& __cordl_internal_get_IsQuotedVersion() const;

constexpr bool& __cordl_internal_get_IsQuotedVersion() ;

constexpr ::StringW const& __cordl_internal_get_m_comment() const;

constexpr ::StringW& __cordl_internal_get_m_comment() ;

constexpr ::System::Uri* const& __cordl_internal_get_m_commentUri() const;

constexpr ::System::Uri*& __cordl_internal_get_m_commentUri() ;

constexpr ::System::Net::CookieVariant const& __cordl_internal_get_m_cookieVariant() const;

constexpr ::System::Net::CookieVariant& __cordl_internal_get_m_cookieVariant() ;

constexpr bool const& __cordl_internal_get_m_discard() const;

constexpr bool& __cordl_internal_get_m_discard() ;

constexpr ::StringW const& __cordl_internal_get_m_domain() const;

constexpr ::StringW& __cordl_internal_get_m_domain() ;

constexpr ::StringW const& __cordl_internal_get_m_domainKey() const;

constexpr ::StringW& __cordl_internal_get_m_domainKey() ;

constexpr bool const& __cordl_internal_get_m_domain_implicit() const;

constexpr bool& __cordl_internal_get_m_domain_implicit() ;

constexpr ::System::DateTime const& __cordl_internal_get_m_expires() const;

constexpr ::System::DateTime& __cordl_internal_get_m_expires() ;

constexpr bool const& __cordl_internal_get_m_httpOnly() const;

constexpr bool& __cordl_internal_get_m_httpOnly() ;

constexpr ::StringW const& __cordl_internal_get_m_name() const;

constexpr ::StringW& __cordl_internal_get_m_name() ;

constexpr ::StringW const& __cordl_internal_get_m_path() const;

constexpr ::StringW& __cordl_internal_get_m_path() ;

constexpr bool const& __cordl_internal_get_m_path_implicit() const;

constexpr bool& __cordl_internal_get_m_path_implicit() ;

constexpr ::StringW const& __cordl_internal_get_m_port() const;

constexpr ::StringW& __cordl_internal_get_m_port() ;

constexpr bool const& __cordl_internal_get_m_port_implicit() const;

constexpr bool& __cordl_internal_get_m_port_implicit() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_port_list() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_port_list() ;

constexpr bool const& __cordl_internal_get_m_secure() const;

constexpr bool& __cordl_internal_get_m_secure() ;

constexpr ::System::DateTime const& __cordl_internal_get_m_timeStamp() const;

constexpr ::System::DateTime& __cordl_internal_get_m_timeStamp() ;

constexpr ::StringW const& __cordl_internal_get_m_value() const;

constexpr ::StringW& __cordl_internal_get_m_value() ;

constexpr int32_t const& __cordl_internal_get_m_version() const;

constexpr int32_t& __cordl_internal_get_m_version() ;

constexpr void __cordl_internal_set_IsQuotedDomain(bool  value) ;

constexpr void __cordl_internal_set_IsQuotedVersion(bool  value) ;

constexpr void __cordl_internal_set_m_comment(::StringW  value) ;

constexpr void __cordl_internal_set_m_commentUri(::System::Uri*  value) ;

constexpr void __cordl_internal_set_m_cookieVariant(::System::Net::CookieVariant  value) ;

constexpr void __cordl_internal_set_m_discard(bool  value) ;

constexpr void __cordl_internal_set_m_domain(::StringW  value) ;

constexpr void __cordl_internal_set_m_domainKey(::StringW  value) ;

constexpr void __cordl_internal_set_m_domain_implicit(bool  value) ;

constexpr void __cordl_internal_set_m_expires(::System::DateTime  value) ;

constexpr void __cordl_internal_set_m_httpOnly(bool  value) ;

constexpr void __cordl_internal_set_m_name(::StringW  value) ;

constexpr void __cordl_internal_set_m_path(::StringW  value) ;

constexpr void __cordl_internal_set_m_path_implicit(bool  value) ;

constexpr void __cordl_internal_set_m_port(::StringW  value) ;

constexpr void __cordl_internal_set_m_port_implicit(bool  value) ;

constexpr void __cordl_internal_set_m_port_list(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_secure(bool  value) ;

constexpr void __cordl_internal_set_m_timeStamp(::System::DateTime  value) ;

constexpr void __cordl_internal_set_m_value(::StringW  value) ;

constexpr void __cordl_internal_set_m_version(int32_t  value) ;

/// @brief Method .ctor, addr 0xac77d84, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac77ec8, size 0x174, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  value) ;

/// @brief Method .ctor, addr 0xac781a0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  value, ::StringW  path) ;

/// @brief Method .ctor, addr 0xac78208, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  value, ::StringW  path, ::StringW  domain) ;

static inline ::ArrayW<char16_t> getStaticF_PortSplitDelimiters() ;

static inline ::ArrayW<char16_t> getStaticF_Reserved2Name() ;

static inline ::ArrayW<char16_t> getStaticF_Reserved2Value() ;

static inline ::System::Net::Comparer* getStaticF_staticComparer() ;

/// @brief Method get_Comment, addr 0xac7829c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Comment() ;

/// @brief Method get_CommentUri, addr 0xac782c4, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_CommentUri() ;

/// @brief Method get_Discard, addr 0xac782e4, size 0x8, virtual false, abstract: false, final false
inline bool get_Discard() ;

/// @brief Method get_Domain, addr 0xac782f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Domain() ;

/// @brief Method get_DomainImplicit, addr 0xac783d4, size 0x8, virtual false, abstract: false, final false
inline bool get_DomainImplicit() ;

/// @brief Method get_DomainKey, addr 0xac79824, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_DomainKey() ;

/// @brief Method get_Expired, addr 0xac783e4, size 0xb4, virtual false, abstract: false, final false
inline bool get_Expired() ;

/// @brief Method get_Expires, addr 0xac784fc, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_Expires() ;

/// @brief Method get_HttpOnly, addr 0xac782d4, size 0x8, virtual false, abstract: false, final false
inline bool get_HttpOnly() ;

/// @brief Method get_Name, addr 0xac7850c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Path, addr 0xac78624, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_Plain, addr 0xac783c4, size 0x10, virtual false, abstract: false, final false
inline bool get_Plain() ;

/// @brief Method get_Port, addr 0xac796f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Port() ;

/// @brief Method get_PortList, addr 0xac796fc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_PortList() ;

/// @brief Method get_Secure, addr 0xac797c8, size 0x8, virtual false, abstract: false, final false
inline bool get_Secure() ;

/// @brief Method get_TimeStamp, addr 0xac797d8, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_TimeStamp() ;

/// @brief Method get_Value, addr 0xac797e0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_Variant, addr 0xac79814, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::CookieVariant get_Variant() ;

/// @brief Method get_Version, addr 0xac79840, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Method get__Domain, addr 0xac782fc, size 0xc8, virtual false, abstract: false, final false
inline ::StringW get__Domain() ;

/// @brief Method get__Path, addr 0xac7862c, size 0x90, virtual false, abstract: false, final false
inline ::StringW get__Path() ;

/// @brief Method get__Port, addr 0xac79704, size 0xc4, virtual false, abstract: false, final false
inline ::StringW get__Port() ;

/// @brief Method get__Version, addr 0xac79848, size 0x100, virtual false, abstract: false, final false
inline ::StringW get__Version() ;

static inline void setStaticF_PortSplitDelimiters(::ArrayW<char16_t>  value) ;

static inline void setStaticF_Reserved2Name(::ArrayW<char16_t>  value) ;

static inline void setStaticF_Reserved2Value(::ArrayW<char16_t>  value) ;

static inline void setStaticF_staticComparer(::System::Net::Comparer*  value) ;

/// @brief Method set_Comment, addr 0xac782a4, size 0x20, virtual false, abstract: false, final false
inline void set_Comment(::StringW  value) ;

/// @brief Method set_CommentUri, addr 0xac782cc, size 0x8, virtual false, abstract: false, final false
inline void set_CommentUri(::System::Uri*  value) ;

/// @brief Method set_Discard, addr 0xac782ec, size 0x8, virtual false, abstract: false, final false
inline void set_Discard(bool  value) ;

/// @brief Method set_Domain, addr 0xac78240, size 0x5c, virtual false, abstract: false, final false
inline void set_Domain(::StringW  value) ;

/// @brief Method set_DomainImplicit, addr 0xac783dc, size 0x8, virtual false, abstract: false, final false
inline void set_DomainImplicit(bool  value) ;

/// @brief Method set_Expired, addr 0xac78498, size 0x64, virtual false, abstract: false, final false
inline void set_Expired(bool  value) ;

/// @brief Method set_Expires, addr 0xac78504, size 0x8, virtual false, abstract: false, final false
inline void set_Expires(::System::DateTime  value) ;

/// @brief Method set_HttpOnly, addr 0xac782dc, size 0x8, virtual false, abstract: false, final false
inline void set_HttpOnly(bool  value) ;

/// @brief Method set_Name, addr 0xac7803c, size 0x164, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_Path, addr 0xac781c8, size 0x40, virtual false, abstract: false, final false
inline void set_Path(::StringW  value) ;

/// @brief Method set_Port, addr 0xac787ec, size 0x354, virtual false, abstract: false, final false
inline void set_Port(::StringW  value) ;

/// @brief Method set_Secure, addr 0xac797d0, size 0x8, virtual false, abstract: false, final false
inline void set_Secure(bool  value) ;

/// @brief Method set_Value, addr 0xac797e8, size 0x2c, virtual false, abstract: false, final false
inline void set_Value(::StringW  value) ;

/// @brief Method set_Variant, addr 0xac7981c, size 0x8, virtual false, abstract: false, final false
inline void set_Variant(::System::Net::CookieVariant  value) ;

/// @brief Method set_Version, addr 0xac78b40, size 0x70, virtual false, abstract: false, final false
inline void set_Version(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cookie() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Cookie(Cookie && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cookie(Cookie const& ) = delete;

/// @brief Field CommentAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  CommentAttributeName{u"Comment"};

/// @brief Field CommentUrlAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  CommentUrlAttributeName{u"CommentURL"};

/// @brief Field DiscardAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  DiscardAttributeName{u"Discard"};

/// @brief Field DomainAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  DomainAttributeName{u"Domain"};

/// @brief Field EqualsLiteral offset 0xffffffff size 0x8
static constexpr ::ConstString  EqualsLiteral{u"="};

/// @brief Field ExpiresAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  ExpiresAttributeName{u"Expires"};

/// @brief Field HttpOnlyAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  HttpOnlyAttributeName{u"HttpOnly"};

/// @brief Field MaxAgeAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  MaxAgeAttributeName{u"Max-Age"};

/// @brief Field MaxSupportedVersion offset 0xffffffff size 0x4
static constexpr int32_t  MaxSupportedVersion{static_cast<int32_t>(0x1)};

/// @brief Field PathAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  PathAttributeName{u"Path"};

/// @brief Field PortAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  PortAttributeName{u"Port"};

/// @brief Field QuotesLiteral offset 0xffffffff size 0x8
static constexpr ::ConstString  QuotesLiteral{u"\""};

/// @brief Field SecureAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  SecureAttributeName{u"Secure"};

/// @brief Field SeparatorLiteral offset 0xffffffff size 0x8
static constexpr ::ConstString  SeparatorLiteral{u"; "};

/// @brief Field SpecialAttributeLiteral offset 0xffffffff size 0x8
static constexpr ::ConstString  SpecialAttributeLiteral{u"$"};

/// @brief Field VersionAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  VersionAttributeName{u"Version"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10618};

/// @brief Field m_comment, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_comment;

/// @brief Field m_commentUri, offset: 0x18, size: 0x8, def value: None
 ::System::Uri*  ___m_commentUri;

/// @brief Field m_cookieVariant, offset: 0x20, size: 0x4, def value: None
 ::System::Net::CookieVariant  ___m_cookieVariant;

/// @brief Field m_discard, offset: 0x24, size: 0x1, def value: None
 bool  ___m_discard;

/// @brief Field m_domain, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_domain;

/// @brief Field m_domain_implicit, offset: 0x30, size: 0x1, def value: None
 bool  ___m_domain_implicit;

/// @brief Field m_expires, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ___m_expires;

/// @brief Field m_name, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___m_name;

/// @brief Field m_path, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___m_path;

/// @brief Field m_path_implicit, offset: 0x50, size: 0x1, def value: None
 bool  ___m_path_implicit;

/// @brief Field m_port, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___m_port;

/// @brief Field m_port_implicit, offset: 0x60, size: 0x1, def value: None
 bool  ___m_port_implicit;

/// @brief Field m_port_list, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_port_list;

/// @brief Field m_secure, offset: 0x70, size: 0x1, def value: None
 bool  ___m_secure;

/// [OptionalField]
/// @brief Field m_httpOnly, offset: 0x71, size: 0x1, def value: None
 bool  ___m_httpOnly;

/// @brief Field m_timeStamp, offset: 0x78, size: 0x8, def value: None
 ::System::DateTime  ___m_timeStamp;

/// @brief Field m_value, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___m_value;

/// @brief Field m_version, offset: 0x88, size: 0x4, def value: None
 int32_t  ___m_version;

/// @brief Field m_domainKey, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___m_domainKey;

/// @brief Field IsQuotedVersion, offset: 0x98, size: 0x1, def value: None
 bool  ___IsQuotedVersion;

/// @brief Field IsQuotedDomain, offset: 0x99, size: 0x1, def value: None
 bool  ___IsQuotedDomain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Cookie, ___m_comment) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_commentUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_cookieVariant) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_discard) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_domain) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_domain_implicit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_expires) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_name) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_path) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_path_implicit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_port) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_port_implicit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_port_list) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_secure) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_httpOnly) == 0x71, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_timeStamp) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_value) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_version) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_domainKey) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___IsQuotedVersion) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___IsQuotedDomain) == 0x99, "Offset mismatch!");

static_assert(sizeof(::System::Net::Cookie) == 0xa0, "Size mismatch!");

} // namespace end def System::Net
