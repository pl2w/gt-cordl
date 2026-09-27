#pragma once
// IWYU pragma private; include "UnityEngine/RemoteSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteSettings)
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class RemoteSettings_UpdatedEventHandler;
}
// Forward declare root types
namespace UnityEngine {
class RemoteSettings;
}
namespace UnityEngine {
class RemoteSettings_UpdatedEventHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::RemoteSettings*);
MARK_REF_T(::UnityEngine::RemoteSettings_UpdatedEventHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RemoteSettings*, "UnityEngine", "RemoteSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::RemoteSettings_UpdatedEventHandler*, "UnityEngine", "RemoteSettings/UpdatedEventHandler");
// [NativeHeader("UnityAnalyticsScriptingClasses.h")]
// [NativeHeader("Modules/UnityAnalytics/RemoteSettings/RemoteSettings.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RemoteSettings
class CORDL_TYPE RemoteSettings : public ::System::Object {
public:
// Declarations
using UpdatedEventHandler = ::UnityEngine::RemoteSettings_UpdatedEventHandler;

/// @brief Field BeforeFetchFromServer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BeforeFetchFromServer, put=setStaticF_BeforeFetchFromServer)) ::System::Action*  BeforeFetchFromServer;

/// @brief Field Completed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed, put=setStaticF_Completed)) ::System::Action_3<bool,bool,int32_t>*  Completed;

/// @brief Field Updated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Updated, put=setStaticF_Updated)) ::UnityEngine::RemoteSettings_UpdatedEventHandler*  Updated;

/// [Preserve]
/// [RequiredByNativeCode]
/// @brief Method RemoteSettingsBeforeFetchFromServer, addr 0xb92415c, size 0x64, virtual false, abstract: false, final false
static inline void RemoteSettingsBeforeFetchFromServer() ;

/// [Preserve]
/// [RequiredByNativeCode]
/// @brief Method RemoteSettingsUpdateCompleted, addr 0xb9241c0, size 0x88, virtual false, abstract: false, final false
static inline void RemoteSettingsUpdateCompleted(bool  wasLastUpdatedFromServer, bool  settingsChanged, int32_t  response) ;

/// [Preserve]
/// [RequiredByNativeCode]
/// @brief Method RemoteSettingsUpdated, addr 0xb9240f8, size 0x64, virtual false, abstract: false, final false
static inline void RemoteSettingsUpdated(bool  wasLastUpdatedFromServer) ;

static inline ::System::Action* getStaticF_BeforeFetchFromServer() ;

static inline ::System::Action_3<bool,bool,int32_t>* getStaticF_Completed() ;

static inline ::UnityEngine::RemoteSettings_UpdatedEventHandler* getStaticF_Updated() ;

static inline void setStaticF_BeforeFetchFromServer(::System::Action*  value) ;

static inline void setStaticF_Completed(::System::Action_3<bool,bool,int32_t>*  value) ;

static inline void setStaticF_Updated(::UnityEngine::RemoteSettings_UpdatedEventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteSettings(RemoteSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteSettings(RemoteSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RemoteSettings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RemoteSettings/UpdatedEventHandler
class CORDL_TYPE RemoteSettings_UpdatedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb9242e4, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::RemoteSettings_UpdatedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb924248, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteSettings_UpdatedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteSettings_UpdatedEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteSettings_UpdatedEventHandler(RemoteSettings_UpdatedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteSettings_UpdatedEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteSettings_UpdatedEventHandler(RemoteSettings_UpdatedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RemoteSettings_UpdatedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
