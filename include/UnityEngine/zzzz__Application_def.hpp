#pragma once
// IWYU pragma private; include "UnityEngine/Application.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Application)
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
struct ApplicationMemoryUsageChange;
}
namespace UnityEngine {
struct ApplicationMemoryUsage;
}
namespace UnityEngine {
struct ApplicationSandboxType;
}
namespace UnityEngine {
class Application_AdvertisingIdentifierCallback;
}
namespace UnityEngine {
class Application_LogCallback;
}
namespace UnityEngine {
class Application_LowMemoryCallback;
}
namespace UnityEngine {
class Application_MemoryUsageChangedCallback;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct NetworkReachability;
}
namespace UnityEngine {
struct RuntimePlatform;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine {
class Application;
}
namespace UnityEngine {
class Application_AdvertisingIdentifierCallback;
}
namespace UnityEngine {
class Application_LogCallback;
}
namespace UnityEngine {
class Application_LowMemoryCallback;
}
namespace UnityEngine {
class Application_MemoryUsageChangedCallback;
}
// Write type traits
MARK_REF_T(::UnityEngine::Application*);
MARK_REF_T(::UnityEngine::Application_AdvertisingIdentifierCallback*);
MARK_REF_T(::UnityEngine::Application_LogCallback*);
MARK_REF_T(::UnityEngine::Application_LowMemoryCallback*);
MARK_REF_T(::UnityEngine::Application_MemoryUsageChangedCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Application*, "UnityEngine", "Application");
DEFINE_IL2CPP_CLASS(::UnityEngine::Application_AdvertisingIdentifierCallback*, "UnityEngine", "Application/AdvertisingIdentifierCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Application_LogCallback*, "UnityEngine", "Application/LogCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Application_LowMemoryCallback*, "UnityEngine", "Application/LowMemoryCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Application_MemoryUsageChangedCallback*, "UnityEngine", "Application/MemoryUsageChangedCallback");
// [NativeHeader("Runtime/Misc/Player.h")]
// [NativeHeader("Runtime/Misc/PlayerSettings.h")]
// [NativeHeader("Runtime/Input/TargetFrameRate.h")]
// [NativeHeader("Runtime/Application/AdsIdHandler.h")]
// [NativeHeader("Runtime/Network/NetworkUtility.h")]
// [NativeHeader("Runtime/Input/InputManager.h")]
// [NativeHeader("Runtime/Export/Application/Application.bindings.h")]
// [NativeHeader("Runtime/BaseClasses/IsPlaying.h")]
// [NativeHeader("Runtime/Application/ApplicationInfo.h")]
// [NativeHeader("Runtime/PreloadManager/LoadSceneOperation.h")]
// [NativeHeader("Runtime/PreloadManager/PreloadManager.h")]
// [NativeHeader("Runtime/Misc/SystemInfo.h")]
// [NativeHeader("Runtime/File/ApplicationSpecificPersistentDataPath.h")]
// [NativeHeader("Runtime/Utilities/Argv.h")]
// [NativeHeader("Runtime/Logging/LogSystem.h")]
// [NativeHeader("Runtime/Misc/BuildSettings.h")]
// [NativeHeader("Runtime/Utilities/URLUtility.h")]
// [NativeHeader("Runtime/Input/GetInput.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application
class CORDL_TYPE Application : public ::System::Object {
public:
// Declarations
using AdvertisingIdentifierCallback = ::UnityEngine::Application_AdvertisingIdentifierCallback;

using LogCallback = ::UnityEngine::Application_LogCallback;

using LowMemoryCallback = ::UnityEngine::Application_LowMemoryCallback;

using MemoryUsageChangedCallback = ::UnityEngine::Application_MemoryUsageChangedCallback;

/// @brief Field deepLinkActivated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deepLinkActivated, put=setStaticF_deepLinkActivated)) ::System::Action_1<::StringW>*  deepLinkActivated;

/// @brief Field focusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_focusChanged, put=setStaticF_focusChanged)) ::System::Action_1<bool>*  focusChanged;

/// @brief Field lowMemory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lowMemory, put=setStaticF_lowMemory)) ::UnityEngine::Application_LowMemoryCallback*  lowMemory;

/// @brief Field memoryUsageChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memoryUsageChanged, put=setStaticF_memoryUsageChanged)) ::UnityEngine::Application_MemoryUsageChangedCallback*  memoryUsageChanged;

/// @brief Field quitting, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_quitting, put=setStaticF_quitting)) ::System::Action*  quitting;

/// @brief Field s_LogCallbackHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LogCallbackHandler, put=setStaticF_s_LogCallbackHandler)) ::UnityEngine::Application_LogCallback*  s_LogCallbackHandler;

/// @brief Field s_LogCallbackHandlerThreaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LogCallbackHandlerThreaded, put=setStaticF_s_LogCallbackHandlerThreaded)) ::UnityEngine::Application_LogCallback*  s_LogCallbackHandlerThreaded;

/// @brief Field s_currentCancellationTokenSource, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_currentCancellationTokenSource, put=setStaticF_s_currentCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  s_currentCancellationTokenSource;

/// @brief Field unloading, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unloading, put=setStaticF_unloading)) ::System::Action*  unloading;

/// @brief Field wantsToQuit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wantsToQuit, put=setStaticF_wantsToQuit)) ::System::Func_1<bool>*  wantsToQuit;

/// [RequiredByNativeCode]
/// @brief Method CallLogCallback, addr 0xb566bec, size 0xe8, virtual false, abstract: false, final false
static inline void CallLogCallback(::StringW  logString, ::StringW  stackTrace, ::UnityEngine::LogType  type, bool  invokedOnMainThread) ;

/// [RequiredByNativeCode]
/// @brief Method CallLowMemory, addr 0xb5666d0, size 0x130, virtual false, abstract: false, final false
static inline void CallLowMemory(::UnityEngine::ApplicationMemoryUsage  usage) ;

/// [RequiredByNativeCode]
/// @brief Method HasLogCallback, addr 0xb566808, size 0x84, virtual false, abstract: false, final false
static inline bool HasLogCallback() ;

/// [FreeFunction("GetBuildSettings().GetHasPROVersion")]
/// @brief Method HasProLicense, addr 0xb565380, size 0x28, virtual false, abstract: false, final false
static inline bool HasProLicense() ;

/// [RequiredByNativeCode]
/// @brief Method Internal_ApplicationQuit, addr 0xb5675cc, size 0x94, virtual false, abstract: false, final false
static inline void Internal_ApplicationQuit() ;

/// [RequiredByNativeCode]
/// @brief Method Internal_ApplicationUnload, addr 0xb567660, size 0x94, virtual false, abstract: false, final false
static inline void Internal_ApplicationUnload() ;

/// [RequiredByNativeCode]
/// @brief Method Internal_ApplicationWantsToQuit, addr 0xb567124, size 0x1f0, virtual false, abstract: false, final false
static inline bool Internal_ApplicationWantsToQuit() ;

/// [RequiredByNativeCode]
/// @brief Method Internal_InitializeExitCancellationToken, addr 0xb567480, size 0xe0, virtual false, abstract: false, final false
static inline void Internal_InitializeExitCancellationToken() ;

/// [RequiredByNativeCode]
/// @brief Method Internal_RaiseExitCancellationToken, addr 0xb567560, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_RaiseExitCancellationToken() ;

/// [RequiredByNativeCode]
/// @brief Method InvokeDeepLinkActivated, addr 0xb5677e0, size 0x9c, virtual false, abstract: false, final false
static inline void InvokeDeepLinkActivated(::StringW  url) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeFocusChanged, addr 0xb567744, size 0x9c, virtual false, abstract: false, final false
static inline void InvokeFocusChanged(bool  focus) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeOnBeforeRender, addr 0xb5676f4, size 0x50, virtual false, abstract: false, final false
static inline void InvokeOnBeforeRender() ;

/// [FreeFunction("OpenURL")]
/// @brief Method OpenURL, addr 0xb56619c, size 0x18c, virtual false, abstract: false, final false
static inline void OpenURL(::StringW  url) ;

/// @brief Method OpenURL_Injected, addr 0xb566328, size 0x3c, virtual false, abstract: false, final false
static inline void OpenURL_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  url) ;

/// @brief Method Quit, addr 0xb565124, size 0x70, virtual false, abstract: false, final false
static inline void Quit() ;

/// [FreeFunction("GetInputManager().QuitApplication")]
/// @brief Method Quit, addr 0xb5650e8, size 0x3c, virtual false, abstract: false, final false
static inline void Quit(int32_t  exitCode) ;

/// [FreeFunction("GetAdsIdHandler().RequestAdsIdAsync")]
/// @brief Method RequestAdvertisingIdentifierAsync, addr 0xb566160, size 0x3c, virtual false, abstract: false, final false
static inline bool RequestAdvertisingIdentifierAsync(::UnityEngine::Application_AdvertisingIdentifierCallback*  delegateMethod) ;

/// [FreeFunction("Application_Bindings::SetLogCallbackDefined")]
/// @brief Method SetLogCallbackDefined, addr 0xb5663c8, size 0x3c, virtual false, abstract: false, final false
static inline void SetLogCallbackDefined(bool  defined) ;

/// [CompilerGenerated]
/// @brief Method add_focusChanged, addr 0xb566d84, size 0xf4, virtual false, abstract: false, final false
static inline void add_focusChanged(::System::Action_1<bool>*  value) ;

/// @brief Method add_logMessageReceived, addr 0xb56688c, size 0xec, virtual false, abstract: false, final false
static inline void add_logMessageReceived(::UnityEngine::Application_LogCallback*  value) ;

/// @brief Method add_logMessageReceivedThreaded, addr 0xb566a3c, size 0xec, virtual false, abstract: false, final false
static inline void add_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method add_lowMemory, addr 0xb566520, size 0xd8, virtual false, abstract: false, final false
static inline void add_lowMemory(::UnityEngine::Application_LowMemoryCallback*  value) ;

/// @brief Method add_onBeforeRender, addr 0xb566cd4, size 0x58, virtual false, abstract: false, final false
static inline void add_onBeforeRender(::UnityEngine::Events::UnityAction*  value) ;

/// [CompilerGenerated]
/// @brief Method add_quitting, addr 0xb566f6c, size 0xdc, virtual false, abstract: false, final false
static inline void add_quitting(::System::Action*  value) ;

static inline ::System::Action_1<::StringW>* getStaticF_deepLinkActivated() ;

static inline ::System::Action_1<bool>* getStaticF_focusChanged() ;

static inline ::UnityEngine::Application_LowMemoryCallback* getStaticF_lowMemory() ;

static inline ::UnityEngine::Application_MemoryUsageChangedCallback* getStaticF_memoryUsageChanged() ;

static inline ::System::Action* getStaticF_quitting() ;

static inline ::UnityEngine::Application_LogCallback* getStaticF_s_LogCallbackHandler() ;

static inline ::UnityEngine::Application_LogCallback* getStaticF_s_LogCallbackHandlerThreaded() ;

static inline ::System::Threading::CancellationTokenSource* getStaticF_s_currentCancellationTokenSource() ;

static inline ::System::Action* getStaticF_unloading() ;

static inline ::System::Func_1<bool>* getStaticF_wantsToQuit() ;

/// [FreeFunction("GetPlayerSettings().GetAbsoluteURL")]
/// @brief Method get_absoluteURL, addr 0xb5658b0, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_absoluteURL() ;

/// @brief Method get_absoluteURL_Injected, addr 0xb5659ac, size 0x3c, virtual false, abstract: false, final false
static inline void get_absoluteURL_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("Application_Bindings::GetBuildGUID")]
/// @brief Method get_buildGUID, addr 0xb5651e4, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_buildGUID() ;

/// @brief Method get_buildGUID_Injected, addr 0xb5652e0, size 0x3c, virtual false, abstract: false, final false
static inline void get_buildGUID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("GetPlayerSettings().GetCompanyName")]
/// @brief Method get_companyName, addr 0xb566028, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_companyName() ;

