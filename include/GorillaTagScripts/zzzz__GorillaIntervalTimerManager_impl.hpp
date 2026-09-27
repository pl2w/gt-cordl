#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaIntervalTimerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__GorillaIntervalTimerManager_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaIntervalTimer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GorillaIntervalTimerManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaIntervalTimerManager::*)()>(&::GorillaTagScripts::GorillaIntervalTimerManager::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5bc9154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaIntervalTimerManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::GorillaIntervalTimerManager::CreateManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bc9374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaIntervalTimerManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::GorillaIntervalTimerManager*)>(&::GorillaTagScripts::GorillaIntervalTimerManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5bc9290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GorillaTagScripts::GorillaIntervalTimerManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaIntervalTimerManager.RegisterGorillaTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::GorillaIntervalTimer*)>(&::GorillaTagScripts::GorillaIntervalTimerManager::RegisterGorillaTimer)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5bc9434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"RegisterGorillaTimer", {}, {::i2c::type_of<::GorillaTagScripts::GorillaIntervalTimer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaIntervalTimerManager.UnregisterGorillaTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::GorillaIntervalTimer*)>(&::GorillaTagScripts::GorillaIntervalTimerManager::UnregisterGorillaTimer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5bc9588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"UnregisterGorillaTimer", {}, {::i2c::type_of<::GorillaTagScripts::GorillaIntervalTimer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaIntervalTimerManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaIntervalTimerManager::*)()>(&::GorillaTagScripts::GorillaIntervalTimerManager::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5bc9688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaIntervalTimerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaIntervalTimerManager::*)()>(&::GorillaTagScripts::GorillaIntervalTimerManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc9758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::GorillaIntervalTimerManager::setStaticF_instance(::UnityW<::GorillaTagScripts::GorillaIntervalTimerManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::GorillaIntervalTimerManager>, "instance", ::GorillaTagScripts::GorillaIntervalTimerManager*>(std::forward<::UnityW<::GorillaTagScripts::GorillaIntervalTimerManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::GorillaIntervalTimerManager> GorillaTagScripts::GorillaIntervalTimerManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::GorillaIntervalTimerManager>, "instance", ::GorillaTagScripts::GorillaIntervalTimerManager*>();
}
inline void GorillaTagScripts::GorillaIntervalTimerManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GorillaTagScripts::GorillaIntervalTimerManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::GorillaIntervalTimerManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GorillaTagScripts::GorillaIntervalTimerManager*>();
}
inline void GorillaTagScripts::GorillaIntervalTimerManager::setStaticF_allTimers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaIntervalTimer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaIntervalTimer>>*, "allTimers", ::GorillaTagScripts::GorillaIntervalTimerManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaIntervalTimer>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaIntervalTimer>>* GorillaTagScripts::GorillaIntervalTimerManager::getStaticF_allTimers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaIntervalTimer>>*, "allTimers", ::GorillaTagScripts::GorillaIntervalTimerManager*>();
}
inline void GorillaTagScripts::GorillaIntervalTimerManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaIntervalTimerManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::GorillaIntervalTimerManager::SetInstance(::GorillaTagScripts::GorillaIntervalTimerManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GorillaTagScripts::GorillaIntervalTimerManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GorillaTagScripts::GorillaIntervalTimerManager::RegisterGorillaTimer(::GorillaTagScripts::GorillaIntervalTimer*  gTimer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"RegisterGorillaTimer", {}, {::i2c::type_of<::GorillaTagScripts::GorillaIntervalTimer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gTimer);
}
inline void GorillaTagScripts::GorillaIntervalTimerManager::UnregisterGorillaTimer(::GorillaTagScripts::GorillaIntervalTimer*  gTimer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"UnregisterGorillaTimer", {}, {::i2c::type_of<::GorillaTagScripts::GorillaIntervalTimer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gTimer);
}
inline void GorillaTagScripts::GorillaIntervalTimerManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaIntervalTimerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaIntervalTimerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GorillaIntervalTimerManager* GorillaTagScripts::GorillaIntervalTimerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaIntervalTimerManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaIntervalTimerManager::GorillaIntervalTimerManager()   {
}
