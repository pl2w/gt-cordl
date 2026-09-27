#pragma once
// IWYU pragma private; include "System/ComponentModel/LicenseManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LicenseManager)
namespace System::Collections {
class Hashtable;
}
namespace System::ComponentModel {
class LicenseContext;
}
namespace System::ComponentModel {
class LicenseProvider;
}
namespace System::ComponentModel {
struct LicenseUsageMode;
}
namespace System::ComponentModel {
class License;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicenseManager;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::LicenseManager*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::LicenseManager*, "System.ComponentModel", "LicenseManager");
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.LicenseManager
class CORDL_TYPE LicenseManager : public ::System::Object {
public:
// Declarations
/// @brief Field s_context, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_context, put=setStaticF_s_context)) ::System::ComponentModel::LicenseContext*  s_context;

/// @brief Field s_contextLockHolder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_contextLockHolder, put=setStaticF_s_contextLockHolder)) ::System::Object*  s_contextLockHolder;

/// @brief Field s_internalSyncObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_internalSyncObject, put=setStaticF_s_internalSyncObject)) ::System::Object*  s_internalSyncObject;

/// @brief Field s_providerInstances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_providerInstances, put=setStaticF_s_providerInstances)) ::System::Collections::Hashtable*  s_providerInstances;

/// @brief Field s_providers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_providers, put=setStaticF_s_providers)) ::System::Collections::Hashtable*  s_providers;

/// @brief Field s_selfLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_selfLock, put=setStaticF_s_selfLock)) ::System::Object*  s_selfLock;

/// @brief Method CacheProvider, addr 0xad5985c, size 0x1c8, virtual false, abstract: false, final false
static inline void CacheProvider(::System::Type*  type, ::System::ComponentModel::LicenseProvider*  provider) ;

/// @brief Method CreateWithContext, addr 0xad59a24, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Object* CreateWithContext(::System::Type*  type, ::System::ComponentModel::LicenseContext*  creationContext) ;

/// @brief Method CreateWithContext, addr 0xad59afc, size 0x2c0, virtual false, abstract: false, final false
static inline ::System::Object* CreateWithContext(::System::Type*  type, ::System::ComponentModel::LicenseContext*  creationContext, ::ArrayW<::System::Object*>  args) ;

/// @brief Method GetCachedNoLicenseProvider, addr 0xad59f44, size 0xb0, virtual false, abstract: false, final false
static inline bool GetCachedNoLicenseProvider(::System::Type*  type) ;

/// @brief Method GetCachedProvider, addr 0xad59ff4, size 0xc8, virtual false, abstract: false, final false
static inline ::System::ComponentModel::LicenseProvider* GetCachedProvider(::System::Type*  type) ;

/// @brief Method GetCachedProviderInstance, addr 0xad5a0bc, size 0xc8, virtual false, abstract: false, final false
static inline ::System::ComponentModel::LicenseProvider* GetCachedProviderInstance(::System::Type*  providerType) ;

/// @brief Method IsLicensed, addr 0xad5a184, size 0x94, virtual false, abstract: false, final false
static inline bool IsLicensed(::System::Type*  type) ;

/// @brief Method IsValid, addr 0xad5a2a8, size 0x94, virtual false, abstract: false, final false
static inline bool IsValid(::System::Type*  type) ;

/// @brief Method IsValid, addr 0xad5a33c, size 0x70, virtual false, abstract: false, final false
static inline bool IsValid(::System::Type*  type, ::System::Object*  instance, ::by_ref<::System::ComponentModel::License*>  license) ;

/// @brief Method LockContext, addr 0xad59dbc, size 0x188, virtual false, abstract: false, final false
static inline void LockContext(::System::Object*  contextUser) ;

static inline ::System::ComponentModel::LicenseManager* New_ctor() ;

/// @brief Method UnlockContext, addr 0xad5a3ac, size 0x18c, virtual false, abstract: false, final false
static inline void UnlockContext(::System::Object*  contextUser) ;

/// @brief Method Validate, addr 0xad5aa38, size 0xb8, virtual false, abstract: false, final false
static inline ::System::ComponentModel::License* Validate(::System::Type*  type, ::System::Object*  instance) ;

/// @brief Method Validate, addr 0xad5a974, size 0xc4, virtual false, abstract: false, final false
static inline void Validate(::System::Type*  type) ;

/// @brief Method ValidateInternal, addr 0xad5a218, size 0x90, virtual false, abstract: false, final false
static inline bool ValidateInternal(::System::Type*  type, ::System::Object*  instance, bool  allowExceptions, ::by_ref<::System::ComponentModel::License*>  license) ;

/// @brief Method ValidateInternalRecursive, addr 0xad5a538, size 0x370, virtual false, abstract: false, final false
static inline bool ValidateInternalRecursive(::System::ComponentModel::LicenseContext*  context, ::System::Type*  type, ::System::Object*  instance, bool  allowExceptions, ::by_ref<::System::ComponentModel::License*>  license, ::by_ref<::StringW>  licenseKey) ;

/// @brief Method .ctor, addr 0xad59464, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::ComponentModel::LicenseContext* getStaticF_s_context() ;

static inline ::System::Object* getStaticF_s_contextLockHolder() ;

static inline ::System::Object* getStaticF_s_internalSyncObject() ;

static inline ::System::Collections::Hashtable* getStaticF_s_providerInstances() ;

static inline ::System::Collections::Hashtable* getStaticF_s_providers() ;

static inline ::System::Object* getStaticF_s_selfLock() ;

/// @brief Method get_CurrentContext, addr 0xad5946c, size 0x1bc, virtual false, abstract: false, final false
static inline ::System::ComponentModel::LicenseContext* get_CurrentContext() ;

/// @brief Method get_UsageMode, addr 0xad597b8, size 0xa4, virtual false, abstract: false, final false
static inline ::System::ComponentModel::LicenseUsageMode get_UsageMode() ;

static inline void setStaticF_s_context(::System::ComponentModel::LicenseContext*  value) ;

static inline void setStaticF_s_contextLockHolder(::System::Object*  value) ;

static inline void setStaticF_s_internalSyncObject(::System::Object*  value) ;

static inline void setStaticF_s_providerInstances(::System::Collections::Hashtable*  value) ;

static inline void setStaticF_s_providers(::System::Collections::Hashtable*  value) ;

static inline void setStaticF_s_selfLock(::System::Object*  value) ;

/// @brief Method set_CurrentContext, addr 0xad59628, size 0x190, virtual false, abstract: false, final false
static inline void set_CurrentContext(::System::ComponentModel::LicenseContext*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LicenseManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LicenseManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LicenseManager(LicenseManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LicenseManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LicenseManager(LicenseManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10192};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::LicenseManager) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
