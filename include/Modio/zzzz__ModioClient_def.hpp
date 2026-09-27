#pragma once
// IWYU pragma private; include "Modio/ModioClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModioClient)
namespace GlobalNamespace {
struct ModioClient__Init_d__26;
}
namespace GlobalNamespace {
struct ModioClient__Shutdown_d__27;
}
namespace Modio::API::Interfaces {
class IModioAPIInterface;
}
namespace Modio::Authentication {
class IModioAuthService;
}
namespace Modio::FileIO {
class IModioDataStorage;
}
namespace Modio {
class Error;
}
namespace Modio {
class ModioSettings;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Modio {
class ModioClient;
}
// Write type traits
MARK_REF_T(::Modio::ModioClient*);
DEFINE_IL2CPP_CLASS(::Modio::ModioClient*, "Modio", "ModioClient");
// Dependencies System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.ModioClient
class CORDL_TYPE ModioClient : public ::System::Object {
public:
// Declarations
using _Init_d__26 = ::GlobalNamespace::ModioClient__Init_d__26;

using _Shutdown_d__27 = ::GlobalNamespace::ModioClient__Shutdown_d__27;

/// @brief Field InternalOnInitialized, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InternalOnInitialized, put=setStaticF_InternalOnInitialized)) ::System::Action*  InternalOnInitialized;

/// @brief Field OnShutdown, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnShutdown, put=setStaticF_OnShutdown)) ::System::Action*  OnShutdown;

/// @brief Field <IsInitialized>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsInitialized_k__BackingField, put=setStaticF__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field _hasBoundDefaultServices, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasBoundDefaultServices, put=setStaticF__hasBoundDefaultServices)) bool  _hasBoundDefaultServices;

/// @brief Field _initializingTCS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__initializingTCS, put=setStaticF__initializingTCS)) ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*  _initializingTCS;

/// @brief Method BindDefaultServices, addr 0xa018fa0, size 0x3ec, virtual false, abstract: false, final false
static inline void BindDefaultServices() ;

/// [AsyncStateMachine(typeof(Modio.ModioClient::<Init>d__26))]
/// @brief Method Init, addr 0xa018df0, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Init() ;

/// @brief Method Init, addr 0xa018d7c, size 0x74, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Init(::Modio::ModioSettings*  settings) ;

/// [AsyncStateMachine(typeof(Modio.ModioClient::<Shutdown>d__27))]
/// @brief Method Shutdown, addr 0xa018edc, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* Shutdown() ;

/// [CompilerGenerated]
/// @brief Method add_InternalOnInitialized, addr 0xa018a10, size 0xbc, virtual false, abstract: false, final false
static inline void add_InternalOnInitialized(::System::Action*  value) ;

/// @brief Method add_OnInitialized, addr 0xa018b88, size 0x78, virtual false, abstract: false, final false
static inline void add_OnInitialized(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnShutdown, addr 0xa018c04, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnShutdown(::System::Action*  value) ;

static inline ::System::Action* getStaticF_InternalOnInitialized() ;

static inline ::System::Action* getStaticF_OnShutdown() ;

static inline bool getStaticF__IsInitialized_k__BackingField() ;

static inline bool getStaticF__hasBoundDefaultServices() ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>* getStaticF__initializingTCS() ;

/// @brief Method get_Api, addr 0xa00d8b4, size 0x64, virtual false, abstract: false, final false
static inline ::Modio::API::Interfaces::IModioAPIInterface* get_Api() ;

/// @brief Method get_AuthService, addr 0xa018914, size 0x64, virtual false, abstract: false, final false
static inline ::Modio::Authentication::IModioAuthService* get_AuthService() ;

/// @brief Method get_DataStorage, addr 0xa006cc0, size 0x64, virtual false, abstract: false, final false
static inline ::Modio::FileIO::IModioDataStorage* get_DataStorage() ;

/// @brief Method get_IsCurrentlyInitializing, addr 0xa015618, size 0x50, virtual false, abstract: false, final false
static inline bool get_IsCurrentlyInitializing() ;

/// [CompilerGenerated]
/// @brief Method get_IsInitialized, addr 0xa018978, size 0x48, virtual false, abstract: false, final false
static inline bool get_IsInitialized() ;

/// @brief Method get_Settings, addr 0xa012c44, size 0x64, virtual false, abstract: false, final false
static inline ::Modio::ModioSettings* get_Settings() ;

/// [CompilerGenerated]
/// @brief Method remove_InternalOnInitialized, addr 0xa018acc, size 0xbc, virtual false, abstract: false, final false
static inline void remove_InternalOnInitialized(::System::Action*  value) ;

/// @brief Method remove_OnInitialized, addr 0xa018c00, size 0x4, virtual false, abstract: false, final false
static inline void remove_OnInitialized(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnShutdown, addr 0xa018cc0, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnShutdown(::System::Action*  value) ;

static inline void setStaticF_InternalOnInitialized(::System::Action*  value) ;

static inline void setStaticF_OnShutdown(::System::Action*  value) ;

static inline void setStaticF__IsInitialized_k__BackingField(bool  value) ;

static inline void setStaticF__hasBoundDefaultServices(bool  value) ;

static inline void setStaticF__initializingTCS(::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsInitialized, addr 0xa0189c0, size 0x50, virtual false, abstract: false, final false
static inline void set_IsInitialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioClient(ModioClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioClient(ModioClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17491};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModioClient) == 0x10, "Size mismatch!");

} // namespace end def Modio
