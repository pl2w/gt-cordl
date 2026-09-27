#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionRebindingExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Cache_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_RebindingOperation_Flags_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionRebindingExtensions)
namespace GlobalNamespace {
struct InputActionMap_BindingOverrideJson;
}
namespace GlobalNamespace {
struct InputActionRebindingExtensions_ParameterEnumerable;
}
namespace GlobalNamespace {
struct InputActionRebindingExtensions_ParameterEnumerator;
}
namespace GlobalNamespace {
struct InputActionRebindingExtensions_ParameterOverride;
}
namespace GlobalNamespace {
struct InputActionRebindingExtensions_Parameter;
}
namespace GlobalNamespace {
struct InputBinding_DisplayStringOptions;
}
namespace GlobalNamespace {
struct RebindingOperation_InputActionRebindingExtensions_Flags;
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
namespace System::Linq::Expressions {
template<typename TDelegate>
class Expression_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions_DeferBindingResolutionWrapper;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions_RebindingOperation;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions___c__DisplayClass25_0;
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
template<typename TControl>
struct InputControlList_1;
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
namespace UnityEngine::InputSystem {
class RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions_DeferBindingResolutionWrapper;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions_RebindingOperation;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions___c__DisplayClass25_0;
}
namespace UnityEngine::InputSystem {
class RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputActionRebindingExtensions*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0*);
MARK_REF_T(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionRebindingExtensions*, "UnityEngine.InputSystem", "InputActionRebindingExtensions");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/DeferBindingResolutionWrapper");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/<>c__DisplayClass25_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation/<>c__DisplayClass32_0");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions
class CORDL_TYPE InputActionRebindingExtensions : public ::System::Object {
public:
// Declarations
using Parameter = ::GlobalNamespace::InputActionRebindingExtensions_Parameter;

using ParameterEnumerable = ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable;

using ParameterEnumerator = ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator;

using ParameterOverride = ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride;

using DeferBindingResolutionWrapper = ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper;

using RebindingOperation = ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation;

using __c__DisplayClass25_0 = ::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0;

/// @brief Field s_DeferBindingResolutionWrapper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DeferBindingResolutionWrapper, put=setStaticF_s_DeferBindingResolutionWrapper)) ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper*  s_DeferBindingResolutionWrapper;

/// [Extension]
/// @brief Method AddBindingOverrideJsonTo, addr 0xaf1a07c, size 0x210, virtual false, abstract: false, final false
static inline void AddBindingOverrideJsonTo(::UnityEngine::InputSystem::IInputActionCollection2*  actions, ::UnityEngine::InputSystem::InputBinding  binding, ::System::Collections::Generic::List_1<::GlobalNamespace::InputActionMap_BindingOverrideJson>*  list, ::UnityEngine::InputSystem::InputAction*  action) ;

/// [Extension]
/// @brief Method ApplyBindingOverride, addr 0xaf1867c, size 0x158, virtual false, abstract: false, final false
static inline int32_t ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputBinding  bindingOverride) ;

/// [Extension]
/// @brief Method ApplyBindingOverride, addr 0xaf187d4, size 0xc4, virtual false, abstract: false, final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex, ::UnityEngine::InputSystem::InputBinding  bindingOverride) ;

/// [Extension]
/// @brief Method ApplyBindingOverride, addr 0xaf18a5c, size 0xdc, virtual false, abstract: false, final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex, ::StringW  path) ;

/// [Extension]
/// @brief Method ApplyBindingOverride, addr 0xaf18568, size 0x114, virtual false, abstract: false, final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  bindingOverride) ;

/// [Extension]
/// @brief Method ApplyBindingOverride, addr 0xaf1847c, size 0xec, virtual false, abstract: false, final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction*  action, ::StringW  newPath, ::StringW  group, ::StringW  path) ;

/// [Extension]
/// @brief Method ApplyBindingOverride, addr 0xaf18898, size 0x1c4, virtual false, abstract: false, final false
static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, int32_t  bindingIndex, ::UnityEngine::InputSystem::InputBinding  bindingOverride) ;

/// [Extension]
/// @brief Method ApplyBindingOverrides, addr 0xaf19324, size 0x340, virtual false, abstract: false, final false
static inline void ApplyBindingOverrides(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*  overrides) ;

/// [Extension]
/// @brief Method ApplyBindingOverridesOnMatchingControls, addr 0xaf199a4, size 0x154, virtual false, abstract: false, final false
static inline int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method ApplyBindingOverridesOnMatchingControls, addr 0xaf19af8, size 0x11c, virtual false, abstract: false, final false
static inline int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method ApplyParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject,typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction*  action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, TValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method ApplyParameterOverride, addr 0xaf17160, size 0x200, virtual false, abstract: false, final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value, int32_t  bindingIndex) ;

