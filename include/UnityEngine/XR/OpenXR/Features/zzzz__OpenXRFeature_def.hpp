#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRFeature)
namespace GlobalNamespace {
struct OpenXRFeature_LoaderEvent;
}
namespace GlobalNamespace {
struct OpenXRFeature_NativeEvent;
}
namespace GlobalNamespace {
struct OpenXRFeature_StatFlags;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrEnvironmentBlendMode;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct InputFeatureUsage;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature");
// Dependencies UnityEngine.ISubsystem, UnityEngine.ISubsystemDescriptor, UnityEngine.ScriptableObject
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature
class CORDL_TYPE OpenXRFeature : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using LoaderEvent = ::GlobalNamespace::OpenXRFeature_LoaderEvent;

using NativeEvent = ::GlobalNamespace::OpenXRFeature_NativeEvent;

using StatFlags = ::GlobalNamespace::OpenXRFeature_StatFlags;

/// @brief Field <failedInitialization>k__BackingField, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__failedInitialization_k__BackingField, put=__cordl_internal_set__failedInitialization_k__BackingField)) bool  _failedInitialization_k__BackingField;

/// @brief Field <requiredFeatureFailed>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__requiredFeatureFailed_k__BackingField, put=setStaticF__requiredFeatureFailed_k__BackingField)) bool  _requiredFeatureFailed_k__BackingField;

/// @brief Field company, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_company, put=__cordl_internal_set_company)) ::StringW  company;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_failedInitialization, put=set_failedInitialization)) bool  failedInitialization;

/// @brief Field featureIdInternal, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_featureIdInternal, put=__cordl_internal_set_featureIdInternal)) ::StringW  featureIdInternal;

/// @brief Field internalFieldsUpdated, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_internalFieldsUpdated, put=__cordl_internal_set_internalFieldsUpdated)) bool  internalFieldsUpdated;

/// @brief Field m_enabled, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_enabled, put=__cordl_internal_set_m_enabled)) bool  m_enabled;

/// @brief Field nameUi, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameUi, put=__cordl_internal_set_nameUi)) ::StringW  nameUi;

/// @brief Field openxrExtensionStrings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_openxrExtensionStrings, put=__cordl_internal_set_openxrExtensionStrings)) ::StringW  openxrExtensionStrings;

/// @brief Field priority, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) int32_t  priority;

/// @brief Field required, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_required, put=__cordl_internal_set_required)) bool  required;

/// @brief Field version, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::StringW  version;

/// @brief Method Awake, addr 0xb4f1120, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDescriptor,typename TSubsystem>
requires(::cordl_internals::type_constraint<TDescriptor, ::UnityEngine::ISubsystemDescriptor*> && ::cordl_internals::type_constraint<TSubsystem, ::UnityEngine::ISubsystem*>)
inline void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>*  descriptors, ::StringW  id) ;

/// @brief Method DestroySubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::ISubsystem*> && ::cordl_internals::reference_type_constraint<T>)
inline void DestroySubsystem() ;

/// @brief Method GetAction, addr 0xb4f1344, size 0x7c, virtual false, abstract: false, final false
inline uint64_t GetAction(::UnityEngine::XR::InputDevice  device, ::UnityEngine::XR::InputFeatureUsage  usage) ;

/// @brief Method GetAction, addr 0xb4f13c0, size 0x6c, virtual false, abstract: false, final false
inline uint64_t GetAction(::UnityEngine::XR::InputDevice  device, ::StringW  usageName) ;

/// @brief Method GetAction, addr 0xb4f12ec, size 0x58, virtual false, abstract: false, final false
inline uint64_t GetAction(::UnityEngine::InputSystem::InputAction*  inputAction) ;

/// @brief Method GetCurrentAppSpace, addr 0xb4f0f0c, size 0x20, virtual false, abstract: false, final false
static inline uint64_t GetCurrentAppSpace() ;

/// @brief Method GetCurrentInteractionProfile, addr 0xb4f0ed4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t GetCurrentInteractionProfile(::StringW  userPath) ;

/// @brief Method GetCurrentInteractionProfile, addr 0xb4f0e28, size 0x20, virtual false, abstract: false, final false
static inline uint64_t GetCurrentInteractionProfile(uint64_t  userPath) ;

/// @brief Method GetEnvironmentBlendMode, addr 0xb4f10b0, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode GetEnvironmentBlendMode() ;

/// @brief Method GetViewConfigurationTypeForRenderPass, addr 0xb4f0fb0, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetViewConfigurationTypeForRenderPass(int32_t  renderPassIndex) ;

/// @brief Method HookGetInstanceProcAddr, addr 0xb4f0c0c, size 0x8, virtual true, abstract: false, final false
inline ::System::IntPtr HookGetInstanceProcAddr(::System::IntPtr  func) ;

