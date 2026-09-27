#pragma once
// IWYU pragma private; include "Pathfinding/Util/ParallelWorkQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelWorkQueue_1)
namespace Pathfinding::Util {
template<typename T>
class ParallelWorkQueue_1__Run_d__7;
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
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Util {
template<typename T>
class ParallelWorkQueue_1;
}
namespace Pathfinding::Util {
template<typename T>
class ParallelWorkQueue_1__Run_d__7;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Pathfinding::Util::ParallelWorkQueue_1);
MARK_GEN_REF_T_PTR(::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Util::ParallelWorkQueue_1, "Pathfinding.Util", "ParallelWorkQueue`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7, "Pathfinding.Util", "ParallelWorkQueue`1/<Run>d__7");
// Dependencies System.Object, System.Threading.ManualResetEvent
namespace Pathfinding::Util {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Util.ParallelWorkQueue`1<T>
class CORDL_TYPE ParallelWorkQueue_1 : public ::System::Object {
public:
// Declarations
using _Run_d__7 = ::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>;

/// @brief Field action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action_2<T,int32_t>*  action;

/// @brief Field initialCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialCount, put=__cordl_internal_set_initialCount)) int32_t  initialCount;

/// @brief Field innerException, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerException, put=__cordl_internal_set_innerException)) ::System::Exception*  innerException;

/// @brief Field queue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Generic::Queue_1<T>*  queue;

/// @brief Field threadCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_threadCount, put=__cordl_internal_set_threadCount)) int32_t  threadCount;

/// @brief Field waitEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitEvents, put=__cordl_internal_set_waitEvents)) ::ArrayW<::System::Threading::ManualResetEvent*>  waitEvents;

static inline ::Pathfinding::Util::ParallelWorkQueue_1<T>* New_ctor(::System::Collections::Generic::Queue_1<T>*  queue) ;

/// [IteratorStateMachine(typeof(Pathfinding.Util.ParallelWorkQueue`1::<Run>d__7<T>))]
/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* Run(int32_t  progressTimeoutMillis) ;

/// @brief Method RunTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RunTask(int32_t  threadIndex) ;

/// [CompilerGenerated]
/// @brief Method <Run>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Run_b__7_0(::System::Object*  threadIndex) ;

constexpr ::System::Action_2<T,int32_t>* const& __cordl_internal_get_action() const;

constexpr ::System::Action_2<T,int32_t>*& __cordl_internal_get_action() ;

constexpr int32_t const& __cordl_internal_get_initialCount() const;

constexpr int32_t& __cordl_internal_get_initialCount() ;

constexpr ::System::Exception* const& __cordl_internal_get_innerException() const;

constexpr ::System::Exception*& __cordl_internal_get_innerException() ;

constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_queue() ;

constexpr int32_t const& __cordl_internal_get_threadCount() const;

constexpr int32_t& __cordl_internal_get_threadCount() ;

constexpr ::ArrayW<::System::Threading::ManualResetEvent*> const& __cordl_internal_get_waitEvents() const;

constexpr ::ArrayW<::System::Threading::ManualResetEvent*>& __cordl_internal_get_waitEvents() ;

constexpr void __cordl_internal_set_action(::System::Action_2<T,int32_t>*  value) ;

constexpr void __cordl_internal_set_initialCount(int32_t  value) ;

constexpr void __cordl_internal_set_innerException(::System::Exception*  value) ;

constexpr void __cordl_internal_set_queue(::System::Collections::Generic::Queue_1<T>*  value) ;

constexpr void __cordl_internal_set_threadCount(int32_t  value) ;

constexpr void __cordl_internal_set_waitEvents(::ArrayW<::System::Threading::ManualResetEvent*>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Queue_1<T>*  queue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParallelWorkQueue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParallelWorkQueue_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParallelWorkQueue_1(ParallelWorkQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParallelWorkQueue_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParallelWorkQueue_1(ParallelWorkQueue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21485};

/// @brief Field action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<T,int32_t>*  ___action;

/// @brief Field threadCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___threadCount;

/// @brief Field queue, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  ___queue;

/// @brief Field initialCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___initialCount;

/// @brief Field waitEvents, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::System::Threading::ManualResetEvent*>  ___waitEvents;

/// @brief Field innerException, offset: 0x38, size: 0x8, def value: None
 ::System::Exception*  ___innerException;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Util {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Util.ParallelWorkQueue`1/<Run>d__7<T>
class CORDL_TYPE ParallelWorkQueue_1__Run_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t  System_Collections_Generic_IEnumerator_System_Int32__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) int32_t  __2__current;

/// @brief Field <>3__progressTimeoutMillis, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get___3__progressTimeoutMillis, put=__cordl_internal_set___3__progressTimeoutMillis)) int32_t  __3__progressTimeoutMillis;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::Util::ParallelWorkQueue_1<T>*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field progressTimeoutMillis, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressTimeoutMillis, put=__cordl_internal_set_progressTimeoutMillis)) int32_t  progressTimeoutMillis;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current() ;

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

constexpr int32_t const& __cordl_internal_get___2__current() const;

constexpr int32_t& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___3__progressTimeoutMillis() const;

constexpr int32_t& __cordl_internal_get___3__progressTimeoutMillis() ;

constexpr ::Pathfinding::Util::ParallelWorkQueue_1<T>* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::Util::ParallelWorkQueue_1<T>*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get_progressTimeoutMillis() const;

constexpr int32_t& __cordl_internal_get_progressTimeoutMillis() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(int32_t  value) ;

constexpr void __cordl_internal_set___3__progressTimeoutMillis(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::Util::ParallelWorkQueue_1<T>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_progressTimeoutMillis(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParallelWorkQueue_1__Run_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParallelWorkQueue_1__Run_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParallelWorkQueue_1__Run_d__7(ParallelWorkQueue_1__Run_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParallelWorkQueue_1__Run_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParallelWorkQueue_1__Run_d__7(ParallelWorkQueue_1__Run_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21484};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
 int32_t  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Util::ParallelWorkQueue_1<T>*  _____4__this;

/// @brief Field progressTimeoutMillis, offset: 0x28, size: 0x4, def value: None
 int32_t  ___progressTimeoutMillis;

/// @brief Field <>3__progressTimeoutMillis, offset: 0x2c, size: 0x4, def value: None
 int32_t  _____3__progressTimeoutMillis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