/// @brief Method get_companyName_Injected, addr 0xb566124, size 0x3c, virtual false, abstract: false, final false
static inline void get_companyName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("GetAppDataPath", IsThreadSafe = true)]
/// @brief Method get_dataPath, addr 0xb5653d0, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_dataPath() ;

/// @brief Method get_dataPath_Injected, addr 0xb5654cc, size 0x3c, virtual false, abstract: false, final false
static inline void get_dataPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_exitCancellationToken, addr 0xb56741c, size 0x64, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken get_exitCancellationToken() ;

/// [FreeFunction("GetApplicationInfo().GetApplicationIdentifier")]
/// @brief Method get_identifier, addr 0xb565d90, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_identifier() ;

/// @brief Method get_identifier_Injected, addr 0xb565e8c, size 0x3c, virtual false, abstract: false, final false
static inline void get_identifier_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("GetApplicationInfo().GetInstallerName")]
/// @brief Method get_installerName, addr 0xb565c58, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_installerName() ;

/// @brief Method get_installerName_Injected, addr 0xb565d54, size 0x3c, virtual false, abstract: false, final false
static inline void get_installerName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("GetInternetReachability")]
/// @brief Method get_internetReachability, addr 0xb5664f8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::NetworkReachability get_internetReachability() ;

