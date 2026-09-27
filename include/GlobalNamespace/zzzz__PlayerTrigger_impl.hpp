#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerTrigger_def.hpp"
#include "GlobalNamespace/zzzz__CompositeTriggerEvents_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerTrigger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTrigger::*)()>(&::GlobalNamespace::PlayerTrigger::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5abbe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTrigger.OnCompositeTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerTrigger::OnCompositeTriggerEnter)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5abbf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(),
                        {"OnCompositeTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTrigger.OnCompositeTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerTrigger::OnCompositeTriggerExit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5abc01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(),
                        {"OnCompositeTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTrigger.PlayerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTrigger::*)()>(&::GlobalNamespace::PlayerTrigger::PlayerEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5abc0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTrigger.PlayerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTrigger::*)()>(&::GlobalNamespace::PlayerTrigger::PlayerExit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5abc0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTrigger::*)()>(&::GlobalNamespace::PlayerTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abc0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerTrigger::__cordl_internal_get_isPlayerCollided()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayerCollided;
}
constexpr bool const& GlobalNamespace::PlayerTrigger::__cordl_internal_get_isPlayerCollided() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayerCollided;
}
constexpr void GlobalNamespace::PlayerTrigger::__cordl_internal_set_isPlayerCollided(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlayerCollided = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::PlayerTrigger::__cordl_internal_get_playerCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::PlayerTrigger::__cordl_internal_get_playerCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCollider;
}
constexpr void GlobalNamespace::PlayerTrigger::__cordl_internal_set_playerCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& GlobalNamespace::PlayerTrigger::__cordl_internal_get_triggerCollisionEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCollisionEvents;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& GlobalNamespace::PlayerTrigger::__cordl_internal_get_triggerCollisionEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCollisionEvents;
}
constexpr void GlobalNamespace::PlayerTrigger::__cordl_internal_set_triggerCollisionEvents(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerCollisionEvents = value;
}
inline void GlobalNamespace::PlayerTrigger::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTrigger::OnCompositeTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(),
                        {"OnCompositeTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::PlayerTrigger::OnCompositeTriggerExit(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(),
                        {"OnCompositeTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::PlayerTrigger::PlayerEnter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTrigger::PlayerExit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerTrigger* GlobalNamespace::PlayerTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerTrigger::PlayerTrigger()   {
}
