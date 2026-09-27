#pragma once
// IWYU pragma private; include "Liv/Lck/ErrorHandling/MainThreadCaptureErrorDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/ErrorHandling/zzzz__LckCaptureError_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainThreadCaptureErrorDispatcher)
namespace GlobalNamespace {
struct LckEvents_EncoderStartedEvent;
}
namespace GlobalNamespace {
struct LckEvents_EncoderStoppedEvent;
}
namespace Liv::Lck::ErrorHandling {
class ILckCaptureErrorDispatcher;
}
namespace Liv::Lck::ErrorHandling {
struct LckCaptureError;
}
namespace Liv::Lck::ErrorHandling {
class MainThreadCaptureErrorDispatcher__DrainErrors_d__10;
}
namespace Liv::Lck::ErrorHandling {
class MainThreadCaptureErrorDispatcher__Update_d__11;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
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
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::ErrorHandling {
class MainThreadCaptureErrorDispatcher;
}
namespace Liv::Lck::ErrorHandling {
class MainThreadCaptureErrorDispatcher__DrainErrors_d__10;
}
namespace Liv::Lck::ErrorHandling {
class MainThreadCaptureErrorDispatcher__Update_d__11;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*);
MARK_REF_T(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*);
MARK_REF_T(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*, "Liv.Lck.ErrorHandling", "MainThreadCaptureErrorDispatcher");
DEFINE_IL2CPP_CLASS(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*, "Liv.Lck.ErrorHandling", "MainThreadCaptureErrorDispatcher/<DrainErrors>d__10");
DEFINE_IL2CPP_CLASS(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*, "Liv.Lck.ErrorHandling", "MainThreadCaptureErrorDispatcher/<Update>d__11");
// Dependencies System.Object
namespace Liv::Lck::ErrorHandling {
// Is value type: false
// CS Name: Liv.Lck.ErrorHandling.MainThreadCaptureErrorDispatcher
class CORDL_TYPE MainThreadCaptureErrorDispatcher : public ::System::Object {
public:
// Declarations
using _DrainErrors_d__10 = ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10;

using _Update_d__11 = ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11;

/// @brief Field _errorQueue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorQueue, put=__cordl_internal_set__errorQueue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::Liv::Lck::ErrorHandling::LckCaptureError>*  _errorQueue;

/// @brief Field _eventBus, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _isMonitoringErrors, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMonitoringErrors, put=__cordl_internal_set__isMonitoringErrors)) bool  _isMonitoringErrors;

/// @brief Field _updateCoroutineName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__updateCoroutineName, put=setStaticF__updateCoroutineName)) ::StringW  _updateCoroutineName;

/// @brief Convert operator to "::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher"
constexpr operator  ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9d42448, size 0x264, virtual true, abstract: false, final true
inline void Dispose() ;

/// [IteratorStateMachine(typeof(Liv.Lck.ErrorHandling.MainThreadCaptureErrorDispatcher::<DrainErrors>d__10))]
/// @brief Method DrainErrors, addr 0x9d4236c, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>* DrainErrors() ;

/// @brief [Preserve]
static inline ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher* New_ctor(::Liv::Lck::ILckEventBus*  eventBus) ;

/// @brief Method OnEncoderStarted, addr 0x9d421ac, size 0x1c, virtual false, abstract: false, final false
inline void OnEncoderStarted(::GlobalNamespace::LckEvents_EncoderStartedEvent  encoderStartedEvent) ;

/// @brief Method OnEncoderStopped, addr 0x9d4226c, size 0x4, virtual false, abstract: false, final false
inline void OnEncoderStopped(::GlobalNamespace::LckEvents_EncoderStoppedEvent  encoderStoppedEvent) ;

/// @brief Method PushError, addr 0x9d420ac, size 0x100, virtual true, abstract: false, final true
inline void PushError(::Liv::Lck::ErrorHandling::LckCaptureError  error) ;

/// @brief Method StartMonitoringErrors, addr 0x9d421c8, size 0xa4, virtual false, abstract: false, final false
inline void StartMonitoringErrors() ;

/// @brief Method StopMonitoringErrors, addr 0x9d42270, size 0x90, virtual false, abstract: false, final false
inline void StopMonitoringErrors() ;

/// [IteratorStateMachine(typeof(Liv.Lck.ErrorHandling.MainThreadCaptureErrorDispatcher::<Update>d__11))]
/// @brief Method Update, addr 0x9d42300, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Update() ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Liv::Lck::ErrorHandling::LckCaptureError>* const& __cordl_internal_get__errorQueue() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Liv::Lck::ErrorHandling::LckCaptureError>*& __cordl_internal_get__errorQueue() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr bool const& __cordl_internal_get__isMonitoringErrors() const;

constexpr bool& __cordl_internal_get__isMonitoringErrors() ;

constexpr void __cordl_internal_set__errorQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Liv::Lck::ErrorHandling::LckCaptureError>*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__isMonitoringErrors(bool  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d41e58, size 0x254, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckEventBus*  eventBus) ;

static inline ::StringW getStaticF__updateCoroutineName() ;

/// @brief Convert to "::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher"
constexpr ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher* i___Liv__Lck__ErrorHandling__ILckCaptureErrorDispatcher() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF__updateCoroutineName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadCaptureErrorDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadCaptureErrorDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadCaptureErrorDispatcher(MainThreadCaptureErrorDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadCaptureErrorDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadCaptureErrorDispatcher(MainThreadCaptureErrorDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24876};

/// @brief Field _eventBus, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _errorQueue, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::Liv::Lck::ErrorHandling::LckCaptureError>*  ____errorQueue;

/// @brief Field _isMonitoringErrors, offset: 0x20, size: 0x1, def value: None
 bool  ____isMonitoringErrors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher, ____eventBus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher, ____errorQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher, ____isMonitoringErrors) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::ErrorHandling
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::ErrorHandling {
// Is value type: false
// CS Name: Liv.Lck.ErrorHandling.MainThreadCaptureErrorDispatcher/<Update>d__11
class CORDL_TYPE MainThreadCaptureErrorDispatcher__Update_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d4290c, size 0x3b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d42cbc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d42cc4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d42cfc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d42908, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d42420, size 0x28, virtual false, abstract: false, final false
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
constexpr MainThreadCaptureErrorDispatcher__Update_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadCaptureErrorDispatcher__Update_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadCaptureErrorDispatcher__Update_d__11(MainThreadCaptureErrorDispatcher__Update_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadCaptureErrorDispatcher__Update_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadCaptureErrorDispatcher__Update_d__11(MainThreadCaptureErrorDispatcher__Update_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24875};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::ErrorHandling
// [CompilerGenerated]
// Dependencies Liv.Lck.ErrorHandling.LckCaptureError, System.Object
namespace Liv::Lck::ErrorHandling {
// Is value type: false
// CS Name: Liv.Lck.ErrorHandling.MainThreadCaptureErrorDispatcher/<DrainErrors>d__10
class CORDL_TYPE MainThreadCaptureErrorDispatcher__DrainErrors_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Liv_Lck_ErrorHandling_LckCaptureError__get_Current)) ::Liv::Lck::ErrorHandling::LckCaptureError  System_Collections_Generic_IEnumerator_Liv_Lck_ErrorHandling_LckCaptureError__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Liv::Lck::ErrorHandling::LckCaptureError  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d42718, size 0xa8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Liv.Lck.ErrorHandling.LckCaptureError>.GetEnumerator, addr 0x9d42860, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>* System_Collections_Generic_IEnumerable_Liv_Lck_ErrorHandling_LckCaptureError__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Liv.Lck.ErrorHandling.LckCaptureError>.get_Current, addr 0x9d427c0, size 0xc, virtual true, abstract: false, final true
inline ::Liv::Lck::ErrorHandling::LckCaptureError System_Collections_Generic_IEnumerator_Liv_Lck_ErrorHandling_LckCaptureError__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x9d42904, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d427cc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d42804, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d42714, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Liv::Lck::ErrorHandling::LckCaptureError const& __cordl_internal_get___2__current() const;

constexpr ::Liv::Lck::ErrorHandling::LckCaptureError& __cordl_internal_get___2__current() ;

constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Liv::Lck::ErrorHandling::LckCaptureError  value) ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d423ec, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>* i___System__Collections__Generic__IEnumerable_1___Liv__Lck__ErrorHandling__LckCaptureError_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>* i___System__Collections__Generic__IEnumerator_1___Liv__Lck__ErrorHandling__LckCaptureError_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadCaptureErrorDispatcher__DrainErrors_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadCaptureErrorDispatcher__DrainErrors_d__10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadCaptureErrorDispatcher__DrainErrors_d__10(MainThreadCaptureErrorDispatcher__DrainErrors_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadCaptureErrorDispatcher__DrainErrors_d__10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadCaptureErrorDispatcher__DrainErrors_d__10(MainThreadCaptureErrorDispatcher__DrainErrors_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24874};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Liv::Lck::ErrorHandling::LckCaptureError  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10, _____4__this) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::ErrorHandling
