#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_DeviceArray_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_ParameterOverride_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionAsset)
namespace GlobalNamespace {
struct InputActionAsset_ReadFileJson;
}
namespace GlobalNamespace {
struct InputActionAsset_WriteFileJsonNoName;
}
namespace GlobalNamespace {
struct InputActionAsset_WriteFileJson;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct Guid;
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
struct NamedValue;
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
class InputActionAsset_JsonVersion;
}
namespace UnityEngine::InputSystem {
class InputActionAsset__GetEnumerator_d__33;
}
namespace UnityEngine::InputSystem {
class InputActionAsset___c;
}
namespace UnityEngine::InputSystem {
class InputActionAsset__get_bindings_d__9;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
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
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionAsset_JsonVersion;
}
namespace UnityEngine::InputSystem {
class InputActionAsset__GetEnumerator_d__33;
}
namespace UnityEngine::InputSystem {
class InputActionAsset___c;
}
namespace UnityEngine::InputSystem {
class InputActionAsset__get_bindings_d__9;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputActionAsset*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionAsset_JsonVersion*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionAsset___c*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset*, "UnityEngine.InputSystem", "InputActionAsset");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset_JsonVersion*, "UnityEngine.InputSystem", "InputActionAsset/JsonVersion");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*, "UnityEngine.InputSystem", "InputActionAsset/<GetEnumerator>d__33");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset___c*, "UnityEngine.InputSystem", "InputActionAsset/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*, "UnityEngine.InputSystem", "InputActionAsset/<get_bindings>d__9");
// [DefaultMember("Item")]
// Dependencies System.Nullable`1<T>, UnityEngine.InputSystem.InputActionMap, UnityEngine.InputSystem.InputActionMap::DeviceArray, UnityEngine.InputSystem.InputActionRebindingExtensions::ParameterOverride, UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.InputControlScheme, UnityEngine.ScriptableObject
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionAsset
class CORDL_TYPE InputActionAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ReadFileJson = ::GlobalNamespace::InputActionAsset_ReadFileJson;

using WriteFileJson = ::GlobalNamespace::InputActionAsset_WriteFileJson;

using WriteFileJsonNoName = ::GlobalNamespace::InputActionAsset_WriteFileJsonNoName;

using JsonVersion = ::UnityEngine::InputSystem::InputActionAsset_JsonVersion;

using _GetEnumerator_d__33 = ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33;

using __c = ::UnityEngine::InputSystem::InputActionAsset___c;

using _get_bindings_d__9 = ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::InputAction*  Item[];

 __declspec(property(get=get_actionMaps)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*>  actionMaps;

 __declspec(property(get=get_bindingMask, put=set_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  bindingMask;

 __declspec(property(get=get_bindings)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*  bindings;

 __declspec(property(get=get_controlSchemes)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>  controlSchemes;

 __declspec(property(get=get_devices, put=set_devices)) ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  devices;

 __declspec(property(get=get_enabled)) bool  enabled;

/// @brief Field m_ActionMaps, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActionMaps, put=__cordl_internal_set_m_ActionMaps)) ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>  m_ActionMaps;

/// @brief Field m_BindingMask, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_BindingMask, put=__cordl_internal_set_m_BindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  m_BindingMask;

/// @brief Field m_ControlSchemes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControlSchemes, put=__cordl_internal_set_m_ControlSchemes)) ::ArrayW<::UnityEngine::InputSystem::InputControlScheme>  m_ControlSchemes;

/// @brief Field m_Devices, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Devices, put=__cordl_internal_set_m_Devices)) ::GlobalNamespace::InputActionMap_DeviceArray  m_Devices;

/// @brief Field m_IsProjectWide, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsProjectWide, put=__cordl_internal_set_m_IsProjectWide)) bool  m_IsProjectWide;

/// @brief Field m_ParameterOverrides, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ParameterOverrides, put=__cordl_internal_set_m_ParameterOverrides)) ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  m_ParameterOverrides;

/// @brief Field m_ParameterOverridesCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ParameterOverridesCount, put=__cordl_internal_set_m_ParameterOverridesCount)) int32_t  m_ParameterOverridesCount;

/// @brief Field m_SharedStateForAllMaps, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SharedStateForAllMaps, put=__cordl_internal_set_m_SharedStateForAllMaps)) ::UnityEngine::InputSystem::InputActionState*  m_SharedStateForAllMaps;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept;

/// @brief Method Contains, addr 0xaf11288, size 0x8c, virtual true, abstract: false, final true
inline bool Contains(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method Disable, addr 0xaf11108, size 0x154, virtual true, abstract: false, final true
inline void Disable() ;

/// @brief Method Enable, addr 0xaf10f68, size 0x154, virtual true, abstract: false, final true
inline void Enable() ;

/// @brief Method FindAction, addr 0xaf0ec14, size 0x358, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW  actionNameOrId, bool  throwIfNotFound) ;

/// @brief Method FindAction, addr 0xaf10a24, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid  guid) ;

/// @brief Method FindActionMap, addr 0xaf10998, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionMap* FindActionMap(::System::Guid  id) ;

/// @brief Method FindActionMap, addr 0xaf10790, size 0x1c0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionMap* FindActionMap(::StringW  nameOrId, bool  throwIfNotFound) ;

/// @brief Method FindBinding, addr 0xaf105b0, size 0xe8, virtual true, abstract: false, final true
inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding  mask, ::by_ref<::UnityEngine::InputSystem::InputAction*>  action) ;

/// @brief Method FindControlScheme, addr 0xaf10bc0, size 0x124, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlScheme(::StringW  name) ;

/// @brief Method FindControlSchemeIndex, addr 0xaf10ae8, size 0xd8, virtual false, abstract: false, final false
inline int32_t FindControlSchemeIndex(::StringW  name) ;

/// @brief Method FromJson, addr 0xaf103e4, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> FromJson(::StringW  json) ;

/// [IteratorStateMachine(typeof(UnityEngine.InputSystem.InputActionAsset::<GetEnumerator>d__33))]
/// @brief Method GetEnumerator, addr 0xaf11314, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator() ;

/// @brief Method IsEmpty, addr 0xaf113b0, size 0x70, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method IsUsableWithDevice, addr 0xaf10ce4, size 0x170, virtual false, abstract: false, final false
inline bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method LoadFromJson, addr 0xaf0f418, size 0xd8, virtual false, abstract: false, final false
inline void LoadFromJson(::StringW  json) ;

/// @brief Method MarkAsDirty, addr 0xaf113ac, size 0x4, virtual false, abstract: false, final false
inline void MarkAsDirty() ;

/// @brief Method MigrateJson, addr 0xaf0f4f0, size 0xe14, virtual false, abstract: false, final false
inline void MigrateJson(::by_ref<::GlobalNamespace::InputActionAsset_ReadFileJson>  parsedJson) ;

static inline ::UnityEngine::InputSystem::InputActionAsset* New_ctor() ;

/// @brief Method OnDestroy, addr 0xaf11a08, size 0x38, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSetupChanged, addr 0xaf1170c, size 0x8c, virtual false, abstract: false, final false
inline void OnSetupChanged() ;

/// @brief Method OnWantToChangeSetup, addr 0xaf11420, size 0x80, virtual false, abstract: false, final false
inline void OnWantToChangeSetup() ;

/// @brief Method ReResolveIfNecessary, addr 0xaf0e8b8, size 0x40, virtual false, abstract: false, final false
inline void ReResolveIfNecessary(bool  fullResolve) ;

/// @brief Method ResolveBindingsIfNecessary, addr 0xaf11968, size 0xa0, virtual false, abstract: false, final false
inline void ResolveBindingsIfNecessary() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaf113a8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToJson, addr 0xaf0ef6c, size 0x138, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> const& __cordl_internal_get_m_ActionMaps() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>& __cordl_internal_get_m_ActionMaps() ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingMask() const;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingMask() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> const& __cordl_internal_get_m_ControlSchemes() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme>& __cordl_internal_get_m_ControlSchemes() ;

constexpr ::GlobalNamespace::InputActionMap_DeviceArray const& __cordl_internal_get_m_Devices() const;

constexpr ::GlobalNamespace::InputActionMap_DeviceArray& __cordl_internal_get_m_Devices() ;

constexpr bool const& __cordl_internal_get_m_IsProjectWide() const;

constexpr bool& __cordl_internal_get_m_IsProjectWide() ;

constexpr ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride> const& __cordl_internal_get_m_ParameterOverrides() const;

constexpr ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>& __cordl_internal_get_m_ParameterOverrides() ;

constexpr int32_t const& __cordl_internal_get_m_ParameterOverridesCount() const;

constexpr int32_t& __cordl_internal_get_m_ParameterOverridesCount() ;

constexpr ::UnityEngine::InputSystem::InputActionState* const& __cordl_internal_get_m_SharedStateForAllMaps() const;

constexpr ::UnityEngine::InputSystem::InputActionState*& __cordl_internal_get_m_SharedStateForAllMaps() ;

constexpr void __cordl_internal_set_m_ActionMaps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*>  value) ;

constexpr void __cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr void __cordl_internal_set_m_ControlSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme>  value) ;

constexpr void __cordl_internal_set_m_Devices(::GlobalNamespace::InputActionMap_DeviceArray  value) ;

constexpr void __cordl_internal_set_m_IsProjectWide(bool  value) ;

constexpr void __cordl_internal_set_m_ParameterOverrides(::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  value) ;

constexpr void __cordl_internal_set_m_ParameterOverridesCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_SharedStateForAllMaps(::UnityEngine::InputSystem::InputActionState*  value) ;

/// @brief Method .ctor, addr 0xaf11a40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xaf0eb94, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_Item(::StringW  actionNameOrId) ;

/// @brief Method get_actionMaps, addr 0xaf0e5f0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> get_actionMaps() ;

/// @brief Method get_bindingMask, addr 0xaf0e774, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// [IteratorStateMachine(typeof(UnityEngine.InputSystem.InputActionAsset::<get_bindings>d__9))]
/// @brief Method get_bindings, addr 0xaf0e6c0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings() ;

/// @brief Method get_controlSchemes, addr 0xaf0e660, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes() ;

/// @brief Method get_devices, addr 0xaf0e8f8, size 0x34, virtual true, abstract: false, final true
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices() ;

/// @brief Method get_enabled, addr 0xaf0e490, size 0x160, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr ::UnityEngine::InputSystem::IInputActionCollection* i___UnityEngine__InputSystem__IInputActionCollection() noexcept;

/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr ::UnityEngine::InputSystem::IInputActionCollection2* i___UnityEngine__InputSystem__IInputActionCollection2() noexcept;

/// @brief Method set_bindingMask, addr 0xaf0e784, size 0x134, virtual true, abstract: false, final true
inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value) ;

/// @brief Method set_devices, addr 0xaf0e9d4, size 0x44, virtual true, abstract: false, final true
inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionAsset(InputActionAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionAsset(InputActionAsset const& ) = delete;

/// @brief Field Extension offset 0xffffffff size 0x8
static constexpr ::ConstString  Extension{u"inputactions"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13349};

/// @brief Field kDefaultAssetLayoutJson offset 0xffffffff size 0x8
static constexpr ::ConstString  kDefaultAssetLayoutJson{u"{}"};

/// [SerializeField]
/// @brief Field m_ActionMaps, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>  ___m_ActionMaps;

/// [SerializeField]
/// @brief Field m_ControlSchemes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputControlScheme>  ___m_ControlSchemes;

/// [SerializeField]
/// @brief Field m_IsProjectWide, offset: 0x28, size: 0x1, def value: None
 bool  ___m_IsProjectWide;

/// @brief Field m_SharedStateForAllMaps, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputActionState*  ___m_SharedStateForAllMaps;

/// @brief Field m_BindingMask, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  ___m_BindingMask;

/// @brief Field m_ParameterOverridesCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_ParameterOverridesCount;

/// @brief Field m_ParameterOverrides, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  ___m_ParameterOverrides;

/// @brief Field m_Devices, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::InputActionMap_DeviceArray  ___m_Devices;

/// @brief Size padding 0xb8 - 0x68 = 0x50, packed as 0x50
 uint8_t  _cordl_size_padding[0x50];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ActionMaps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ControlSchemes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_IsProjectWide) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_SharedStateForAllMaps) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_BindingMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ParameterOverridesCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ParameterOverrides) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_Devices) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputSystem.InputBinding
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__9
class CORDL_TYPE InputActionAsset__get_bindings_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current)) ::UnityEngine::InputSystem::InputBinding  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x58 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::InputSystem::InputBinding  __2__current;