/// [FreeFunction("::IsBatchmode")]
/// @brief Method get_isBatchMode, addr 0xb5653a8, size 0x28, virtual false, abstract: false, final false
static inline bool get_isBatchMode() ;

/// @brief Method get_isEditor, addr 0xb56787c, size 0x8, virtual false, abstract: false, final false
static inline bool get_isEditor() ;

/// [FreeFunction("IsPlayerFocused")]
/// @brief Method get_isFocused, addr 0xb5651bc, size 0x28, virtual false, abstract: false, final false
static inline bool get_isFocused() ;

/// @brief Method get_isMobilePlatform, addr 0xb56642c, size 0xa4, virtual false, abstract: false, final false
static inline bool get_isMobilePlatform() ;

/// [FreeFunction("IsWorldPlaying")]
/// @brief Method get_isPlaying, addr 0xb565194, size 0x28, virtual false, abstract: false, final false
static inline bool get_isPlaying() ;

/// [FreeFunction("GetPersistentDataPathApplicationSpecific")]
/// @brief Method get_persistentDataPath, addr 0xb565640, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_persistentDataPath() ;

/// @brief Method get_persistentDataPath_Injected, addr 0xb56573c, size 0x3c, virtual false, abstract: false, final false
static inline void get_persistentDataPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("systeminfo::GetRuntimePlatform", IsThreadSafe = true)]
/// @brief Method get_platform, addr 0xb566404, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::RuntimePlatform get_platform() ;

