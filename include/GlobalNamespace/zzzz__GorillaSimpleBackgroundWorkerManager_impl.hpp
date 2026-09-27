#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSimpleBackgroundWorkerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSimpleBackgroundWorkerManager_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSimpleBackgroundWorker_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::*)()>(&::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x592333c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*)>(&::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5923430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::CreateManager)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5923514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager.DoWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t)>(&::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::DoWork)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5923604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"DoWork", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager._DoWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::*)(int64_t)>(&::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::_DoWork)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x592369c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"_DoWork", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager.WorkerSignup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IGorillaSimpleBackgroundWorker*)>(&::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::WorkerSignup)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5923814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"WorkerSignup", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::*)()>(&::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59238cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>*& GlobalNamespace::GorillaSimpleBackgroundWorkerManager::__cordl_internal_get_workerSignups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workerSignups;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>* const& GlobalNamespace::GorillaSimpleBackgroundWorkerManager::__cordl_internal_get_workerSignups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workerSignups;
}
constexpr void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::__cordl_internal_set_workerSignups(::System::Collections::Generic::Queue_1<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workerSignups = value;
}
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::GorillaSimpleBackgroundWorkerManager::__cordl_internal_get_stopwatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& GlobalNamespace::GorillaSimpleBackgroundWorkerManager::__cordl_internal_get_stopwatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopwatch;
}
constexpr void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::__cordl_internal_set_stopwatch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopwatch = value;
}
inline void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::setStaticF__instance(::UnityW<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager>, "_instance", ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(std::forward<::UnityW<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager> GlobalNamespace::GorillaSimpleBackgroundWorkerManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager>, "_instance", ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>();
}
inline void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GorillaSimpleBackgroundWorkerManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>();
}
inline void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::setStaticF_MINIMUM_TICKS_OF_WORK(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "MINIMUM_TICKS_OF_WORK", ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(std::forward<int64_t>(value));
}
inline int64_t GlobalNamespace::GorillaSimpleBackgroundWorkerManager::getStaticF_MINIMUM_TICKS_OF_WORK()  {
return ::cordl_internals::getStaticField<int64_t, "MINIMUM_TICKS_OF_WORK", ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>();
}
inline void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::SetInstance(::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int64_t GlobalNamespace::GorillaSimpleBackgroundWorkerManager::DoWork(int64_t  ticksOfWork)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"DoWork", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, ticksOfWork);
}
inline int64_t GlobalNamespace::GorillaSimpleBackgroundWorkerManager::_DoWork(int64_t  ticksOfWork)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"_DoWork", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, ticksOfWork);
}
inline void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::WorkerSignup(::GlobalNamespace::IGorillaSimpleBackgroundWorker*  worker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {"WorkerSignup", {}, {::i2c::type_of<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worker);
}
inline void GlobalNamespace::GorillaSimpleBackgroundWorkerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager* GlobalNamespace::GorillaSimpleBackgroundWorkerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSimpleBackgroundWorkerManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSimpleBackgroundWorkerManager::GorillaSimpleBackgroundWorkerManager()   {
}
