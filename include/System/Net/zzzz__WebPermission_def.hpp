#pragma once
// IWYU pragma private; include "System/Net/WebPermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/zzzz__CodeAccessPermission_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebPermission)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class DelayedRegex;
}
namespace System::Net {
struct NetworkAccess;
}
namespace System::Security::Permissions {
class IUnrestrictedPermission;
}
namespace System::Security::Permissions {
struct PermissionState;
}
namespace System::Security {
class IPermission;
}
namespace System::Security {
class SecurityElement;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class WebPermission;
}
// Write type traits
MARK_REF_T(::System::Net::WebPermission*);
DEFINE_IL2CPP_CLASS(::System::Net::WebPermission*, "System.Net", "WebPermission");
// Dependencies System.Security.CodeAccessPermission
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebPermission
class CORDL_TYPE WebPermission : public ::System::Security::CodeAccessPermission {
public:
// Declarations
 __declspec(property(get=get_AcceptList)) ::System::Collections::IEnumerator*  AcceptList;

 __declspec(property(get=get_ConnectList)) ::System::Collections::IEnumerator*  ConnectList;

/// @brief Field m_UnrestrictedAccept, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UnrestrictedAccept, put=__cordl_internal_set_m_UnrestrictedAccept)) bool  m_UnrestrictedAccept;

/// @brief Field m_UnrestrictedConnect, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UnrestrictedConnect, put=__cordl_internal_set_m_UnrestrictedConnect)) bool  m_UnrestrictedConnect;

/// @brief Field m_acceptList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_acceptList, put=__cordl_internal_set_m_acceptList)) ::System::Collections::ArrayList*  m_acceptList;

/// @brief Field m_connectList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_connectList, put=__cordl_internal_set_m_connectList)) ::System::Collections::ArrayList*  m_connectList;

/// @brief Field m_noRestriction, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_noRestriction, put=__cordl_internal_set_m_noRestriction)) bool  m_noRestriction;

/// @brief Field s_MatchAllRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MatchAllRegex, put=setStaticF_s_MatchAllRegex)) ::System::Text::RegularExpressions::Regex*  s_MatchAllRegex;

/// @brief Convert operator to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr operator  ::System::Security::Permissions::IUnrestrictedPermission*() noexcept;

/// @brief Method AddAsPattern, addr 0xac63fd0, size 0x5e0, virtual false, abstract: false, final false
inline void AddAsPattern(::System::Net::NetworkAccess  access, ::System::Net::DelayedRegex*  uriRegexPattern) ;

/// @brief Method AddPermission, addr 0xac65900, size 0x654, virtual false, abstract: false, final false
inline void AddPermission(::System::Net::NetworkAccess  access, ::System::Uri*  uri) ;

/// @brief Method AddPermission, addr 0xac65630, size 0x170, virtual false, abstract: false, final false
inline void AddPermission(::System::Net::NetworkAccess  access, ::System::Text::RegularExpressions::Regex*  uriRegex) ;

/// @brief Method AddPermission, addr 0xac645b0, size 0x640, virtual false, abstract: false, final false
inline void AddPermission(::System::Net::NetworkAccess  access, ::StringW  uriString) ;

/// @brief Method Copy, addr 0xac65f5c, size 0x1bc, virtual true, abstract: false, final false
inline ::System::Security::IPermission* Copy() ;

/// @brief Method FromXml, addr 0xac687b8, size 0xb3c, virtual true, abstract: false, final false
inline void FromXml(::System::Security::SecurityElement*  securityElement) ;

/// @brief Method Intersect, addr 0xac675c4, size 0x308, virtual true, abstract: false, final false
inline ::System::Security::IPermission* Intersect(::System::Security::IPermission*  target) ;

/// @brief Method IsSubsetOf, addr 0xac66118, size 0x644, virtual true, abstract: false, final false
inline bool IsSubsetOf(::System::Security::IPermission*  target) ;

/// @brief Method IsUnrestricted, addr 0xac65f54, size 0x8, virtual true, abstract: false, final true
inline bool IsUnrestricted() ;

static inline ::System::Net::WebPermission* New_ctor() ;

static inline ::System::Net::WebPermission* New_ctor(::System::Net::NetworkAccess  access) ;

static inline ::System::Net::WebPermission* New_ctor(::System::Net::NetworkAccess  access, ::System::Uri*  uri) ;

static inline ::System::Net::WebPermission* New_ctor(::System::Net::NetworkAccess  access, ::System::Text::RegularExpressions::Regex*  uriRegex) ;

static inline ::System::Net::WebPermission* New_ctor(::System::Net::NetworkAccess  access, ::StringW  uriString) ;

static inline ::System::Net::WebPermission* New_ctor(::System::Security::Permissions::PermissionState  state) ;

static inline ::System::Net::WebPermission* New_ctor(bool  unrestricted) ;

/// @brief Method ToXml, addr 0xac692f4, size 0xb68, virtual true, abstract: false, final false
inline ::System::Security::SecurityElement* ToXml() ;

/// @brief Method Union, addr 0xac670a8, size 0x51c, virtual true, abstract: false, final false
inline ::System::Security::IPermission* Union(::System::Security::IPermission*  target) ;

constexpr bool const& __cordl_internal_get_m_UnrestrictedAccept() const;

constexpr bool& __cordl_internal_get_m_UnrestrictedAccept() ;

constexpr bool const& __cordl_internal_get_m_UnrestrictedConnect() const;

constexpr bool& __cordl_internal_get_m_UnrestrictedConnect() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_m_acceptList() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_m_acceptList() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_m_connectList() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_m_connectList() ;

constexpr bool const& __cordl_internal_get_m_noRestriction() const;

constexpr bool& __cordl_internal_get_m_noRestriction() ;

constexpr void __cordl_internal_set_m_UnrestrictedAccept(bool  value) ;

constexpr void __cordl_internal_set_m_UnrestrictedConnect(bool  value) ;

constexpr void __cordl_internal_set_m_acceptList(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set_m_connectList(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set_m_noRestriction(bool  value) ;

/// @brief Method .ctor, addr 0xac654f0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac63f20, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::NetworkAccess  access) ;

/// @brief Method .ctor, addr 0xac65850, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::NetworkAccess  access, ::System::Uri*  uri) ;

/// @brief Method .ctor, addr 0xac65580, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::NetworkAccess  access, ::System::Text::RegularExpressions::Regex*  uriRegex) ;

/// @brief Method .ctor, addr 0xac657a0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::NetworkAccess  access, ::StringW  uriString) ;

/// @brief Method .ctor, addr 0xac63e74, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Permissions::PermissionState  state) ;

/// @brief Method .ctor, addr 0xac65448, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(bool  unrestricted) ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_MatchAllRegex() ;

/// @brief Method get_AcceptList, addr 0xac6513c, size 0x30c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* get_AcceptList() ;

/// @brief Method get_ConnectList, addr 0xac64e30, size 0x30c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* get_ConnectList() ;

/// @brief Method get_MatchAllRegex, addr 0xac64d6c, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Text::RegularExpressions::Regex* get_MatchAllRegex() ;

/// @brief Convert to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr ::System::Security::Permissions::IUnrestrictedPermission* i___System__Security__Permissions__IUnrestrictedPermission() noexcept;

/// @brief Method intersectList, addr 0xac678cc, size 0xeec, virtual false, abstract: false, final false
static inline void intersectList(::System::Collections::ArrayList*  A, ::System::Collections::ArrayList*  B, ::System::Collections::ArrayList*  result) ;

/// @brief Method intersectPair, addr 0xac69e5c, size 0x4b8, virtual false, abstract: false, final false
static inline ::System::Object* intersectPair(::System::Object*  L, ::System::Object*  R, ::by_ref<bool>  isUri) ;

/// @brief Method isMatchedURI, addr 0xac66b88, size 0x520, virtual false, abstract: false, final false
static inline bool isMatchedURI(::System::Object*  uriToCheck, ::System::Collections::ArrayList*  uriPatternList) ;

/// @brief Method isSpecialSubsetCase, addr 0xac6675c, size 0x42c, virtual false, abstract: false, final false
static inline bool isSpecialSubsetCase(::StringW  regexToCheck, ::System::Collections::ArrayList*  permList) ;

static inline void setStaticF_s_MatchAllRegex(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebPermission() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebPermission", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebPermission(WebPermission && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebPermission", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebPermission(WebPermission const& ) = delete;

/// @brief Field MatchAll offset 0xffffffff size 0x8
static constexpr ::ConstString  MatchAll{u".*"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10562};

/// @brief Field m_noRestriction, offset: 0x10, size: 0x1, def value: None
 bool  ___m_noRestriction;

/// [OptionalField]
/// @brief Field m_UnrestrictedConnect, offset: 0x11, size: 0x1, def value: None
 bool  ___m_UnrestrictedConnect;

/// [OptionalField]
/// @brief Field m_UnrestrictedAccept, offset: 0x12, size: 0x1, def value: None
 bool  ___m_UnrestrictedAccept;

/// @brief Field m_connectList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___m_connectList;

/// @brief Field m_acceptList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___m_acceptList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebPermission, ___m_noRestriction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebPermission, ___m_UnrestrictedConnect) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebPermission, ___m_UnrestrictedAccept) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebPermission, ___m_connectList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebPermission, ___m_acceptList) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebPermission) == 0x28, "Size mismatch!");

} // namespace end def System::Net