/// @brief Field <>4__this, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <bindings>5__4, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__bindings_5__4, put=__cordl_internal_set__bindings_5__4)) ::ArrayW<::UnityEngine::InputSystem::InputBinding>  _bindings_5__4;

/// @brief Field <i>5__3, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__3, put=__cordl_internal_set__i_5__3)) int32_t  _i_5__3;

/// @brief Field <n>5__6, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__n_5__6, put=__cordl_internal_set__n_5__6)) int32_t  _n_5__6;

/// @brief Field <numActionMaps>5__2, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__numActionMaps_5__2, put=__cordl_internal_set__numActionMaps_5__2)) int32_t  _numActionMaps_5__2;

/// @brief Field <numBindings>5__5, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__numBindings_5__5, put=__cordl_internal_set__numBindings_5__5)) int32_t  _numBindings_5__5;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xaf12d3c, size 0x17c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator, addr 0xaf12f64, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current, addr 0xaf12eb8, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaf13008, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xaf12ec8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaf12f00, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xaf12d38, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::InputSystem::InputBinding const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::InputSystem::InputBinding& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get__bindings_5__4() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get__bindings_5__4() ;

constexpr int32_t const& __cordl_internal_get__i_5__3() const;

constexpr int32_t& __cordl_internal_get__i_5__3() ;

