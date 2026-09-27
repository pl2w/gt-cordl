#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaTimerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__GorillaTimerManager_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaTimer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimerManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimerManager::*)()>(&::GorillaTagScripts::GorillaTimerManager::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5bcb16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimerManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::GorillaTimerManager::CreateManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bcb38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimerManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::GorillaTimerManager*)>(&::GorillaTagScripts::GorillaTimerManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5bcb2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GorillaTagScripts::GorillaTimerManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimerManager.RegisterGorillaTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::GorillaTimer*)>(&::GorillaTagScripts::GorillaTimerManager::RegisterGorillaTimer)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5bcadb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"RegisterGorillaTimer", {}, {::i2c::type_of<::GorillaTagScripts::GorillaTimer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimerManager.UnregisterGorillaTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::GorillaTimer*)>(&::GorillaTagScripts::GorillaTimerManager::UnregisterGorillaTimer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5bcaf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"UnregisterGorillaTimer", {}, {::i2c::type_of<::GorillaTagScripts::GorillaTimer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimerManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimerManager::*)()>(&::GorillaTagScripts::GorillaTimerManager::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bcb44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimerManager::*)()>(&::GorillaTagScripts::GorillaTimerManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcb518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::GorillaTimerManager::setStaticF_instance(::UnityW<::GorillaTagScripts::GorillaTimerManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::GorillaTimerManager>, "instance", ::GorillaTagScripts::GorillaTimerManager*>(std::forward<::UnityW<::GorillaTagScripts::GorillaTimerManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::GorillaTimerManager> GorillaTagScripts::GorillaTimerManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::GorillaTimerManager>, "instance", ::GorillaTagScripts::GorillaTimerManager*>();
}
inline void GorillaTagScripts::GorillaTimerManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GorillaTagScripts::GorillaTimerManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::GorillaTimerManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GorillaTagScripts::GorillaTimerManager*>();
}
inline void GorillaTagScripts::GorillaTimerManager::setStaticF_allTimers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*, "allTimers", ::GorillaTagScripts::GorillaTimerManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaTimer>>* GorillaTagScripts::GorillaTimerManager::getStaticF_allTimers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*, "allTimers", ::GorillaTagScripts::GorillaTimerManager*>();
}
inline void GorillaTagScripts::GorillaTimerManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimerManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimerManager::SetInstance(::GorillaTagScripts::GorillaTimerManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GorillaTagScripts::GorillaTimerManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GorillaTagScripts::GorillaTimerManager::RegisterGorillaTimer(::GorillaTagScripts::GorillaTimer*  gTimer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"RegisterGorillaTimer", {}, {::i2c::type_of<::GorillaTagScripts::GorillaTimer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gTimer);
}
inline void GorillaTagScripts::GorillaTimerManager::UnregisterGorillaTimer(::GorillaTagScripts::GorillaTimer*  gTimer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"UnregisterGorillaTimer", {}, {::i2c::type_of<::GorillaTagScripts::GorillaTimer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gTimer);
}
inline void GorillaTagScripts::GorillaTimerManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GorillaTimerManager* GorillaTagScripts::GorillaTimerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaTimerManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaTimerManager::GorillaTimerManager()   {
}
