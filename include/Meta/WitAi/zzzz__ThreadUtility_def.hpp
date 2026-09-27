#pragma once
// IWYU pragma private; include "Meta/WitAi/ThreadUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadUtility)
namespace GlobalNamespace {
struct ThreadUtility__SafeTask_d__13;
}
namespace GlobalNamespace {
template<typename T>
struct ThreadUtility__SafeTask_d__14_1;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi {
class ThreadUtility_EarlyTask;
}
namespace Meta::WitAi {
class ThreadUtility__CoroutineAwait_d__18;
}
namespace Meta::WitAi {
template<typename T>
class ThreadUtility___c__DisplayClass10_0_1;
}
namespace Meta::WitAi {
class ThreadUtility___c__DisplayClass15_0;
}
namespace Meta::WitAi {
template<typename T>
class ThreadUtility___c__DisplayClass16_0_1;
}
namespace Meta::WitAi {
class ThreadUtility___c__DisplayClass17_0;
}
namespace Meta::WitAi {
class ThreadUtility___c__DisplayClass8_0;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Action;
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
// Forward declare root types
namespace Meta::WitAi {
class ThreadUtility;
}
namespace Meta::WitAi {
class ThreadUtility_EarlyTask;
}
namespace Meta::WitAi {
class ThreadUtility__CoroutineAwait_d__18;
}
namespace Meta::WitAi {
template<typename T>
class ThreadUtility___c__DisplayClass10_0_1;
}
namespace Meta::WitAi {
class ThreadUtility___c__DisplayClass15_0;
}
namespace Meta::WitAi {
template<typename T>
class ThreadUtility___c__DisplayClass16_0_1;
}
namespace Meta::WitAi {
class ThreadUtility___c__DisplayClass17_0;
}
namespace Meta::WitAi {
class ThreadUtility___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::ThreadUtility*);
MARK_REF_T(::Meta::WitAi::ThreadUtility_EarlyTask*);
MARK_REF_T(::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*);
MARK_GEN_REF_T_PTR(::Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1);
MARK_REF_T(::Meta::WitAi::ThreadUtility___c__DisplayClass15_0*);
MARK_GEN_REF_T_PTR(::Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1);
MARK_REF_T(::Meta::WitAi::ThreadUtility___c__DisplayClass17_0*);
MARK_REF_T(::Meta::WitAi::ThreadUtility___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ThreadUtility*, "Meta.WitAi", "ThreadUtility");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ThreadUtility_EarlyTask*, "Meta.WitAi", "ThreadUtility/EarlyTask");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*, "Meta.WitAi", "ThreadUtility/<CoroutineAwait>d__18");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1, "Meta.WitAi", "ThreadUtility/<>c__DisplayClass10_0`1");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ThreadUtility___c__DisplayClass15_0*, "Meta.WitAi", "ThreadUtility/<>c__DisplayClass15_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1, "Meta.WitAi", "ThreadUtility/<>c__DisplayClass16_0`1");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ThreadUtility___c__DisplayClass17_0*, "Meta.WitAi", "ThreadUtility/<>c__DisplayClass17_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ThreadUtility___c__DisplayClass8_0*, "Meta.WitAi", "ThreadUtility/<>c__DisplayClass8_0");
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ThreadUtility
class CORDL_TYPE ThreadUtility : public ::System::Object {
public:
// Declarations
using _SafeTask_d__13 = ::GlobalNamespace::ThreadUtility__SafeTask_d__13;

template<typename T>
using _SafeTask_d__14_1 = ::GlobalNamespace::ThreadUtility__SafeTask_d__14_1<T>;

using EarlyTask = ::Meta::WitAi::ThreadUtility_EarlyTask;

using _CoroutineAwait_d__18 = ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18;

template<typename T>
using __c__DisplayClass10_0_1 = ::Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>;

using __c__DisplayClass15_0 = ::Meta::WitAi::ThreadUtility___c__DisplayClass15_0;

template<typename T>
using __c__DisplayClass16_0_1 = ::Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>;

using __c__DisplayClass17_0 = ::Meta::WitAi::ThreadUtility___c__DisplayClass17_0;

using __c__DisplayClass8_0 = ::Meta::WitAi::ThreadUtility___c__DisplayClass8_0;

/// @brief Field _earlyTasks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__earlyTasks, put=setStaticF__earlyTasks)) ::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::ThreadUtility_EarlyTask*>*  _earlyTasks;

/// @brief Field _mainThread, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__mainThread, put=setStaticF__mainThread)) ::System::Threading::Thread*  _mainThread;

/// @brief Field _mainThreadScheduler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__mainThreadScheduler, put=setStaticF__mainThreadScheduler)) ::System::Threading::Tasks::TaskScheduler*  _mainThreadScheduler;

/// @brief Method Background, addr 0x9e3ec2c, size 0x1a8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* Background(::Meta::Voice::Logging::IVLogger*  logger, ::System::Action*  callback) ;

/// @brief Method BackgroundAsync, addr 0x9e3eac8, size 0x15c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* BackgroundAsync(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<::System::Threading::Tasks::Task*>*  callback) ;

/// @brief Method BackgroundAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* BackgroundAsync(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  callback) ;

/// @brief Method CallOnMainThread, addr 0x9e398e4, size 0x58, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* CallOnMainThread(::System::Action*  callback) ;

/// @brief Method CallOnMainThread, addr 0x9e3e688, size 0x1a8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* CallOnMainThread(::Meta::Voice::Logging::IVLogger*  logger, ::System::Action*  callback) ;

/// @brief Method CallOnMainThread, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* CallOnMainThread(::System::Func_1<T>*  callback) ;

/// @brief Method CallOnMainThread, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* CallOnMainThread(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<T>*  callback) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.ThreadUtility::<CoroutineAwait>d__18))]
/// @brief Method CoroutineAwait, addr 0x9e3eddc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* CoroutineAwait(::System::Func_1<::System::Threading::Tasks::Task*>*  func) ;

/// @brief Method EnqueueMainThreadTask, addr 0x9e3e54c, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* EnqueueMainThreadTask(::System::Threading::Tasks::Task*  task) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Init, addr 0x9e3e3a8, size 0x134, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method IsMainThread, addr 0x9e3e338, size 0x70, virtual false, abstract: false, final false
static inline bool IsMainThread() ;

/// @brief Method SafeAction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SafeAction(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<T>*  callback) ;

/// @brief Method SafeAction, addr 0x9e3e838, size 0x198, virtual false, abstract: false, final false
static inline bool SafeAction(::Meta::Voice::Logging::IVLogger*  logger, ::System::Action*  callback) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.ThreadUtility::<SafeTask>d__13))]
/// @brief Method SafeTask, addr 0x9e3e9d0, size 0xf8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* SafeTask(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<::System::Threading::Tasks::Task*>*  callback) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.ThreadUtility::<SafeTask>d__14`1<T>))]
/// @brief Method SafeTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* SafeTask(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  callback) ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::ThreadUtility_EarlyTask*>* getStaticF__earlyTasks() ;

