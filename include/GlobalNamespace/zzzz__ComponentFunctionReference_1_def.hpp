#pragma once
// IWYU pragma private; include "GlobalNamespace/ComponentFunctionReference_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ComponentFunctionReference`1_MethodRef_def.hpp"
#include "Sirenix/OdinInspector/zzzz__ValueDropdownItem_1_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentFunctionReference_1)
namespace GlobalNamespace {
template<typename TResult>
struct ComponentFunctionReference_1_MethodRef;
}
namespace GlobalNamespace {
template<typename TResult>
class ComponentFunctionReference_1__GetMethodOptions_d__6;
}
namespace Sirenix::OdinInspector {
template<typename T>
struct ValueDropdownItem_1;
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
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
class ComponentFunctionReference_1;
}
namespace GlobalNamespace {
template<typename TResult>
class ComponentFunctionReference_1__GetMethodOptions_d__6;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::ComponentFunctionReference_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::ComponentFunctionReference_1__GetMethodOptions_d__6);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ComponentFunctionReference_1, "", "ComponentFunctionReference`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ComponentFunctionReference_1__GetMethodOptions_d__6, "", "ComponentFunctionReference`1/<GetMethodOptions>d__6");
// Dependencies ComponentFunctionReference`1::MethodRef<TResult>, System.Object
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: ComponentFunctionReference`1<TResult>
class CORDL_TYPE ComponentFunctionReference_1 : public ::System::Object {
public:
// Declarations
using MethodRef = ::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>;

using _GetMethodOptions_d__6 = ::GlobalNamespace::ComponentFunctionReference_1__GetMethodOptions_d__6<TResult>;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field _cached, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cached, put=__cordl_internal_set__cached)) ::System::Func_1<TResult>*  _cached;

/// @brief Field _selection, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__selection, put=__cordl_internal_set__selection)) ::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>  _selection;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::GameObject>  _target;

/// @brief Method Cache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Cache() ;

/// [IteratorStateMachine(typeof(ComponentFunctionReference`1::<GetMethodOptions>d__6<TResult>))]
/// @brief Method GetMethodOptions, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>* GetMethodOptions() ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult Invoke() ;

static inline ::GlobalNamespace::ComponentFunctionReference_1<TResult>* New_ctor() ;

constexpr ::System::Func_1<TResult>* const& __cordl_internal_get__cached() const;

constexpr ::System::Func_1<TResult>*& __cordl_internal_get__cached() ;

constexpr ::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult> const& __cordl_internal_get__selection() const;

constexpr ::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>& __cordl_internal_get__selection() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__cached(::System::Func_1<TResult>*  value) ;