constexpr int32_t const& __cordl_internal_get__n_5__6() const;

constexpr int32_t& __cordl_internal_get__n_5__6() ;

constexpr int32_t const& __cordl_internal_get__numActionMaps_5__2() const;

constexpr int32_t& __cordl_internal_get__numActionMaps_5__2() ;

constexpr int32_t const& __cordl_internal_get__numBindings_5__5() const;

constexpr int32_t& __cordl_internal_get__numBindings_5__5() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::InputBinding  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__bindings_5__4(::ArrayW<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr void __cordl_internal_set__i_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__n_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__numActionMaps_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__numBindings_5__5(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xaf0e740, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputBinding_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputBinding_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionAsset__get_bindings_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset__get_bindings_d__9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionAsset__get_bindings_d__9(InputActionAsset__get_bindings_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset__get_bindings_d__9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionAsset__get_bindings_d__9(InputActionAsset__get_bindings_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13348};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x58, def value: None
 ::UnityEngine::InputSystem::InputBinding  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x70, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  _____4__this;

/// @brief Field <numActionMaps>5__2, offset: 0x80, size: 0x4, def value: None
 int32_t  ____numActionMaps_5__2;

/// @brief Field <i>5__3, offset: 0x84, size: 0x4, def value: None
 int32_t  ____i_5__3;

/// @brief Field <bindings>5__4, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputBinding>  ____bindings_5__4;

/// @brief Field <numBindings>5__5, offset: 0x90, size: 0x4, def value: None
 int32_t  ____numBindings_5__5;

/// @brief Field <n>5__6, offset: 0x94, size: 0x4, def value: None
 int32_t  ____n_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, _____l__initialThreadId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, _____4__this) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____numActionMaps_5__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____i_5__3) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____bindings_5__4) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____numBindings_5__5) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____n_5__6) == 0x94, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9) == 0x98, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__33
class CORDL_TYPE InputActionAsset__GetEnumerator_d__33 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current)) ::UnityEngine::InputSystem::InputAction*  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::InputSystem::InputAction*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  __4__this;

/// @brief Field <actionCount>5__4, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__actionCount_5__4, put=__cordl_internal_set__actionCount_5__4)) int32_t  _actionCount_5__4;

/// @brief Field <actions>5__3, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__actions_5__3, put=__cordl_internal_set__actions_5__3)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>  _actions_5__3;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field <n>5__5, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__n_5__5, put=__cordl_internal_set__n_5__5)) int32_t  _n_5__5;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xaf12b60, size 0x130, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current, addr 0xaf12cf0, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputAction* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xaf12cf8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaf12d30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xaf12b5c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__actionCount_5__4() const;

