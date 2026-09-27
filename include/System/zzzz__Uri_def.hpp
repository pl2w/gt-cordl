#pragma once
// IWYU pragma private; include "System/Uri.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UriFormat_def.hpp"
#include "System/zzzz__UriIdnScope_def.hpp"
#include "System/zzzz__UriKind_def.hpp"
#include "System/zzzz__Uri_Flags_def.hpp"
#include "System/zzzz__Uri_Offset_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Uri)
namespace GlobalNamespace {
struct Uri_Check;
}
namespace GlobalNamespace {
struct Uri_Flags;
}
namespace GlobalNamespace {
struct Uri_Offset;
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
namespace System {
struct ParsingError;
}
namespace System {
struct UriComponents;
}
namespace System {
class UriFormatException;
}
namespace System {
struct UriFormat;
}
namespace System {
struct UriHostNameType;
}
namespace System {
struct UriKind;
}
namespace System {
class UriParser;
}
namespace System {
class Uri_MoreInfo;
}
namespace System {
class Uri_UriInfo;
}
// Forward declare root types
namespace System {
class Uri;
}
namespace System {
class Uri_MoreInfo;
}
namespace System {
class Uri_UriInfo;
}
// Write type traits
MARK_REF_T(::System::Uri*);
MARK_REF_T(::System::Uri_MoreInfo*);
MARK_REF_T(::System::Uri_UriInfo*);
DEFINE_IL2CPP_CLASS(::System::Uri*, "System", "Uri");
DEFINE_IL2CPP_CLASS(::System::Uri_MoreInfo*, "System", "Uri/MoreInfo");
DEFINE_IL2CPP_CLASS(::System::Uri_UriInfo*, "System", "Uri/UriInfo");
// [TypeConverter(typeof(System.UriTypeConverter))]
// Dependencies System.Object, System.Uri::Flags, System.UriFormat, System.UriIdnScope, System.UriKind
namespace System {
// Is value type: false
// CS Name: System.Uri
class CORDL_TYPE Uri : public ::System::Object {
public:
// Declarations
using Check = ::GlobalNamespace::Uri_Check;

using Flags = ::GlobalNamespace::Uri_Flags;

using Offset = ::GlobalNamespace::Uri_Offset;

using MoreInfo = ::System::Uri_MoreInfo;

using UriInfo = ::System::Uri_UriInfo;

 __declspec(property(get=get_AbsolutePath)) ::StringW  AbsolutePath;

 __declspec(property(get=get_AbsoluteUri)) ::StringW  AbsoluteUri;

 __declspec(property(get=get_AllowIdn)) bool  AllowIdn;

 __declspec(property(get=get_Authority)) ::StringW  Authority;

 __declspec(property(get=get_DnsSafeHost)) ::StringW  DnsSafeHost;

 __declspec(property(get=get_Fragment)) ::StringW  Fragment;

 __declspec(property(get=get_HasAuthority)) bool  HasAuthority;

/// @brief Field HexLowerChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HexLowerChars, put=setStaticF_HexLowerChars)) ::ArrayW<char16_t>  HexLowerChars;

 __declspec(property(get=get_Host)) ::StringW  Host;

 __declspec(property(get=get_HostNameType)) ::System::UriHostNameType  HostNameType;

 __declspec(property(get=get_HostType)) ::GlobalNamespace::Uri_Flags  HostType;

 __declspec(property(get=get_IdnHost)) ::StringW  IdnHost;

 __declspec(property(get=get_IsAbsoluteUri)) bool  IsAbsoluteUri;

 __declspec(property(get=get_IsDefaultPort)) bool  IsDefaultPort;

 __declspec(property(get=get_IsDosPath)) bool  IsDosPath;

 __declspec(property(get=get_IsFile)) bool  IsFile;

 __declspec(property(get=get_IsImplicitFile)) bool  IsImplicitFile;

 __declspec(property(get=get_IsLoopback)) bool  IsLoopback;

 __declspec(property(get=get_IsNotAbsoluteUri)) bool  IsNotAbsoluteUri;

 __declspec(property(get=get_IsUnc)) bool  IsUnc;

 __declspec(property(get=get_IsUncOrDosPath)) bool  IsUncOrDosPath;

 __declspec(property(get=get_IsUncPath)) bool  IsUncPath;

/// @brief Field IsWindowsFileSystem, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_IsWindowsFileSystem, put=setStaticF_IsWindowsFileSystem)) bool  IsWindowsFileSystem;

 __declspec(property(get=get_LocalPath)) ::StringW  LocalPath;

 __declspec(property(get=get_OriginalString)) ::StringW  OriginalString;

 __declspec(property(get=get_OriginalStringSwitched)) bool  OriginalStringSwitched;

 __declspec(property(get=get_PathAndQuery)) ::StringW  PathAndQuery;

 __declspec(property(get=get_Port)) int32_t  Port;

 __declspec(property(get=get_PrivateAbsolutePath)) ::StringW  PrivateAbsolutePath;

 __declspec(property(get=get_Query)) ::StringW  Query;

 __declspec(property(get=get_Scheme)) ::StringW  Scheme;

/// @brief Field SchemeDelimiter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SchemeDelimiter, put=setStaticF_SchemeDelimiter)) ::StringW  SchemeDelimiter;

 __declspec(property(get=get_SecuredPathIndex)) uint16_t  SecuredPathIndex;

 __declspec(property(get=get_Segments)) ::ArrayW<::StringW>  Segments;

 __declspec(property(get=get_Syntax)) ::System::UriParser*  Syntax;

/// @brief Field UriSchemeFile, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeFile, put=setStaticF_UriSchemeFile)) ::StringW  UriSchemeFile;

/// @brief Field UriSchemeFtp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeFtp, put=setStaticF_UriSchemeFtp)) ::StringW  UriSchemeFtp;

/// @brief Field UriSchemeGopher, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeGopher, put=setStaticF_UriSchemeGopher)) ::StringW  UriSchemeGopher;

/// @brief Field UriSchemeHttp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeHttp, put=setStaticF_UriSchemeHttp)) ::StringW  UriSchemeHttp;

/// @brief Field UriSchemeHttps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeHttps, put=setStaticF_UriSchemeHttps)) ::StringW  UriSchemeHttps;

/// @brief Field UriSchemeMailto, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeMailto, put=setStaticF_UriSchemeMailto)) ::StringW  UriSchemeMailto;

/// @brief Field UriSchemeNetPipe, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeNetPipe, put=setStaticF_UriSchemeNetPipe)) ::StringW  UriSchemeNetPipe;

/// @brief Field UriSchemeNetTcp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeNetTcp, put=setStaticF_UriSchemeNetTcp)) ::StringW  UriSchemeNetTcp;

/// @brief Field UriSchemeNews, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeNews, put=setStaticF_UriSchemeNews)) ::StringW  UriSchemeNews;

/// @brief Field UriSchemeNntp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeNntp, put=setStaticF_UriSchemeNntp)) ::StringW  UriSchemeNntp;

/// @brief Field UriSchemeWs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeWs, put=setStaticF_UriSchemeWs)) ::StringW  UriSchemeWs;

/// @brief Field UriSchemeWss, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriSchemeWss, put=setStaticF_UriSchemeWss)) ::StringW  UriSchemeWss;

 __declspec(property(get=get_UserDrivenParsing)) bool  UserDrivenParsing;

 __declspec(property(get=get_UserEscaped)) bool  UserEscaped;

