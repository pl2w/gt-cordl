#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WaitForUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaitForUpdate)
namespace Meta::Net::NativeWebSocket {
class WaitForUpdate_MainThreadAwaiter;
}
namespace Meta::Net::NativeWebSocket {
class WaitForUpdate__CoroutineWrapper_d__3;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
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
// Forward declare root types
namespace Meta::Net::NativeWebSocket {
class WaitForUpdate;
}
namespace Meta::Net::NativeWebSocket {
class WaitForUpdate_MainThreadAwaiter;
}
namespace Meta::Net::NativeWebSocket {
class WaitForUpdate__CoroutineWrapper_d__3;
}
// Write type traits
MARK_REF_T(::Meta::Net::NativeWebSocket::WaitForUpdate*);
MARK_REF_T(::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter*);
MARK_REF_T(::Meta::Net::NativeWebSocket::WaitForUpdate__CoroutineWrapper_d__3*);
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::WaitForUpdate*, "Meta.Net.NativeWebSocket", "WaitForUpdate");
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter*, "Meta.Net.NativeWebSocket", "WaitForUpdate/MainThreadAwaiter");
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::WaitForUpdate__CoroutineWrapper_d__3*, "Meta.Net.NativeWebSocket", "WaitForUpdate/<CoroutineWrapper>d__3");
// Dependencies UnityEngine.CustomYieldInstruction
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.WaitForUpdate
class CORDL_TYPE WaitForUpdate : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
using MainThreadAwaiter = ::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter;

using _CoroutineWrapper_d__3 = ::Meta::Net::NativeWebSocket::WaitForUpdate__CoroutineWrapper_d__3;

 __declspec(property(get=get_keepWaiting)) bool  keepWaiting;

/// [IteratorStateMachine(typeof(Meta.Net.NativeWebSocket.WaitForUpdate::<CoroutineWrapper>d__3))]
/// @brief Method CoroutineWrapper, addr 0x9e04938, size 0x88, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* CoroutineWrapper(::System::Collections::IEnumerator*  theWorker, ::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter*  awaiter) ;

/// @brief Method GetAwaiter, addr 0x9e03b44, size 0x68, virtual false, abstract: false, final false
inline ::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter* GetAwaiter() ;

static inline ::Meta::Net::NativeWebSocket::WaitForUpdate* New_ctor() ;

/// @brief Method .ctor, addr 0x9e03b3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_keepWaiting, addr 0x9e04928, size 0x8, virtual true, abstract: false, final false
inline bool get_keepWaiting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitForUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForUpdate(WaitForUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForUpdate(WaitForUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32837};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Net::NativeWebSocket::WaitForUpdate) == 0x10, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.WaitForUpdate/<CoroutineWrapper>d__3
class CORDL_TYPE WaitForUpdate__CoroutineWrapper_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field awaiter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter*  awaiter;

/// @brief Field theWorker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_theWorker, put=__cordl_internal_set_theWorker)) ::System::Collections::IEnumerator*  theWorker;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e04a28, size 0x88, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::Net::NativeWebSocket::WaitForUpdate__CoroutineWrapper_d__3* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e04ab0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e04ab8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e04af0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e04a24, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter* const& __cordl_internal_get_awaiter() const;

constexpr ::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter*& __cordl_internal_get_awaiter() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_theWorker() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_theWorker() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_awaiter(::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter*  value) ;

constexpr void __cordl_internal_set_theWorker(::System::Collections::IEnumerator*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e049c0, size 0x28, virtual false, abstract: false, final false
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
constexpr WaitForUpdate__CoroutineWrapper_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForUpdate__CoroutineWrapper_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForUpdate__CoroutineWrapper_d__3(WaitForUpdate__CoroutineWrapper_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForUpdate__CoroutineWrapper_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForUpdate__CoroutineWrapper_d__3(WaitForUpdate__CoroutineWrapper_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32836};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field theWorker, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___theWorker;

/// @brief Field awaiter, offset: 0x28, size: 0x8, def value: None
 ::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter*  ___awaiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Net::NativeWebSocket::WaitForUpdate__CoroutineWrapper_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Net::NativeWebSocket::WaitForUpdate__CoroutineWrapper_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Net::NativeWebSocket::WaitForUpdate__CoroutineWrapper_d__3, ___theWorker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Net::NativeWebSocket::WaitForUpdate__CoroutineWrapper_d__3, ___awaiter) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::Net::NativeWebSocket::WaitForUpdate__CoroutineWrapper_d__3) == 0x30, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
// Dependencies System.Object
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.WaitForUpdate/MainThreadAwaiter
class CORDL_TYPE WaitForUpdate_MainThreadAwaiter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsCompleted, put=set_IsCompleted)) bool  IsCompleted;

/// @brief Field <IsCompleted>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCompleted_k__BackingField, put=__cordl_internal_set__IsCompleted_k__BackingField)) bool  _IsCompleted_k__BackingField;

/// @brief Field continuation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuation, put=__cordl_internal_set_continuation)) ::System::Action*  continuation;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept;

/// @brief Method Complete, addr 0x9e04a00, size 0x24, virtual false, abstract: false, final false
inline void Complete() ;

/// @brief Method GetResult, addr 0x9e03bac, size 0x4, virtual false, abstract: false, final false
inline void GetResult() ;

static inline ::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter* New_ctor() ;

/// @brief Method System.Runtime.CompilerServices.INotifyCompletion.OnCompleted, addr 0x9e049f8, size 0x8, virtual true, abstract: false, final true
inline void System_Runtime_CompilerServices_INotifyCompletion_OnCompleted(::System::Action*  continuation) ;

constexpr bool const& __cordl_internal_get__IsCompleted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCompleted_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get_continuation() const;

constexpr ::System::Action*& __cordl_internal_get_continuation() ;

constexpr void __cordl_internal_set__IsCompleted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_continuation(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x9e04930, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsCompleted, addr 0x9e049e8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsCompleted, addr 0x9e049f0, size 0x8, virtual false, abstract: false, final false
inline void set_IsCompleted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitForUpdate_MainThreadAwaiter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForUpdate_MainThreadAwaiter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForUpdate_MainThreadAwaiter(WaitForUpdate_MainThreadAwaiter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForUpdate_MainThreadAwaiter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForUpdate_MainThreadAwaiter(WaitForUpdate_MainThreadAwaiter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32835};

/// @brief Field continuation, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___continuation;

/// [CompilerGenerated]
/// @brief Field <IsCompleted>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsCompleted_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter, ___continuation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter, ____IsCompleted_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Net::NativeWebSocket::WaitForUpdate_MainThreadAwaiter) == 0x20, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
