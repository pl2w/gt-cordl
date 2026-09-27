#pragma once
// IWYU pragma private; include "GlobalNamespace/LifeCycleEventTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LifeCycleEventTrigger_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LifeCycleEventTrigger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LifeCycleEventTrigger::*)()>(&::GlobalNamespace::LifeCycleEventTrigger::Awake)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a1d794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LifeCycleEventTrigger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LifeCycleEventTrigger::*)()>(&::GlobalNamespace::LifeCycleEventTrigger::Start)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a1d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LifeCycleEventTrigger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LifeCycleEventTrigger::*)()>(&::GlobalNamespace::LifeCycleEventTrigger::OnEnable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a1d7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LifeCycleEventTrigger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LifeCycleEventTrigger::*)()>(&::GlobalNamespace::LifeCycleEventTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a1d7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LifeCycleEventTrigger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LifeCycleEventTrigger::*)()>(&::GlobalNamespace::LifeCycleEventTrigger::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a1d7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LifeCycleEventTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LifeCycleEventTrigger::*)()>(&::GlobalNamespace::LifeCycleEventTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1d7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAwake;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAwake;
}
constexpr void GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_set__onAwake(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAwake = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStart;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStart;
}
constexpr void GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_set__onStart(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStart = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onEnable;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onEnable;
}
constexpr void GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_set__onEnable(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onEnable = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onDisable;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onDisable;
}
constexpr void GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_set__onDisable(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onDisable = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onDestroy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onDestroy;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_get__onDestroy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onDestroy;
}
constexpr void GlobalNamespace::LifeCycleEventTrigger::__cordl_internal_set__onDestroy(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onDestroy = value;
}
inline void GlobalNamespace::LifeCycleEventTrigger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LifeCycleEventTrigger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LifeCycleEventTrigger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LifeCycleEventTrigger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LifeCycleEventTrigger::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LifeCycleEventTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LifeCycleEventTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LifeCycleEventTrigger* GlobalNamespace::LifeCycleEventTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LifeCycleEventTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LifeCycleEventTrigger::LifeCycleEventTrigger()   {
}
