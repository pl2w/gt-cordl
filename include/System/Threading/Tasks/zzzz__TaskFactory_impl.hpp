#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskFactory.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.get_DefaultScheduler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskScheduler* (::System::Threading::Tasks::TaskFactory::*)()>(&::System::Threading::Tasks::TaskFactory::get_DefaultScheduler)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa3634c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"get_DefaultScheduler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskFactory::*)()>(&::System::Threading::Tasks::TaskFactory::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa360f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskFactory::*)(::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::TaskFactory::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa363524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CheckCreationOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::TaskCreationOptions)>(&::System::Threading::Tasks::TaskFactory::CheckCreationOptions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa36368c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CheckCreationOptions", {}, {::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.get_Scheduler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskScheduler* (::System::Threading::Tasks::TaskFactory::*)()>(&::System::Threading::Tasks::TaskFactory::get_Scheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3636e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"get_Scheduler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.get_CreationOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCreationOptions (::System::Threading::Tasks::TaskFactory::*)()>(&::System::Threading::Tasks::TaskFactory::get_CreationOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3636f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"get_CreationOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.get_ContinuationOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskContinuationOptions (::System::Threading::Tasks::TaskFactory::*)()>(&::System::Threading::Tasks::TaskFactory::get_ContinuationOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3636f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"get_ContinuationOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.StartNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::Tasks::TaskFactory::*)(::System::Action*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::TaskFactory::StartNew)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa363700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"StartNew", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.StartNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::Tasks::TaskFactory::*)(::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::TaskFactory::StartNew)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa36378c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"StartNew", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.FromAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::Tasks::TaskFactory::*)(::System::IAsyncResult*, ::System::Action_1<::System::IAsyncResult*>*)>(&::System::Threading::Tasks::TaskFactory::FromAsync)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa36381c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"FromAsync", {}, {::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::System::Action_1<::System::IAsyncResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.FromAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::Tasks::TaskFactory::*)(::System::IAsyncResult*, ::System::Action_1<::System::IAsyncResult*>*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::TaskFactory::FromAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa363850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"FromAsync", {}, {::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::System::Action_1<::System::IAsyncResult*>*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CheckFromAsyncOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::TaskCreationOptions, bool)>(&::System::Threading::Tasks::TaskFactory::CheckFromAsyncOptions)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa3638c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CheckFromAsyncOptions", {}, {::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CommonCWAllLogic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::System::Threading::Tasks::Task*>>* (*)(::ArrayW<::System::Threading::Tasks::Task*>)>(&::System::Threading::Tasks::TaskFactory::CommonCWAllLogic)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa3639ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CommonCWAllLogic", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CommonCWAnyLogic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* (*)(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*)>(&::System::Threading::Tasks::TaskFactory::CommonCWAnyLogic)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa360320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CommonCWAnyLogic", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CheckMultiContinuationTasksAndCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Threading::Tasks::Task*> (*)(::ArrayW<::System::Threading::Tasks::Task*>)>(&::System::Threading::Tasks::TaskFactory::CheckMultiContinuationTasksAndCopy)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa36406c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CheckMultiContinuationTasksAndCopy", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory.CheckMultiTaskContinuationOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::TaskContinuationOptions)>(&::System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa363590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CheckMultiTaskContinuationOptions", {}, {::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& System::Threading::Tasks::TaskFactory::__cordl_internal_get_m_defaultCancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultCancellationToken;
}
constexpr ::System::Threading::CancellationToken const& System::Threading::Tasks::TaskFactory::__cordl_internal_get_m_defaultCancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultCancellationToken;
}
constexpr void System::Threading::Tasks::TaskFactory::__cordl_internal_set_m_defaultCancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultCancellationToken = value;
}
constexpr ::System::Threading::Tasks::TaskScheduler*& System::Threading::Tasks::TaskFactory::__cordl_internal_get_m_defaultScheduler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultScheduler;
}
constexpr ::System::Threading::Tasks::TaskScheduler* const& System::Threading::Tasks::TaskFactory::__cordl_internal_get_m_defaultScheduler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultScheduler;
}
constexpr void System::Threading::Tasks::TaskFactory::__cordl_internal_set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultScheduler = value;
}
constexpr ::System::Threading::Tasks::TaskCreationOptions& System::Threading::Tasks::TaskFactory::__cordl_internal_get_m_defaultCreationOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultCreationOptions;
}
constexpr ::System::Threading::Tasks::TaskCreationOptions const& System::Threading::Tasks::TaskFactory::__cordl_internal_get_m_defaultCreationOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultCreationOptions;
}
constexpr void System::Threading::Tasks::TaskFactory::__cordl_internal_set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultCreationOptions = value;
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions& System::Threading::Tasks::TaskFactory::__cordl_internal_get_m_defaultContinuationOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultContinuationOptions;
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions const& System::Threading::Tasks::TaskFactory::__cordl_internal_get_m_defaultContinuationOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultContinuationOptions;
}
constexpr void System::Threading::Tasks::TaskFactory::__cordl_internal_set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultContinuationOptions = value;
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskFactory::get_DefaultScheduler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"get_DefaultScheduler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskFactory::_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
inline void System::Threading::Tasks::TaskFactory::CheckCreationOptions(::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CheckCreationOptions", {}, {::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, creationOptions);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskFactory::get_Scheduler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"get_Scheduler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory::get_CreationOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"get_CreationOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCreationOptions>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory::get_ContinuationOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"get_ContinuationOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskContinuationOptions>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::StartNew(::System::Action*  action, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"StartNew", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, action, cancellationToken, creationOptions, scheduler);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::StartNew(::System::Action_1<::System::Object*>*  action, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"StartNew", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, action, state, cancellationToken, creationOptions, scheduler);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory::StartNew(::System::Func_1<TResult>*  function, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                    {"StartNew", {::i2c::class_of<TResult>()}, {::i2c::type_of<::System::Func_1<TResult>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(this, ___internal_method, function, cancellationToken, creationOptions, scheduler);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory::StartNew(::System::Func_2<::System::Object*,TResult>*  function, ::System::Object*  state, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                    {"StartNew", {::i2c::class_of<TResult>()}, {::i2c::type_of<::System::Func_2<::System::Object*,TResult>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(this, ___internal_method, function, state, cancellationToken, creationOptions, scheduler);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::FromAsync(::System::IAsyncResult*  asyncResult, ::System::Action_1<::System::IAsyncResult*>*  endMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"FromAsync", {}, {::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::System::Action_1<::System::IAsyncResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, asyncResult, endMethod);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::FromAsync(::System::IAsyncResult*  asyncResult, ::System::Action_1<::System::IAsyncResult*>*  endMethod, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"FromAsync", {}, {::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::System::Action_1<::System::IAsyncResult*>*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, asyncResult, endMethod, creationOptions, scheduler);
}
template<typename TArg1>
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Action_1<::System::IAsyncResult*>*  endMethod, TArg1  arg1, ::System::Object*  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                    {"FromAsync", {::i2c::class_of<TArg1>()}, {::i2c::type_of<::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>(), ::i2c::type_of<::System::Action_1<::System::IAsyncResult*>*>(), ::i2c::type_of<TArg1>(), ::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArg1>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::FromAsync(::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Action_1<::System::IAsyncResult*>*  endMethod, TArg1  arg1, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                    {"FromAsync", {::i2c::class_of<TArg1>()}, {::i2c::type_of<::System::Func_4<TArg1,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>(), ::i2c::type_of<::System::Action_1<::System::IAsyncResult*>*>(), ::i2c::type_of<TArg1>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArg1>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, beginMethod, endMethod, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::FromAsync(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Action_1<::System::IAsyncResult*>*  endMethod, TArg1  arg1, TArg2  arg2, ::System::Object*  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                    {"FromAsync", {::i2c::class_of<TArg1>(), ::i2c::class_of<TArg2>()}, {::i2c::type_of<::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>(), ::i2c::type_of<::System::Action_1<::System::IAsyncResult*>*>(), ::i2c::type_of<TArg1>(), ::i2c::type_of<TArg2>(), ::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArg1>(), ::i2c::class_of<TArg2>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, beginMethod, endMethod, arg1, arg2, state);
}
template<typename TArg1,typename TArg2>
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskFactory::FromAsync(::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  beginMethod, ::System::Action_1<::System::IAsyncResult*>*  endMethod, TArg1  arg1, TArg2  arg2, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                    {"FromAsync", {::i2c::class_of<TArg1>(), ::i2c::class_of<TArg2>()}, {::i2c::type_of<::System::Func_5<TArg1,TArg2,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>(), ::i2c::type_of<::System::Action_1<::System::IAsyncResult*>*>(), ::i2c::type_of<TArg1>(), ::i2c::type_of<TArg2>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArg1>(), ::i2c::class_of<TArg2>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, beginMethod, endMethod, arg1, arg2, state, creationOptions);
}
inline void System::Threading::Tasks::TaskFactory::CheckFromAsyncOptions(::System::Threading::Tasks::TaskCreationOptions  creationOptions, bool  hasBeginMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CheckFromAsyncOptions", {}, {::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, creationOptions, hasBeginMethod);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::System::Threading::Tasks::Task*>>* System::Threading::Tasks::TaskFactory::CommonCWAllLogic(::ArrayW<::System::Threading::Tasks::Task*>  tasksCopy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CommonCWAllLogic", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::System::Threading::Tasks::Task*>>*>(nullptr, ___internal_method, tasksCopy);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskFactory::ContinueWhenAll(::ArrayW<::System::Threading::Tasks::Task*>  tasks, ::System::Func_2<::ArrayW<::System::Threading::Tasks::Task*>,TResult>*  continuationFunction, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                    {"ContinueWhenAll", {::i2c::class_of<TResult>()}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>(), ::i2c::type_of<::System::Func_2<::ArrayW<::System::Threading::Tasks::Task*>,TResult>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(this, ___internal_method, tasks, continuationFunction, cancellationToken, continuationOptions, scheduler);
}
inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* System::Threading::Tasks::TaskFactory::CommonCWAnyLogic(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*  tasks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CommonCWAnyLogic", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*>(nullptr, ___internal_method, tasks);
}
inline ::ArrayW<::System::Threading::Tasks::Task*> System::Threading::Tasks::TaskFactory::CheckMultiContinuationTasksAndCopy(::ArrayW<::System::Threading::Tasks::Task*>  tasks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CheckMultiContinuationTasksAndCopy", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Threading::Tasks::Task*>>(nullptr, ___internal_method, tasks);
}
inline void System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions  continuationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory*>(),
                        {"CheckMultiTaskContinuationOptions", {}, {::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, continuationOptions);
}
inline ::System::Threading::Tasks::TaskFactory* System::Threading::Tasks::TaskFactory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskFactory*>());
}
inline ::System::Threading::Tasks::TaskFactory* System::Threading::Tasks::TaskFactory::New_ctor(::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::TaskContinuationOptions  continuationOptions, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskFactory*>(cancellationToken, creationOptions, continuationOptions, scheduler));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskFactory::TaskFactory()   {
}
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::*)(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*)>(&::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa363d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::Invoke)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa363e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise*>(),
                        {"Invoke", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise.get_InvokeMayRunArbitraryCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::*)()>(&::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa364290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise*>(),
                        {"get_InvokeMayRunArbitraryCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*& System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::__cordl_internal_get__tasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tasks;
}
constexpr ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* const& System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::__cordl_internal_get__tasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tasks;
}
constexpr void System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::__cordl_internal_set__tasks(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tasks = value;
}
inline void System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::_ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*  tasks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tasks);
}
inline void System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::Invoke(::System::Threading::Tasks::Task*  completingTask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise*>(),
                        {"Invoke", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completingTask);
}
inline bool System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise*>(),
                        {"get_InvokeMayRunArbitraryCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise* System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::New_ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*  tasks)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise*>(tasks));
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr  System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr ::System::Threading::Tasks::ITaskCompletionAction* System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::TaskFactory_CompleteOnInvokePromise()   {
}
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::*)(::ArrayW<::System::Threading::Tasks::Task*>)>(&::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa363a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::Invoke)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa363bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(),
                        {"Invoke", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise.get_InvokeMayRunArbitraryCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::*)()>(&::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa364214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(),
                        {"get_InvokeMayRunArbitraryCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise.get_ShouldNotifyDebuggerOfWaitCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::*)()>(&::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa36421c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(),
                    {::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Threading::Tasks::Task*>& System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::__cordl_internal_get__tasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tasks;
}
constexpr ::ArrayW<::System::Threading::Tasks::Task*> const& System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::__cordl_internal_get__tasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tasks;
}
constexpr void System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::__cordl_internal_set__tasks(::ArrayW<::System::Threading::Tasks::Task*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tasks = value;
}
constexpr int32_t& System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr int32_t const& System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr void System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
inline void System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::_ctor(::ArrayW<::System::Threading::Tasks::Task*>  tasksCopy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tasksCopy);
}
inline void System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::Invoke(::System::Threading::Tasks::Task*  completingTask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(),
                        {"Invoke", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completingTask);
}
inline bool System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(),
                        {"get_InvokeMayRunArbitraryCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::get_ShouldNotifyDebuggerOfWaitCompletion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise* System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::New_ctor(::ArrayW<::System::Threading::Tasks::Task*>  tasksCopy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise*>(tasksCopy));
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr  System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr ::System::Threading::Tasks::ITaskCompletionAction* System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskFactory_CompleteOnCountdownPromise::TaskFactory_CompleteOnCountdownPromise()   {
}
