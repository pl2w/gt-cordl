#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/BacktraceBreadcrumbsEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__NetworkReachability_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BacktraceBreadcrumbsEventHandler)
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BacktraceBreadcrumbType;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class BacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BreadcrumbLevel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Threading {
class Thread;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct NetworkReachability;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs {
class BacktraceBreadcrumbsEventHandler;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*, "Backtrace.Unity.Model.Breadcrumbs", "BacktraceBreadcrumbsEventHandler");
// Dependencies Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbType, System.Object, UnityEngine.NetworkReachability
namespace Backtrace::Unity::Model::Breadcrumbs {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbsEventHandler
class CORDL_TYPE BacktraceBreadcrumbsEventHandler : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HasRegisteredEvents, put=set_HasRegisteredEvents)) bool  HasRegisteredEvents;

/// @brief Field <HasRegisteredEvents>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasRegisteredEvents_k__BackingField, put=__cordl_internal_set__HasRegisteredEvents_k__BackingField)) bool  _HasRegisteredEvents_k__BackingField;

/// @brief Field _breadcrumbs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__breadcrumbs, put=__cordl_internal_set__breadcrumbs)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  _breadcrumbs;

/// @brief Field _networkStatus, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__networkStatus, put=__cordl_internal_set__networkStatus)) ::UnityEngine::NetworkReachability  _networkStatus;

/// @brief Field _registeredLevel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__registeredLevel, put=__cordl_internal_set__registeredLevel)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  _registeredLevel;

/// @brief Field _thread, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__thread, put=__cordl_internal_set__thread)) ::System::Threading::Thread*  _thread;

/// @brief Method Application_focusChanged, addr 0x5f1e0ec, size 0x108, virtual false, abstract: false, final false
inline void Application_focusChanged(bool  hasFocus) ;

/// @brief Method HandleApplicationQuitting, addr 0x5f1df50, size 0x54, virtual false, abstract: false, final false
inline void HandleApplicationQuitting() ;

/// @brief Method HandleBackgroundMessage, addr 0x5f1dfa4, size 0x60, virtual false, abstract: false, final false
inline void HandleBackgroundMessage(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method HandleLowMemory, addr 0x5f1defc, size 0x54, virtual false, abstract: false, final false
inline void HandleLowMemory() ;

/// @brief Method HandleMessage, addr 0x5f1e004, size 0xe8, virtual false, abstract: false, final false
inline void HandleMessage(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method HandleSceneChanged, addr 0x5f1dd5c, size 0x1a0, virtual false, abstract: false, final false
inline void HandleSceneChanged(::UnityEngine::SceneManagement::Scene  sceneFrom, ::UnityEngine::SceneManagement::Scene  sceneTo) ;

/// @brief Method Log, addr 0x5f1dbb8, size 0x54, virtual false, abstract: false, final false
inline void Log(::StringW  message, ::UnityEngine::LogType  level, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  breadcrumbLevel, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method LogNewNetworkStatus, addr 0x5f1e1f4, size 0xa8, virtual false, abstract: false, final false
inline void LogNewNetworkStatus(::UnityEngine::NetworkReachability  status) ;

static inline ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler* New_ctor(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs) ;

/// @brief Method Register, addr 0x5f1d1ec, size 0x344, virtual false, abstract: false, final false
inline void Register(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level) ;

/// @brief Method SceneManager_sceneLoaded, addr 0x5f1dc0c, size 0x150, virtual false, abstract: false, final false
inline void SceneManager_sceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode) ;

/// @brief Method SceneManager_sceneUnloaded, addr 0x5f1db34, size 0x84, virtual false, abstract: false, final false
inline void SceneManager_sceneUnloaded(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method Unregister, addr 0x5f1cd48, size 0x328, virtual false, abstract: false, final false
inline void Unregister() ;

/// @brief Method Update, addr 0x5f1d9b4, size 0x98, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__HasRegisteredEvents_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasRegisteredEvents_k__BackingField() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* const& __cordl_internal_get__breadcrumbs() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*& __cordl_internal_get__breadcrumbs() ;

constexpr ::UnityEngine::NetworkReachability const& __cordl_internal_get__networkStatus() const;

constexpr ::UnityEngine::NetworkReachability& __cordl_internal_get__networkStatus() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType const& __cordl_internal_get__registeredLevel() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType& __cordl_internal_get__registeredLevel() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get__thread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get__thread() ;

constexpr void __cordl_internal_set__HasRegisteredEvents_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__breadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  value) ;

constexpr void __cordl_internal_set__networkStatus(::UnityEngine::NetworkReachability  value) ;

constexpr void __cordl_internal_set__registeredLevel(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  value) ;

constexpr void __cordl_internal_set__thread(::System::Threading::Thread*  value) ;

/// @brief Method .ctor, addr 0x5f1cce4, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs) ;

/// [CompilerGenerated]
/// @brief Method get_HasRegisteredEvents, addr 0x5f1db24, size 0x8, virtual false, abstract: false, final false
inline bool get_HasRegisteredEvents() ;

/// [CompilerGenerated]
/// @brief Method set_HasRegisteredEvents, addr 0x5f1db2c, size 0x8, virtual false, abstract: false, final false
inline void set_HasRegisteredEvents(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceBreadcrumbsEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceBreadcrumbsEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceBreadcrumbsEventHandler(BacktraceBreadcrumbsEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceBreadcrumbsEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceBreadcrumbsEventHandler(BacktraceBreadcrumbsEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27636};

/// [CompilerGenerated]
/// @brief Field <HasRegisteredEvents>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____HasRegisteredEvents_k__BackingField;

/// @brief Field _breadcrumbs, offset: 0x18, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  ____breadcrumbs;

/// @brief Field _registeredLevel, offset: 0x20, size: 0x4, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  ____registeredLevel;

/// @brief Field _networkStatus, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::NetworkReachability  ____networkStatus;

/// @brief Field _thread, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Thread*  ____thread;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler, ____HasRegisteredEvents_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler, ____breadcrumbs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler, ____registeredLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler, ____networkStatus) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler, ____thread) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Breadcrumbs