/// [Extension]
/// @brief Method ApplyParameterOverride, addr 0xaf17004, size 0x15c, virtual false, abstract: false, final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method ApplyParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject,typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, TValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method ApplyParameterOverride, addr 0xaf16918, size 0x13c, virtual false, abstract: false, final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::StringW  name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method ApplyParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject,typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset*  asset, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, TValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method ApplyParameterOverride, addr 0xaf16e7c, size 0x188, virtual false, abstract: false, final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// @brief Method ApplyParameterOverride, addr 0xaf16a54, size 0x428, virtual false, abstract: false, final false
static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionState*  state, int32_t  mapIndex, ::by_ref<::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>>  parameterOverrides, ::by_ref<int32_t>  parameterOverridesCount, ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride  parameterOverride) ;

/// @brief Method DeferBindingResolution, addr 0xaf15098, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper* DeferBindingResolution() ;

/// @brief Method ExtractParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject,typename TValue>
static inline ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride ExtractParameterOverride(::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// [Extension]
/// @brief Method GetBindingDisplayString, addr 0xaf17ebc, size 0x5c0, virtual false, abstract: false, final false
static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex, ::by_ref<::StringW>  deviceLayoutName, ::by_ref<::StringW>  controlPath, ::GlobalNamespace::InputBinding_DisplayStringOptions  options) ;

/// [Extension]
/// @brief Method GetBindingDisplayString, addr 0xaf17e48, size 0x74, virtual false, abstract: false, final false
static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex, ::GlobalNamespace::InputBinding_DisplayStringOptions  options) ;

/// [Extension]
/// @brief Method GetBindingDisplayString, addr 0xaf17c48, size 0x200, virtual false, abstract: false, final false
static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  bindingMask, ::GlobalNamespace::InputBinding_DisplayStringOptions  options) ;

/// [Extension]
/// @brief Method GetBindingDisplayString, addr 0xaf17aec, size 0x15c, virtual false, abstract: false, final false
static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction*  action, ::GlobalNamespace::InputBinding_DisplayStringOptions  options, ::StringW  group) ;

/// [Extension]
/// @brief Method GetBindingForControl, addr 0xaf177ec, size 0x15c, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> GetBindingForControl(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method GetBindingIndex, addr 0xaf17508, size 0x114, virtual false, abstract: false, final false
static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method GetBindingIndex, addr 0xaf17730, size 0xbc, virtual false, abstract: false, final false
static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction*  action, ::StringW  group, ::StringW  path) ;

/// [Extension]
/// @brief Method GetBindingIndex, addr 0xaf1761c, size 0x114, virtual false, abstract: false, final false
static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method GetBindingIndexForControl, addr 0xaf17948, size 0x1a4, virtual false, abstract: false, final false
static inline int32_t GetBindingIndexForControl(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputControl*  control) ;

/// [Extension]
/// @brief Method GetParameterValue, addr 0xaf1670c, size 0x20c, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name, int32_t  bindingIndex) ;

/// [Extension]
/// @brief Method GetParameterValue, addr 0xaf1610c, size 0x12c, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method GetParameterValue, addr 0xaf16314, size 0x238, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction*  action, ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride  parameterOverride) ;

/// [Extension]
/// @brief Method GetParameterValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject,typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline ::System::Nullable_1<TValue> GetParameterValue(::UnityEngine::InputSystem::InputAction*  action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>*>*  expr, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method LoadBindingOverridesFromJson, addr 0xaf1aaa0, size 0x19c, virtual false, abstract: false, final false
static inline void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::InputAction*  action, ::StringW  json, bool  removeExisting) ;

/// [Extension]
/// @brief Method LoadBindingOverridesFromJson, addr 0xaf1a59c, size 0x188, virtual false, abstract: false, final false
static inline void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::IInputActionCollection2*  actions, ::StringW  json, bool  removeExisting) ;

/// [Extension]
/// @brief Method LoadBindingOverridesFromJsonInternal, addr 0xaf1a724, size 0x37c, virtual false, abstract: false, final false
static inline void LoadBindingOverridesFromJsonInternal(::UnityEngine::InputSystem::IInputActionCollection2*  actions, ::StringW  json) ;

/// [Extension]
/// @brief Method PerformInteractiveRebinding, addr 0xaf1ac3c, size 0x3b4, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* PerformInteractiveRebinding(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex) ;

/// [Extension]
/// @brief Method RemoveAllBindingOverrides, addr 0xaf191bc, size 0x168, virtual false, abstract: false, final false
static inline void RemoveAllBindingOverrides(::UnityEngine::InputSystem::InputAction*  action) ;

/// [Extension]
/// @brief Method RemoveAllBindingOverrides, addr 0xaf18d2c, size 0x490, virtual false, abstract: false, final false
static inline void RemoveAllBindingOverrides(::UnityEngine::InputSystem::IInputActionCollection2*  actions) ;

