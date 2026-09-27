#pragma once
// IWYU pragma private; include "Meta/WitAi/ThreadUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__ThreadUtility_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/zzzz__ThreadUtility__SafeTask_d__13_def.hpp"
#include "Meta/WitAi/zzzz__ThreadUtility__SafeTask_d__14_1_def.hpp"
#include "Meta/WitAi/zzzz__ThreadUtility_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.IsMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::WitAi::ThreadUtility::IsMainThread)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e3e338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"IsMainThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::WitAi::ThreadUtility::Init)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e3e3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.EnqueueMainThreadTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::Tasks::Task*)>(&::Meta::WitAi::ThreadUtility::EnqueueMainThreadTask)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e3e54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"EnqueueMainThreadTask", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.CallOnMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Action*)>(&::Meta::WitAi::ThreadUtility::CallOnMainThread)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e398e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"CallOnMainThread", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.CallOnMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Meta::Voice::Logging::IVLogger*, ::System::Action*)>(&::Meta::WitAi::ThreadUtility::CallOnMainThread)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9e3e688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"CallOnMainThread", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.SafeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::Voice::Logging::IVLogger*, ::System::Action*)>(&::Meta::WitAi::ThreadUtility::SafeAction)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9e3e838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"SafeAction", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.SafeTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Meta::Voice::Logging::IVLogger*, ::System::Func_1<::System::Threading::Tasks::Task*>*)>(&::Meta::WitAi::ThreadUtility::SafeTask)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e3e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"SafeTask", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.BackgroundAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Meta::Voice::Logging::IVLogger*, ::System::Func_1<::System::Threading::Tasks::Task*>*)>(&::Meta::WitAi::ThreadUtility::BackgroundAsync)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9e3eac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"BackgroundAsync", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.Background
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Meta::Voice::Logging::IVLogger*, ::System::Action*)>(&::Meta::WitAi::ThreadUtility::Background)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9e3ec2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"Background", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility.CoroutineAwait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(&::Meta::WitAi::ThreadUtility::CoroutineAwait)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e3eddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"CoroutineAwait", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::ThreadUtility::setStaticF__mainThreadScheduler(::System::Threading::Tasks::TaskScheduler*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::TaskScheduler*, "_mainThreadScheduler", ::Meta::WitAi::ThreadUtility*>(std::forward<::System::Threading::Tasks::TaskScheduler*>(value));
}
inline ::System::Threading::Tasks::TaskScheduler* Meta::WitAi::ThreadUtility::getStaticF__mainThreadScheduler()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskScheduler*, "_mainThreadScheduler", ::Meta::WitAi::ThreadUtility*>();
}
inline void Meta::WitAi::ThreadUtility::setStaticF__mainThread(::System::Threading::Thread*  value)  {
::cordl_internals::setStaticField<::System::Threading::Thread*, "_mainThread", ::Meta::WitAi::ThreadUtility*>(std::forward<::System::Threading::Thread*>(value));
}
inline ::System::Threading::Thread* Meta::WitAi::ThreadUtility::getStaticF__mainThread()  {
return ::cordl_internals::getStaticField<::System::Threading::Thread*, "_mainThread", ::Meta::WitAi::ThreadUtility*>();
}
inline void Meta::WitAi::ThreadUtility::setStaticF__earlyTasks(::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::ThreadUtility_EarlyTask*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::ThreadUtility_EarlyTask*>*, "_earlyTasks", ::Meta::WitAi::ThreadUtility*>(std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::ThreadUtility_EarlyTask*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::ThreadUtility_EarlyTask*>* Meta::WitAi::ThreadUtility::getStaticF__earlyTasks()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::ThreadUtility_EarlyTask*>*, "_earlyTasks", ::Meta::WitAi::ThreadUtility*>();
}
inline bool Meta::WitAi::ThreadUtility::IsMainThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"IsMainThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Meta::WitAi::ThreadUtility::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::ThreadUtility::EnqueueMainThreadTask(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"EnqueueMainThreadTask", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, task);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::ThreadUtility::CallOnMainThread(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"CallOnMainThread", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, callback);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::ThreadUtility::CallOnMainThread(::Meta::Voice::Logging::IVLogger*  logger, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"CallOnMainThread", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, logger, callback);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Meta::WitAi::ThreadUtility::CallOnMainThread(::System::Func_1<T>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                    {"CallOnMainThread", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, callback);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Meta::WitAi::ThreadUtility::CallOnMainThread(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<T>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                    {"CallOnMainThread", {::i2c::class_of<T>()}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Func_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, logger, callback);
}
inline bool Meta::WitAi::ThreadUtility::SafeAction(::Meta::Voice::Logging::IVLogger*  logger, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"SafeAction", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, logger, callback);
}
template<typename T>
inline T Meta::WitAi::ThreadUtility::SafeAction(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<T>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                    {"SafeAction", {::i2c::class_of<T>()}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Func_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, logger, callback);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::ThreadUtility::SafeTask(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<::System::Threading::Tasks::Task*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"SafeTask", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, logger, callback);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Meta::WitAi::ThreadUtility::SafeTask(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                    {"SafeTask", {::i2c::class_of<T>()}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, logger, callback);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::ThreadUtility::BackgroundAsync(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<::System::Threading::Tasks::Task*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"BackgroundAsync", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, logger, callback);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Meta::WitAi::ThreadUtility::BackgroundAsync(::Meta::Voice::Logging::IVLogger*  logger, ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                    {"BackgroundAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, logger, callback);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::ThreadUtility::Background(::Meta::Voice::Logging::IVLogger*  logger, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"Background", {}, {::i2c::type_of<::Meta::Voice::Logging::IVLogger*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, logger, callback);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::ThreadUtility::CoroutineAwait(::System::Func_1<::System::Threading::Tasks::Task*>*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility*>(),
                        {"CoroutineAwait", {}, {::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, func);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ThreadUtility::ThreadUtility()   {
}
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::*)(int32_t)>(&::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e3ee48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::*)()>(&::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e3f01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::*)()>(&::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e3f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::*)()>(&::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3f0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::*)()>(&::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e3f0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::*)()>(&::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3f0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task*>*& Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_get_func()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___func;
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task*>* const& Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_get_func() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___func;
}
constexpr void Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_set_func(::System::Func_1<::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___func = value;
}
constexpr ::System::Threading::Tasks::Task*& Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_get__task_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____task_5__2;
}
constexpr ::System::Threading::Tasks::Task* const& Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_get__task_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____task_5__2;
}
constexpr void Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::__cordl_internal_set__task_5__2(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____task_5__2 = value;
}
inline void Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18* Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ThreadUtility__CoroutineAwait_d__18::ThreadUtility__CoroutineAwait_d__18()   {
}
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ThreadUtility___c__DisplayClass8_0::*)()>(&::Meta::WitAi::ThreadUtility___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility___c__DisplayClass8_0._CallOnMainThread_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ThreadUtility___c__DisplayClass8_0::*)()>(&::Meta::WitAi::ThreadUtility___c__DisplayClass8_0::_CallOnMainThread_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e3efc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass8_0*>(),
                        {"<CallOnMainThread>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::ThreadUtility___c__DisplayClass8_0::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::ThreadUtility___c__DisplayClass8_0::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass8_0::__cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr ::System::Action*& Meta::WitAi::ThreadUtility___c__DisplayClass8_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action* const& Meta::WitAi::ThreadUtility___c__DisplayClass8_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass8_0::__cordl_internal_set_callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void Meta::WitAi::ThreadUtility___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::ThreadUtility___c__DisplayClass8_0::_CallOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass8_0*>(),
                        {"<CallOnMainThread>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::ThreadUtility___c__DisplayClass8_0* Meta::WitAi::ThreadUtility___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ThreadUtility___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ThreadUtility___c__DisplayClass8_0::ThreadUtility___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility___c__DisplayClass17_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ThreadUtility___c__DisplayClass17_0::*)()>(&::Meta::WitAi::ThreadUtility___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3edd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility___c__DisplayClass17_0._Background_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::ThreadUtility___c__DisplayClass17_0::*)()>(&::Meta::WitAi::ThreadUtility___c__DisplayClass17_0::_Background_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e3ef5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass17_0*>(),
                        {"<Background>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::ThreadUtility___c__DisplayClass17_0::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::ThreadUtility___c__DisplayClass17_0::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass17_0::__cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr ::System::Action*& Meta::WitAi::ThreadUtility___c__DisplayClass17_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action* const& Meta::WitAi::ThreadUtility___c__DisplayClass17_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass17_0::__cordl_internal_set_callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void Meta::WitAi::ThreadUtility___c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::ThreadUtility___c__DisplayClass17_0::_Background_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass17_0*>(),
                        {"<Background>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::ThreadUtility___c__DisplayClass17_0* Meta::WitAi::ThreadUtility___c__DisplayClass17_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ThreadUtility___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ThreadUtility___c__DisplayClass17_0::ThreadUtility___c__DisplayClass17_0()   {
}
template<typename T>
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::__cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
template<typename T>
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*& Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* const& Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::__cordl_internal_set_callback(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
template<typename T>
inline void Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::_BackgroundAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>*>(),
                        {"<BackgroundAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>* Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::ThreadUtility___c__DisplayClass16_0_1<T>::ThreadUtility___c__DisplayClass16_0_1()   {
}
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility___c__DisplayClass15_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ThreadUtility___c__DisplayClass15_0::*)()>(&::Meta::WitAi::ThreadUtility___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility___c__DisplayClass15_0._BackgroundAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::ThreadUtility___c__DisplayClass15_0::*)()>(&::Meta::WitAi::ThreadUtility___c__DisplayClass15_0::_BackgroundAsync_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e3ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass15_0*>(),
                        {"<BackgroundAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::ThreadUtility___c__DisplayClass15_0::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::ThreadUtility___c__DisplayClass15_0::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass15_0::__cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task*>*& Meta::WitAi::ThreadUtility___c__DisplayClass15_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task*>* const& Meta::WitAi::ThreadUtility___c__DisplayClass15_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass15_0::__cordl_internal_set_callback(::System::Func_1<::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void Meta::WitAi::ThreadUtility___c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::ThreadUtility___c__DisplayClass15_0::_BackgroundAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass15_0*>(),
                        {"<BackgroundAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::WitAi::ThreadUtility___c__DisplayClass15_0* Meta::WitAi::ThreadUtility___c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ThreadUtility___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ThreadUtility___c__DisplayClass15_0::ThreadUtility___c__DisplayClass15_0()   {
}
template<typename T>
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::__cordl_internal_set_logger(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
template<typename T>
constexpr ::System::Func_1<T>*& Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr ::System::Func_1<T>* const& Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr void Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::__cordl_internal_set_callback(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
template<typename T>
inline void Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::_CallOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>*>(),
                        {"<CallOnMainThread>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>* Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::ThreadUtility___c__DisplayClass10_0_1<T>::ThreadUtility___c__DisplayClass10_0_1()   {
}
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility_EarlyTask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ThreadUtility_EarlyTask::*)(::System::Threading::Tasks::Task*)>(&::Meta::WitAi::ThreadUtility_EarlyTask::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e3e658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility_EarlyTask*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ThreadUtility_EarlyTask.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ThreadUtility_EarlyTask::*)()>(&::Meta::WitAi::ThreadUtility_EarlyTask::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e3e4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility_EarlyTask*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& Meta::WitAi::ThreadUtility_EarlyTask::__cordl_internal_get__task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____task;
}
constexpr ::System::Threading::Tasks::Task* const& Meta::WitAi::ThreadUtility_EarlyTask::__cordl_internal_get__task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____task;
}
constexpr void Meta::WitAi::ThreadUtility_EarlyTask::__cordl_internal_set__task(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____task = value;
}
inline void Meta::WitAi::ThreadUtility_EarlyTask::_ctor(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility_EarlyTask*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline void Meta::WitAi::ThreadUtility_EarlyTask::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ThreadUtility_EarlyTask*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::ThreadUtility_EarlyTask* Meta::WitAi::ThreadUtility_EarlyTask::New_ctor(::System::Threading::Tasks::Task*  task)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ThreadUtility_EarlyTask*>(task));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ThreadUtility_EarlyTask::ThreadUtility_EarlyTask()   {
}