/// [FreeFunction("GetPlayerSettings().GetProductName")]
/// @brief Method get_productName, addr 0xb565ef0, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_productName() ;

/// @brief Method get_productName_Injected, addr 0xb565fec, size 0x3c, virtual false, abstract: false, final false
static inline void get_productName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("GetPlayerSettingsRunInBackground")]
/// @brief Method get_runInBackground, addr 0xb56531c, size 0x28, virtual false, abstract: false, final false
static inline bool get_runInBackground() ;

/// [FreeFunction("GetApplicationInfo().GetSandboxType")]
/// @brief Method get_sandboxType, addr 0xb565ec8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::ApplicationSandboxType get_sandboxType() ;

/// [FreeFunction("GetStreamingAssetsPath", IsThreadSafe = true)]
/// @brief Method get_streamingAssetsPath, addr 0xb565508, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_streamingAssetsPath() ;

/// @brief Method get_streamingAssetsPath_Injected, addr 0xb565604, size 0x3c, virtual false, abstract: false, final false
static inline void get_streamingAssetsPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("(SystemLanguage)systeminfo::GetSystemLanguage")]
/// @brief Method get_systemLanguage, addr 0xb5664d0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::SystemLanguage get_systemLanguage() ;

/// [FreeFunction("GetTargetFrameRate")]
/// @brief Method get_targetFrameRate, addr 0xb566364, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_targetFrameRate() ;

/// [FreeFunction("GetTemporaryCachePathApplicationSpecific")]
/// @brief Method get_temporaryCachePath, addr 0xb565778, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_temporaryCachePath() ;

/// @brief Method get_temporaryCachePath_Injected, addr 0xb565874, size 0x3c, virtual false, abstract: false, final false
static inline void get_temporaryCachePath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("Application_Bindings::GetUnityVersion", IsThreadSafe = true)]
/// @brief Method get_unityVersion, addr 0xb5659e8, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_unityVersion() ;

/// @brief Method get_unityVersion_Injected, addr 0xb565ae4, size 0x3c, virtual false, abstract: false, final false
static inline void get_unityVersion_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("GetApplicationInfo().GetVersion")]
/// @brief Method get_version, addr 0xb565b20, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_version() ;

/// @brief Method get_version_Injected, addr 0xb565c1c, size 0x3c, virtual false, abstract: false, final false
static inline void get_version_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [CompilerGenerated]
/// @brief Method remove_focusChanged, addr 0xb566e78, size 0xf4, virtual false, abstract: false, final false
static inline void remove_focusChanged(::System::Action_1<bool>*  value) ;

/// @brief Method remove_logMessageReceived, addr 0xb566978, size 0xc4, virtual false, abstract: false, final false
static inline void remove_logMessageReceived(::UnityEngine::Application_LogCallback*  value) ;

/// @brief Method remove_logMessageReceivedThreaded, addr 0xb566b28, size 0xc4, virtual false, abstract: false, final false
static inline void remove_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_lowMemory, addr 0xb5665f8, size 0xd8, virtual false, abstract: false, final false
static inline void remove_lowMemory(::UnityEngine::Application_LowMemoryCallback*  value) ;

/// @brief Method remove_onBeforeRender, addr 0xb566d2c, size 0x58, virtual false, abstract: false, final false
static inline void remove_onBeforeRender(::UnityEngine::Events::UnityAction*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_quitting, addr 0xb567048, size 0xdc, virtual false, abstract: false, final false
static inline void remove_quitting(::System::Action*  value) ;

static inline void setStaticF_deepLinkActivated(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_focusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_lowMemory(::UnityEngine::Application_LowMemoryCallback*  value) ;

static inline void setStaticF_memoryUsageChanged(::UnityEngine::Application_MemoryUsageChangedCallback*  value) ;

static inline void setStaticF_quitting(::System::Action*  value) ;

static inline void setStaticF_s_LogCallbackHandler(::UnityEngine::Application_LogCallback*  value) ;

static inline void setStaticF_s_LogCallbackHandlerThreaded(::UnityEngine::Application_LogCallback*  value) ;

static inline void setStaticF_s_currentCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

static inline void setStaticF_unloading(::System::Action*  value) ;

static inline void setStaticF_wantsToQuit(::System::Func_1<bool>*  value) ;

/// [FreeFunction("SetPlayerSettingsRunInBackground")]
/// @brief Method set_runInBackground, addr 0xb565344, size 0x3c, virtual false, abstract: false, final false
static inline void set_runInBackground(bool  value) ;

/// [FreeFunction("SetTargetFrameRate")]
/// @brief Method set_targetFrameRate, addr 0xb56638c, size 0x3c, virtual false, abstract: false, final false
static inline void set_targetFrameRate(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Application(Application && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application(Application const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14792};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Application) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/LogCallback
class CORDL_TYPE Application_LogCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb567be8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

static inline ::UnityEngine::Application_LogCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb567b34, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application_LogCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application_LogCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Application_LogCallback(Application_LogCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application_LogCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application_LogCallback(Application_LogCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14791};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Application_LogCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/MemoryUsageChangedCallback
class CORDL_TYPE Application_MemoryUsageChangedCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb567b20, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::ApplicationMemoryUsageChange>  usage) ;

static inline ::UnityEngine::Application_MemoryUsageChangedCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb567a70, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application_MemoryUsageChangedCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application_MemoryUsageChangedCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Application_MemoryUsageChangedCallback(Application_MemoryUsageChangedCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application_MemoryUsageChangedCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application_MemoryUsageChangedCallback(Application_MemoryUsageChangedCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14790};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Application_MemoryUsageChangedCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/LowMemoryCallback
class CORDL_TYPE Application_LowMemoryCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb567a5c, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::Application_LowMemoryCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb5679c0, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application_LowMemoryCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application_LowMemoryCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Application_LowMemoryCallback(Application_LowMemoryCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application_LowMemoryCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application_LowMemoryCallback(Application_LowMemoryCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14789};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Application_LowMemoryCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/AdvertisingIdentifierCallback
class CORDL_TYPE Application_AdvertisingIdentifierCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb5679ac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  advertisingId, bool  trackingEnabled, ::StringW  errorMsg) ;

static inline ::UnityEngine::Application_AdvertisingIdentifierCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb5678f8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application_AdvertisingIdentifierCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application_AdvertisingIdentifierCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Application_AdvertisingIdentifierCallback(Application_AdvertisingIdentifierCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application_AdvertisingIdentifierCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application_AdvertisingIdentifierCallback(Application_AdvertisingIdentifierCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14788};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Application_AdvertisingIdentifierCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