static inline ::System::Threading::Thread* getStaticF__mainThread() ;

static inline ::System::Threading::Tasks::TaskScheduler* getStaticF__mainThreadScheduler() ;

static inline void setStaticF__earlyTasks(::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::ThreadUtility_EarlyTask*>*  value) ;

static inline void setStaticF__mainThread(::System::Threading::Thread*  value) ;

static inline void setStaticF__mainThreadScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadUtility(ThreadUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadUtility(ThreadUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31002};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::ThreadUtility) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ThreadUtility/<CoroutineAwait>d__18
class CORDL_TYPE ThreadUtility__CoroutineAwait_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <task>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__task_5__2, put=__cordl_internal_set__task_5__2)) ::System::Threading::Tasks::Task*  _task_5__2;

/// @brief Field func, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_func, put=__cordl_internal_set_func)) ::System::Func_1<::System::Threading::Tasks::Task*>*  func;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e3f020, size 0x94, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e3f0b4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e3f0bc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e3f0f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e3f01c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__task_5__2() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__task_5__2() ;

constexpr ::System::Func_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get_func() const;

constexpr ::System::Func_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get_func() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__task_5__2(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set_func(::System::Func_1<::System::Threading::Tasks::Task*>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e3ee48, size 0x28, virtual false, abstract: false, final false
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
constexpr ThreadUtility__CoroutineAwait_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility__CoroutineAwait_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadUtility__CoroutineAwait_d__18(ThreadUtility__CoroutineAwait_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility__CoroutineAwait_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadUtility__CoroutineAwait_d__18(ThreadUtility__CoroutineAwait_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30999};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field func, offset: 0x20, size: 0x8, def value: None
 ::System::Func_1<::System::Threading::Tasks::Task*>*  ___func;

/// @brief Field <task>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____task_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18, ___func) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18, ____task_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ThreadUtility/<>c__DisplayClass8_0
class CORDL_TYPE ThreadUtility___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

/// @brief Field logger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Meta::Voice::Logging::IVLogger*  logger;

static inline ::Meta::WitAi::ThreadUtility___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <CallOnMainThread>b__0, addr 0x9e3efc0, size 0x5c, virtual false, abstract: false, final false
inline void _CallOnMainThread_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get_logger() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get_logger() ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

constexpr void __cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value) ;

/// @brief Method .ctor, addr 0x9e3e830, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadUtility___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadUtility___c__DisplayClass8_0(ThreadUtility___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadUtility___c__DisplayClass8_0(ThreadUtility___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30998};

/// @brief Field logger, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ___logger;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::ThreadUtility___c__DisplayClass8_0, ___logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::ThreadUtility___c__DisplayClass8_0, ___callback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::ThreadUtility___c__DisplayClass8_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ThreadUtility/<>c__DisplayClass17_0
class CORDL_TYPE ThreadUtility___c__DisplayClass17_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

/// @brief Field logger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Meta::Voice::Logging::IVLogger*  logger;

static inline ::Meta::WitAi::ThreadUtility___c__DisplayClass17_0* New_ctor() ;

/// @brief Method <Background>b__0, addr 0x9e3ef5c, size 0x64, virtual false, abstract: false, final false
inline bool _Background_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get_logger() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get_logger() ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

constexpr void __cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value) ;

/// @brief Method .ctor, addr 0x9e3edd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadUtility___c__DisplayClass17_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass17_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadUtility___c__DisplayClass17_0(ThreadUtility___c__DisplayClass17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass17_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadUtility___c__DisplayClass17_0(ThreadUtility___c__DisplayClass17_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30997};

/// @brief Field logger, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ___logger;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::ThreadUtility___c__DisplayClass17_0, ___logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::ThreadUtility___c__DisplayClass17_0, ___callback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::ThreadUtility___c__DisplayClass17_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.ThreadUtility/<>c__DisplayClass16_0`1<T>
class CORDL_TYPE ThreadUtility___c__DisplayClass16_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  callback;

/// @brief Field logger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Meta::Voice::Logging::IVLogger*  logger;

static inline ::Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>* New_ctor() ;

/// @brief Method <BackgroundAsync>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<T>* _BackgroundAsync_b__0() ;

constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*& __cordl_internal_get_callback() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get_logger() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get_logger() ;

constexpr void __cordl_internal_set_callback(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  value) ;

constexpr void __cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadUtility___c__DisplayClass16_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass16_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadUtility___c__DisplayClass16_0_1(ThreadUtility___c__DisplayClass16_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass16_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadUtility___c__DisplayClass16_0_1(ThreadUtility___c__DisplayClass16_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30996};

/// @brief Field logger, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ___logger;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ThreadUtility/<>c__DisplayClass15_0
class CORDL_TYPE ThreadUtility___c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Func_1<::System::Threading::Tasks::Task*>*  callback;

/// @brief Field logger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Meta::Voice::Logging::IVLogger*  logger;

static inline ::Meta::WitAi::ThreadUtility___c__DisplayClass15_0* New_ctor() ;

/// @brief Method <BackgroundAsync>b__0, addr 0x9e3ef00, size 0x5c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _BackgroundAsync_b__0() ;

constexpr ::System::Func_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Func_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get_callback() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get_logger() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get_logger() ;

constexpr void __cordl_internal_set_callback(::System::Func_1<::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value) ;

/// @brief Method .ctor, addr 0x9e3ec24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadUtility___c__DisplayClass15_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass15_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadUtility___c__DisplayClass15_0(ThreadUtility___c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass15_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadUtility___c__DisplayClass15_0(ThreadUtility___c__DisplayClass15_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30995};

/// @brief Field logger, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ___logger;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<::System::Threading::Tasks::Task*>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::ThreadUtility___c__DisplayClass15_0, ___logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::ThreadUtility___c__DisplayClass15_0, ___callback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::ThreadUtility___c__DisplayClass15_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.ThreadUtility/<>c__DisplayClass10_0`1<T>
class CORDL_TYPE ThreadUtility___c__DisplayClass10_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Func_1<T>*  callback;

/// @brief Field logger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Meta::Voice::Logging::IVLogger*  logger;

static inline ::Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>* New_ctor() ;

/// @brief Method <CallOnMainThread>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T _CallOnMainThread_b__0() ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get_callback() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get_callback() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get_logger() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get_logger() ;

constexpr void __cordl_internal_set_callback(::System::Func_1<T>*  value) ;

constexpr void __cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadUtility___c__DisplayClass10_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass10_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadUtility___c__DisplayClass10_0_1(ThreadUtility___c__DisplayClass10_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility___c__DisplayClass10_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadUtility___c__DisplayClass10_0_1(ThreadUtility___c__DisplayClass10_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30994};

/// @brief Field logger, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ___logger;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<T>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ThreadUtility/EarlyTask
class CORDL_TYPE ThreadUtility_EarlyTask : public ::System::Object {
public:
// Declarations
/// @brief Field _task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__task, put=__cordl_internal_set__task)) ::System::Threading::Tasks::Task*  _task;

static inline ::Meta::WitAi::ThreadUtility_EarlyTask* New_ctor(::System::Threading::Tasks::Task*  task) ;

/// @brief Method Start, addr 0x9e3e4dc, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__task() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__task() ;

constexpr void __cordl_internal_set__task(::System::Threading::Tasks::Task*  value) ;

/// @brief Method .ctor, addr 0x9e3e658, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Tasks::Task*  task) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadUtility_EarlyTask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility_EarlyTask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadUtility_EarlyTask(ThreadUtility_EarlyTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadUtility_EarlyTask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadUtility_EarlyTask(ThreadUtility_EarlyTask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30993};

/// @brief Field _task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::ThreadUtility_EarlyTask, ____task) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::ThreadUtility_EarlyTask) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi
