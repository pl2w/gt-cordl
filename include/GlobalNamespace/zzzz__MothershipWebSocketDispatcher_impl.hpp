#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketDispatcher.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketDispatcher_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDispatcher.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher> (*)()>(&::GlobalNamespace::MothershipWebSocketDispatcher::get_instance)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x53c1b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDispatcher.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDispatcher::*)()>(&::GlobalNamespace::MothershipWebSocketDispatcher::Awake)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x53c1d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDispatcher.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDispatcher::*)()>(&::GlobalNamespace::MothershipWebSocketDispatcher::Update)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x53c1e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDispatcher.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDispatcher::*)()>(&::GlobalNamespace::MothershipWebSocketDispatcher::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x53c1f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDispatcher.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDispatcher::*)()>(&::GlobalNamespace::MothershipWebSocketDispatcher::OnDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x53c1f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketDispatcher::*)()>(&::GlobalNamespace::MothershipWebSocketDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53c207c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipWebSocketDispatcher::setStaticF__instance(::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>, "_instance", ::GlobalNamespace::MothershipWebSocketDispatcher*>(std::forward<::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>>(value));
}
inline ::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher> GlobalNamespace::MothershipWebSocketDispatcher::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>, "_instance", ::GlobalNamespace::MothershipWebSocketDispatcher*>();
}
inline void GlobalNamespace::MothershipWebSocketDispatcher::setStaticF__isApplicationQuitting(bool  value)  {
::cordl_internals::setStaticField<bool, "_isApplicationQuitting", ::GlobalNamespace::MothershipWebSocketDispatcher*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::MothershipWebSocketDispatcher::getStaticF__isApplicationQuitting()  {
return ::cordl_internals::getStaticField<bool, "_isApplicationQuitting", ::GlobalNamespace::MothershipWebSocketDispatcher*>();
}
inline ::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher> GlobalNamespace::MothershipWebSocketDispatcher::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketDispatcher::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketDispatcher::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketDispatcher::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketDispatcher::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipWebSocketDispatcher* GlobalNamespace::MothershipWebSocketDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipWebSocketDispatcher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketDispatcher::MothershipWebSocketDispatcher()   {
}
