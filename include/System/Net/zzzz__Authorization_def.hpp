#pragma once
// IWYU pragma private; include "System/Net/Authorization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Authorization)
// Forward declare root types
namespace System::Net {
class Authorization;
}
// Write type traits
MARK_REF_T(::System::Net::Authorization*);
DEFINE_IL2CPP_CLASS(::System::Net::Authorization*, "System.Net", "Authorization");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Authorization
class CORDL_TYPE Authorization : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Complete)) bool  Complete;

 __declspec(property(get=get_ConnectionGroupId)) ::StringW  ConnectionGroupId;

 __declspec(property(get=get_Message)) ::StringW  Message;

/// @brief Field ModuleAuthenticationType, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ModuleAuthenticationType, put=__cordl_internal_set_ModuleAuthenticationType)) ::StringW  ModuleAuthenticationType;

 __declspec(property(get=get_MutuallyAuthenticated, put=set_MutuallyAuthenticated)) bool  MutuallyAuthenticated;

 __declspec(property(get=get_ProtectionRealm, put=set_ProtectionRealm)) ::ArrayW<::StringW>  ProtectionRealm;

/// @brief Field m_Complete, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Complete, put=__cordl_internal_set_m_Complete)) bool  m_Complete;

/// @brief Field m_ConnectionGroupId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ConnectionGroupId, put=__cordl_internal_set_m_ConnectionGroupId)) ::StringW  m_ConnectionGroupId;

/// @brief Field m_Message, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Message, put=__cordl_internal_set_m_Message)) ::StringW  m_Message;

/// @brief Field m_MutualAuth, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MutualAuth, put=__cordl_internal_set_m_MutualAuth)) bool  m_MutualAuth;

/// @brief Field m_ProtectionRealm, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProtectionRealm, put=__cordl_internal_set_m_ProtectionRealm)) ::ArrayW<::StringW>  m_ProtectionRealm;

static inline ::System::Net::Authorization* New_ctor(::StringW  token) ;

static inline ::System::Net::Authorization* New_ctor(::StringW  token, bool  finished) ;

static inline ::System::Net::Authorization* New_ctor(::StringW  token, bool  finished, ::StringW  connectionGroupId) ;

static inline ::System::Net::Authorization* New_ctor(::StringW  token, bool  finished, ::StringW  connectionGroupId, bool  mutualAuth) ;

/// @brief Method SetComplete, addr 0xac54eac, size 0x8, virtual false, abstract: false, final false
inline void SetComplete(bool  complete) ;

constexpr ::StringW const& __cordl_internal_get_ModuleAuthenticationType() const;

constexpr ::StringW& __cordl_internal_get_ModuleAuthenticationType() ;

constexpr bool const& __cordl_internal_get_m_Complete() const;

constexpr bool& __cordl_internal_get_m_Complete() ;

constexpr ::StringW const& __cordl_internal_get_m_ConnectionGroupId() const;

constexpr ::StringW& __cordl_internal_get_m_ConnectionGroupId() ;

constexpr ::StringW const& __cordl_internal_get_m_Message() const;

constexpr ::StringW& __cordl_internal_get_m_Message() ;

constexpr bool const& __cordl_internal_get_m_MutualAuth() const;

constexpr bool& __cordl_internal_get_m_MutualAuth() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_ProtectionRealm() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_ProtectionRealm() ;

constexpr void __cordl_internal_set_ModuleAuthenticationType(::StringW  value) ;

constexpr void __cordl_internal_set_m_Complete(bool  value) ;

constexpr void __cordl_internal_set_m_ConnectionGroupId(::StringW  value) ;

constexpr void __cordl_internal_set_m_Message(::StringW  value) ;

constexpr void __cordl_internal_set_m_MutualAuth(bool  value) ;

constexpr void __cordl_internal_set_m_ProtectionRealm(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xac54c6c, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::StringW  token) ;

/// @brief Method .ctor, addr 0xac54d18, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::StringW  token, bool  finished) ;

/// @brief Method .ctor, addr 0xac54db4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  token, bool  finished, ::StringW  connectionGroupId) ;

/// @brief Method .ctor, addr 0xac54dbc, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::StringW  token, bool  finished, ::StringW  connectionGroupId, bool  mutualAuth) ;

/// @brief Method get_Complete, addr 0xac54ea4, size 0x8, virtual false, abstract: false, final false
inline bool get_Complete() ;

/// @brief Method get_ConnectionGroupId, addr 0xac54e9c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ConnectionGroupId() ;

/// @brief Method get_Message, addr 0xac54e94, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// @brief Method get_MutuallyAuthenticated, addr 0xac54f50, size 0x20, virtual false, abstract: false, final false
inline bool get_MutuallyAuthenticated() ;

/// @brief Method get_ProtectionRealm, addr 0xac54eb4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_ProtectionRealm() ;

/// @brief Method set_MutuallyAuthenticated, addr 0xac54f70, size 0x8, virtual false, abstract: false, final false
inline void set_MutuallyAuthenticated(bool  value) ;

/// @brief Method set_ProtectionRealm, addr 0xac54ebc, size 0x80, virtual false, abstract: false, final false
inline void set_ProtectionRealm(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Authorization() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Authorization", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Authorization(Authorization && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Authorization", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Authorization(Authorization const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10485};

/// @brief Field m_Message, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Message;

/// @brief Field m_Complete, offset: 0x18, size: 0x1, def value: None
 bool  ___m_Complete;

/// @brief Field m_ProtectionRealm, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_ProtectionRealm;

/// @brief Field m_ConnectionGroupId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_ConnectionGroupId;

/// @brief Field m_MutualAuth, offset: 0x30, size: 0x1, def value: None
 bool  ___m_MutualAuth;

/// @brief Field ModuleAuthenticationType, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___ModuleAuthenticationType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Authorization, ___m_Message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Authorization, ___m_Complete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Authorization, ___m_ProtectionRealm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Authorization, ___m_ConnectionGroupId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Authorization, ___m_MutualAuth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Authorization, ___ModuleAuthenticationType) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::Authorization) == 0x40, "Size mismatch!");

} // namespace end def System::Net
