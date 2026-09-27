#pragma once
// IWYU pragma private; include "Viveport/MainThreadDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainThreadDispatcher)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
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
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Viveport {
class MainThreadDispatcher__ActionWrapper_d__12;
}
namespace Viveport {
template<typename T1>
class MainThreadDispatcher__ActionWrapper_d__13_1;
}
namespace Viveport {
template<typename T1,typename T2>
class MainThreadDispatcher__ActionWrapper_d__14_2;
}
namespace Viveport {
template<typename T1,typename T2,typename T3>
class MainThreadDispatcher__ActionWrapper_d__15_3;
}
namespace Viveport {
template<typename T1,typename T2,typename T3,typename T4>
class MainThreadDispatcher__ActionWrapper_d__16_4;
}
namespace Viveport {
class MainThreadDispatcher___c__DisplayClass6_0;
}
// Forward declare root types
namespace Viveport {
class MainThreadDispatcher;
}
namespace Viveport {
class MainThreadDispatcher__ActionWrapper_d__12;
}
namespace Viveport {
template<typename T1>
class MainThreadDispatcher__ActionWrapper_d__13_1;
}
namespace Viveport {
template<typename T1,typename T2>
class MainThreadDispatcher__ActionWrapper_d__14_2;
}
namespace Viveport {
template<typename T1,typename T2,typename T3>
class MainThreadDispatcher__ActionWrapper_d__15_3;
}
namespace Viveport {
template<typename T1,typename T2,typename T3,typename T4>
class MainThreadDispatcher__ActionWrapper_d__16_4;
}
namespace Viveport {
class MainThreadDispatcher___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::Viveport::MainThreadDispatcher*);
MARK_REF_T(::Viveport::MainThreadDispatcher__ActionWrapper_d__12*);
MARK_GEN_REF_T_PTR(::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1);
MARK_GEN_REF_T_PTR(::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2);
MARK_GEN_REF_T_PTR(::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3);
MARK_GEN_REF_T_PTR(::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4);
MARK_REF_T(::Viveport::MainThreadDispatcher___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::Viveport::MainThreadDispatcher*, "Viveport", "MainThreadDispatcher");
DEFINE_IL2CPP_CLASS(::Viveport::MainThreadDispatcher__ActionWrapper_d__12*, "Viveport", "MainThreadDispatcher/<ActionWrapper>d__12");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1, "Viveport", "MainThreadDispatcher/<ActionWrapper>d__13`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2, "Viveport", "MainThreadDispatcher/<ActionWrapper>d__14`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3, "Viveport", "MainThreadDispatcher/<ActionWrapper>d__15`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4, "Viveport", "MainThreadDispatcher/<ActionWrapper>d__16`4");
DEFINE_IL2CPP_CLASS(::Viveport::MainThreadDispatcher___c__DisplayClass6_0*, "Viveport", "MainThreadDispatcher/<>c__DisplayClass6_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Viveport {
// Is value type: false
// CS Name: Viveport.MainThreadDispatcher
class CORDL_TYPE MainThreadDispatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ActionWrapper_d__12 = ::Viveport::MainThreadDispatcher__ActionWrapper_d__12;

template<typename T1>
using _ActionWrapper_d__13_1 = ::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>;

template<typename T1,typename T2>
using _ActionWrapper_d__14_2 = ::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1, T2>;

template<typename T1,typename T2,typename T3>
using _ActionWrapper_d__15_3 = ::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1, T2, T3>;

template<typename T1,typename T2,typename T3,typename T4>
using _ActionWrapper_d__16_4 = ::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1, T2, T3, T4>;

using __c__DisplayClass6_0 = ::Viveport::MainThreadDispatcher___c__DisplayClass6_0;

/// @brief Field actions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_actions, put=setStaticF_actions)) ::System::Collections::Generic::Queue_1<::System::Action*>*  actions;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::Viveport::MainThreadDispatcher>  instance;

/// [IteratorStateMachine(typeof(Viveport.MainThreadDispatcher::<ActionWrapper>d__12))]
/// @brief Method ActionWrapper, addr 0x5b4ba28, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ActionWrapper(::System::Action*  action) ;

/// [IteratorStateMachine(typeof(Viveport.MainThreadDispatcher::<ActionWrapper>d__13`1<T1>))]
/// @brief Method ActionWrapper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
inline ::System::Collections::IEnumerator* ActionWrapper(::System::Action_1<T1>*  action, T1  param1) ;

/// [IteratorStateMachine(typeof(Viveport.MainThreadDispatcher::<ActionWrapper>d__14`2<T1, T2>))]
/// @brief Method ActionWrapper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
inline ::System::Collections::IEnumerator* ActionWrapper(::System::Action_2<T1,T2>*  action, T1  param1, T2  param2) ;

/// [IteratorStateMachine(typeof(Viveport.MainThreadDispatcher::<ActionWrapper>d__15`3<T1, T2, T3>))]
/// @brief Method ActionWrapper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
inline ::System::Collections::IEnumerator* ActionWrapper(::System::Action_3<T1,T2,T3>*  action, T1  param1, T2  param2, T3  param3) ;

/// [IteratorStateMachine(typeof(Viveport.MainThreadDispatcher::<ActionWrapper>d__16`4<T1, T2, T3, T4>))]
/// @brief Method ActionWrapper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
inline ::System::Collections::IEnumerator* ActionWrapper(::System::Action_4<T1,T2,T3,T4>*  action, T1  param1, T2  param2, T3  param3, T4  param4) ;

/// @brief Method Awake, addr 0x5b4b428, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Enqueue, addr 0x5b4ba0c, size 0x1c, virtual false, abstract: false, final false
inline void Enqueue(::System::Action*  action) ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
inline void Enqueue(::System::Action_1<T1>*  action, T1  param1) ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
inline void Enqueue(::System::Action_2<T1,T2>*  action, T1  param1, T2  param2) ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
inline void Enqueue(::System::Action_3<T1,T2,T3>*  action, T1  param1, T2  param2, T3  param3) ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
inline void Enqueue(::System::Action_4<T1,T2,T3,T4>*  action, T1  param1, T2  param2, T3  param3, T4  param4) ;

/// @brief Method Enqueue, addr 0x5b4b81c, size 0x1e8, virtual false, abstract: false, final false
inline void Enqueue(::System::Collections::IEnumerator*  action) ;

/// @brief Method Instance, addr 0x5b4b6c8, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityW<::Viveport::MainThreadDispatcher> Instance() ;

static inline ::Viveport::MainThreadDispatcher* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b4b7c0, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Update, addr 0x5b4b528, size 0x1a0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5b4babc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::System::Action*>* getStaticF_actions() ;

static inline ::UnityW<::Viveport::MainThreadDispatcher> getStaticF_instance() ;

static inline void setStaticF_actions(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

static inline void setStaticF_instance(::UnityW<::Viveport::MainThreadDispatcher>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadDispatcher(MainThreadDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadDispatcher(MainThreadDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::MainThreadDispatcher) == 0x20, "Size mismatch!");

} // namespace end def Viveport
// [CompilerGenerated]
// Dependencies System.Object
namespace Viveport {
// cpp template
template<typename T1,typename T2,typename T3,typename T4>
// Is value type: false
// CS Name: Viveport.MainThreadDispatcher/<ActionWrapper>d__16`4<T1,T2,T3,T4>
class CORDL_TYPE MainThreadDispatcher__ActionWrapper_d__16_4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field action, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action_4<T1,T2,T3,T4>*  action;

/// @brief Field param1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_param1, put=__cordl_internal_set_param1)) T1  param1;

/// @brief Field param2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_param2, put=__cordl_internal_set_param2)) T2  param2;

/// @brief Field param3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_param3, put=__cordl_internal_set_param3)) T3  param3;

/// @brief Field param4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_param4, put=__cordl_internal_set_param4)) T4  param4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__16_4<T1,T2,T3,T4>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

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

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Action_4<T1,T2,T3,T4>* const& __cordl_internal_get_action() const;

constexpr ::System::Action_4<T1,T2,T3,T4>*& __cordl_internal_get_action() ;

constexpr T1 const& __cordl_internal_get_param1() const;

constexpr T1& __cordl_internal_get_param1() ;

constexpr T2 const& __cordl_internal_get_param2() const;

constexpr T2& __cordl_internal_get_param2() ;

constexpr T3 const& __cordl_internal_get_param3() const;

constexpr T3& __cordl_internal_get_param3() ;

constexpr T4 const& __cordl_internal_get_param4() const;

constexpr T4& __cordl_internal_get_param4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_action(::System::Action_4<T1,T2,T3,T4>*  value) ;

constexpr void __cordl_internal_set_param1(T1  value) ;

constexpr void __cordl_internal_set_param2(T2  value) ;

constexpr void __cordl_internal_set_param3(T3  value) ;

constexpr void __cordl_internal_set_param4(T4  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadDispatcher__ActionWrapper_d__16_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__16_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadDispatcher__ActionWrapper_d__16_4(MainThreadDispatcher__ActionWrapper_d__16_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__16_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadDispatcher__ActionWrapper_d__16_4(MainThreadDispatcher__ActionWrapper_d__16_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3751};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field action, offset: 0x20, size: 0x8, def value: None
 ::System::Action_4<T1,T2,T3,T4>*  ___action;

/// @brief Field param1, offset: 0x28, size: 0x8, def value: None
 T1  ___param1;

/// @brief Field param2, offset: 0x30, size: 0x8, def value: None
 T2  ___param2;

/// @brief Field param3, offset: 0x38, size: 0x8, def value: None
 T3  ___param3;

/// @brief Field param4, offset: 0x40, size: 0x8, def value: None
 T4  ___param4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Viveport
// [CompilerGenerated]
// Dependencies System.Object
namespace Viveport {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: Viveport.MainThreadDispatcher/<ActionWrapper>d__15`3<T1,T2,T3>
class CORDL_TYPE MainThreadDispatcher__ActionWrapper_d__15_3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field action, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action_3<T1,T2,T3>*  action;

/// @brief Field param1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_param1, put=__cordl_internal_set_param1)) T1  param1;

/// @brief Field param2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_param2, put=__cordl_internal_set_param2)) T2  param2;

/// @brief Field param3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_param3, put=__cordl_internal_set_param3)) T3  param3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__15_3<T1,T2,T3>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

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

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Action_3<T1,T2,T3>* const& __cordl_internal_get_action() const;

constexpr ::System::Action_3<T1,T2,T3>*& __cordl_internal_get_action() ;

constexpr T1 const& __cordl_internal_get_param1() const;

constexpr T1& __cordl_internal_get_param1() ;

constexpr T2 const& __cordl_internal_get_param2() const;

constexpr T2& __cordl_internal_get_param2() ;

constexpr T3 const& __cordl_internal_get_param3() const;

constexpr T3& __cordl_internal_get_param3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_action(::System::Action_3<T1,T2,T3>*  value) ;

constexpr void __cordl_internal_set_param1(T1  value) ;

constexpr void __cordl_internal_set_param2(T2  value) ;

constexpr void __cordl_internal_set_param3(T3  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadDispatcher__ActionWrapper_d__15_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__15_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadDispatcher__ActionWrapper_d__15_3(MainThreadDispatcher__ActionWrapper_d__15_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__15_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadDispatcher__ActionWrapper_d__15_3(MainThreadDispatcher__ActionWrapper_d__15_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3750};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field action, offset: 0x20, size: 0x8, def value: None
 ::System::Action_3<T1,T2,T3>*  ___action;

/// @brief Field param1, offset: 0x28, size: 0x8, def value: None
 T1  ___param1;

/// @brief Field param2, offset: 0x30, size: 0x8, def value: None
 T2  ___param2;

/// @brief Field param3, offset: 0x38, size: 0x8, def value: None
 T3  ___param3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Viveport
// [CompilerGenerated]
// Dependencies System.Object
namespace Viveport {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: Viveport.MainThreadDispatcher/<ActionWrapper>d__14`2<T1,T2>
class CORDL_TYPE MainThreadDispatcher__ActionWrapper_d__14_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field action, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action_2<T1,T2>*  action;

/// @brief Field param1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_param1, put=__cordl_internal_set_param1)) T1  param1;

/// @brief Field param2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_param2, put=__cordl_internal_set_param2)) T2  param2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__14_2<T1,T2>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

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

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Action_2<T1,T2>* const& __cordl_internal_get_action() const;

constexpr ::System::Action_2<T1,T2>*& __cordl_internal_get_action() ;

constexpr T1 const& __cordl_internal_get_param1() const;

constexpr T1& __cordl_internal_get_param1() ;

constexpr T2 const& __cordl_internal_get_param2() const;

constexpr T2& __cordl_internal_get_param2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_action(::System::Action_2<T1,T2>*  value) ;

constexpr void __cordl_internal_set_param1(T1  value) ;

constexpr void __cordl_internal_set_param2(T2  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadDispatcher__ActionWrapper_d__14_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__14_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadDispatcher__ActionWrapper_d__14_2(MainThreadDispatcher__ActionWrapper_d__14_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__14_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadDispatcher__ActionWrapper_d__14_2(MainThreadDispatcher__ActionWrapper_d__14_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3749};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field action, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<T1,T2>*  ___action;

/// @brief Field param1, offset: 0x28, size: 0x8, def value: None
 T1  ___param1;

/// @brief Field param2, offset: 0x30, size: 0x8, def value: None
 T2  ___param2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Viveport
// [CompilerGenerated]
// Dependencies System.Object
namespace Viveport {
// cpp template
template<typename T1>
// Is value type: false
// CS Name: Viveport.MainThreadDispatcher/<ActionWrapper>d__13`1<T1>
class CORDL_TYPE MainThreadDispatcher__ActionWrapper_d__13_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field action, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action_1<T1>*  action;

/// @brief Field param1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_param1, put=__cordl_internal_set_param1)) T1  param1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__13_1<T1>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

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

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Action_1<T1>* const& __cordl_internal_get_action() const;

constexpr ::System::Action_1<T1>*& __cordl_internal_get_action() ;

constexpr T1 const& __cordl_internal_get_param1() const;

constexpr T1& __cordl_internal_get_param1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_action(::System::Action_1<T1>*  value) ;

constexpr void __cordl_internal_set_param1(T1  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadDispatcher__ActionWrapper_d__13_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__13_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadDispatcher__ActionWrapper_d__13_1(MainThreadDispatcher__ActionWrapper_d__13_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__13_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadDispatcher__ActionWrapper_d__13_1(MainThreadDispatcher__ActionWrapper_d__13_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3748};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field action, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<T1>*  ___action;

/// @brief Field param1, offset: 0x28, size: 0x8, def value: None
 T1  ___param1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Viveport
// [CompilerGenerated]
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.MainThreadDispatcher/<ActionWrapper>d__12
class CORDL_TYPE MainThreadDispatcher__ActionWrapper_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field action, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action*  action;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b4bb94, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Viveport::MainThreadDispatcher__ActionWrapper_d__12* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b4bc08, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b4bc10, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b4bc48, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b4bb90, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Action* const& __cordl_internal_get_action() const;

constexpr ::System::Action*& __cordl_internal_get_action() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_action(::System::Action*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b4ba94, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadDispatcher__ActionWrapper_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadDispatcher__ActionWrapper_d__12(MainThreadDispatcher__ActionWrapper_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher__ActionWrapper_d__12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadDispatcher__ActionWrapper_d__12(MainThreadDispatcher__ActionWrapper_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3747};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field action, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::MainThreadDispatcher__ActionWrapper_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::MainThreadDispatcher__ActionWrapper_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Viveport::MainThreadDispatcher__ActionWrapper_d__12, ___action) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Viveport::MainThreadDispatcher__ActionWrapper_d__12) == 0x28, "Size mismatch!");

} // namespace end def Viveport
// [CompilerGenerated]
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.MainThreadDispatcher/<>c__DisplayClass6_0
class CORDL_TYPE MainThreadDispatcher___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Viveport::MainThreadDispatcher>  __4__this;

/// @brief Field action, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Collections::IEnumerator*  action;

static inline ::Viveport::MainThreadDispatcher___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <Enqueue>b__0, addr 0x5b4bb70, size 0x20, virtual false, abstract: false, final false
inline void _Enqueue_b__0() ;

constexpr ::UnityW<::Viveport::MainThreadDispatcher> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Viveport::MainThreadDispatcher>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_action() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_action() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Viveport::MainThreadDispatcher>  value) ;

constexpr void __cordl_internal_set_action(::System::Collections::IEnumerator*  value) ;

/// @brief Method .ctor, addr 0x5b4ba04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadDispatcher___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadDispatcher___c__DisplayClass6_0(MainThreadDispatcher___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadDispatcher___c__DisplayClass6_0(MainThreadDispatcher___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3746};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Viveport::MainThreadDispatcher>  _____4__this;

/// @brief Field action, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::MainThreadDispatcher___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::MainThreadDispatcher___c__DisplayClass6_0, ___action) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Viveport::MainThreadDispatcher___c__DisplayClass6_0) == 0x20, "Size mismatch!");

} // namespace end def Viveport
