#pragma once
// IWYU pragma private; include "System/Net/AuthenticationManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AuthenticationManager)
namespace System::Collections::Specialized {
class StringDictionary;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class Authorization;
}
namespace System::Net {
class IAuthenticationModule;
}
namespace System::Net {
class ICredentialPolicy;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class AuthenticationManager;
}
// Write type traits
MARK_REF_T(::System::Net::AuthenticationManager*);
DEFINE_IL2CPP_CLASS(::System::Net::AuthenticationManager*, "System.Net", "AuthenticationManager");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.AuthenticationManager
class CORDL_TYPE AuthenticationManager : public ::System::Object {
public:
// Declarations
/// @brief Field credential_policy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_credential_policy, put=setStaticF_credential_policy)) ::System::Net::ICredentialPolicy*  credential_policy;

/// @brief Field locker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_locker, put=setStaticF_locker)) ::System::Object*  locker;

/// @brief Field modules, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_modules, put=setStaticF_modules)) ::System::Collections::ArrayList*  modules;

/// @brief Method Authenticate, addr 0xac8a0ac, size 0x100, virtual false, abstract: false, final false
static inline ::System::Net::Authorization* Authenticate(::StringW  challenge, ::System::Net::WebRequest*  request, ::System::Net::ICredentials*  credentials) ;

/// @brief Method Clear, addr 0xac89f78, size 0x134, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method DoAuthenticate, addr 0xac8a1ac, size 0x484, virtual false, abstract: false, final false
static inline ::System::Net::Authorization* DoAuthenticate(::StringW  challenge, ::System::Net::WebRequest*  request, ::System::Net::ICredentials*  credentials) ;

/// @brief Method DoUnregister, addr 0xac8ad14, size 0x4a8, virtual false, abstract: false, final false
static inline void DoUnregister(::StringW  authenticationScheme, bool  throwEx) ;

/// @brief Method EnsureModules, addr 0xac89b2c, size 0x284, virtual false, abstract: false, final false
static inline void EnsureModules() ;

/// @brief Method GetMustImplement, addr 0xac89e78, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* GetMustImplement() ;

static inline ::System::Net::AuthenticationManager* New_ctor() ;

/// @brief Method PreAuthenticate, addr 0xac8a630, size 0x4d8, virtual false, abstract: false, final false
static inline ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest*  request, ::System::Net::ICredentials*  credentials) ;

/// @brief Method Register, addr 0xac8ab08, size 0x20c, virtual false, abstract: false, final false
static inline void Register(::System::Net::IAuthenticationModule*  authenticationModule) ;

/// @brief Method Unregister, addr 0xac8b1bc, size 0x11c, virtual false, abstract: false, final false
static inline void Unregister(::System::Net::IAuthenticationModule*  authenticationModule) ;

/// @brief Method Unregister, addr 0xac8b2d8, size 0xa4, virtual false, abstract: false, final false
static inline void Unregister(::StringW  authenticationScheme) ;

/// @brief Method .ctor, addr 0xac89b24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::ICredentialPolicy* getStaticF_credential_policy() ;

static inline ::System::Object* getStaticF_locker() ;

static inline ::System::Collections::ArrayList* getStaticF_modules() ;

/// @brief Method get_CredentialPolicy, addr 0xac89dc0, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::ICredentialPolicy* get_CredentialPolicy() ;

/// @brief Method get_CustomTargetNameDictionary, addr 0xac89ecc, size 0x34, virtual false, abstract: false, final false
static inline ::System::Collections::Specialized::StringDictionary* get_CustomTargetNameDictionary() ;

/// @brief Method get_OSSupportsExtendedProtection, addr 0xac89f70, size 0x8, virtual false, abstract: false, final false
static inline bool get_OSSupportsExtendedProtection() ;

/// @brief Method get_RegisteredModules, addr 0xac89f00, size 0x70, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* get_RegisteredModules() ;

static inline void setStaticF_credential_policy(::System::Net::ICredentialPolicy*  value) ;

static inline void setStaticF_locker(::System::Object*  value) ;

static inline void setStaticF_modules(::System::Collections::ArrayList*  value) ;

/// @brief Method set_CredentialPolicy, addr 0xac89e18, size 0x60, virtual false, abstract: false, final false
static inline void set_CredentialPolicy(::System::Net::ICredentialPolicy*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationManager(AuthenticationManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationManager(AuthenticationManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10651};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::AuthenticationManager) == 0x10, "Size mismatch!");

} // namespace end def System::Net
