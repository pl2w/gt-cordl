#pragma once
// IWYU pragma private; include "NetSynchrony/RandomDispatcherManager.hpp"
#include "NetSynchrony/zzzz__RandomDispatcher_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "NetSynchrony/zzzz__RandomDispatcherManager_def.hpp"
//  Writing Method size for method: ::NetSynchrony::RandomDispatcherManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcherManager::*)()>(&::NetSynchrony::RandomDispatcherManager::OnDisable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5cb7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcherManager.OnTimeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcherManager::*)()>(&::NetSynchrony::RandomDispatcherManager::OnTimeChanged)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cb79dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"OnTimeChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcherManager.AdjustedServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcherManager::*)()>(&::NetSynchrony::RandomDispatcherManager::AdjustedServerTime)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cb7a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"AdjustedServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcherManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcherManager::*)()>(&::NetSynchrony::RandomDispatcherManager::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5cb7b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcherManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcherManager::*)()>(&::NetSynchrony::RandomDispatcherManager::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cb7c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcherManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcherManager::*)()>(&::NetSynchrony::RandomDispatcherManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb7d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::NetSynchrony::RandomDispatcher>>& NetSynchrony::RandomDispatcherManager::__cordl_internal_get_randomDispatchers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomDispatchers;
}
constexpr ::ArrayW<::UnityW<::NetSynchrony::RandomDispatcher>> const& NetSynchrony::RandomDispatcherManager::__cordl_internal_get_randomDispatchers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomDispatchers;
}
constexpr void NetSynchrony::RandomDispatcherManager::__cordl_internal_set_randomDispatchers(::ArrayW<::UnityW<::NetSynchrony::RandomDispatcher>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomDispatchers = value;
}
constexpr double_t& NetSynchrony::RandomDispatcherManager::__cordl_internal_get_serverTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverTime;
}
constexpr double_t const& NetSynchrony::RandomDispatcherManager::__cordl_internal_get_serverTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverTime;
}
constexpr void NetSynchrony::RandomDispatcherManager::__cordl_internal_set_serverTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverTime = value;
}
inline void NetSynchrony::RandomDispatcherManager::setStaticF___instance(::UnityW<::NetSynchrony::RandomDispatcherManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::NetSynchrony::RandomDispatcherManager>, "__instance", ::NetSynchrony::RandomDispatcherManager*>(std::forward<::UnityW<::NetSynchrony::RandomDispatcherManager>>(value));
}
inline ::UnityW<::NetSynchrony::RandomDispatcherManager> NetSynchrony::RandomDispatcherManager::getStaticF___instance()  {
return ::cordl_internals::getStaticField<::UnityW<::NetSynchrony::RandomDispatcherManager>, "__instance", ::NetSynchrony::RandomDispatcherManager*>();
}
inline void NetSynchrony::RandomDispatcherManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NetSynchrony::RandomDispatcherManager::OnTimeChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"OnTimeChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NetSynchrony::RandomDispatcherManager::AdjustedServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"AdjustedServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NetSynchrony::RandomDispatcherManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NetSynchrony::RandomDispatcherManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NetSynchrony::RandomDispatcherManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcherManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::NetSynchrony::RandomDispatcherManager* NetSynchrony::RandomDispatcherManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NetSynchrony::RandomDispatcherManager*>());
}
// Ctor Parameters []
constexpr ::NetSynchrony::RandomDispatcherManager::RandomDispatcherManager()   {
}
