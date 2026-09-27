#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509StoreManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(X509StoreManager)
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Stores;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509StoreManager;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::X509StoreManager*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X509StoreManager*, "Mono.Security.X509", "X509StoreManager");
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509StoreManager
class CORDL_TYPE X509StoreManager : public ::System::Object {
public:
// Declarations
/// @brief Field _localMachinePath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localMachinePath, put=setStaticF__localMachinePath)) ::StringW  _localMachinePath;

/// @brief Field _machineStore, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__machineStore, put=setStaticF__machineStore)) ::Mono::Security::X509::X509Stores*  _machineStore;

/// @brief Field _newLocalMachinePath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__newLocalMachinePath, put=setStaticF__newLocalMachinePath)) ::StringW  _newLocalMachinePath;

/// @brief Field _newMachineStore, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__newMachineStore, put=setStaticF__newMachineStore)) ::Mono::Security::X509::X509Stores*  _newMachineStore;

/// @brief Field _newUserPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__newUserPath, put=setStaticF__newUserPath)) ::StringW  _newUserPath;

/// @brief Field _newUserStore, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__newUserStore, put=setStaticF__newUserStore)) ::Mono::Security::X509::X509Stores*  _newUserStore;

/// @brief Field _userPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__userPath, put=setStaticF__userPath)) ::StringW  _userPath;

/// @brief Field _userStore, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__userStore, put=setStaticF__userStore)) ::Mono::Security::X509::X509Stores*  _userStore;

static inline ::Mono::Security::X509::X509StoreManager* New_ctor() ;

/// @brief Method .ctor, addr 0xa0f5f18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF__localMachinePath() ;

static inline ::Mono::Security::X509::X509Stores* getStaticF__machineStore() ;

static inline ::StringW getStaticF__newLocalMachinePath() ;

static inline ::Mono::Security::X509::X509Stores* getStaticF__newMachineStore() ;

static inline ::StringW getStaticF__newUserPath() ;

static inline ::Mono::Security::X509::X509Stores* getStaticF__newUserStore() ;

static inline ::StringW getStaticF__userPath() ;

static inline ::Mono::Security::X509::X509Stores* getStaticF__userStore() ;

/// @brief Method get_CurrentUser, addr 0xa0f6368, size 0xb4, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X509Stores* get_CurrentUser() ;

/// @brief Method get_CurrentUserPath, addr 0xa0f5f20, size 0x118, virtual false, abstract: false, final false
static inline ::StringW get_CurrentUserPath() ;

/// @brief Method get_IntermediateCACertificates, addr 0xa0f667c, size 0x9c, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X509CertificateCollection* get_IntermediateCACertificates() ;

/// @brief Method get_IntermediateCACrls, addr 0xa0f6808, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Collections::ArrayList* get_IntermediateCACrls() ;

/// @brief Method get_LocalMachine, addr 0xa0f6458, size 0xb4, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X509Stores* get_LocalMachine() ;

/// @brief Method get_LocalMachinePath, addr 0xa0f6038, size 0x110, virtual false, abstract: false, final false
static inline ::StringW get_LocalMachinePath() ;

/// @brief Method get_NewCurrentUser, addr 0xa0f650c, size 0xb8, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X509Stores* get_NewCurrentUser() ;

/// @brief Method get_NewCurrentUserPath, addr 0xa0f6148, size 0x110, virtual false, abstract: false, final false
static inline ::StringW get_NewCurrentUserPath() ;

/// @brief Method get_NewLocalMachine, addr 0xa0f65c4, size 0xb8, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X509Stores* get_NewLocalMachine() ;

/// @brief Method get_NewLocalMachinePath, addr 0xa0f6258, size 0x110, virtual false, abstract: false, final false
static inline ::StringW get_NewLocalMachinePath() ;

/// @brief Method get_TrustedRootCACrls, addr 0xa0f69ac, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Collections::ArrayList* get_TrustedRootCACrls() ;

/// @brief Method get_TrustedRootCertificates, addr 0xa0f22ec, size 0x9c, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X509CertificateCollection* get_TrustedRootCertificates() ;

/// @brief Method get_UntrustedCertificates, addr 0xa0f6a60, size 0x9c, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X509CertificateCollection* get_UntrustedCertificates() ;

static inline void setStaticF__localMachinePath(::StringW  value) ;

static inline void setStaticF__machineStore(::Mono::Security::X509::X509Stores*  value) ;

static inline void setStaticF__newLocalMachinePath(::StringW  value) ;

static inline void setStaticF__newMachineStore(::Mono::Security::X509::X509Stores*  value) ;

static inline void setStaticF__newUserPath(::StringW  value) ;

static inline void setStaticF__newUserStore(::Mono::Security::X509::X509Stores*  value) ;

static inline void setStaticF__userPath(::StringW  value) ;

static inline void setStaticF__userStore(::Mono::Security::X509::X509Stores*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509StoreManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509StoreManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X509StoreManager(X509StoreManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509StoreManager(X509StoreManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X509StoreManager) == 0x10, "Size mismatch!");

} // namespace end def Mono::Security::X509
