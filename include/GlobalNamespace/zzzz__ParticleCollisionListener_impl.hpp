#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleCollisionListener.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleCollisionListener_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleCollisionEvent_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleCollisionListener.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleCollisionListener::*)()>(&::GlobalNamespace::ParticleCollisionListener::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a1f5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleCollisionListener*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleCollisionListener.OnCollisionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleCollisionListener::*)(::UnityEngine::ParticleCollisionEvent)>(&::GlobalNamespace::ParticleCollisionListener::OnCollisionEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1f678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ParticleCollisionListener*>(),
                    {::i2c::class_of<::GlobalNamespace::ParticleCollisionListener*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleCollisionListener.OnParticleCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleCollisionListener::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ParticleCollisionListener::OnParticleCollision)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a1f67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleCollisionListener*>(),
                        {"OnParticleCollision", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleCollisionListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleCollisionListener::*)()>(&::GlobalNamespace::ParticleCollisionListener::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a1f744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleCollisionListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ParticleCollisionListener::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ParticleCollisionListener::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::ParticleCollisionListener::__cordl_internal_set_target(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*& GlobalNamespace::ParticleCollisionListener::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>* const& GlobalNamespace::ParticleCollisionListener::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GlobalNamespace::ParticleCollisionListener::__cordl_internal_set__events(::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline void GlobalNamespace::ParticleCollisionListener::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleCollisionListener*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleCollisionListener::OnCollisionEvent(::UnityEngine::ParticleCollisionEvent  ev)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ParticleCollisionListener*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void GlobalNamespace::ParticleCollisionListener::OnParticleCollision(::UnityEngine::GameObject*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleCollisionListener*>(),
                        {"OnParticleCollision", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::ParticleCollisionListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleCollisionListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleCollisionListener* GlobalNamespace::ParticleCollisionListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleCollisionListener*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleCollisionListener::ParticleCollisionListener()   {
}
