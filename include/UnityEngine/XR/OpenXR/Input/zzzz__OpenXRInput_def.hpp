#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInput)
namespace GlobalNamespace {
struct OpenXRInput_GetInternalDeviceIdCommand;
}
namespace GlobalNamespace {
struct OpenXRInput_InputSourceNameFlags;
}
namespace GlobalNamespace {
struct OpenXRInput_SerializedBinding;
}
namespace GlobalNamespace {
struct OpenXRInput_SerializedGuid;
}
namespace GlobalNamespace {
struct OpenXRInteractionFeature_ActionType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionBinding;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionMapConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature;
}
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRInput___c;
}
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct InputFeatureUsage;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRInput;
}
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRInput___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Input::OpenXRInput*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Input::OpenXRInput*, "UnityEngine.XR.OpenXR.Input", "OpenXRInput");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/<>c");
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput
class CORDL_TYPE OpenXRInput : public ::System::Object {
public:
// Declarations
using GetInternalDeviceIdCommand = ::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand;

using InputSourceNameFlags = ::GlobalNamespace::OpenXRInput_InputSourceNameFlags;

using SerializedBinding = ::GlobalNamespace::OpenXRInput_SerializedBinding;

using SerializedGuid = ::GlobalNamespace::OpenXRInput_SerializedGuid;

using __c = ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c;

/// @brief Field ExpectedControlTypeToActionType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ExpectedControlTypeToActionType, put=setStaticF_ExpectedControlTypeToActionType)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OpenXRInteractionFeature_ActionType>*  ExpectedControlTypeToActionType;

/// @brief Field kVirtualControlMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kVirtualControlMap, put=setStaticF_kVirtualControlMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  kVirtualControlMap;

/// @brief Method AttachActionSets, addr 0xb4e6e80, size 0xa94, virtual false, abstract: false, final false
static inline void AttachActionSets() ;

/// @brief Method CreateActions, addr 0xb4ecb60, size 0xb60, virtual false, abstract: false, final false
static inline bool CreateActions(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*  actionMaps, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::OpenXRInput_SerializedBinding>*>*  interactionProfiles) ;

/// @brief Method GetActionHandle, addr 0xb4ef870, size 0x8c, virtual false, abstract: false, final false
static inline uint64_t GetActionHandle(::UnityEngine::XR::InputDevice  device, ::UnityEngine::XR::InputFeatureUsage  usage) ;

/// @brief Method GetActionHandle, addr 0xb4ef7d0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t GetActionHandle(::UnityEngine::XR::InputDevice  device, ::StringW  usageName) ;

/// @brief Method GetActionHandle, addr 0xb4ee640, size 0x254, virtual false, abstract: false, final false
static inline uint64_t GetActionHandle(::UnityEngine::InputSystem::InputAction*  inputAction, ::UnityEngine::InputSystem::InputDevice*  inputDevice) ;

/// @brief Method GetActionHandleName, addr 0xb4ee2e8, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW GetActionHandleName(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method GetActionIsActive, addr 0xb4ef2d0, size 0x90, virtual false, abstract: false, final false
static inline bool GetActionIsActive(::UnityEngine::XR::InputDevice  device, ::UnityEngine::XR::InputFeatureUsage  usage) ;

/// @brief Method GetActionIsActive, addr 0xb4ef360, size 0x9c, virtual false, abstract: false, final false
static inline bool GetActionIsActive(::UnityEngine::XR::InputDevice  device, ::StringW  usageName) ;

/// @brief Method GetActionIsActive, addr 0xb4ef078, size 0x1b4, virtual false, abstract: false, final false
static inline bool GetActionIsActive(::UnityEngine::InputSystem::InputAction*  inputAction) ;

/// @brief Method GetDeviceId, addr 0xb4ee894, size 0xa4, virtual false, abstract: false, final false
static inline uint32_t GetDeviceId(::UnityEngine::InputSystem::InputDevice*  inputDevice) ;

/// @brief Method GetDeviceId, addr 0xb4eebe4, size 0x88, virtual false, abstract: false, final false
static inline uint32_t GetDeviceId(::UnityEngine::XR::InputDevice  inputDevice) ;

/// @brief Method Internal_AttachActionSets, addr 0xb4ed930, size 0x60, virtual false, abstract: false, final false
static inline bool Internal_AttachActionSets() ;

/// @brief Method Internal_CreateAction, addr 0xb4edf1c, size 0x23c, virtual false, abstract: false, final false
static inline uint64_t Internal_CreateAction(uint64_t  actionSetId, ::StringW  name, ::StringW  localizedName, uint32_t  actionType, ::GlobalNamespace::OpenXRInput_SerializedGuid  guid, ::ArrayW<::StringW>  userPaths, uint32_t  userPathCount, bool  isAdditive, ::ArrayW<::StringW>  usages, uint32_t  usageCount) ;

/// @brief Method Internal_CreateActionSet, addr 0xb4ede58, size 0xc4, virtual false, abstract: false, final false
static inline uint64_t Internal_CreateActionSet(::StringW  name, ::StringW  localizedName, ::GlobalNamespace::OpenXRInput_SerializedGuid  guid) ;

/// @brief Method Internal_GetActionId, addr 0xb4ef994, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t Internal_GetActionId(uint32_t  deviceId, ::StringW  name) ;

/// @brief Method Internal_GetActionIdNoISX, addr 0xb4ef8fc, size 0x98, virtual false, abstract: false, final false
static inline uint64_t Internal_GetActionIdNoISX(uint32_t  deviceId, ::StringW  usageName) ;

/// @brief Method Internal_GetActionIsActive, addr 0xb4ef22c, size 0xa4, virtual false, abstract: false, final false
static inline bool Internal_GetActionIsActive(uint32_t  deviceId, ::StringW  name) ;

/// @brief Method Internal_GetActionIsActiveNoISX, addr 0xb4ef3fc, size 0x9c, virtual false, abstract: false, final false
static inline bool Internal_GetActionIsActiveNoISX(uint32_t  deviceId, ::StringW  name) ;

/// @brief Method Internal_GetDeviceId, addr 0xb4efa84, size 0x98, virtual false, abstract: false, final false
static inline uint32_t Internal_GetDeviceId(::UnityEngine::XR::InputDeviceCharacteristics  characteristics, ::StringW  name) ;

/// @brief Method Internal_RegisterDeviceDefinition, addr 0xb4edb64, size 0x128, virtual false, abstract: false, final false
static inline uint64_t Internal_RegisterDeviceDefinition(::StringW  userPath, ::StringW  interactionProfile, bool  isAdditive, uint32_t  characteristics, ::StringW  name, ::StringW  manufacturer, ::StringW  serialNumber) ;

/// @brief Method Internal_SendHapticImpulse, addr 0xb4ee938, size 0xac, virtual false, abstract: false, final false
static inline void Internal_SendHapticImpulse(uint32_t  deviceId, uint64_t  actionId, float_t  amplitude, float_t  frequency, float_t  duration) ;

/// @brief Method Internal_SendHapticImpulseNoISX, addr 0xb4eec6c, size 0xa4, virtual false, abstract: false, final false
static inline void Internal_SendHapticImpulseNoISX(uint32_t  deviceId, float_t  amplitude, float_t  frequency, float_t  duration) ;

/// @brief Method Internal_SetDpadBindingCustomValues, addr 0xb4ee158, size 0xb4, virtual false, abstract: false, final false
static inline void Internal_SetDpadBindingCustomValues(bool  isLeft, float_t  forceThreshold, float_t  forceThresholdReleased, float_t  centerRegion, float_t  wedgeAngle, bool  isSticky) ;

/// @brief Method Internal_StopHaptics, addr 0xb4eee08, size 0x84, virtual false, abstract: false, final false
static inline void Internal_StopHaptics(uint32_t  deviceId, uint64_t  actionId) ;

/// @brief Method Internal_StopHapticsNoISX, addr 0xb4eed8c, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_StopHapticsNoISX(uint32_t  deviceId) ;

/// @brief Method Internal_SuggestBindings, addr 0xb4ed7e8, size 0x148, virtual false, abstract: false, final false
static inline bool Internal_SuggestBindings(::StringW  interactionProfile, ::ArrayW<::GlobalNamespace::OpenXRInput_SerializedBinding>  serializedBindings, uint32_t  serializedBindingCount) ;

/// @brief Method Internal_TryGetInputSourceName, addr 0xb4eef78, size 0x100, virtual false, abstract: false, final false
static inline bool Internal_TryGetInputSourceName(uint32_t  deviceId, uint64_t  actionId, uint32_t  index, uint32_t  flags, ::by_ref<::StringW>  outName) ;

/// @brief Method Internal_TryGetInputSourceNamePtr, addr 0xb4efb1c, size 0xac, virtual false, abstract: false, final false
static inline bool Internal_TryGetInputSourceNamePtr(uint32_t  deviceId, uint64_t  actionId, uint32_t  index, uint32_t  flags, ::by_ref<::System::IntPtr>  outName) ;

/// @brief Method Internal_TrySetControllerLateLatchAction, addr 0xb4ef5ec, size 0x8c, virtual false, abstract: false, final false
static inline bool Internal_TrySetControllerLateLatchAction(uint32_t  deviceId, uint64_t  actionId) ;

/// @brief Method RegisterDevices, addr 0xb4ec81c, size 0x344, virtual false, abstract: false, final false
static inline bool RegisterDevices(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*  actionMaps, bool  isAdditive) ;

/// @brief Method RegisterLayouts, addr 0xb4e5bf0, size 0x1f8, virtual false, abstract: false, final false
static inline void RegisterLayouts() ;

/// @brief Method SanitizeCharForOpenXRPath, addr 0xb4ee20c, size 0xdc, virtual false, abstract: false, final false
static inline char16_t SanitizeCharForOpenXRPath(char16_t  c) ;

/// @brief Method SanitizeStringForOpenXRPath, addr 0xb4edc8c, size 0x1cc, virtual false, abstract: false, final false
static inline ::StringW SanitizeStringForOpenXRPath(::StringW  input) ;

/// @brief Method SendHapticImpulse, addr 0xb4ee5c0, size 0x80, virtual false, abstract: false, final false
static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputAction*  action, float_t  amplitude, float_t  duration, ::UnityEngine::InputSystem::InputDevice*  inputDevice) ;

/// @brief Method SendHapticImpulse, addr 0xb4ee4e0, size 0xe0, virtual false, abstract: false, final false
static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputAction*  action, float_t  amplitude, float_t  frequency, float_t  duration, ::UnityEngine::InputSystem::InputDevice*  inputDevice) ;

/// @brief Method SendHapticImpulse, addr 0xb4ee3c0, size 0x80, virtual false, abstract: false, final false
static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference*  actionRef, float_t  amplitude, float_t  duration, ::UnityEngine::InputSystem::InputDevice*  inputDevice) ;

/// @brief Method SendHapticImpulse, addr 0xb4ee440, size 0xa0, virtual false, abstract: false, final false
static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference*  actionRef, float_t  amplitude, float_t  frequency, float_t  duration, ::UnityEngine::InputSystem::InputDevice*  inputDevice) ;

/// @brief Method SendHapticImpulse, addr 0xb4eeb40, size 0xa4, virtual false, abstract: false, final false
static inline void SendHapticImpulse(::UnityEngine::XR::InputDevice  device, float_t  amplitude, float_t  frequency, float_t  duration) ;

/// @brief Method SetDpadBindingCustomValues, addr 0xb4ed6c0, size 0x128, virtual false, abstract: false, final false
static inline void SetDpadBindingCustomValues() ;

/// @brief Method StopHapticImpulse, addr 0xb4eed10, size 0x7c, virtual false, abstract: false, final false
static inline void StopHapticImpulse(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method StopHaptics, addr 0xb4ee9e4, size 0xc8, virtual false, abstract: false, final false
static inline void StopHaptics(::UnityEngine::InputSystem::InputActionReference*  actionRef, ::UnityEngine::InputSystem::InputDevice*  inputDevice) ;

/// @brief Method StopHaptics, addr 0xb4eeaac, size 0x94, virtual false, abstract: false, final false
static inline void StopHaptics(::UnityEngine::InputSystem::InputAction*  inputAction, ::UnityEngine::InputSystem::InputDevice*  inputDevice) ;

/// @brief Method TryGetInputSourceName, addr 0xb4eee8c, size 0xec, virtual false, abstract: false, final false
static inline bool TryGetInputSourceName(::UnityEngine::InputSystem::InputAction*  inputAction, int32_t  index, ::by_ref<::StringW>  name, ::GlobalNamespace::OpenXRInput_InputSourceNameFlags  flags, ::UnityEngine::InputSystem::InputDevice*  inputDevice) ;

/// @brief Method TrySetControllerLateLatchAction, addr 0xb4ef678, size 0x90, virtual false, abstract: false, final false
static inline bool TrySetControllerLateLatchAction(::UnityEngine::XR::InputDevice  device, ::UnityEngine::XR::InputFeatureUsage  usage) ;

/// @brief Method TrySetControllerLateLatchAction, addr 0xb4ef708, size 0xc8, virtual false, abstract: false, final false
static inline bool TrySetControllerLateLatchAction(::UnityEngine::XR::InputDevice  device, ::StringW  usageName) ;

/// @brief Method TrySetControllerLateLatchAction, addr 0xb4ef498, size 0x154, virtual false, abstract: false, final false
static inline bool TrySetControllerLateLatchAction(::UnityEngine::InputSystem::InputAction*  inputAction) ;

/// @brief Method UserPathToDeviceName, addr 0xb4ed990, size 0x1d4, virtual false, abstract: false, final false
static inline ::StringW UserPathToDeviceName(::StringW  userPath) ;

/// @brief Method ValidateActionMapConfig, addr 0xb4ec624, size 0x154, virtual false, abstract: false, final false
static inline bool ValidateActionMapConfig(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*  interactionFeature, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*  actionMapConfig) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OpenXRInteractionFeature_ActionType>* getStaticF_ExpectedControlTypeToActionType() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_kVirtualControlMap() ;

static inline void setStaticF_ExpectedControlTypeToActionType(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OpenXRInteractionFeature_ActionType>*  value) ;

static inline void setStaticF_kVirtualControlMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRInput(OpenXRInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRInput(OpenXRInput const& ) = delete;

/// @brief Field Library offset 0xffffffff size 0x8
static constexpr ::ConstString  Library{u"UnityOpenXR"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27322};

/// @brief Field s_devicePoseActionName offset 0xffffffff size 0x8
static constexpr ::ConstString  s_devicePoseActionName{u"devicepose"};

/// @brief Field s_pointerActionName offset 0xffffffff size 0x8
static constexpr ::ConstString  s_pointerActionName{u"pointer"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Input::OpenXRInput) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c
class CORDL_TYPE OpenXRInput___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*,::StringW>*  __9__11_0;

/// @brief Field <>9__11_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_1, put=setStaticF___9__11_1)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*,bool>*  __9__11_1;

/// @brief Field <>9__11_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_2, put=setStaticF___9__11_2)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*,::System::Collections::Generic::IEnumerable_1<::StringW>*>*  __9__11_2;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>,bool>*  __9__9_0;

/// @brief Field <>9__9_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_1, put=setStaticF___9__9_1)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>,bool>*  __9__9_1;

static inline ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c* New_ctor() ;

/// @brief Method <AttachActionSets>b__9_0, addr 0xb4f00c4, size 0x48, virtual false, abstract: false, final false
inline bool _AttachActionSets_b__9_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*  f) ;

/// @brief Method <AttachActionSets>b__9_1, addr 0xb4f010c, size 0x40, virtual false, abstract: false, final false
inline bool _AttachActionSets_b__9_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*  f) ;

/// @brief Method <CreateActions>b__11_0, addr 0xb4f014c, size 0x14, virtual false, abstract: false, final false
inline ::StringW _CreateActions_b__11_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*  d) ;

/// @brief Method <CreateActions>b__11_1, addr 0xb4f0160, size 0x1c, virtual false, abstract: false, final false
inline bool _CreateActions_b__11_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*  b) ;

/// @brief Method <CreateActions>b__11_2, addr 0xb4f017c, size 0x14, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* _CreateActions_b__11_2(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*  b) ;

/// @brief Method .ctor, addr 0xb4f00bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*,::StringW>* getStaticF___9__11_0() ;

static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*,bool>* getStaticF___9__11_1() ;

static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*,::System::Collections::Generic::IEnumerable_1<::StringW>*>* getStaticF___9__11_2() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>,bool>* getStaticF___9__9_0() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>,bool>* getStaticF___9__9_1() ;

static inline void setStaticF___9(::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*  value) ;

static inline void setStaticF___9__11_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*,::StringW>*  value) ;

static inline void setStaticF___9__11_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*,bool>*  value) ;

static inline void setStaticF___9__11_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*,::System::Collections::Generic::IEnumerable_1<::StringW>*>*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>,bool>*  value) ;

static inline void setStaticF___9__9_1(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInput___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInput___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRInput___c(OpenXRInput___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInput___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRInput___c(OpenXRInput___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Input::OpenXRInput___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Input
