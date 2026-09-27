#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/MonoBehaviourEmpty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBehaviourEmpty)
namespace Fusion::Photon::Realtime {
class MonoBehaviourEmpty___c__DisplayClass6_0;
}
namespace Fusion::Photon::Realtime {
class RegionHandler;
}
namespace Fusion::Photon::Realtime {
class __c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class MonoBehaviourEmpty;
}
namespace Fusion::Photon::Realtime {
class MonoBehaviourEmpty___c__DisplayClass6_0;
}
namespace Fusion::Photon::Realtime {
class __c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::MonoBehaviourEmpty*);
MARK_REF_T(::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*);
MARK_REF_T(::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::MonoBehaviourEmpty*, "Fusion.Photon.Realtime", "MonoBehaviourEmpty");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*, "Fusion.Photon.Realtime", "MonoBehaviourEmpty/<>c__DisplayClass6_0");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*, "Fusion.Photon.Realtime", "MonoBehaviourEmpty/<>c__DisplayClass6_0/<<StartCoroutineAndDestroy>g__Routine|0>d");
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.MonoBehaviourEmpty
class CORDL_TYPE MonoBehaviourEmpty : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass6_0 = ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0;

/// @brief Field obj, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_obj, put=__cordl_internal_set_obj)) ::Fusion::Photon::Realtime::RegionHandler*  obj;

/// @brief Field onCompleteCall, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCompleteCall, put=__cordl_internal_set_onCompleteCall)) ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  onCompleteCall;

/// @brief Method BuildInstance, addr 0x5f61080, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty> BuildInstance(::StringW  id) ;

/// @brief Method CompleteOnMainThread, addr 0x5f6380c, size 0x8, virtual false, abstract: false, final false
inline void CompleteOnMainThread(::Fusion::Photon::Realtime::RegionHandler*  obj) ;

static inline ::Fusion::Photon::Realtime::MonoBehaviourEmpty* New_ctor() ;

/// @brief Method SelfDestroy, addr 0x5f61014, size 0x6c, virtual false, abstract: false, final false
inline void SelfDestroy() ;

/// @brief Method StartCoroutineAndDestroy, addr 0x5f62140, size 0x9c, virtual false, abstract: false, final false
inline void StartCoroutineAndDestroy(::System::Collections::IEnumerator*  coroutine) ;

/// @brief Method Update, addr 0x5f63798, size 0x74, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Fusion::Photon::Realtime::RegionHandler* const& __cordl_internal_get_obj() const;

constexpr ::Fusion::Photon::Realtime::RegionHandler*& __cordl_internal_get_obj() ;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* const& __cordl_internal_get_onCompleteCall() const;

constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& __cordl_internal_get_onCompleteCall() ;

constexpr void __cordl_internal_set_obj(::Fusion::Photon::Realtime::RegionHandler*  value) ;

constexpr void __cordl_internal_set_onCompleteCall(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  value) ;

/// @brief Method .ctor, addr 0x5f63888, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviourEmpty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourEmpty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviourEmpty(MonoBehaviourEmpty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourEmpty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviourEmpty(MonoBehaviourEmpty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28105};

/// @brief Field onCompleteCall, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  ___onCompleteCall;

/// @brief Field obj, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::RegionHandler*  ___obj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::MonoBehaviourEmpty, ___onCompleteCall) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::MonoBehaviourEmpty, ___obj) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::MonoBehaviourEmpty) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.MonoBehaviourEmpty/<>c__DisplayClass6_0
class CORDL_TYPE MonoBehaviourEmpty___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
using __StartCoroutineAndDestroy_g__Routine_0_d = ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d;

/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>  __4__this;

/// @brief Field coroutine, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutine, put=__cordl_internal_set_coroutine)) ::System::Collections::IEnumerator*  coroutine;

static inline ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0* New_ctor() ;

/// [IteratorStateMachine(typeof(Fusion.Photon.Realtime.MonoBehaviourEmpty::<>c__DisplayClass6_0::<<StartCoroutineAndDestroy>g__Routine|0>d))]
/// @brief Method <StartCoroutineAndDestroy>g__Routine|0, addr 0x5f6381c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _StartCoroutineAndDestroy_g__Routine_0() ;

constexpr ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_coroutine() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_coroutine() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>  value) ;

constexpr void __cordl_internal_set_coroutine(::System::Collections::IEnumerator*  value) ;

/// @brief Method .ctor, addr 0x5f63814, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviourEmpty___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourEmpty___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviourEmpty___c__DisplayClass6_0(MonoBehaviourEmpty___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourEmpty___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviourEmpty___c__DisplayClass6_0(MonoBehaviourEmpty___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28104};

/// @brief Field coroutine, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___coroutine;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0, ___coroutine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.MonoBehaviourEmpty/<>c__DisplayClass6_0/<<StartCoroutineAndDestroy>g__Routine|0>d
class CORDL_TYPE __c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5f638c4, size 0x7c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5f63940, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5f63948, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f63980, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5f638b8, size 0xc, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5f63890, size 0x28, virtual false, abstract: false, final false
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
constexpr __c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d(__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d(__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28103};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d) == 0x28, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