/// @brief Method HookGetInstanceProcAddr, addr 0xb4e5f70, size 0x11c, virtual false, abstract: false, final false
static inline void HookGetInstanceProcAddr() ;

/// @brief Method Initialize, addr 0xb4e5de8, size 0x120, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method Internal_GetAppSpace, addr 0xb4f0f2c, size 0x84, virtual false, abstract: false, final false
static inline bool Internal_GetAppSpace(::by_ref<uint64_t>  appSpace) ;

/// @brief Method Internal_GetCurrentInteractionProfile, addr 0xb4f0e48, size 0x8c, virtual false, abstract: false, final false
static inline bool Internal_GetCurrentInteractionProfile(uint64_t  pathId, ::by_ref<uint64_t>  interactionProfile) ;

/// @brief Method Internal_GetEnvironmentBlendMode, addr 0xb4f10b4, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode Internal_GetEnvironmentBlendMode() ;

/// @brief Method Internal_GetFormFactor, addr 0xb4f1124, size 0x64, virtual false, abstract: false, final false
static inline int32_t Internal_GetFormFactor() ;

/// @brief Method Internal_GetProcAddressPtr, addr 0xb4f0b90, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_GetProcAddressPtr(bool  loaderDefault) ;

/// @brief Method Internal_GetSessionState, addr 0xb4f11ec, size 0x84, virtual false, abstract: false, final false
static inline void Internal_GetSessionState(::by_ref<int32_t>  oldState, ::by_ref<int32_t>  newState) ;

/// @brief Method Internal_GetViewConfigurationType, addr 0xb4f1188, size 0x64, virtual false, abstract: false, final false
static inline int32_t Internal_GetViewConfigurationType() ;

/// @brief Method Internal_GetViewTypeFromRenderIndex, addr 0xb4f0fb4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Internal_GetViewTypeFromRenderIndex(int32_t  renderPassIndex) ;

/// @brief Method Internal_GetXRSession, addr 0xb4f15e4, size 0x84, virtual false, abstract: false, final false
static inline bool Internal_GetXRSession(::by_ref<uint64_t>  xrSession) ;

/// @brief Method Internal_PathToStringPtr, addr 0xb4f0cdc, size 0x8c, virtual false, abstract: false, final false
static inline bool Internal_PathToStringPtr(uint64_t  pathId, ::by_ref<::System::IntPtr>  path) ;

/// @brief Method Internal_SetEnvironmentBlendMode, addr 0xb4f1034, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode  xrEnvironmentBlendMode) ;

/// @brief Method Internal_SetProcAddressPtrAndLoadStage1, addr 0xb4f1270, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetProcAddressPtrAndLoadStage1(::System::IntPtr  func) ;

/// @brief Method Internal_StringToPath, addr 0xb4f0d88, size 0xa0, virtual false, abstract: false, final false
static inline bool Internal_StringToPath(::StringW  str, ::by_ref<uint64_t>  pathId) ;

static inline ::UnityEngine::XR::OpenXR::Features::OpenXRFeature* New_ctor() ;

/// @brief Method OnAppSpaceChange, addr 0xb4f0c2c, size 0x4, virtual true, abstract: false, final false
inline void OnAppSpaceChange(uint64_t  xrSpace) ;

/// @brief Method OnDisable, addr 0xb4f111c, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4f1118, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnabledChange, addr 0xb4f0c5c, size 0x4, virtual true, abstract: false, final false
inline void OnEnabledChange() ;

/// @brief Method OnEnvironmentBlendModeChange, addr 0xb4f0c58, size 0x4, virtual true, abstract: false, final false
inline void OnEnvironmentBlendModeChange(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode  xrEnvironmentBlendMode) ;

/// @brief Method OnFormFactorChange, addr 0xb4f0c50, size 0x4, virtual true, abstract: false, final false
inline void OnFormFactorChange(int32_t  xrFormFactor) ;

/// @brief Method OnInstanceCreate, addr 0xb4f087c, size 0x8, virtual true, abstract: false, final false
inline bool OnInstanceCreate(uint64_t  xrInstance) ;

/// @brief Method OnInstanceDestroy, addr 0xb4f0c44, size 0x4, virtual true, abstract: false, final false
inline void OnInstanceDestroy(uint64_t  xrInstance) ;

/// @brief Method OnInstanceLossPending, addr 0xb4f0c4c, size 0x4, virtual true, abstract: false, final false
inline void OnInstanceLossPending(uint64_t  xrInstance) ;

/// @brief Method OnSessionBegin, addr 0xb4f0c34, size 0x4, virtual true, abstract: false, final false
inline void OnSessionBegin(uint64_t  xrSession) ;

/// @brief Method OnSessionCreate, addr 0xb4f0c28, size 0x4, virtual true, abstract: false, final false
inline void OnSessionCreate(uint64_t  xrSession) ;

/// @brief Method OnSessionDestroy, addr 0xb4f0c40, size 0x4, virtual true, abstract: false, final false
inline void OnSessionDestroy(uint64_t  xrSession) ;

/// @brief Method OnSessionEnd, addr 0xb4f0c38, size 0x4, virtual true, abstract: false, final false
inline void OnSessionEnd(uint64_t  xrSession) ;

/// @brief Method OnSessionExiting, addr 0xb4f0c3c, size 0x4, virtual true, abstract: false, final false
inline void OnSessionExiting(uint64_t  xrSession) ;

/// @brief Method OnSessionLossPending, addr 0xb4f0c48, size 0x4, virtual true, abstract: false, final false
inline void OnSessionLossPending(uint64_t  xrSession) ;

/// @brief Method OnSessionStateChange, addr 0xb4f0c30, size 0x4, virtual true, abstract: false, final false
inline void OnSessionStateChange(int32_t  oldState, int32_t  newState) ;

/// @brief Method OnSubsystemCreate, addr 0xb4f0c14, size 0x4, virtual true, abstract: false, final false
inline void OnSubsystemCreate() ;

/// @brief Method OnSubsystemDestroy, addr 0xb4f0c20, size 0x4, virtual true, abstract: false, final false
inline void OnSubsystemDestroy() ;

/// @brief Method OnSubsystemStart, addr 0xb4f0c18, size 0x4, virtual true, abstract: false, final false
inline void OnSubsystemStart() ;

/// @brief Method OnSubsystemStop, addr 0xb4f0c1c, size 0x4, virtual true, abstract: false, final false
inline void OnSubsystemStop() ;

/// @brief Method OnSystemChange, addr 0xb4f0c24, size 0x4, virtual true, abstract: false, final false
inline void OnSystemChange(uint64_t  xrSystem) ;

/// @brief Method OnViewConfigurationTypeChange, addr 0xb4f0c54, size 0x4, virtual true, abstract: false, final false
inline void OnViewConfigurationTypeChange(int32_t  xrViewConfigurationType) ;

/// @brief Method PathToString, addr 0xb4f0c60, size 0x7c, virtual false, abstract: false, final false
static inline ::StringW PathToString(uint64_t  path) ;

/// @brief Method ReceiveLoaderEvent, addr 0xb4e66cc, size 0x1e0, virtual false, abstract: false, final false
static inline bool ReceiveLoaderEvent(::UnityEngine::XR::OpenXR::OpenXRLoaderBase*  loader, ::GlobalNamespace::OpenXRFeature_LoaderEvent  e) ;

/// @brief Method ReceiveNativeEvent, addr 0xb4e902c, size 0x328, virtual false, abstract: false, final false
static inline void ReceiveNativeEvent(::GlobalNamespace::OpenXRFeature_NativeEvent  e, uint64_t  payload) ;

/// @brief Method RegisterStatsDescriptor, addr 0xb4f142c, size 0x4, virtual false, abstract: false, final false
static inline uint64_t RegisterStatsDescriptor(::StringW  statName, ::GlobalNamespace::OpenXRFeature_StatFlags  statFlags) ;

/// @brief Method SetEnvironmentBlendMode, addr 0xb4f1030, size 0x4, virtual false, abstract: false, final false
static inline void SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode  xrEnvironmentBlendMode) ;

/// @brief Method SetStatAsFloat, addr 0xb4f14cc, size 0x4, virtual false, abstract: false, final false
static inline void SetStatAsFloat(uint64_t  statId, float_t  value) ;

/// @brief Method SetStatAsUInt, addr 0xb4f155c, size 0x4, virtual false, abstract: false, final false
static inline void SetStatAsUInt(uint64_t  statId, uint32_t  value) ;

/// @brief Method StartSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::ISubsystem*> && ::cordl_internals::reference_type_constraint<T>)
inline void StartSubsystem() ;

/// @brief Method StopSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::ISubsystem*> && ::cordl_internals::reference_type_constraint<T>)
inline void StopSubsystem() ;

/// @brief Method StringToPath, addr 0xb4f0d68, size 0x20, virtual false, abstract: false, final false
static inline uint64_t StringToPath(::StringW  str) ;

constexpr bool const& __cordl_internal_get__failedInitialization_k__BackingField() const;

constexpr bool& __cordl_internal_get__failedInitialization_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_company() const;

constexpr ::StringW& __cordl_internal_get_company() ;

constexpr ::StringW const& __cordl_internal_get_featureIdInternal() const;

constexpr ::StringW& __cordl_internal_get_featureIdInternal() ;

constexpr bool const& __cordl_internal_get_internalFieldsUpdated() const;

constexpr bool& __cordl_internal_get_internalFieldsUpdated() ;

constexpr bool const& __cordl_internal_get_m_enabled() const;

constexpr bool& __cordl_internal_get_m_enabled() ;

constexpr ::StringW const& __cordl_internal_get_nameUi() const;

constexpr ::StringW& __cordl_internal_get_nameUi() ;

constexpr ::StringW const& __cordl_internal_get_openxrExtensionStrings() const;

constexpr ::StringW& __cordl_internal_get_openxrExtensionStrings() ;

constexpr int32_t const& __cordl_internal_get_priority() const;

constexpr int32_t& __cordl_internal_get_priority() ;

constexpr bool const& __cordl_internal_get_required() const;

constexpr bool& __cordl_internal_get_required() ;

constexpr ::StringW const& __cordl_internal_get_version() const;

constexpr ::StringW& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set__failedInitialization_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_company(::StringW  value) ;

constexpr void __cordl_internal_set_featureIdInternal(::StringW  value) ;

constexpr void __cordl_internal_set_internalFieldsUpdated(bool  value) ;

constexpr void __cordl_internal_set_m_enabled(bool  value) ;

constexpr void __cordl_internal_set_nameUi(::StringW  value) ;

constexpr void __cordl_internal_set_openxrExtensionStrings(::StringW  value) ;

constexpr void __cordl_internal_set_priority(int32_t  value) ;

constexpr void __cordl_internal_set_required(bool  value) ;

constexpr void __cordl_internal_set_version(::StringW  value) ;

/// @brief Method .ctor, addr 0xb4f097c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__requiredFeatureFailed_k__BackingField() ;

/// @brief Method get_enabled, addr 0xb4e0ca0, size 0xec, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// [CompilerGenerated]
/// @brief Method get_failedInitialization, addr 0xb4f0984, size 0x8, virtual false, abstract: false, final false
inline bool get_failedInitialization() ;

/// [CompilerGenerated]
/// @brief Method get_requiredFeatureFailed, addr 0xb4f0994, size 0x48, virtual false, abstract: false, final false
static inline bool get_requiredFeatureFailed() ;

/// @brief Method get_xrGetInstanceProcAddr, addr 0xb4f0b88, size 0x8, virtual false, abstract: false, final false
static inline ::System::IntPtr get_xrGetInstanceProcAddr() ;

/// @brief Method runtime_RegisterStatsDescriptor, addr 0xb4f1430, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t runtime_RegisterStatsDescriptor(::StringW  statName, ::GlobalNamespace::OpenXRFeature_StatFlags  statFlags) ;

/// @brief Method runtime_SetStatAsFloat, addr 0xb4f14d0, size 0x8c, virtual false, abstract: false, final false
static inline void runtime_SetStatAsFloat(uint64_t  statId, float_t  value) ;

/// @brief Method runtime_SetStatAsUInt, addr 0xb4f1560, size 0x84, virtual false, abstract: false, final false
static inline void runtime_SetStatAsUInt(uint64_t  statId, uint32_t  value) ;

static inline void setStaticF__requiredFeatureFailed_k__BackingField(bool  value) ;

/// @brief Method set_enabled, addr 0xb4f0a2c, size 0x15c, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_failedInitialization, addr 0xb4f098c, size 0x8, virtual false, abstract: false, final false
inline void set_failedInitialization(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_requiredFeatureFailed, addr 0xb4f09dc, size 0x50, virtual false, abstract: false, final false
static inline void set_requiredFeatureFailed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRFeature(OpenXRFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRFeature(OpenXRFeature const& ) = delete;

/// @brief Field Library offset 0xffffffff size 0x8
static constexpr ::ConstString  Library{u"UnityOpenXR"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27329};

/// [FormerlySerializedAs("enabled")]
/// [HideInInspector]
/// [SerializeField]
/// @brief Field m_enabled, offset: 0x18, size: 0x1, def value: None
 bool  ___m_enabled;

/// [CompilerGenerated]
/// @brief Field <failedInitialization>k__BackingField, offset: 0x19, size: 0x1, def value: None
 bool  ____failedInitialization_k__BackingField;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field nameUi, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___nameUi;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field version, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___version;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field featureIdInternal, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___featureIdInternal;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field openxrExtensionStrings, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___openxrExtensionStrings;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field company, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___company;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field priority, offset: 0x48, size: 0x4, def value: None
 int32_t  ___priority;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field required, offset: 0x4c, size: 0x1, def value: None
 bool  ___required;

/// @brief Field internalFieldsUpdated, offset: 0x4d, size: 0x1, def value: None
 bool  ___internalFieldsUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___m_enabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ____failedInitialization_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___nameUi) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___featureIdInternal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___openxrExtensionStrings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___company) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___priority) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___required) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___internalFieldsUpdated) == 0x4d, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features
