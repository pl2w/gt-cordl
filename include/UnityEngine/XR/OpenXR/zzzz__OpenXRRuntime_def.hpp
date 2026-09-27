#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRRuntime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRRuntime)
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRRuntime;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRRuntime*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRRuntime*, "UnityEngine.XR.OpenXR", "OpenXRRuntime");
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRRuntime
class CORDL_TYPE OpenXRRuntime : public ::System::Object {
public:
// Declarations
/// @brief Field wantsToQuit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wantsToQuit, put=setStaticF_wantsToQuit)) ::System::Func_1<bool>*  wantsToQuit;

/// @brief Field wantsToRestart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wantsToRestart, put=setStaticF_wantsToRestart)) ::System::Func_1<bool>*  wantsToRestart;

/// @brief Method GetAvailableExtensions, addr 0xb4e3a40, size 0xec, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetAvailableExtensions() ;

/// @brief Method GetEnabledExtensions, addr 0xb4e3954, size 0xec, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetEnabledExtensions() ;

/// @brief Method GetExtensionVersion, addr 0xb4e3d6c, size 0x4, virtual false, abstract: false, final false
static inline uint32_t GetExtensionVersion(::StringW  extensionName) ;

/// @brief Method GetLastError, addr 0xb4ebb38, size 0xac, virtual false, abstract: false, final false
static inline bool GetLastError(::by_ref<::StringW>  error) ;

/// @brief Method Internal_GetAPIVersion, addr 0xb4eaf14, size 0x9c, virtual false, abstract: false, final false
static inline bool Internal_GetAPIVersion(::by_ref<uint16_t>  major, ::by_ref<uint16_t>  minor, ::by_ref<uint32_t>  patch) ;

/// @brief Method Internal_GetAvailableExtensionCount, addr 0xb4eb2c8, size 0x64, virtual false, abstract: false, final false
static inline uint32_t Internal_GetAvailableExtensionCount() ;

/// @brief Method Internal_GetAvailableExtensionName, addr 0xb4eb32c, size 0xb4, virtual false, abstract: false, final false
static inline bool Internal_GetAvailableExtensionName(uint32_t  index, ::by_ref<::StringW>  extensionName) ;

/// @brief Method Internal_GetAvailableExtensionNamePtr, addr 0xb4eba38, size 0x84, virtual false, abstract: false, final false
static inline bool Internal_GetAvailableExtensionNamePtr(uint32_t  index, ::by_ref<::System::IntPtr>  extensionName) ;

/// @brief Method Internal_GetEnabledExtensionCount, addr 0xb4eb1b0, size 0x64, virtual false, abstract: false, final false
static inline uint32_t Internal_GetEnabledExtensionCount() ;

/// @brief Method Internal_GetEnabledExtensionName, addr 0xb4eb214, size 0xb4, virtual false, abstract: false, final false
static inline bool Internal_GetEnabledExtensionName(uint32_t  index, ::by_ref<::StringW>  extensionName) ;

/// @brief Method Internal_GetEnabledExtensionNamePtr, addr 0xb4eb9b4, size 0x84, virtual false, abstract: false, final false
static inline bool Internal_GetEnabledExtensionNamePtr(uint32_t  index, ::by_ref<::System::IntPtr>  outName) ;

/// @brief Method Internal_GetExtensionVersion, addr 0xb4eb11c, size 0x94, virtual false, abstract: false, final false
static inline uint32_t Internal_GetExtensionVersion(::StringW  extensionName) ;

/// @brief Method Internal_GetLastError, addr 0xb4ebabc, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_GetLastError(::by_ref<::System::IntPtr>  error) ;

/// @brief Method Internal_GetPluginVersion, addr 0xb4eafb0, size 0x84, virtual false, abstract: false, final false
static inline bool Internal_GetPluginVersion(::by_ref<::System::IntPtr>  pluginVersionPtr) ;

/// @brief Method Internal_GetRuntimeName, addr 0xb4eadf4, size 0x84, virtual false, abstract: false, final false
static inline bool Internal_GetRuntimeName(::by_ref<::System::IntPtr>  runtimeNamePtr) ;

/// @brief Method Internal_GetRuntimeVersion, addr 0xb4eae78, size 0x9c, virtual false, abstract: false, final false
static inline bool Internal_GetRuntimeVersion(::by_ref<uint16_t>  major, ::by_ref<uint16_t>  minor, ::by_ref<uint32_t>  patch) ;

/// @brief Method Internal_GetSoftRestartLoopAtInitialization, addr 0xb4eb71c, size 0x6c, virtual false, abstract: false, final false
static inline bool Internal_GetSoftRestartLoopAtInitialization() ;

/// @brief Method Internal_IsExtensionEnabled, addr 0xb4eb084, size 0x98, virtual false, abstract: false, final false
static inline bool Internal_IsExtensionEnabled(::StringW  extensionName) ;

/// @brief Method Internal_SetSoftRestartLoopAtInitialization, addr 0xb4eb78c, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetSoftRestartLoopAtInitialization(bool  value) ;

/// @brief Method InvokeEvent, addr 0xb4eb808, size 0x1ac, virtual false, abstract: false, final false
static inline bool InvokeEvent(::System::Func_1<bool>*  func) ;

/// @brief Method IsExtensionEnabled, addr 0xb4eb080, size 0x4, virtual false, abstract: false, final false
static inline bool IsExtensionEnabled(::StringW  extensionName) ;

/// @brief Method LogLastError, addr 0xb4ebbe4, size 0x6c, virtual false, abstract: false, final false
static inline void LogLastError() ;

/// @brief Method ShouldQuit, addr 0xb4ead18, size 0x48, virtual false, abstract: false, final false
static inline bool ShouldQuit() ;

/// @brief Method ShouldRestart, addr 0xb4eacd0, size 0x48, virtual false, abstract: false, final false
static inline bool ShouldRestart() ;

/// [CompilerGenerated]
/// @brief Method add_wantsToQuit, addr 0xb4eb3e0, size 0xcc, virtual false, abstract: false, final false
static inline void add_wantsToQuit(::System::Func_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_wantsToRestart, addr 0xb4eb578, size 0xd0, virtual false, abstract: false, final false
static inline void add_wantsToRestart(::System::Func_1<bool>*  value) ;

static inline ::System::Func_1<bool>* getStaticF_wantsToQuit() ;

static inline ::System::Func_1<bool>* getStaticF_wantsToRestart() ;

/// @brief Method get_apiVersion, addr 0xb4e3864, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW get_apiVersion() ;

/// @brief Method get_name, addr 0xb4e3664, size 0x88, virtual false, abstract: false, final false
static inline ::StringW get_name() ;

/// @brief Method get_pluginVersion, addr 0xb4e37dc, size 0x88, virtual false, abstract: false, final false
static inline ::StringW get_pluginVersion() ;

/// @brief Method get_retryInitializationOnFormFactorErrors, addr 0xb4eb718, size 0x4, virtual false, abstract: false, final false
static inline bool get_retryInitializationOnFormFactorErrors() ;

/// @brief Method get_version, addr 0xb4e36ec, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW get_version() ;

/// @brief Method isRuntimeAPIVersionGreaterThan1_1, addr 0xb4eb034, size 0x4c, virtual false, abstract: false, final false
static inline bool isRuntimeAPIVersionGreaterThan1_1() ;

/// [CompilerGenerated]
/// @brief Method remove_wantsToQuit, addr 0xb4eb4ac, size 0xcc, virtual false, abstract: false, final false
static inline void remove_wantsToQuit(::System::Func_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_wantsToRestart, addr 0xb4eb648, size 0xd0, virtual false, abstract: false, final false
static inline void remove_wantsToRestart(::System::Func_1<bool>*  value) ;

static inline void setStaticF_wantsToQuit(::System::Func_1<bool>*  value) ;

static inline void setStaticF_wantsToRestart(::System::Func_1<bool>*  value) ;

/// @brief Method set_retryInitializationOnFormFactorErrors, addr 0xb4eb788, size 0x4, virtual false, abstract: false, final false
static inline void set_retryInitializationOnFormFactorErrors(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRRuntime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRRuntime(OpenXRRuntime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRRuntime(OpenXRRuntime const& ) = delete;

/// @brief Field LibraryName offset 0xffffffff size 0x8
static constexpr ::ConstString  LibraryName{u"UnityOpenXR"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27287};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRRuntime) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR
