#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_DeviceArray_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_Flags_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_ParameterOverride_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionMap)
namespace GlobalNamespace {
struct InputActionMap_BindingJson;
}
namespace GlobalNamespace {
struct InputActionMap_BindingOverrideJson;
}
namespace GlobalNamespace {
struct InputActionMap_BindingOverrideListJson;
}
namespace GlobalNamespace {
struct InputActionMap_DeviceArray;
}
namespace GlobalNamespace {
struct InputActionMap_Flags;
}
namespace GlobalNamespace {
struct InputActionMap_ReadActionJson;
}
namespace GlobalNamespace {
struct InputActionMap_ReadFileJson;
}
namespace GlobalNamespace {
struct InputActionMap_ReadMapJson;
}
namespace GlobalNamespace {
struct InputActionMap_WriteActionJson;
}
namespace GlobalNamespace {
struct InputActionMap_WriteFileJson;
}
namespace GlobalNamespace {
struct InputActionMap_WriteMapJson;
}
namespace GlobalNamespace {
struct InputAction_CallbackContext;
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
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct Guid;
}
namespace System {
class ICloneable;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionMap;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputActionMap*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionMap*, "UnityEngine.InputSystem", "InputActionMap");
// [DefaultMember("Item")]
// Dependencies System.Nullable`1<T>, System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.InputSystem.InputAction, UnityEngine.InputSystem.InputActionMap::DeviceArray, UnityEngine.InputSystem.InputActionMap::Flags, UnityEngine.InputSystem.InputActionRebindingExtensions::ParameterOverride, UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionMap
class CORDL_TYPE InputActionMap : public ::System::Object {
public:
// Declarations
using BindingJson = ::GlobalNamespace::InputActionMap_BindingJson;

using BindingOverrideJson = ::GlobalNamespace::InputActionMap_BindingOverrideJson;

using BindingOverrideListJson = ::GlobalNamespace::InputActionMap_BindingOverrideListJson;

using DeviceArray = ::GlobalNamespace::InputActionMap_DeviceArray;

using Flags = ::GlobalNamespace::InputActionMap_Flags;

using ReadActionJson = ::GlobalNamespace::InputActionMap_ReadActionJson;

using ReadFileJson = ::GlobalNamespace::InputActionMap_ReadFileJson;

using ReadMapJson = ::GlobalNamespace::InputActionMap_ReadMapJson;

using WriteActionJson = ::GlobalNamespace::InputActionMap_WriteActionJson;

using WriteFileJson = ::GlobalNamespace::InputActionMap_WriteFileJson;

using WriteMapJson = ::GlobalNamespace::InputActionMap_WriteMapJson;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::InputAction*  Item[];

 __declspec(property(get=UnityEngine_InputSystem_IInputActionCollection2_get_bindings)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*  UnityEngine_InputSystem_IInputActionCollection2_bindings;

 __declspec(property(get=get_actions)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>  actions;

 __declspec(property(get=get_asset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  asset;

 __declspec(property(get=get_bindingMask, put=set_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  bindingMask;

 __declspec(property(get=get_bindingResolutionNeedsFullReResolve, put=set_bindingResolutionNeedsFullReResolve)) bool  bindingResolutionNeedsFullReResolve;

 __declspec(property(get=get_bindings)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>  bindings;

 __declspec(property(get=get_bindingsForEachActionInitialized, put=set_bindingsForEachActionInitialized)) bool  bindingsForEachActionInitialized;

 __declspec(property(get=get_controlSchemes)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>  controlSchemes;

 __declspec(property(get=get_controlsForEachActionInitialized, put=set_controlsForEachActionInitialized)) bool  controlsForEachActionInitialized;

 __declspec(property(get=get_devices, put=set_devices)) ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  devices;

 __declspec(property(get=get_enabled)) bool  enabled;

 __declspec(property(get=get_id)) ::System::Guid  id;

 __declspec(property(get=get_idDontGenerate)) ::System::Guid  idDontGenerate;

/// @brief Field k_ResolveBindingsProfilerMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_ResolveBindingsProfilerMarker, put=setStaticF_k_ResolveBindingsProfilerMarker)) ::Unity::Profiling::ProfilerMarker  k_ResolveBindingsProfilerMarker;

/// @brief Field m_ActionCallbacks, offset 0x98, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_ActionCallbacks, put=__cordl_internal_set_m_ActionCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>  m_ActionCallbacks;

/// @brief Field m_ActionIndexByNameOrId, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActionIndexByNameOrId, put=__cordl_internal_set_m_ActionIndexByNameOrId)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  m_ActionIndexByNameOrId;

/// @brief Field m_Actions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Actions, put=__cordl_internal_set_m_Actions)) ::ArrayW<::UnityEngine::InputSystem::InputAction*>  m_Actions;

/// @brief Field m_Asset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Asset, put=__cordl_internal_set_m_Asset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_Asset;

/// @brief Field m_BindingMask, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_BindingMask, put=__cordl_internal_set_m_BindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  m_BindingMask;

/// @brief Field m_Bindings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Bindings, put=__cordl_internal_set_m_Bindings)) ::ArrayW<::UnityEngine::InputSystem::InputBinding>  m_Bindings;

/// @brief Field m_BindingsForEachAction, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingsForEachAction, put=__cordl_internal_set_m_BindingsForEachAction)) ::ArrayW<::UnityEngine::InputSystem::InputBinding>  m_BindingsForEachAction;

/// @brief Field m_ControlsForEachAction, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControlsForEachAction, put=__cordl_internal_set_m_ControlsForEachAction)) ::ArrayW<::UnityEngine::InputSystem::InputControl*>  m_ControlsForEachAction;

/// @brief Field m_Devices, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Devices, put=__cordl_internal_set_m_Devices)) ::GlobalNamespace::InputActionMap_DeviceArray  m_Devices;

/// @brief Field m_EnabledActionsCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EnabledActionsCount, put=__cordl_internal_set_m_EnabledActionsCount)) int32_t  m_EnabledActionsCount;

/// @brief Field m_Flags, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Flags, put=__cordl_internal_set_m_Flags)) ::GlobalNamespace::InputActionMap_Flags  m_Flags;

/// @brief Field m_Id, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Id, put=__cordl_internal_set_m_Id)) ::StringW  m_Id;

/// @brief Field m_MapIndexInState, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MapIndexInState, put=__cordl_internal_set_m_MapIndexInState)) int32_t  m_MapIndexInState;

/// @brief Field m_Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::StringW  m_Name;

/// @brief Field m_ParameterOverrides, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ParameterOverrides, put=__cordl_internal_set_m_ParameterOverrides)) ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  m_ParameterOverrides;

/// @brief Field m_ParameterOverridesCount, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ParameterOverridesCount, put=__cordl_internal_set_m_ParameterOverridesCount)) int32_t  m_ParameterOverridesCount;

/// @brief Field m_SingletonAction, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SingletonAction, put=__cordl_internal_set_m_SingletonAction)) ::UnityEngine::InputSystem::InputAction*  m_SingletonAction;

/// @brief Field m_State, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::UnityEngine::InputSystem::InputActionState*  m_State;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_needToResolveBindings, put=set_needToResolveBindings)) bool  needToResolveBindings;

/// @brief Field s_DeferBindingResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DeferBindingResolution, put=setStaticF_s_DeferBindingResolution)) int32_t  s_DeferBindingResolution;

/// @brief Field s_NeedToResolveBindings, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_NeedToResolveBindings, put=setStaticF_s_NeedToResolveBindings)) bool  s_NeedToResolveBindings;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept;

/// @brief Method ClearActionLookupTable, addr 0xaf13870, size 0x58, virtual false, abstract: false, final false
inline void ClearActionLookupTable() ;

/// @brief Method ClearCachedActionData, addr 0xaf14470, size 0x64, virtual false, abstract: false, final false
inline void ClearCachedActionData(bool  onlyControls) ;

/// @brief Method Clone, addr 0xaf1395c, size 0x25c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionMap* Clone() ;

/// @brief Method Contains, addr 0xaf13bbc, size 0x2c, virtual true, abstract: false, final true
inline bool Contains(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method Disable, addr 0xaf1125c, size 0x2c, virtual true, abstract: false, final true
inline void Disable() ;

/// @brief Method Dispose, addr 0xaf13530, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Enable, addr 0xaf110bc, size 0x4c, virtual true, abstract: false, final true
inline void Enable() ;

/// @brief Method FindAction, addr 0xaf1049c, size 0x114, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW  actionNameOrId, bool  throwIfNotFound) ;

/// @brief Method FindAction, addr 0xaf10aa0, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid  id) ;

/// @brief Method FindActionIndex, addr 0xaf138c8, size 0x94, virtual false, abstract: false, final false
inline int32_t FindActionIndex(::System::Guid  id) ;

/// @brief Method FindActionIndex, addr 0xaf13544, size 0x200, virtual false, abstract: false, final false
inline int32_t FindActionIndex(::StringW  nameOrId) ;

/// @brief Method FindBinding, addr 0xaf10698, size 0xf8, virtual true, abstract: false, final true
inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding  mask, ::by_ref<::UnityEngine::InputSystem::InputAction*>  action) ;

/// @brief Method FindBindingRelativeToMap, addr 0xaf15150, size 0xb8, virtual false, abstract: false, final false
inline int32_t FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding  mask) ;

/// @brief Method FromJson, addr 0xaf15208, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> FromJson(::StringW  json) ;

/// @brief Method GenerateId, addr 0xaf13064, size 0x44, virtual false, abstract: false, final false
inline void GenerateId() ;

/// @brief Method GetBindingsForSingleAction, addr 0xaf0bcc8, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method GetControlsForSingleAction, addr 0xaf0bdc0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method GetEnumerator, addr 0xaf13cb0, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator() ;

/// @brief Method IsUsableWithDevice, addr 0xaf10e54, size 0x114, virtual false, abstract: false, final false
inline bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method LazyResolveBindings, addr 0xaf0bba8, size 0xf0, virtual false, abstract: false, final false
inline bool LazyResolveBindings(bool  fullResolve) ;

static inline ::UnityEngine::InputSystem::InputActionMap* New_ctor() ;

static inline ::UnityEngine::InputSystem::InputActionMap* New_ctor(::StringW  name) ;

/// @brief Method OnAfterDeserialize, addr 0xaf15488, size 0xe8, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xaf15484, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method OnBindingModified, addr 0xaf144d4, size 0x20, virtual false, abstract: false, final false
inline void OnBindingModified() ;

/// @brief Method OnSetupChanged, addr 0xaf11798, size 0x1d0, virtual false, abstract: false, final false
inline void OnSetupChanged() ;

/// @brief Method OnWantToChangeSetup, addr 0xaf114a0, size 0x26c, virtual false, abstract: false, final false
inline void OnWantToChangeSetup() ;

/// @brief Method ResolveBindings, addr 0xaf144f4, size 0xba4, virtual false, abstract: false, final false
inline void ResolveBindings() ;

/// @brief Method ResolveBindingsIfNecessary, addr 0xaf0bd8c, size 0x34, virtual false, abstract: false, final false
inline bool ResolveBindingsIfNecessary() ;

/// @brief Method SetUpActionLookupTable, addr 0xaf13744, size 0x12c, virtual false, abstract: false, final false
inline void SetUpActionLookupTable() ;

/// @brief Method SetUpPerActionControlAndBindingArrays, addr 0xaf13df8, size 0x678, virtual false, abstract: false, final false
inline void SetUpPerActionControlAndBindingArrays() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaf13d54, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.ICloneable.Clone, addr 0xaf13bb8, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_ICloneable_Clone() ;

/// @brief Method ToJson, addr 0xaf1536c, size 0x70, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToJson, addr 0xaf152b8, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*  maps) ;

/// @brief Method ToString, addr 0xaf13be8, size 0xc8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UnityEngine.InputSystem.IInputActionCollection2.get_bindings, addr 0xaf13108, size 0x64, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine_InputSystem_IInputActionCollection2_get_bindings() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*> const& __cordl_internal_get_m_ActionCallbacks() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>& __cordl_internal_get_m_ActionCallbacks() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_m_ActionIndexByNameOrId() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_m_ActionIndexByNameOrId() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_m_Actions() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*>& __cordl_internal_get_m_Actions() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_Asset() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_Asset() ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingMask() const;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingMask() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_Bindings() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_Bindings() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingsForEachAction() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingsForEachAction() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get_m_ControlsForEachAction() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& __cordl_internal_get_m_ControlsForEachAction() ;

constexpr ::GlobalNamespace::InputActionMap_DeviceArray const& __cordl_internal_get_m_Devices() const;

constexpr ::GlobalNamespace::InputActionMap_DeviceArray& __cordl_internal_get_m_Devices() ;

constexpr int32_t const& __cordl_internal_get_m_EnabledActionsCount() const;

constexpr int32_t& __cordl_internal_get_m_EnabledActionsCount() ;

constexpr ::GlobalNamespace::InputActionMap_Flags const& __cordl_internal_get_m_Flags() const;

constexpr ::GlobalNamespace::InputActionMap_Flags& __cordl_internal_get_m_Flags() ;

constexpr ::StringW const& __cordl_internal_get_m_Id() const;

constexpr ::StringW& __cordl_internal_get_m_Id() ;

constexpr int32_t const& __cordl_internal_get_m_MapIndexInState() const;

constexpr int32_t& __cordl_internal_get_m_MapIndexInState() ;

constexpr ::StringW const& __cordl_internal_get_m_Name() const;

constexpr ::StringW& __cordl_internal_get_m_Name() ;

constexpr ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride> const& __cordl_internal_get_m_ParameterOverrides() const;

constexpr ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>& __cordl_internal_get_m_ParameterOverrides() ;

constexpr int32_t const& __cordl_internal_get_m_ParameterOverridesCount() const;

constexpr int32_t& __cordl_internal_get_m_ParameterOverridesCount() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_SingletonAction() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_SingletonAction() ;

constexpr ::UnityEngine::InputSystem::InputActionState* const& __cordl_internal_get_m_State() const;

constexpr ::UnityEngine::InputSystem::InputActionState*& __cordl_internal_get_m_State() ;

constexpr void __cordl_internal_set_m_ActionCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>  value) ;

constexpr void __cordl_internal_set_m_ActionIndexByNameOrId(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_Actions(::ArrayW<::UnityEngine::InputSystem::InputAction*>  value) ;

constexpr void __cordl_internal_set_m_Asset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr void __cordl_internal_set_m_Bindings(::ArrayW<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr void __cordl_internal_set_m_BindingsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr void __cordl_internal_set_m_ControlsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr void __cordl_internal_set_m_Devices(::GlobalNamespace::InputActionMap_DeviceArray  value) ;

constexpr void __cordl_internal_set_m_EnabledActionsCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_Flags(::GlobalNamespace::InputActionMap_Flags  value) ;

constexpr void __cordl_internal_set_m_Id(::StringW  value) ;

constexpr void __cordl_internal_set_m_MapIndexInState(int32_t  value) ;

constexpr void __cordl_internal_set_m_Name(::StringW  value) ;

constexpr void __cordl_internal_set_m_ParameterOverrides(::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  value) ;

constexpr void __cordl_internal_set_m_ParameterOverridesCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_SingletonAction(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_State(::UnityEngine::InputSystem::InputActionState*  value) ;

/// @brief Method .ctor, addr 0xaf0d550, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xaf13504, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method add_actionTriggered, addr 0xaf13454, size 0x58, virtual false, abstract: false, final false
inline void add_actionTriggered(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ResolveBindingsProfilerMarker() ;

static inline int32_t getStaticF_s_DeferBindingResolution() ;

static inline bool getStaticF_s_NeedToResolveBindings() ;

/// @brief Method get_Item, addr 0xaf13378, size 0xdc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Item(::StringW  actionNameOrId) ;

/// @brief Method get_actions, addr 0xaf12c90, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> get_actions() ;

/// @brief Method get_asset, addr 0xaf13014, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_asset() ;

/// @brief Method get_bindingMask, addr 0xaf131f0, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method get_bindingResolutionNeedsFullReResolve, addr 0xaf13d74, size 0xc, virtual false, abstract: false, final false
inline bool get_bindingResolutionNeedsFullReResolve() ;

/// @brief Method get_bindings, addr 0xaf130a8, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> get_bindings() ;

/// @brief Method get_bindingsForEachActionInitialized, addr 0xaf13dcc, size 0xc, virtual false, abstract: false, final false
inline bool get_bindingsForEachActionInitialized() ;

/// @brief Method get_controlSchemes, addr 0xaf1316c, size 0x84, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes() ;

/// @brief Method get_controlsForEachActionInitialized, addr 0xaf13da0, size 0xc, virtual false, abstract: false, final false
inline bool get_controlsForEachActionInitialized() ;

/// @brief Method get_devices, addr 0xaf0d6f8, size 0xd4, virtual true, abstract: false, final true
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices() ;

/// @brief Method get_enabled, addr 0xaf0e650, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_id, addr 0xaf1301c, size 0x48, virtual false, abstract: false, final false
inline ::System::Guid get_id() ;

/// @brief Method get_idDontGenerate, addr 0xaf10950, size 0x48, virtual false, abstract: false, final false
inline ::System::Guid get_idDontGenerate() ;

/// @brief Method get_name, addr 0xaf1300c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_needToResolveBindings, addr 0xaf13d58, size 0xc, virtual false, abstract: false, final false
inline bool get_needToResolveBindings() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr ::UnityEngine::InputSystem::IInputActionCollection* i___UnityEngine__InputSystem__IInputActionCollection() noexcept;

/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr ::UnityEngine::InputSystem::IInputActionCollection2* i___UnityEngine__InputSystem__IInputActionCollection2() noexcept;

/// @brief Method remove_actionTriggered, addr 0xaf134ac, size 0x58, virtual false, abstract: false, final false
inline void remove_actionTriggered(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

static inline void setStaticF_k_ResolveBindingsProfilerMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_DeferBindingResolution(int32_t  value) ;

static inline void setStaticF_s_NeedToResolveBindings(bool  value) ;

/// @brief Method set_bindingMask, addr 0xaf13200, size 0x134, virtual true, abstract: false, final true
inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value) ;

/// @brief Method set_bindingResolutionNeedsFullReResolve, addr 0xaf13d80, size 0x20, virtual false, abstract: false, final false
inline void set_bindingResolutionNeedsFullReResolve(bool  value) ;

/// @brief Method set_bindingsForEachActionInitialized, addr 0xaf13dd8, size 0x20, virtual false, abstract: false, final false
inline void set_bindingsForEachActionInitialized(bool  value) ;

/// @brief Method set_controlsForEachActionInitialized, addr 0xaf13dac, size 0x20, virtual false, abstract: false, final false
inline void set_controlsForEachActionInitialized(bool  value) ;

/// @brief Method set_devices, addr 0xaf13334, size 0x44, virtual true, abstract: false, final true
inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  value) ;

/// @brief Method set_needToResolveBindings, addr 0xaf13d64, size 0x10, virtual false, abstract: false, final false
inline void set_needToResolveBindings(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionMap(InputActionMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionMap(InputActionMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13362};

/// [SerializeField]
/// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Name;

/// [SerializeField]
/// @brief Field m_Id, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_Id;

/// [SerializeField]
/// @brief Field m_Asset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  ___m_Asset;

/// [SerializeField]
/// @brief Field m_Actions, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputAction*>  ___m_Actions;

/// [SerializeField]
/// @brief Field m_Bindings, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputBinding>  ___m_Bindings;

/// @brief Field m_BindingsForEachAction, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputBinding>  ___m_BindingsForEachAction;

/// @brief Field m_ControlsForEachAction, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputControl*>  ___m_ControlsForEachAction;

/// @brief Field m_EnabledActionsCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_EnabledActionsCount;

/// @brief Field m_SingletonAction, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_SingletonAction;

/// @brief Field m_MapIndexInState, offset: 0x58, size: 0x4, def value: None
 int32_t  ___m_MapIndexInState;

/// @brief Field m_State, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputActionState*  ___m_State;

/// @brief Field m_BindingMask, offset: 0x68, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  ___m_BindingMask;

/// @brief Field m_Flags, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::InputActionMap_Flags  ___m_Flags;

/// @brief Field m_ParameterOverridesCount, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___m_ParameterOverridesCount;

/// @brief Field m_ParameterOverrides, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  ___m_ParameterOverrides;

/// @brief Field m_Devices, offset: 0x88, size: 0x10, def value: None
 ::GlobalNamespace::InputActionMap_DeviceArray  ___m_Devices;

/// @brief Field m_ActionCallbacks, offset: 0x98, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>  ___m_ActionCallbacks;

/// @brief Field m_ActionIndexByNameOrId, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___m_ActionIndexByNameOrId;

/// @brief Size padding 0x140 - 0xf0 = 0x50, packed as 0x50
 uint8_t  _cordl_size_padding[0x50];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Asset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Actions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Bindings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_BindingsForEachAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ControlsForEachAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_EnabledActionsCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_SingletonAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_MapIndexInState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_State) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_BindingMask) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Flags) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ParameterOverridesCount) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ParameterOverrides) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Devices) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ActionCallbacks) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ActionIndexByNameOrId) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionMap) == 0x140, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