 __declspec(property(get=get_UserInfo)) ::StringW  UserInfo;

/// @brief Field _WSchars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__WSchars, put=setStaticF__WSchars)) ::ArrayW<char16_t>  _WSchars;

/// @brief Field m_DnsSafeHost, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DnsSafeHost, put=__cordl_internal_set_m_DnsSafeHost)) ::StringW  m_DnsSafeHost;

/// @brief Field m_Flags, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Flags, put=__cordl_internal_set_m_Flags)) ::GlobalNamespace::Uri_Flags  m_Flags;

/// @brief Field m_Info, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Info, put=__cordl_internal_set_m_Info)) ::System::Uri_UriInfo*  m_Info;

/// @brief Field m_String, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_String, put=__cordl_internal_set_m_String)) ::StringW  m_String;

/// @brief Field m_Syntax, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Syntax, put=__cordl_internal_set_m_Syntax)) ::System::UriParser*  m_Syntax;

/// @brief Field m_iriParsing, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_iriParsing, put=__cordl_internal_set_m_iriParsing)) bool  m_iriParsing;

/// @brief Field m_originalUnicodeString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_originalUnicodeString, put=__cordl_internal_set_m_originalUnicodeString)) ::StringW  m_originalUnicodeString;

/// @brief Field s_ConfigInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_ConfigInitialized, put=setStaticF_s_ConfigInitialized)) bool  s_ConfigInitialized;

/// @brief Field s_ConfigInitializing, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_ConfigInitializing, put=setStaticF_s_ConfigInitializing)) bool  s_ConfigInitializing;

/// @brief Field s_IdnScope, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_IdnScope, put=setStaticF_s_IdnScope)) ::System::UriIdnScope  s_IdnScope;

/// @brief Field s_IriParsing, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_IriParsing, put=setStaticF_s_IriParsing)) bool  s_IriParsing;

/// @brief Field s_initLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_initLock, put=setStaticF_s_initLock)) ::System::Object*  s_initLock;

/// @brief Field useDotNetRelativeOrAbsolute, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_useDotNetRelativeOrAbsolute, put=setStaticF_useDotNetRelativeOrAbsolute)) bool  useDotNetRelativeOrAbsolute;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method AllowIdnStatic, addr 0xac36b00, size 0xc8, virtual false, abstract: false, final false
inline bool AllowIdnStatic(::System::UriParser*  syntax, ::GlobalNamespace::Uri_Flags  flags) ;

/// @brief Method CalculateCaseInsensitiveHashCode, addr 0xac3c818, size 0xa0, virtual false, abstract: false, final false
static inline int32_t CalculateCaseInsensitiveHashCode(::StringW  text) ;

/// @brief Method CheckAuthorityHelper, addr 0xac3e180, size 0xef0, virtual false, abstract: false, final false
inline uint16_t CheckAuthorityHelper(char16_t*  pString, uint16_t  idx, uint16_t  length, ::by_ref<::System::ParsingError>  err, ::by_ref<::GlobalNamespace::Uri_Flags>  flags, ::System::UriParser*  syntax, ::by_ref<::StringW>  newHost) ;

/// @brief Method CheckAuthorityHelperHandleAnyHostIri, addr 0xac4208c, size 0x30c, virtual false, abstract: false, final false
inline void CheckAuthorityHelperHandleAnyHostIri(char16_t*  pString, int32_t  startInput, int32_t  end, bool  iriParsing, bool  hasUnicode, ::System::UriParser*  syntax, ::by_ref<::GlobalNamespace::Uri_Flags>  flags, ::by_ref<::StringW>  newHost, ::by_ref<::System::ParsingError>  err) ;

/// @brief Method CheckAuthorityHelperHandleDnsIri, addr 0xac41cf8, size 0x394, virtual false, abstract: false, final false
inline void CheckAuthorityHelperHandleDnsIri(char16_t*  pString, uint16_t  start, int32_t  end, int32_t  startInput, bool  iriParsing, bool  hasUnicode, ::System::UriParser*  syntax, ::StringW  userInfoString, ::by_ref<::GlobalNamespace::Uri_Flags>  flags, ::by_ref<bool>  justNormalized, ::by_ref<::StringW>  newHost, ::by_ref<::System::ParsingError>  err) ;

/// @brief Method CheckCanonical, addr 0xac3f76c, size 0x3ec, virtual false, abstract: false, final false
inline ::GlobalNamespace::Uri_Check CheckCanonical(char16_t*  str, ::by_ref<uint16_t>  idx, uint16_t  end, char16_t  delim) ;

/// @brief Method CheckForColonInFirstPathSegment, addr 0xac3d2b4, size 0xb8, virtual false, abstract: false, final false
static inline bool CheckForColonInFirstPathSegment(::StringW  uriString) ;

/// @brief Method CheckForConfigLoad, addr 0xac42d50, size 0xe0, virtual false, abstract: false, final false
inline bool CheckForConfigLoad(::StringW  data) ;

/// @brief Method CheckForEscapedUnreserved, addr 0xac42f50, size 0x1d8, virtual false, abstract: false, final false
inline bool CheckForEscapedUnreserved(::StringW  data) ;

/// @brief Method CheckForUnicode, addr 0xac42e30, size 0x120, virtual false, abstract: false, final false
inline bool CheckForUnicode(::StringW  data) ;

/// @brief Method CheckHostName, addr 0xac3c10c, size 0x220, virtual false, abstract: false, final false
static inline ::System::UriHostNameType CheckHostName(::StringW  name) ;

/// @brief Method CheckKnownSchemes, addr 0xac417b0, size 0x548, virtual false, abstract: false, final false
static inline bool CheckKnownSchemes(int64_t*  lptr, uint16_t  nChars, ::by_ref<::System::UriParser*>  syntax) ;

/// @brief Method CheckSchemeName, addr 0xac3c450, size 0x140, virtual false, abstract: false, final false
static inline bool CheckSchemeName(::StringW  schemeName) ;

/// @brief Method CheckSchemeSyntax, addr 0xac39314, size 0x150, virtual false, abstract: false, final false
static inline ::System::ParsingError CheckSchemeSyntax(char16_t*  ptr, uint16_t  length, ::by_ref<::System::UriParser*>  syntax) ;

/// @brief Method CombineUri, addr 0xac3948c, size 0xa30, virtual false, abstract: false, final false
static inline ::StringW CombineUri(::System::Uri*  basePart, ::StringW  relativePart, ::System::UriFormat  uriFormat) ;

/// @brief Method Compress, addr 0xac3b4c4, size 0x4cc, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> Compress(::ArrayW<char16_t>  dest, uint16_t  start, ::by_ref<int32_t>  destLength, ::System::UriParser*  syntax) ;

/// @brief Method CreateHelper, addr 0xac43128, size 0x284, virtual false, abstract: false, final false
static inline ::System::Uri* CreateHelper(::StringW  uriString, bool  dontEscape, ::System::UriKind  uriKind, ::by_ref<::System::UriFormatException*>  e) ;

/// @brief Method CreateHostString, addr 0xac37ee0, size 0x400, virtual false, abstract: false, final false
inline void CreateHostString() ;

/// @brief Method CreateHostStringHelper, addr 0xac3f590, size 0x1dc, virtual false, abstract: false, final false
static inline ::StringW CreateHostStringHelper(::StringW  str, uint16_t  idx, uint16_t  end, ::by_ref<::GlobalNamespace::Uri_Flags>  flags, ::by_ref<::StringW>  scopeId) ;

/// @brief Method CreateThis, addr 0xac38360, size 0x1b4, virtual false, abstract: false, final false
inline void CreateThis(::StringW  uri, bool  dontEscape, ::System::UriKind  uriKind) ;

/// @brief Method CreateThisFromUri, addr 0xac38d40, size 0x14c, virtual false, abstract: false, final false
inline void CreateThisFromUri(::System::Uri*  otherUri) ;

/// @brief Method CreateUri, addr 0xac38668, size 0x19c, virtual false, abstract: false, final false
inline void CreateUri(::System::Uri*  baseUri, ::StringW  relativeUri, bool  dontEscape) ;

/// @brief Method CreateUriInfo, addr 0xac36c90, size 0x5c4, virtual false, abstract: false, final false
inline void CreateUriInfo(::GlobalNamespace::Uri_Flags  cF) ;

/// @brief Method EnsureHostString, addr 0xac37e80, size 0x60, virtual false, abstract: false, final false
inline void EnsureHostString(bool  allowDnsOptimization) ;

/// @brief Method EnsureParseRemaining, addr 0xac37254, size 0x10, virtual false, abstract: false, final false
inline void EnsureParseRemaining() ;

/// @brief Method EnsureUriInfo, addr 0xac36c6c, size 0x24, virtual false, abstract: false, final false
inline ::System::Uri_UriInfo* EnsureUriInfo() ;

/// @brief Method Equals, addr 0xac3cbe0, size 0x604, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  comparand) ;

/// @brief Method EscapeDataString, addr 0xac4406c, size 0x120, virtual false, abstract: false, final false
static inline ::StringW EscapeDataString(::StringW  stringToEscape) ;

/// @brief Method EscapeUnescapeIri, addr 0xac4175c, size 0x54, virtual false, abstract: false, final false
inline ::StringW EscapeUnescapeIri(::StringW  input, int32_t  start, int32_t  end, ::System::UriComponents  component) ;

/// @brief Method EscapeUriString, addr 0xac43f4c, size 0x120, virtual false, abstract: false, final false
static inline ::StringW EscapeUriString(::StringW  stringToEscape) ;

/// @brief Method FindEndOfComponent, addr 0xac4170c, size 0x50, virtual false, abstract: false, final false
inline void FindEndOfComponent(::StringW  input, ::by_ref<uint16_t>  idx, uint16_t  end, char16_t  delim) ;

/// @brief Method FindEndOfComponent, addr 0xac424fc, size 0x8c, virtual false, abstract: false, final false
inline void FindEndOfComponent(char16_t*  str, ::by_ref<uint16_t>  idx, uint16_t  end, char16_t  delim) ;

/// @brief Method FromHex, addr 0xac3c644, size 0x8c, virtual false, abstract: false, final false
static inline int32_t FromHex(char16_t  digit) ;

/// @brief Method GetCanonicalPath, addr 0xac41090, size 0x67c, virtual false, abstract: false, final false
inline ::ArrayW<char16_t> GetCanonicalPath(::ArrayW<char16_t>  dest, ::by_ref<int32_t>  pos, ::System::UriFormat  formatAs) ;

/// @brief Method GetCombinedString, addr 0xac390bc, size 0x258, virtual false, abstract: false, final false
static inline ::System::ParsingError GetCombinedString(::System::Uri*  baseUri, ::StringW  relativeStr, bool  dontEscape, ::by_ref<::StringW>  result) ;

/// @brief Method GetComponents, addr 0xac3fb58, size 0x1c8, virtual false, abstract: false, final false
inline ::StringW GetComponents(::System::UriComponents  components, ::System::UriFormat  format) ;

/// @brief Method GetComponentsHelper, addr 0xac3c998, size 0x214, virtual false, abstract: false, final false
inline ::StringW GetComponentsHelper(::System::UriComponents  uriComponents, ::System::UriFormat  uriFormat) ;

/// @brief Method GetEscapedParts, addr 0xac3fd20, size 0xc8, virtual false, abstract: false, final false
inline ::StringW GetEscapedParts(::System::UriComponents  uriParts) ;

/// @brief Method GetException, addr 0xac39ebc, size 0x19c, virtual false, abstract: false, final false
static inline ::System::UriFormatException* GetException(::System::ParsingError  err) ;

/// @brief Method GetHashCode, addr 0xac3c6d0, size 0x148, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetHostViaCustomSyntax, addr 0xac3f164, size 0x42c, virtual false, abstract: false, final false
inline void GetHostViaCustomSyntax() ;

/// @brief Method GetLocalPath, addr 0xac3a548, size 0x628, virtual false, abstract: false, final false
inline ::StringW GetLocalPath() ;

/// @brief Method GetObjectData, addr 0xac3a164, size 0xd0, virtual false, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetParts, addr 0xac3a234, size 0x4, virtual false, abstract: false, final false
inline ::StringW GetParts(::System::UriComponents  uriParts, ::System::UriFormat  formatAs) ;

/// @brief Method GetRelativeSerializationString, addr 0xac43648, size 0x218, virtual false, abstract: false, final false
inline ::StringW GetRelativeSerializationString(::System::UriFormat  format) ;

/// @brief Method GetUnescapedParts, addr 0xac3b990, size 0xd0, virtual false, abstract: false, final false
inline ::StringW GetUnescapedParts(::System::UriComponents  uriParts, ::System::UriFormat  formatAs) ;

/// @brief Method GetUriPartsFromUserString, addr 0xac3fde8, size 0x5dc, virtual false, abstract: false, final false
inline ::StringW GetUriPartsFromUserString(::System::UriComponents  uriParts) ;

/// @brief Method HexEscape, addr 0xac3c32c, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW HexEscape(char16_t  character) ;

/// @brief Method InFact, addr 0xac36c50, size 0x10, virtual false, abstract: false, final false
inline bool InFact(::GlobalNamespace::Uri_Flags  flags) ;

/// @brief Method InitializeUri, addr 0xac427b4, size 0x59c, virtual false, abstract: false, final false
inline void InitializeUri(::System::ParsingError  err, ::System::UriKind  uriKind, ::by_ref<::System::UriFormatException*>  e) ;

/// @brief Method InitializeUriConfig, addr 0xac3b320, size 0x1a4, virtual false, abstract: false, final false
static inline void InitializeUriConfig() ;

/// @brief Method InternalEscapeString, addr 0xac3d36c, size 0xd4, virtual false, abstract: false, final false
static inline ::StringW InternalEscapeString(::StringW  rawString) ;

/// @brief Method InternalIsWellFormedOriginalString, addr 0xac438a4, size 0x470, virtual false, abstract: false, final false
inline bool InternalIsWellFormedOriginalString() ;

/// @brief Method IriParsingStatic, addr 0xac369a8, size 0x8c, virtual false, abstract: false, final false
static inline bool IriParsingStatic(::System::UriParser*  syntax) ;

/// @brief Method IsAsciiLetter, addr 0xac3c590, size 0x18, virtual false, abstract: false, final false
static inline bool IsAsciiLetter(char16_t  character) ;

/// @brief Method IsAsciiLetterOrDigit, addr 0xac3c5a8, size 0x6c, virtual false, abstract: false, final false
static inline bool IsAsciiLetterOrDigit(char16_t  character) ;

/// @brief Method IsBaseOf, addr 0xac441e0, size 0xb4, virtual false, abstract: false, final false
inline bool IsBaseOf(::System::Uri*  uri) ;

/// @brief Method IsBaseOfHelper, addr 0xac44294, size 0x1f8, virtual false, abstract: false, final false
inline bool IsBaseOfHelper(::System::Uri*  uriLink) ;

/// @brief Method IsBidiControlCharacter, addr 0xac4278c, size 0x28, virtual false, abstract: false, final false
static inline bool IsBidiControlCharacter(char16_t  ch) ;

/// @brief Method IsGenDelim, addr 0xac3c428, size 0x28, virtual false, abstract: false, final false
static inline bool IsGenDelim(char16_t  ch) ;

/// @brief Method IsHexDigit, addr 0xac3c614, size 0x30, virtual false, abstract: false, final false
static inline bool IsHexDigit(char16_t  character) ;

/// @brief Method IsIntranet, addr 0xac36bd4, size 0x8, virtual false, abstract: false, final false
inline bool IsIntranet(::StringW  schemeHost) ;

/// @brief Method IsLWS, addr 0xac3e160, size 0x20, virtual false, abstract: false, final false
static inline bool IsLWS(char16_t  ch) ;

/// @brief Method IsWellFormedOriginalString, addr 0xac43860, size 0x44, virtual false, abstract: false, final false
inline bool IsWellFormedOriginalString() ;

/// @brief Method IsWellFormedUriString, addr 0xac43d14, size 0x9c, virtual false, abstract: false, final false
static inline bool IsWellFormedUriString(::StringW  uriString, ::System::UriKind  uriKind) ;

static inline ::System::Uri* New_ctor(::System::Uri*  baseUri, ::StringW  relativeUri) ;

static inline ::System::Uri* New_ctor(::System::Uri*  baseUri, ::System::Uri*  relativeUri) ;

static inline ::System::Uri* New_ctor(::GlobalNamespace::Uri_Flags  flags, ::System::UriParser*  uriParser, ::StringW  uri) ;

static inline ::System::Uri* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

static inline ::System::Uri* New_ctor(::StringW  uriString) ;

static inline ::System::Uri* New_ctor(::StringW  uriString, ::System::UriKind  uriKind) ;

/// @brief Method NotAny, addr 0xac36af0, size 0x10, virtual false, abstract: false, final false
inline bool NotAny(::GlobalNamespace::Uri_Flags  flags) ;

/// @brief Method ParseMinimal, addr 0xac3da88, size 0x80, virtual false, abstract: false, final false
inline ::System::UriFormatException* ParseMinimal() ;

/// @brief Method ParseRemaining, addr 0xac37264, size 0xc1c, virtual false, abstract: false, final false
inline void ParseRemaining() ;

/// @brief Method ParseScheme, addr 0xac3d440, size 0xd8, virtual false, abstract: false, final false
static inline ::System::ParsingError ParseScheme(::StringW  uriString, ::by_ref<::GlobalNamespace::Uri_Flags>  flags, ::by_ref<::System::UriParser*>  syntax) ;

/// @brief Method ParseSchemeCheckImplicitFile, addr 0xac3d518, size 0x570, virtual false, abstract: false, final false
static inline uint16_t ParseSchemeCheckImplicitFile(char16_t*  uriString, uint16_t  length, ::by_ref<::System::ParsingError>  err, ::by_ref<::GlobalNamespace::Uri_Flags>  flags, ::by_ref<::System::UriParser*>  syntax) ;

/// @brief Method PrivateParseMinimal, addr 0xac3db08, size 0x658, virtual false, abstract: false, final false
inline ::System::ParsingError PrivateParseMinimal() ;

/// @brief Method PrivateParseMinimalIri, addr 0xac3f070, size 0xf4, virtual false, abstract: false, final false
inline void PrivateParseMinimalIri(::StringW  newHost, uint16_t  idx) ;

/// @brief Method ReCreateParts, addr 0xac403c4, size 0xccc, virtual false, abstract: false, final false
inline ::StringW ReCreateParts(::System::UriComponents  parts, uint16_t  nonCanonical, ::System::UriFormat  formatAs) ;

/// @brief Method ResolveHelper, addr 0xac38804, size 0x4f4, virtual false, abstract: false, final false
static inline ::System::Uri* ResolveHelper(::System::Uri*  baseUri, ::System::Uri*  relativeUri, ::by_ref<::StringW>  newUriString, ::by_ref<bool>  userEscaped, ::by_ref<::System::UriFormatException*>  e) ;

/// @brief Method SetUserDrivenParsing, addr 0xac36be8, size 0x14, virtual false, abstract: false, final false
inline void SetUserDrivenParsing() ;

/// @brief Method StaticInFact, addr 0xac36c60, size 0xc, virtual false, abstract: false, final false
static inline bool StaticInFact(::GlobalNamespace::Uri_Flags  allFlags, ::GlobalNamespace::Uri_Flags  checkFlags) ;

/// @brief Method StaticIsFile, addr 0xac3b23c, size 0x18, virtual false, abstract: false, final false
static inline bool StaticIsFile(::System::UriParser*  syntax) ;

/// @brief Method StaticNotAny, addr 0xac36bc8, size 0xc, virtual false, abstract: false, final false
static inline bool StaticNotAny(::GlobalNamespace::Uri_Flags  allFlags, ::GlobalNamespace::Uri_Flags  checkFlags) ;

/// @brief Method StripBidiControlCharacter, addr 0xac42398, size 0x164, virtual false, abstract: false, final false
static inline ::StringW StripBidiControlCharacter(char16_t*  strToClean, int32_t  start, int32_t  length) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xac3a160, size 0x4, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method ToString, addr 0xac3c8b8, size 0xe0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryCreate, addr 0xac433ac, size 0xe8, virtual false, abstract: false, final false
static inline bool TryCreate(::System::Uri*  baseUri, ::StringW  relativeUri, ::by_ref<::System::Uri*>  result) ;

/// @brief Method TryCreate, addr 0xac43494, size 0x1b4, virtual false, abstract: false, final false
static inline bool TryCreate(::System::Uri*  baseUri, ::System::Uri*  relativeUri, ::by_ref<::System::Uri*>  result) ;

/// @brief Method TryCreate, addr 0xac3d1e4, size 0xd0, virtual false, abstract: false, final false
static inline bool TryCreate(::StringW  uriString, ::System::UriKind  uriKind, ::by_ref<::System::Uri*>  result) ;

/// @brief Method UnescapeDataString, addr 0xac43db0, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW UnescapeDataString(::StringW  stringToUnescape) ;

/// @brief Method UnescapeOnly, addr 0xac42588, size 0x1f8, virtual false, abstract: false, final false
static inline void UnescapeOnly(char16_t*  pch, int32_t  start, ::by_ref<int32_t>  end, char16_t  ch1, char16_t  ch2, char16_t  ch3) ;

constexpr ::StringW const& __cordl_internal_get_m_DnsSafeHost() const;

constexpr ::StringW& __cordl_internal_get_m_DnsSafeHost() ;

constexpr ::GlobalNamespace::Uri_Flags const& __cordl_internal_get_m_Flags() const;

constexpr ::GlobalNamespace::Uri_Flags& __cordl_internal_get_m_Flags() ;

constexpr ::System::Uri_UriInfo* const& __cordl_internal_get_m_Info() const;

constexpr ::System::Uri_UriInfo*& __cordl_internal_get_m_Info() ;

constexpr ::StringW const& __cordl_internal_get_m_String() const;

constexpr ::StringW& __cordl_internal_get_m_String() ;

constexpr ::System::UriParser* const& __cordl_internal_get_m_Syntax() const;

constexpr ::System::UriParser*& __cordl_internal_get_m_Syntax() ;

constexpr bool const& __cordl_internal_get_m_iriParsing() const;

constexpr bool& __cordl_internal_get_m_iriParsing() ;

constexpr ::StringW const& __cordl_internal_get_m_originalUnicodeString() const;

constexpr ::StringW& __cordl_internal_get_m_originalUnicodeString() ;

constexpr void __cordl_internal_set_m_DnsSafeHost(::StringW  value) ;

constexpr void __cordl_internal_set_m_Flags(::GlobalNamespace::Uri_Flags  value) ;

constexpr void __cordl_internal_set_m_Info(::System::Uri_UriInfo*  value) ;

constexpr void __cordl_internal_set_m_String(::StringW  value) ;

constexpr void __cordl_internal_set_m_Syntax(::System::UriParser*  value) ;

constexpr void __cordl_internal_set_m_iriParsing(bool  value) ;

constexpr void __cordl_internal_set_m_originalUnicodeString(::StringW  value) ;

/// @brief Method .ctor, addr 0xac38598, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  baseUri, ::StringW  relativeUri) ;

/// @brief Method .ctor, addr 0xac38e8c, size 0x230, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  baseUri, ::System::Uri*  relativeUri) ;

/// @brief Method .ctor, addr 0xac4418c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Uri_Flags  flags, ::System::UriParser*  uriParser, ::StringW  uri) ;

/// @brief Method .ctor, addr 0xac3a058, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method .ctor, addr 0xac382e0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  uriString) ;

/// @brief Method .ctor, addr 0xac38514, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::StringW  uriString, ::System::UriKind  uriKind) ;

static inline ::ArrayW<char16_t> getStaticF_HexLowerChars() ;

static inline bool getStaticF_IsWindowsFileSystem() ;

static inline ::StringW getStaticF_SchemeDelimiter() ;

static inline ::StringW getStaticF_UriSchemeFile() ;

static inline ::StringW getStaticF_UriSchemeFtp() ;

static inline ::StringW getStaticF_UriSchemeGopher() ;

static inline ::StringW getStaticF_UriSchemeHttp() ;

static inline ::StringW getStaticF_UriSchemeHttps() ;

static inline ::StringW getStaticF_UriSchemeMailto() ;

static inline ::StringW getStaticF_UriSchemeNetPipe() ;

static inline ::StringW getStaticF_UriSchemeNetTcp() ;

static inline ::StringW getStaticF_UriSchemeNews() ;

static inline ::StringW getStaticF_UriSchemeNntp() ;

static inline ::StringW getStaticF_UriSchemeWs() ;

static inline ::StringW getStaticF_UriSchemeWss() ;

static inline ::ArrayW<char16_t> getStaticF__WSchars() ;

static inline bool getStaticF_s_ConfigInitialized() ;

static inline bool getStaticF_s_ConfigInitializing() ;

static inline ::System::UriIdnScope getStaticF_s_IdnScope() ;

static inline bool getStaticF_s_IriParsing() ;

static inline ::System::Object* getStaticF_s_initLock() ;

static inline bool getStaticF_useDotNetRelativeOrAbsolute() ;

/// @brief Method get_AbsolutePath, addr 0xac3a238, size 0xc0, virtual false, abstract: false, final false
inline ::StringW get_AbsolutePath() ;

/// @brief Method get_AbsoluteUri, addr 0xac3a3c4, size 0x120, virtual false, abstract: false, final false
inline ::StringW get_AbsoluteUri() ;

/// @brief Method get_AllowIdn, addr 0xac36a34, size 0xbc, virtual false, abstract: false, final false
inline bool get_AllowIdn() ;

/// @brief Method get_Authority, addr 0xac3ab70, size 0x6c, virtual false, abstract: false, final false
inline ::StringW get_Authority() ;

/// @brief Method get_DnsSafeHost, addr 0xac3be1c, size 0x248, virtual false, abstract: false, final false
inline ::StringW get_DnsSafeHost() ;

/// @brief Method get_Fragment, addr 0xac3bc48, size 0x124, virtual false, abstract: false, final false
inline ::StringW get_Fragment() ;

/// @brief Method get_HasAuthority, addr 0xac42780, size 0xc, virtual false, abstract: false, final false
inline bool get_HasAuthority() ;

/// @brief Method get_Host, addr 0xac3b1d0, size 0x6c, virtual false, abstract: false, final false
inline ::StringW get_Host() ;

/// @brief Method get_HostNameType, addr 0xac3abdc, size 0xf8, virtual false, abstract: false, final false
inline ::System::UriHostNameType get_HostNameType() ;

/// @brief Method get_HostType, addr 0xac36984, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::Uri_Flags get_HostType() ;

/// @brief Method get_IdnHost, addr 0xac3c064, size 0x30, virtual false, abstract: false, final false
inline ::StringW get_IdnHost() ;

/// @brief Method get_InitializeLock, addr 0xac3b254, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Object* get_InitializeLock() ;

/// @brief Method get_IsAbsoluteUri, addr 0xac38658, size 0x10, virtual false, abstract: false, final false
inline bool get_IsAbsoluteUri() ;

/// @brief Method get_IsDefaultPort, addr 0xac3acd4, size 0xa8, virtual false, abstract: false, final false
inline bool get_IsDefaultPort() ;

/// @brief Method get_IsDosPath, addr 0xac3696c, size 0xc, virtual false, abstract: false, final false
inline bool get_IsDosPath() ;

/// @brief Method get_IsFile, addr 0xac3ad7c, size 0xc0, virtual false, abstract: false, final false
inline bool get_IsFile() ;

/// @brief Method get_IsImplicitFile, addr 0xac36950, size 0xc, virtual false, abstract: false, final false
inline bool get_IsImplicitFile() ;

/// @brief Method get_IsLoopback, addr 0xac3ae3c, size 0x80, virtual false, abstract: false, final false
inline bool get_IsLoopback() ;

/// @brief Method get_IsNotAbsoluteUri, addr 0xac36998, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNotAbsoluteUri() ;

/// @brief Method get_IsUnc, addr 0xac3b164, size 0x6c, virtual false, abstract: false, final false
inline bool get_IsUnc() ;

/// @brief Method get_IsUncOrDosPath, addr 0xac3695c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsUncOrDosPath() ;

/// @brief Method get_IsUncPath, addr 0xac36978, size 0xc, virtual false, abstract: false, final false
inline bool get_IsUncPath() ;

/// @brief Method get_LocalPath, addr 0xac3a4e4, size 0x64, virtual false, abstract: false, final false
inline ::StringW get_LocalPath() ;

/// @brief Method get_OriginalString, addr 0xac39464, size 0x28, virtual false, abstract: false, final false
inline ::StringW get_OriginalString() ;

/// @brief Method get_OriginalStringSwitched, addr 0xac3bdd4, size 0x48, virtual false, abstract: false, final false
inline bool get_OriginalStringSwitched() ;

/// @brief Method get_PathAndQuery, addr 0xac3aebc, size 0xc8, virtual false, abstract: false, final false
inline ::StringW get_PathAndQuery() ;

/// @brief Method get_Port, addr 0xac3ba60, size 0xc4, virtual false, abstract: false, final false
inline int32_t get_Port() ;

/// @brief Method get_PrivateAbsolutePath, addr 0xac3a2f8, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_PrivateAbsolutePath() ;

/// @brief Method get_Query, addr 0xac3bb24, size 0x124, virtual false, abstract: false, final false
inline ::StringW get_Query() ;

/// @brief Method get_Scheme, addr 0xac3bd6c, size 0x68, virtual false, abstract: false, final false
inline ::StringW get_Scheme() ;

/// @brief Method get_SecuredPathIndex, addr 0xac36bfc, size 0x54, virtual false, abstract: false, final false
inline uint16_t get_SecuredPathIndex() ;

/// @brief Method get_Segments, addr 0xac3af84, size 0x1e0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_Segments() ;

/// @brief Method get_Syntax, addr 0xac36990, size 0x8, virtual false, abstract: false, final false
inline ::System::UriParser* get_Syntax() ;

/// @brief Method get_UserDrivenParsing, addr 0xac36bdc, size 0xc, virtual false, abstract: false, final false
inline bool get_UserDrivenParsing() ;

/// @brief Method get_UserEscaped, addr 0xac3c094, size 0xc, virtual false, abstract: false, final false
inline bool get_UserEscaped() ;

/// @brief Method get_UserInfo, addr 0xac3c0a0, size 0x6c, virtual false, abstract: false, final false
inline ::StringW get_UserInfo() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

/// @brief Method op_Equality, addr 0xac3cbac, size 0x34, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Uri*  uri1, ::System::Uri*  uri2) ;

/// @brief Method op_Inequality, addr 0xac38cf8, size 0x48, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Uri*  uri1, ::System::Uri*  uri2) ;

static inline void setStaticF_HexLowerChars(::ArrayW<char16_t>  value) ;

static inline void setStaticF_IsWindowsFileSystem(bool  value) ;

static inline void setStaticF_SchemeDelimiter(::StringW  value) ;

static inline void setStaticF_UriSchemeFile(::StringW  value) ;

static inline void setStaticF_UriSchemeFtp(::StringW  value) ;

static inline void setStaticF_UriSchemeGopher(::StringW  value) ;

static inline void setStaticF_UriSchemeHttp(::StringW  value) ;

static inline void setStaticF_UriSchemeHttps(::StringW  value) ;

static inline void setStaticF_UriSchemeMailto(::StringW  value) ;

static inline void setStaticF_UriSchemeNetPipe(::StringW  value) ;

static inline void setStaticF_UriSchemeNetTcp(::StringW  value) ;

static inline void setStaticF_UriSchemeNews(::StringW  value) ;

static inline void setStaticF_UriSchemeNntp(::StringW  value) ;

static inline void setStaticF_UriSchemeWs(::StringW  value) ;

static inline void setStaticF_UriSchemeWss(::StringW  value) ;

static inline void setStaticF__WSchars(::ArrayW<char16_t>  value) ;

static inline void setStaticF_s_ConfigInitialized(bool  value) ;

static inline void setStaticF_s_ConfigInitializing(bool  value) ;

static inline void setStaticF_s_IdnScope(::System::UriIdnScope  value) ;

static inline void setStaticF_s_IriParsing(bool  value) ;

static inline void setStaticF_s_initLock(::System::Object*  value) ;

static inline void setStaticF_useDotNetRelativeOrAbsolute(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Uri() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Uri", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Uri(Uri && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Uri", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Uri(Uri const& ) = delete;

/// @brief Field DotNetRelativeOrAbsolute value: I32(300)
static ::System::UriKind const DotNetRelativeOrAbsolute;

/// @brief Field V1ToStringUnescape value: I32(32767)
static ::System::UriFormat const V1ToStringUnescape;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9931};

/// @brief Field c_DummyChar offset 0xffffffff size 0x2
static constexpr char16_t  c_DummyChar{u'\u{ffff}'};

/// @brief Field c_EOL offset 0xffffffff size 0x2
static constexpr char16_t  c_EOL{u'\u{fffe}'};

/// @brief Field c_Max16BitUtf8SequenceLength offset 0xffffffff size 0x4
static constexpr int32_t  c_Max16BitUtf8SequenceLength{static_cast<int32_t>(0xc)};

/// @brief Field c_MaxUriBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  c_MaxUriBufferSize{static_cast<int32_t>(0xfff0)};

/// @brief Field c_MaxUriSchemeName offset 0xffffffff size 0x4
static constexpr int32_t  c_MaxUriSchemeName{static_cast<int32_t>(0x400)};

/// @brief Field m_String, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_String;

/// @brief Field m_originalUnicodeString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_originalUnicodeString;

/// @brief Field m_Syntax, offset: 0x20, size: 0x8, def value: None
 ::System::UriParser*  ___m_Syntax;

/// @brief Field m_DnsSafeHost, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_DnsSafeHost;

/// @brief Field m_Flags, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::Uri_Flags  ___m_Flags;

/// @brief Field m_Info, offset: 0x38, size: 0x8, def value: None
 ::System::Uri_UriInfo*  ___m_Info;

/// @brief Field m_iriParsing, offset: 0x40, size: 0x1, def value: None
 bool  ___m_iriParsing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Uri, ___m_String) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_originalUnicodeString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_Syntax) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_DnsSafeHost) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_Flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_Info) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_iriParsing) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Uri) == 0x48, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Uri/MoreInfo