/// [Extension]
/// @brief Method RemoveBindingOverride, addr 0xaf18b38, size 0x7c, virtual false, abstract: false, final false
static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction*  action, int32_t  bindingIndex) ;

/// [Extension]
/// @brief Method RemoveBindingOverride, addr 0xaf18bb4, size 0xbc, virtual false, abstract: false, final false
static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method RemoveBindingOverride, addr 0xaf18c70, size 0xbc, virtual false, abstract: false, final false
static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputBinding  bindingMask) ;

/// [Extension]
/// @brief Method RemoveBindingOverrides, addr 0xaf19664, size 0x340, virtual false, abstract: false, final false
static inline void RemoveBindingOverrides(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*  overrides) ;

/// [Extension]
/// @brief Method SaveBindingOverridesAsJson, addr 0xaf1a28c, size 0x310, virtual false, abstract: false, final false
static inline ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::InputAction*  action) ;

/// [Extension]
/// @brief Method SaveBindingOverridesAsJson, addr 0xaf19c14, size 0x468, virtual false, abstract: false, final false
static inline ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::IInputActionCollection2*  actions) ;

static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper* getStaticF_s_DeferBindingResolutionWrapper() ;

static inline void setStaticF_s_DeferBindingResolutionWrapper(::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionRebindingExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionRebindingExtensions(InputActionRebindingExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionRebindingExtensions(InputActionRebindingExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13372};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputActionRebindingExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/<>c__DisplayClass25_0
class CORDL_TYPE InputActionRebindingExtensions___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field bindings, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_bindings, put=__cordl_internal_set_bindings)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>  bindings;

/// @brief Field firstPartIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_firstPartIndex, put=__cordl_internal_set_firstPartIndex)) int32_t  firstPartIndex;

/// @brief Field partCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_partCount, put=__cordl_internal_set_partCount)) int32_t  partCount;

/// @brief Field partStrings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_partStrings, put=__cordl_internal_set_partStrings)) ::ArrayW<::StringW>  partStrings;

static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <GetBindingDisplayString>b__0, addr 0xaf2259c, size 0x164, virtual false, abstract: false, final false
inline ::StringW _GetBindingDisplayString_b__0(::StringW  fragment) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_bindings() const;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_bindings() ;

constexpr int32_t const& __cordl_internal_get_firstPartIndex() const;

constexpr int32_t& __cordl_internal_get_firstPartIndex() ;

constexpr int32_t const& __cordl_internal_get_partCount() const;

constexpr int32_t& __cordl_internal_get_partCount() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_partStrings() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_partStrings() ;

constexpr void __cordl_internal_set_bindings(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr void __cordl_internal_set_firstPartIndex(int32_t  value) ;

constexpr void __cordl_internal_set_partCount(int32_t  value) ;

constexpr void __cordl_internal_set_partStrings(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xaf22594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionRebindingExtensions___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions___c__DisplayClass25_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionRebindingExtensions___c__DisplayClass25_0(InputActionRebindingExtensions___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions___c__DisplayClass25_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionRebindingExtensions___c__DisplayClass25_0(InputActionRebindingExtensions___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13371};

/// @brief Field bindings, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>  ___bindings;

/// @brief Field firstPartIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___firstPartIndex;

/// @brief Field partStrings, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___partStrings;

/// @brief Field partCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___partCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0, ___bindings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0, ___firstPartIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0, ___partStrings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0, ___partCount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
class CORDL_TYPE InputActionRebindingExtensions_DeferBindingResolutionWrapper : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Acquire, addr 0xaf22150, size 0x60, virtual false, abstract: false, final false
inline void Acquire() ;

/// @brief Method Dispose, addr 0xaf221b0, size 0xcc, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper* New_ctor() ;

/// @brief Method .ctor, addr 0xaf2258c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionRebindingExtensions_DeferBindingResolutionWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions_DeferBindingResolutionWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionRebindingExtensions_DeferBindingResolutionWrapper(InputActionRebindingExtensions_DeferBindingResolutionWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions_DeferBindingResolutionWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionRebindingExtensions_DeferBindingResolutionWrapper(InputActionRebindingExtensions_DeferBindingResolutionWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13370};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.InputSystem.InputActionRebindingExtensions::RebindingOperation::Flags, UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.InputControlList`1<TControl>, UnityEngine.InputSystem.Layouts.InputControlLayout::Cache, UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
class CORDL_TYPE InputActionRebindingExtensions_RebindingOperation : public ::System::Object {
public:
// Declarations
using Flags = ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags;

using __c__DisplayClass32_0 = ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0;

 __declspec(property(get=get_action)) ::UnityEngine::InputSystem::InputAction*  action;

 __declspec(property(get=get_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  bindingMask;

 __declspec(property(get=get_canceled)) bool  canceled;

 __declspec(property(get=get_candidates)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  candidates;

 __declspec(property(get=get_completed)) bool  completed;

 __declspec(property(get=get_expectedControlType)) ::StringW  expectedControlType;

/// @brief Field m_ActionToRebind, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActionToRebind, put=__cordl_internal_set_m_ActionToRebind)) ::UnityEngine::InputSystem::InputAction*  m_ActionToRebind;

/// @brief Field m_BindingGroupForNewBinding, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingGroupForNewBinding, put=__cordl_internal_set_m_BindingGroupForNewBinding)) ::StringW  m_BindingGroupForNewBinding;

/// @brief Field m_BindingMask, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_BindingMask, put=__cordl_internal_set_m_BindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  m_BindingMask;

/// @brief Field m_CancelBinding, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancelBinding, put=__cordl_internal_set_m_CancelBinding)) ::StringW  m_CancelBinding;

/// @brief Field m_Candidates, offset 0xa8, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_Candidates, put=__cordl_internal_set_m_Candidates)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Candidates;

/// @brief Field m_ControlType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControlType, put=__cordl_internal_set_m_ControlType)) ::System::Type*  m_ControlType;

/// @brief Field m_ExcludePathCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ExcludePathCount, put=__cordl_internal_set_m_ExcludePathCount)) int32_t  m_ExcludePathCount;

/// @brief Field m_ExcludePaths, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExcludePaths, put=__cordl_internal_set_m_ExcludePaths)) ::ArrayW<::StringW>  m_ExcludePaths;

/// @brief Field m_ExpectedLayout, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_ExpectedLayout, put=__cordl_internal_set_m_ExpectedLayout)) ::UnityEngine::InputSystem::Utilities::InternedString  m_ExpectedLayout;

/// @brief Field m_Flags, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Flags, put=__cordl_internal_set_m_Flags)) ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  m_Flags;

/// @brief Field m_IncludePathCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_IncludePathCount, put=__cordl_internal_set_m_IncludePathCount)) int32_t  m_IncludePathCount;

/// @brief Field m_IncludePaths, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IncludePaths, put=__cordl_internal_set_m_IncludePaths)) ::ArrayW<::StringW>  m_IncludePaths;

/// @brief Field m_LastMatchTime, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastMatchTime, put=__cordl_internal_set_m_LastMatchTime)) double_t  m_LastMatchTime;

/// @brief Field m_LayoutCache, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LayoutCache, put=__cordl_internal_set_m_LayoutCache)) ::GlobalNamespace::InputControlLayout_Cache  m_LayoutCache;

/// @brief Field m_MagnitudeThreshold, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MagnitudeThreshold, put=__cordl_internal_set_m_MagnitudeThreshold)) float_t  m_MagnitudeThreshold;

/// @brief Field m_Magnitudes, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Magnitudes, put=__cordl_internal_set_m_Magnitudes)) ::ArrayW<float_t>  m_Magnitudes;

/// @brief Field m_OnAfterUpdateDelegate, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnAfterUpdateDelegate, put=__cordl_internal_set_m_OnAfterUpdateDelegate)) ::System::Action*  m_OnAfterUpdateDelegate;

/// @brief Field m_OnApplyBinding, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnApplyBinding, put=__cordl_internal_set_m_OnApplyBinding)) ::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*,::StringW>*  m_OnApplyBinding;

/// @brief Field m_OnCancel, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnCancel, put=__cordl_internal_set_m_OnCancel)) ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  m_OnCancel;

/// @brief Field m_OnComplete, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnComplete, put=__cordl_internal_set_m_OnComplete)) ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  m_OnComplete;

/// @brief Field m_OnComputeScore, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnComputeScore, put=__cordl_internal_set_m_OnComputeScore)) ::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>*  m_OnComputeScore;

/// @brief Field m_OnEventDelegate, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnEventDelegate, put=__cordl_internal_set_m_OnEventDelegate)) ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  m_OnEventDelegate;

/// @brief Field m_OnGeneratePath, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnGeneratePath, put=__cordl_internal_set_m_OnGeneratePath)) ::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>*  m_OnGeneratePath;

/// @brief Field m_OnPotentialMatch, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnPotentialMatch, put=__cordl_internal_set_m_OnPotentialMatch)) ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  m_OnPotentialMatch;

/// @brief Field m_PathBuilder, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PathBuilder, put=__cordl_internal_set_m_PathBuilder)) ::System::Text::StringBuilder*  m_PathBuilder;

/// @brief Field m_Scores, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Scores, put=__cordl_internal_set_m_Scores)) ::ArrayW<float_t>  m_Scores;

/// @brief Field m_StartTime, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartTime, put=__cordl_internal_set_m_StartTime)) double_t  m_StartTime;

/// @brief Field m_StartingActuations, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingActuations, put=__cordl_internal_set_m_StartingActuations)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*,float_t>*  m_StartingActuations;

/// @brief Field m_TargetBindingIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TargetBindingIndex, put=__cordl_internal_set_m_TargetBindingIndex)) int32_t  m_TargetBindingIndex;

/// @brief Field m_Timeout, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Timeout, put=__cordl_internal_set_m_Timeout)) float_t  m_Timeout;

/// @brief Field m_WaitSecondsAfterMatch, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_WaitSecondsAfterMatch, put=__cordl_internal_set_m_WaitSecondsAfterMatch)) float_t  m_WaitSecondsAfterMatch;

 __declspec(property(get=get_magnitudes)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t>  magnitudes;

 __declspec(property(get=get_scores)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t>  scores;

 __declspec(property(get=get_selectedControl)) ::UnityEngine::InputSystem::InputControl*  selectedControl;

 __declspec(property(get=get_startTime)) double_t  startTime;

 __declspec(property(get=get_started)) bool  started;

 __declspec(property(get=get_timeout)) float_t  timeout;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddCandidate, addr 0xaf1d5b8, size 0x170, virtual false, abstract: false, final false
inline void AddCandidate(::UnityEngine::InputSystem::InputControl*  control, float_t  score, float_t  magnitude) ;

/// @brief Method Cancel, addr 0xaf1d258, size 0x10, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method Complete, addr 0xaf1d2a4, size 0x10, virtual false, abstract: false, final false
inline void Complete() ;

/// @brief Method Dispose, addr 0xaf1d970, size 0x64, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0xaf1dad0, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GeneratePathForControl, addr 0xaf1e454, size 0x10c, virtual false, abstract: false, final false
inline ::StringW GeneratePathForControl(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method HavePathMatch, addr 0xaf1e31c, size 0x90, virtual false, abstract: false, final false
static inline bool HavePathMatch(::UnityEngine::InputSystem::InputControl*  control, ::ArrayW<::StringW>  paths, int32_t  pathCount) ;

/// @brief Method HookOnAfterUpdate, addr 0xaf1d0a4, size 0xd0, virtual false, abstract: false, final false
inline void HookOnAfterUpdate() ;

/// @brief Method HookOnEvent, addr 0xaf1d174, size 0xe4, virtual false, abstract: false, final false
inline void HookOnEvent() ;

static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* New_ctor() ;

/// @brief Method OnAfterUpdate, addr 0xaf1e3ac, size 0xa8, virtual false, abstract: false, final false
inline void OnAfterUpdate() ;

/// @brief Method OnApplyBinding, addr 0xaf1cf28, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*,::StringW>*  callback) ;

/// @brief Method OnCancel, addr 0xaf1cea8, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnCancel(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  callback) ;

/// @brief Method OnCancel, addr 0xaf1d268, size 0x3c, virtual false, abstract: false, final false
inline void OnCancel() ;

/// @brief Method OnComplete, addr 0xaf1ce88, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnComplete(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  callback) ;

/// @brief Method OnComplete, addr 0xaf1d2b4, size 0x304, virtual false, abstract: false, final false
inline void OnComplete() ;

/// @brief Method OnComputeScore, addr 0xaf1cf08, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>*  callback) ;

/// @brief Method OnEvent, addr 0xaf1dc40, size 0x6dc, virtual false, abstract: false, final false
inline void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method OnGeneratePath, addr 0xaf1cee8, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>*  callback) ;

/// @brief Method OnMatchWaitForAnother, addr 0xaf1b1f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnMatchWaitForAnother(float_t  seconds) ;

/// @brief Method OnPotentialMatch, addr 0xaf1cec8, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  callback) ;

/// @brief Method RemoveCandidate, addr 0xaf1d858, size 0x118, virtual false, abstract: false, final false
inline void RemoveCandidate(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Reset, addr 0xaf1db54, size 0xec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* Reset() ;

/// @brief Method ResetAfterMatchCompleted, addr 0xaf1e560, size 0xc0, virtual false, abstract: false, final false
inline void ResetAfterMatchCompleted() ;

/// @brief Method SortCandidatesByScore, addr 0xaf1d728, size 0x130, virtual false, abstract: false, final false
inline void SortCandidatesByScore() ;

/// @brief Method Start, addr 0xaf1cf48, size 0x15c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* Start() ;

/// @brief Method ThrowIfRebindInProgress, addr 0xaf1c898, size 0x58, virtual false, abstract: false, final false
inline void ThrowIfRebindInProgress() ;

/// @brief Method UnhookOnAfterUpdate, addr 0xaf1da5c, size 0x74, virtual false, abstract: false, final false
inline void UnhookOnAfterUpdate() ;

/// @brief Method UnhookOnEvent, addr 0xaf1d9d4, size 0x88, virtual false, abstract: false, final false
inline void UnhookOnEvent() ;

/// @brief Method WithAction, addr 0xaf1b08c, size 0x16c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithAction(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method WithBindingGroup, addr 0xaf1cc94, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithBindingGroup(::StringW  group) ;

/// @brief Method WithBindingMask, addr 0xaf1cc68, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithBindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  bindingMask) ;

/// @brief Method WithCancelingThrough, addr 0xaf1b374, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithCancelingThrough(::StringW  binding) ;

/// @brief Method WithCancelingThrough, addr 0xaf1c944, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithCancelingThrough(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method WithControlsExcluding, addr 0xaf1b200, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithControlsExcluding(::StringW  path) ;

/// @brief Method WithControlsHavingToMatchPath, addr 0xaf1cb44, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithControlsHavingToMatchPath(::StringW  path) ;

/// @brief Method WithExpectedControlType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithExpectedControlType() ;

/// @brief Method WithExpectedControlType, addr 0xaf1c8f0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithExpectedControlType(::StringW  layoutName) ;

/// @brief Method WithExpectedControlType, addr 0xaf1c9dc, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithExpectedControlType(::System::Type*  type) ;

/// @brief Method WithMagnitudeHavingToBeGreaterThan, addr 0xaf1cd98, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithMagnitudeHavingToBeGreaterThan(float_t  magnitude) ;

/// @brief Method WithMatchingEventsBeingSuppressed, addr 0xaf1b324, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithMatchingEventsBeingSuppressed(bool  value) ;

/// @brief Method WithRebindAddingNewBinding, addr 0xaf1cd70, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithRebindAddingNewBinding(::StringW  group) ;

/// @brief Method WithTargetBinding, addr 0xaf1b3a8, size 0x50c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithTargetBinding(int32_t  bindingIndex) ;

/// @brief Method WithTimeout, addr 0xaf1ce80, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithTimeout(float_t  timeInSeconds) ;

/// @brief Method WithoutGeneralizingPathOfSelectedControl, addr 0xaf1cd60, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithoutGeneralizingPathOfSelectedControl() ;

/// @brief Method WithoutIgnoringNoisyControls, addr 0xaf1ce5c, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithoutIgnoringNoisyControls() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_ActionToRebind() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_ActionToRebind() ;

constexpr ::StringW const& __cordl_internal_get_m_BindingGroupForNewBinding() const;

constexpr ::StringW& __cordl_internal_get_m_BindingGroupForNewBinding() ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingMask() const;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingMask() ;

constexpr ::StringW const& __cordl_internal_get_m_CancelBinding() const;

constexpr ::StringW& __cordl_internal_get_m_CancelBinding() ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get_m_Candidates() const;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>& __cordl_internal_get_m_Candidates() ;

constexpr ::System::Type* const& __cordl_internal_get_m_ControlType() const;

constexpr ::System::Type*& __cordl_internal_get_m_ControlType() ;

constexpr int32_t const& __cordl_internal_get_m_ExcludePathCount() const;

constexpr int32_t& __cordl_internal_get_m_ExcludePathCount() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_ExcludePaths() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_ExcludePaths() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_ExpectedLayout() const;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_ExpectedLayout() ;

constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const& __cordl_internal_get_m_Flags() const;

constexpr ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags& __cordl_internal_get_m_Flags() ;

constexpr int32_t const& __cordl_internal_get_m_IncludePathCount() const;

constexpr int32_t& __cordl_internal_get_m_IncludePathCount() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_IncludePaths() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_IncludePaths() ;

constexpr double_t const& __cordl_internal_get_m_LastMatchTime() const;

constexpr double_t& __cordl_internal_get_m_LastMatchTime() ;

constexpr ::GlobalNamespace::InputControlLayout_Cache const& __cordl_internal_get_m_LayoutCache() const;

constexpr ::GlobalNamespace::InputControlLayout_Cache& __cordl_internal_get_m_LayoutCache() ;

constexpr float_t const& __cordl_internal_get_m_MagnitudeThreshold() const;

constexpr float_t& __cordl_internal_get_m_MagnitudeThreshold() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_Magnitudes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_Magnitudes() ;

constexpr ::System::Action* const& __cordl_internal_get_m_OnAfterUpdateDelegate() const;

constexpr ::System::Action*& __cordl_internal_get_m_OnAfterUpdateDelegate() ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*,::StringW>* const& __cordl_internal_get_m_OnApplyBinding() const;

constexpr ::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*,::StringW>*& __cordl_internal_get_m_OnApplyBinding() ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* const& __cordl_internal_get_m_OnCancel() const;

constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*& __cordl_internal_get_m_OnCancel() ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* const& __cordl_internal_get_m_OnComplete() const;

constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*& __cordl_internal_get_m_OnComplete() ;

constexpr ::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>* const& __cordl_internal_get_m_OnComputeScore() const;

constexpr ::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>*& __cordl_internal_get_m_OnComputeScore() ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>* const& __cordl_internal_get_m_OnEventDelegate() const;

constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*& __cordl_internal_get_m_OnEventDelegate() ;

constexpr ::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>* const& __cordl_internal_get_m_OnGeneratePath() const;

constexpr ::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>*& __cordl_internal_get_m_OnGeneratePath() ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* const& __cordl_internal_get_m_OnPotentialMatch() const;

constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*& __cordl_internal_get_m_OnPotentialMatch() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_m_PathBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_m_PathBuilder() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_Scores() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_Scores() ;

constexpr double_t const& __cordl_internal_get_m_StartTime() const;

constexpr double_t& __cordl_internal_get_m_StartTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*,float_t>* const& __cordl_internal_get_m_StartingActuations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*,float_t>*& __cordl_internal_get_m_StartingActuations() ;

constexpr int32_t const& __cordl_internal_get_m_TargetBindingIndex() const;

constexpr int32_t& __cordl_internal_get_m_TargetBindingIndex() ;

constexpr float_t const& __cordl_internal_get_m_Timeout() const;

constexpr float_t& __cordl_internal_get_m_Timeout() ;

constexpr float_t const& __cordl_internal_get_m_WaitSecondsAfterMatch() const;

constexpr float_t& __cordl_internal_get_m_WaitSecondsAfterMatch() ;

constexpr void __cordl_internal_set_m_ActionToRebind(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_BindingGroupForNewBinding(::StringW  value) ;

constexpr void __cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value) ;

constexpr void __cordl_internal_set_m_CancelBinding(::StringW  value) ;

constexpr void __cordl_internal_set_m_Candidates(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr void __cordl_internal_set_m_ControlType(::System::Type*  value) ;

constexpr void __cordl_internal_set_m_ExcludePathCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_ExcludePaths(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_m_ExpectedLayout(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr void __cordl_internal_set_m_Flags(::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  value) ;

constexpr void __cordl_internal_set_m_IncludePathCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_IncludePaths(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_m_LastMatchTime(double_t  value) ;

constexpr void __cordl_internal_set_m_LayoutCache(::GlobalNamespace::InputControlLayout_Cache  value) ;

constexpr void __cordl_internal_set_m_MagnitudeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_Magnitudes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_OnAfterUpdateDelegate(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*,::StringW>*  value) ;

constexpr void __cordl_internal_set_m_OnCancel(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  value) ;

constexpr void __cordl_internal_set_m_OnComplete(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  value) ;

constexpr void __cordl_internal_set_m_OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>*  value) ;

constexpr void __cordl_internal_set_m_OnEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value) ;

constexpr void __cordl_internal_set_m_OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>*  value) ;

constexpr void __cordl_internal_set_m_OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  value) ;

constexpr void __cordl_internal_set_m_PathBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_m_Scores(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_StartTime(double_t  value) ;

constexpr void __cordl_internal_set_m_StartingActuations(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*,float_t>*  value) ;

constexpr void __cordl_internal_set_m_TargetBindingIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Timeout(float_t  value) ;

constexpr void __cordl_internal_set_m_WaitSecondsAfterMatch(float_t  value) ;

/// @brief Method .ctor, addr 0xaf1aff0, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_action, addr 0xaf1c6e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_action() ;

/// @brief Method get_bindingMask, addr 0xaf1c6e8, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method get_canceled, addr 0xaf1c87c, size 0xc, virtual false, abstract: false, final false
inline bool get_canceled() ;

/// @brief Method get_candidates, addr 0xaf1c6f8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> get_candidates() ;

/// @brief Method get_completed, addr 0xaf1c870, size 0xc, virtual false, abstract: false, final false
inline bool get_completed() ;

/// @brief Method get_expectedControlType, addr 0xaf1b364, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_expectedControlType() ;

/// @brief Method get_magnitudes, addr 0xaf1c780, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_magnitudes() ;

/// @brief Method get_scores, addr 0xaf1c70c, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_scores() ;

/// @brief Method get_selectedControl, addr 0xaf1c7f4, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* get_selectedControl() ;

/// @brief Method get_startTime, addr 0xaf1c888, size 0x8, virtual false, abstract: false, final false
inline double_t get_startTime() ;

/// @brief Method get_started, addr 0xaf1c864, size 0xc, virtual false, abstract: false, final false
inline bool get_started() ;

/// @brief Method get_timeout, addr 0xaf1c890, size 0x8, virtual false, abstract: false, final false
inline float_t get_timeout() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionRebindingExtensions_RebindingOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions_RebindingOperation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionRebindingExtensions_RebindingOperation(InputActionRebindingExtensions_RebindingOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions_RebindingOperation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionRebindingExtensions_RebindingOperation(InputActionRebindingExtensions_RebindingOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13369};

/// @brief Field kDefaultMagnitudeThreshold offset 0xffffffff size 0x4
static constexpr float_t  kDefaultMagnitudeThreshold{static_cast<float_t>(0.2f)};

/// @brief Field m_ActionToRebind, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_ActionToRebind;

/// @brief Field m_BindingMask, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  ___m_BindingMask;

/// @brief Field m_ControlType, offset: 0x28, size: 0x8, def value: None
 ::System::Type*  ___m_ControlType;

/// @brief Field m_ExpectedLayout, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  ___m_ExpectedLayout;

/// @brief Field m_IncludePathCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___m_IncludePathCount;

/// @brief Field m_IncludePaths, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_IncludePaths;

/// @brief Field m_ExcludePathCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ___m_ExcludePathCount;

/// @brief Field m_ExcludePaths, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_ExcludePaths;

/// @brief Field m_TargetBindingIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___m_TargetBindingIndex;

/// @brief Field m_BindingGroupForNewBinding, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___m_BindingGroupForNewBinding;

/// @brief Field m_CancelBinding, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___m_CancelBinding;

/// @brief Field m_MagnitudeThreshold, offset: 0x78, size: 0x4, def value: None
 float_t  ___m_MagnitudeThreshold;

/// @brief Field m_Scores, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_Scores;

/// @brief Field m_Magnitudes, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_Magnitudes;

/// @brief Field m_LastMatchTime, offset: 0x90, size: 0x8, def value: None
 double_t  ___m_LastMatchTime;

/// @brief Field m_StartTime, offset: 0x98, size: 0x8, def value: None
 double_t  ___m_StartTime;

/// @brief Field m_Timeout, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_Timeout;

/// @brief Field m_WaitSecondsAfterMatch, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_WaitSecondsAfterMatch;

/// @brief Field m_Candidates, offset: 0xa8, size: 0x20, def value: None
 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  ___m_Candidates;

/// @brief Field m_OnComplete, offset: 0xc8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  ___m_OnComplete;

/// @brief Field m_OnCancel, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  ___m_OnCancel;

/// @brief Field m_OnPotentialMatch, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*  ___m_OnPotentialMatch;

/// @brief Field m_OnGeneratePath, offset: 0xe0, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::InputSystem::InputControl*,::StringW>*  ___m_OnGeneratePath;

/// @brief Field m_OnComputeScore, offset: 0xe8, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>*  ___m_OnComputeScore;

/// @brief Field m_OnApplyBinding, offset: 0xf0, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*,::StringW>*  ___m_OnApplyBinding;

/// @brief Field m_OnEventDelegate, offset: 0xf8, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  ___m_OnEventDelegate;

/// @brief Field m_OnAfterUpdateDelegate, offset: 0x100, size: 0x8, def value: None
 ::System::Action*  ___m_OnAfterUpdateDelegate;

/// @brief Field m_LayoutCache, offset: 0x108, size: 0x8, def value: None
 ::GlobalNamespace::InputControlLayout_Cache  ___m_LayoutCache;

/// @brief Field m_PathBuilder, offset: 0x110, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___m_PathBuilder;

/// @brief Field m_Flags, offset: 0x118, size: 0x4, def value: None
 ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags  ___m_Flags;

/// @brief Field m_StartingActuations, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*,float_t>*  ___m_StartingActuations;

/// @brief Size padding 0x178 - 0x128 = 0x50, packed as 0x50
 uint8_t  _cordl_size_padding[0x50];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ActionToRebind) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_BindingMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ControlType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ExpectedLayout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_IncludePathCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_IncludePaths) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ExcludePathCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ExcludePaths) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_TargetBindingIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_BindingGroupForNewBinding) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_CancelBinding) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_MagnitudeThreshold) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Scores) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Magnitudes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_LastMatchTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_StartTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Timeout) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_WaitSecondsAfterMatch) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Candidates) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnComplete) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnCancel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnPotentialMatch) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnGeneratePath) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnComputeScore) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnApplyBinding) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnEventDelegate) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnAfterUpdateDelegate) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_LayoutCache) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_PathBuilder) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Flags) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_StartingActuations) == 0x120, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation) == 0x178, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/<>c__DisplayClass32_0
class CORDL_TYPE RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field group, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_group, put=__cordl_internal_set_group)) ::StringW  group;

static inline ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0* New_ctor() ;

/// @brief Method <WithTargetBinding>b__0, addr 0xaf22130, size 0x20, virtual false, abstract: false, final false
inline bool _WithTargetBinding_b__0(::UnityEngine::InputSystem::InputControlScheme  x) ;

constexpr ::StringW const& __cordl_internal_get_group() const;

constexpr ::StringW& __cordl_internal_get_group() ;

constexpr void __cordl_internal_set_group(::StringW  value) ;

/// @brief Method .ctor, addr 0xaf22128, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0(RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0(RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13368};

/// @brief Field group, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___group;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0, ___group) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
