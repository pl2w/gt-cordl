#pragma once
// IWYU pragma private; include "Liv/Lck/LCKPluginManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LCKPluginManager_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LCKPluginManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginManager::*)()>(&::Liv::Lck::LCKPluginManager::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9cf2388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginManager::*)()>(&::Liv::Lck::LCKPluginManager::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cf249c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginManager.TestPluginAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginManager::*)()>(&::Liv::Lck::LCKPluginManager::TestPluginAccess)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9cf24a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginManager*>(),
                        {"TestPluginAccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LCKPluginManager::*)()>(&::Liv::Lck::LCKPluginManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cf2614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::LCKPluginManager::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::LCKPluginManager::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::LCKPluginManager::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr bool& Liv::Lck::LCKPluginManager::__cordl_internal_get_autoInitializePlugins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoInitializePlugins;
}
constexpr bool const& Liv::Lck::LCKPluginManager::__cordl_internal_get_autoInitializePlugins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoInitializePlugins;
}
constexpr void Liv::Lck::LCKPluginManager::__cordl_internal_set_autoInitializePlugins(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoInitializePlugins = value;
}
constexpr bool& Liv::Lck::LCKPluginManager::__cordl_internal_get_logPluginInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPluginInfo;
}
constexpr bool const& Liv::Lck::LCKPluginManager::__cordl_internal_get_logPluginInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPluginInfo;
}
constexpr void Liv::Lck::LCKPluginManager::__cordl_internal_set_logPluginInfo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logPluginInfo = value;
}
inline void Liv::Lck::LCKPluginManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LCKPluginManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LCKPluginManager::TestPluginAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginManager*>(),
                        {"TestPluginAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LCKPluginManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LCKPluginManager* Liv::Lck::LCKPluginManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LCKPluginManager*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LCKPluginManager::LCKPluginManager()   {
}