constexpr int32_t& __cordl_internal_get__actionCount_5__4() ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get__actions_5__3() const;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>& __cordl_internal_get__actions_5__3() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr int32_t const& __cordl_internal_get__n_5__5() const;

constexpr int32_t& __cordl_internal_get__n_5__5() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set__actionCount_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__actions_5__3(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__n_5__5(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xaf11380, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputAction__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionAsset__GetEnumerator_d__33() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset__GetEnumerator_d__33", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionAsset__GetEnumerator_d__33(InputActionAsset__GetEnumerator_d__33 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset__GetEnumerator_d__33", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionAsset__GetEnumerator_d__33(InputActionAsset__GetEnumerator_d__33 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13347};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

/// @brief Field <actions>5__3, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>  ____actions_5__3;

/// @brief Field <actionCount>5__4, offset: 0x40, size: 0x4, def value: None
 int32_t  ____actionCount_5__4;

/// @brief Field <n>5__5, offset: 0x44, size: 0x4, def value: None
 int32_t  ____n_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, ____actions_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, ____actionCount_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, ____n_5__5) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionAsset/<>c
class CORDL_TYPE InputActionAsset___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::InputActionAsset___c*  __9;

/// @brief Field <>9__53_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_0, put=setStaticF___9__53_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  __9__53_0;

/// @brief Field <>9__53_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_1, put=setStaticF___9__53_1)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  __9__53_1;

/// @brief Field <>9__53_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_2, put=setStaticF___9__53_2)) ::System::Func_2<::System::Reflection::FieldInfo*,bool>*  __9__53_2;

/// @brief Field <>9__53_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_3, put=setStaticF___9__53_3)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  __9__53_3;

static inline ::UnityEngine::InputSystem::InputActionAsset___c* New_ctor() ;

/// @brief Method <MigrateJson>b__53_0, addr 0xaf12a78, size 0x8, virtual false, abstract: false, final false
inline ::StringW _MigrateJson_b__53_0(::UnityEngine::InputSystem::Utilities::NamedValue  p) ;

/// @brief Method <MigrateJson>b__53_1, addr 0xaf12a80, size 0x2c, virtual false, abstract: false, final false
inline ::StringW _MigrateJson_b__53_1(::UnityEngine::InputSystem::Utilities::NamedValue  p) ;

/// @brief Method <MigrateJson>b__53_2, addr 0xaf12aac, size 0x3c, virtual false, abstract: false, final false
inline bool _MigrateJson_b__53_2(::System::Reflection::FieldInfo*  f) ;

/// @brief Method <MigrateJson>b__53_3, addr 0xaf12ae8, size 0x74, virtual false, abstract: false, final false
inline ::StringW _MigrateJson_b__53_3(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  kv) ;

/// @brief Method .ctor, addr 0xaf12a70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::InputActionAsset___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>* getStaticF___9__53_0() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>* getStaticF___9__53_1() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* getStaticF___9__53_2() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>* getStaticF___9__53_3() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::InputActionAsset___c*  value) ;

static inline void setStaticF___9__53_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  value) ;

static inline void setStaticF___9__53_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  value) ;

static inline void setStaticF___9__53_2(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value) ;

static inline void setStaticF___9__53_3(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionAsset___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionAsset___c(InputActionAsset___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionAsset___c(InputActionAsset___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13346};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionAsset/JsonVersion
class CORDL_TYPE InputActionAsset_JsonVersion : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionAsset_JsonVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset_JsonVersion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionAsset_JsonVersion(InputActionAsset_JsonVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset_JsonVersion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionAsset_JsonVersion(InputActionAsset_JsonVersion const& ) = delete;

/// @brief Field Current offset 0xffffffff size 0x4
static constexpr int32_t  Current{static_cast<int32_t>(0x1)};

/// @brief Field Version0 offset 0xffffffff size 0x4
static constexpr int32_t  Version0{static_cast<int32_t>(0x0)};

/// @brief Field Version1 offset 0xffffffff size 0x4
static constexpr int32_t  Version1{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13342};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset_JsonVersion) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