class CORDL_TYPE Uri_MoreInfo : public ::System::Object {
public:
// Declarations
/// @brief Field AbsoluteUri, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AbsoluteUri, put=__cordl_internal_set_AbsoluteUri)) ::StringW  AbsoluteUri;

/// @brief Field Fragment, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Fragment, put=__cordl_internal_set_Fragment)) ::StringW  Fragment;

/// @brief Field Hash, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Hash, put=__cordl_internal_set_Hash)) int32_t  Hash;

/// @brief Field Path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Path, put=__cordl_internal_set_Path)) ::StringW  Path;

/// @brief Field Query, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Query, put=__cordl_internal_set_Query)) ::StringW  Query;

/// @brief Field RemoteUrl, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_RemoteUrl, put=__cordl_internal_set_RemoteUrl)) ::StringW  RemoteUrl;

static inline ::System::Uri_MoreInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AbsoluteUri() const;

constexpr ::StringW& __cordl_internal_get_AbsoluteUri() ;

constexpr ::StringW const& __cordl_internal_get_Fragment() const;

constexpr ::StringW& __cordl_internal_get_Fragment() ;

constexpr int32_t const& __cordl_internal_get_Hash() const;

constexpr int32_t& __cordl_internal_get_Hash() ;

constexpr ::StringW const& __cordl_internal_get_Path() const;

constexpr ::StringW& __cordl_internal_get_Path() ;

constexpr ::StringW const& __cordl_internal_get_Query() const;

constexpr ::StringW& __cordl_internal_get_Query() ;

constexpr ::StringW const& __cordl_internal_get_RemoteUrl() const;

constexpr ::StringW& __cordl_internal_get_RemoteUrl() ;

constexpr void __cordl_internal_set_AbsoluteUri(::StringW  value) ;

constexpr void __cordl_internal_set_Fragment(::StringW  value) ;

constexpr void __cordl_internal_set_Hash(int32_t  value) ;

constexpr void __cordl_internal_set_Path(::StringW  value) ;

constexpr void __cordl_internal_set_Query(::StringW  value) ;

constexpr void __cordl_internal_set_RemoteUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0xad03134, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Uri_MoreInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Uri_MoreInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Uri_MoreInfo(Uri_MoreInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Uri_MoreInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Uri_MoreInfo(Uri_MoreInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9929};

/// @brief Field Path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Path;

/// @brief Field Query, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Query;

/// @brief Field Fragment, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Fragment;

/// @brief Field AbsoluteUri, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___AbsoluteUri;

/// @brief Field Hash, offset: 0x30, size: 0x4, def value: None
 int32_t  ___Hash;

/// @brief Field RemoteUrl, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___RemoteUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Uri_MoreInfo, ___Path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___Query) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___Fragment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___AbsoluteUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___Hash) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___RemoteUrl) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Uri_MoreInfo) == 0x40, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object, System.Uri::Offset
namespace System {
// Is value type: false
// CS Name: System.Uri/UriInfo
class CORDL_TYPE Uri_UriInfo : public ::System::Object {
public:
// Declarations
/// @brief Field DnsSafeHost, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_DnsSafeHost, put=__cordl_internal_set_DnsSafeHost)) ::StringW  DnsSafeHost;

/// @brief Field Host, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Host, put=__cordl_internal_set_Host)) ::StringW  Host;

/// @brief Field MoreInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MoreInfo, put=__cordl_internal_set_MoreInfo)) ::System::Uri_MoreInfo*  MoreInfo;

/// @brief Field Offset, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) ::GlobalNamespace::Uri_Offset  Offset;

/// @brief Field ScopeId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScopeId, put=__cordl_internal_set_ScopeId)) ::StringW  ScopeId;

/// @brief Field String, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_String, put=__cordl_internal_set_String)) ::StringW  String;

static inline ::System::Uri_UriInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DnsSafeHost() const;

constexpr ::StringW& __cordl_internal_get_DnsSafeHost() ;

constexpr ::StringW const& __cordl_internal_get_Host() const;

constexpr ::StringW& __cordl_internal_get_Host() ;

constexpr ::System::Uri_MoreInfo* const& __cordl_internal_get_MoreInfo() const;

constexpr ::System::Uri_MoreInfo*& __cordl_internal_get_MoreInfo() ;

constexpr ::GlobalNamespace::Uri_Offset const& __cordl_internal_get_Offset() const;

constexpr ::GlobalNamespace::Uri_Offset& __cordl_internal_get_Offset() ;

constexpr ::StringW const& __cordl_internal_get_ScopeId() const;

constexpr ::StringW& __cordl_internal_get_ScopeId() ;

constexpr ::StringW const& __cordl_internal_get_String() const;

constexpr ::StringW& __cordl_internal_get_String() ;

constexpr void __cordl_internal_set_DnsSafeHost(::StringW  value) ;

constexpr void __cordl_internal_set_Host(::StringW  value) ;

constexpr void __cordl_internal_set_MoreInfo(::System::Uri_MoreInfo*  value) ;

constexpr void __cordl_internal_set_Offset(::GlobalNamespace::Uri_Offset  value) ;

constexpr void __cordl_internal_set_ScopeId(::StringW  value) ;

constexpr void __cordl_internal_set_String(::StringW  value) ;

/// @brief Method .ctor, addr 0xad0312c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Uri_UriInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Uri_UriInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Uri_UriInfo(Uri_UriInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Uri_UriInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Uri_UriInfo(Uri_UriInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9927};

/// @brief Field Host, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Host;

/// @brief Field ScopeId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ScopeId;

/// @brief Field String, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___String;

/// @brief Field Offset, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::Uri_Offset  ___Offset;

/// @brief Field DnsSafeHost, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___DnsSafeHost;

/// @brief Field MoreInfo, offset: 0x40, size: 0x8, def value: None
 ::System::Uri_MoreInfo*  ___MoreInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Uri_UriInfo, ___Host) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___ScopeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___String) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___Offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___DnsSafeHost) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___MoreInfo) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Uri_UriInfo) == 0x48, "Size mismatch!");

} // namespace end def System