constexpr void __cordl_internal_set__selection(::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsValid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentFunctionReference_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentFunctionReference_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentFunctionReference_1(ComponentFunctionReference_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentFunctionReference_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentFunctionReference_1(ComponentFunctionReference_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2623};

/// [SerializeField]
/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____target;

/// [SerializeField]
/// @brief Field _selection, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>  ____selection;

/// @brief Field _cached, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<TResult>*  ____cached;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies ComponentFunctionReference`1::MethodRef<TResult>, Sirenix.OdinInspector.ValueDropdownItem`1<T>, System.Object, System.Reflection.BindingFlags, System.Reflection.MethodInfo, UnityEngine.Component
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: ComponentFunctionReference`1/<GetMethodOptions>d__6<TResult>
class CORDL_TYPE ComponentFunctionReference_1__GetMethodOptions_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_ComponentFunctionReference_TResult__MethodRef___get_Current)) ::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>  System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_ComponentFunctionReference_TResult__MethodRef___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::ComponentFunctionReference_1<TResult>*  __4__this;

/// @brief Field <>7__wrap3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) ::ArrayW<::System::Reflection::MethodInfo*>  __7__wrap3;

/// @brief Field <>7__wrap4, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap4, put=__cordl_internal_set___7__wrap4)) int32_t  __7__wrap4;

/// @brief Field <>7__wrap5, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap5, put=__cordl_internal_set___7__wrap5)) ::ArrayW<::UnityW<::UnityEngine::Component>>  __7__wrap5;

/// @brief Field <>7__wrap7, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap7, put=__cordl_internal_set___7__wrap7)) int32_t  __7__wrap7;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <comp>5__7, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__comp_5__7, put=__cordl_internal_set__comp_5__7)) ::UnityW<::UnityEngine::Component>  _comp_5__7;

/// @brief Field <flags>5__3, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__flags_5__3, put=__cordl_internal_set__flags_5__3)) ::System::Reflection::BindingFlags  _flags_5__3;

/// @brief Field <type>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__type_5__2, put=__cordl_internal_set__type_5__2)) ::System::Type*  _type_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ComponentFunctionReference_1__GetMethodOptions_d__6<TResult>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Sirenix.OdinInspector.ValueDropdownItem<ComponentFunctionReference<TResult>.MethodRef>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>* System_Collections_Generic_IEnumerable_Sirenix_OdinInspector_ValueDropdownItem_ComponentFunctionReference_TResult__MethodRef___GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Sirenix.OdinInspector.ValueDropdownItem<ComponentFunctionReference<TResult>.MethodRef>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>> System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_ComponentFunctionReference_TResult__MethodRef___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>> const& __cordl_internal_get___2__current() const;

constexpr ::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::ComponentFunctionReference_1<TResult>* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::ComponentFunctionReference_1<TResult>*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::System::Reflection::MethodInfo*> const& __cordl_internal_get___7__wrap3() const;

constexpr ::ArrayW<::System::Reflection::MethodInfo*>& __cordl_internal_get___7__wrap3() ;

constexpr int32_t const& __cordl_internal_get___7__wrap4() const;

constexpr int32_t& __cordl_internal_get___7__wrap4() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& __cordl_internal_get___7__wrap5() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& __cordl_internal_get___7__wrap5() ;

constexpr int32_t const& __cordl_internal_get___7__wrap7() const;

constexpr int32_t& __cordl_internal_get___7__wrap7() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::UnityW<::UnityEngine::Component> const& __cordl_internal_get__comp_5__7() const;

constexpr ::UnityW<::UnityEngine::Component>& __cordl_internal_get__comp_5__7() ;

constexpr ::System::Reflection::BindingFlags const& __cordl_internal_get__flags_5__3() const;

constexpr ::System::Reflection::BindingFlags& __cordl_internal_get__flags_5__3() ;

constexpr ::System::Type* const& __cordl_internal_get__type_5__2() const;

constexpr ::System::Type*& __cordl_internal_get__type_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>  value) ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::ComponentFunctionReference_1<TResult>*  value) ;

constexpr void __cordl_internal_set___7__wrap3(::ArrayW<::System::Reflection::MethodInfo*>  value) ;

constexpr void __cordl_internal_set___7__wrap4(int32_t  value) ;

constexpr void __cordl_internal_set___7__wrap5(::ArrayW<::UnityW<::UnityEngine::Component>>  value) ;

constexpr void __cordl_internal_set___7__wrap7(int32_t  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__comp_5__7(::UnityW<::UnityEngine::Component>  value) ;

constexpr void __cordl_internal_set__flags_5__3(::System::Reflection::BindingFlags  value) ;

constexpr void __cordl_internal_set__type_5__2(::System::Type*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>* i___System__Collections__Generic__IEnumerable_1___Sirenix__OdinInspector__ValueDropdownItem_1___GlobalNamespace__ComponentFunctionReference_1_MethodRef_TResult___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>>* i___System__Collections__Generic__IEnumerator_1___Sirenix__OdinInspector__ValueDropdownItem_1___GlobalNamespace__ComponentFunctionReference_1_MethodRef_TResult___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentFunctionReference_1__GetMethodOptions_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentFunctionReference_1__GetMethodOptions_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentFunctionReference_1__GetMethodOptions_d__6(ComponentFunctionReference_1__GetMethodOptions_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentFunctionReference_1__GetMethodOptions_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentFunctionReference_1__GetMethodOptions_d__6(ComponentFunctionReference_1__GetMethodOptions_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2622};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Sirenix::OdinInspector::ValueDropdownItem_1<::GlobalNamespace::ComponentFunctionReference_1_MethodRef<TResult>>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ComponentFunctionReference_1<TResult>*  _____4__this;

/// @brief Field <type>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Type*  ____type_5__2;

/// @brief Field <flags>5__3, offset: 0x40, size: 0x4, def value: None
 ::System::Reflection::BindingFlags  ____flags_5__3;

/// @brief Field <>7__wrap3, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::System::Reflection::MethodInfo*>  _____7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x50, size: 0x4, def value: None
 int32_t  _____7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Component>>  _____7__wrap5;

/// @brief Field <comp>5__7, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Component>  ____comp_5__7;

/// @brief Field <>7__wrap7, offset: 0x68, size: 0x4, def value: None
 int32_t  _____7__wrap7;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
