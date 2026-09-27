#pragma once
// IWYU pragma private; include "Oculus/Interaction/AudioPhysics.hpp"
#include "Oculus/Interaction/zzzz__ImpactAudio_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__AudioPhysics_def.hpp"
#include "Oculus/Interaction/zzzz__AudioPhysics_def.hpp"
#include "Oculus/Interaction/zzzz__AudioTrigger_def.hpp"
#include "Oculus/Interaction/zzzz__ImpactAudio_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics::*)()>(&::Oculus::Interaction::AudioPhysics::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa42b538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                    {::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics::*)()>(&::Oculus::Interaction::AudioPhysics::OnEnable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa42b5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                    {::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics::*)()>(&::Oculus::Interaction::AudioPhysics::OnDisable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa42b710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                    {::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics::*)()>(&::Oculus::Interaction::AudioPhysics::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa42b858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                    {::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics.HandleCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics::*)(::UnityEngine::Collision*)>(&::Oculus::Interaction::AudioPhysics::HandleCollisionEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa42b8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"HandleCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics.TryPlayCollisionAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics::*)(::UnityEngine::Collision*, ::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::AudioPhysics::TryPlayCollisionAudio)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa42b8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"TryPlayCollisionAudio", {}, {::i2c::type_of<::UnityEngine::Collision*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics.PlayCollisionAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics::*)(::Oculus::Interaction::ImpactAudio, float_t)>(&::Oculus::Interaction::AudioPhysics::PlayCollisionAudio)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa42ba98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"PlayCollisionAudio", {}, {::i2c::type_of<::Oculus::Interaction::ImpactAudio>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics.GetObjectVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Oculus::Interaction::AudioPhysics*)>(&::Oculus::Interaction::AudioPhysics::GetObjectVelocity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa42ba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"GetObjectVelocity", {}, {::i2c::type_of<::Oculus::Interaction::AudioPhysics*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics.PlaySoundOnAudioTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics::*)(::Oculus::Interaction::AudioTrigger*)>(&::Oculus::Interaction::AudioPhysics::PlaySoundOnAudioTrigger)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa42bb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"PlaySoundOnAudioTrigger", {}, {::i2c::type_of<::Oculus::Interaction::AudioTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics::*)()>(&::Oculus::Interaction::AudioPhysics::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa42bd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::AudioPhysics::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::AudioPhysics::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::AudioPhysics::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::Oculus::Interaction::ImpactAudio& Oculus::Interaction::AudioPhysics::__cordl_internal_get__impactAudioEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____impactAudioEvents;
}
constexpr ::Oculus::Interaction::ImpactAudio const& Oculus::Interaction::AudioPhysics::__cordl_internal_get__impactAudioEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____impactAudioEvents;
}
constexpr void Oculus::Interaction::AudioPhysics::__cordl_internal_set__impactAudioEvents(::Oculus::Interaction::ImpactAudio  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____impactAudioEvents = value;
}
constexpr float_t& Oculus::Interaction::AudioPhysics::__cordl_internal_get__velocitySplit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocitySplit;
}
constexpr float_t const& Oculus::Interaction::AudioPhysics::__cordl_internal_get__velocitySplit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocitySplit;
}
constexpr void Oculus::Interaction::AudioPhysics::__cordl_internal_set__velocitySplit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocitySplit = value;
}
constexpr float_t& Oculus::Interaction::AudioPhysics::__cordl_internal_get__minimumVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimumVelocity;
}
constexpr float_t const& Oculus::Interaction::AudioPhysics::__cordl_internal_get__minimumVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimumVelocity;
}
constexpr void Oculus::Interaction::AudioPhysics::__cordl_internal_set__minimumVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minimumVelocity = value;
}
constexpr float_t& Oculus::Interaction::AudioPhysics::__cordl_internal_get__timeBetweenCollisions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeBetweenCollisions;
}
constexpr float_t const& Oculus::Interaction::AudioPhysics::__cordl_internal_get__timeBetweenCollisions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeBetweenCollisions;
}
constexpr void Oculus::Interaction::AudioPhysics::__cordl_internal_set__timeBetweenCollisions(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeBetweenCollisions = value;
}
constexpr bool& Oculus::Interaction::AudioPhysics::__cordl_internal_get__allowMultipleCollisions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowMultipleCollisions;
}
constexpr bool const& Oculus::Interaction::AudioPhysics::__cordl_internal_get__allowMultipleCollisions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowMultipleCollisions;
}
constexpr void Oculus::Interaction::AudioPhysics::__cordl_internal_set__allowMultipleCollisions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowMultipleCollisions = value;
}
constexpr float_t& Oculus::Interaction::AudioPhysics::__cordl_internal_get__timeAtLastCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeAtLastCollision;
}
constexpr float_t const& Oculus::Interaction::AudioPhysics::__cordl_internal_get__timeAtLastCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeAtLastCollision;
}
constexpr void Oculus::Interaction::AudioPhysics::__cordl_internal_set__timeAtLastCollision(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeAtLastCollision = value;
}
constexpr bool& Oculus::Interaction::AudioPhysics::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::AudioPhysics::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::AudioPhysics::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::UnityW<::Oculus::Interaction::AudioPhysics_CollisionEvents>& Oculus::Interaction::AudioPhysics::__cordl_internal_get__collisionEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collisionEvents;
}
constexpr ::UnityW<::Oculus::Interaction::AudioPhysics_CollisionEvents> const& Oculus::Interaction::AudioPhysics::__cordl_internal_get__collisionEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collisionEvents;
}
constexpr void Oculus::Interaction::AudioPhysics::__cordl_internal_set__collisionEvents(::UnityW<::Oculus::Interaction::AudioPhysics_CollisionEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collisionEvents = value;
}
inline void Oculus::Interaction::AudioPhysics::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioPhysics::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioPhysics::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioPhysics::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioPhysics::HandleCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"HandleCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void Oculus::Interaction::AudioPhysics::TryPlayCollisionAudio(::UnityEngine::Collision*  collision, ::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"TryPlayCollisionAudio", {}, {::i2c::type_of<::UnityEngine::Collision*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision, rigidbody);
}
inline void Oculus::Interaction::AudioPhysics::PlayCollisionAudio(::Oculus::Interaction::ImpactAudio  impactAudio, float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"PlayCollisionAudio", {}, {::i2c::type_of<::Oculus::Interaction::ImpactAudio>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impactAudio, magnitude);
}
inline float_t Oculus::Interaction::AudioPhysics::GetObjectVelocity(::Oculus::Interaction::AudioPhysics*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"GetObjectVelocity", {}, {::i2c::type_of<::Oculus::Interaction::AudioPhysics*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, target);
}
inline void Oculus::Interaction::AudioPhysics::PlaySoundOnAudioTrigger(::Oculus::Interaction::AudioTrigger*  audioTrigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {"PlaySoundOnAudioTrigger", {}, {::i2c::type_of<::Oculus::Interaction::AudioTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioTrigger);
}
inline void Oculus::Interaction::AudioPhysics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::AudioPhysics* Oculus::Interaction::AudioPhysics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::AudioPhysics*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::AudioPhysics::AudioPhysics()   {
}
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics_CollisionEvents.add_WhenCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics_CollisionEvents::*)(::System::Action_1<::UnityEngine::Collision*>*)>(&::Oculus::Interaction::AudioPhysics_CollisionEvents::add_WhenCollisionEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa42b660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics_CollisionEvents*>(),
                        {"add_WhenCollisionEnter", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Collision*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics_CollisionEvents.remove_WhenCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics_CollisionEvents::*)(::System::Action_1<::UnityEngine::Collision*>*)>(&::Oculus::Interaction::AudioPhysics_CollisionEvents::remove_WhenCollisionEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa42b7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics_CollisionEvents*>(),
                        {"remove_WhenCollisionEnter", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Collision*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics_CollisionEvents.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics_CollisionEvents::*)(::UnityEngine::Collision*)>(&::Oculus::Interaction::AudioPhysics_CollisionEvents::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa42bd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics_CollisionEvents*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioPhysics_CollisionEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioPhysics_CollisionEvents::*)()>(&::Oculus::Interaction::AudioPhysics_CollisionEvents::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa42bd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics_CollisionEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::Collision*>*& Oculus::Interaction::AudioPhysics_CollisionEvents::__cordl_internal_get_WhenCollisionEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenCollisionEnter;
}
constexpr ::System::Action_1<::UnityEngine::Collision*>* const& Oculus::Interaction::AudioPhysics_CollisionEvents::__cordl_internal_get_WhenCollisionEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenCollisionEnter;
}
constexpr void Oculus::Interaction::AudioPhysics_CollisionEvents::__cordl_internal_set_WhenCollisionEnter(::System::Action_1<::UnityEngine::Collision*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenCollisionEnter = value;
}
inline void Oculus::Interaction::AudioPhysics_CollisionEvents::add_WhenCollisionEnter(::System::Action_1<::UnityEngine::Collision*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics_CollisionEvents*>(),
                        {"add_WhenCollisionEnter", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Collision*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::AudioPhysics_CollisionEvents::remove_WhenCollisionEnter(::System::Action_1<::UnityEngine::Collision*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics_CollisionEvents*>(),
                        {"remove_WhenCollisionEnter", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Collision*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::AudioPhysics_CollisionEvents::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics_CollisionEvents*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void Oculus::Interaction::AudioPhysics_CollisionEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioPhysics_CollisionEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::AudioPhysics_CollisionEvents* Oculus::Interaction::AudioPhysics_CollisionEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::AudioPhysics_CollisionEvents*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::AudioPhysics_CollisionEvents::AudioPhysics_CollisionEvents()   {
}
//  Writing Method size for method: ::Oculus::Interaction::CollisionEvents_AudioPhysics___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CollisionEvents_AudioPhysics___c::*)()>(&::Oculus::Interaction::CollisionEvents_AudioPhysics___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CollisionEvents_AudioPhysics___c.__ctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CollisionEvents_AudioPhysics___c::*)(::UnityEngine::Collision*)>(&::Oculus::Interaction::CollisionEvents_AudioPhysics___c::__ctor_b__4_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa42becc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>(),
                        {"<.ctor>b__4_0", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::CollisionEvents_AudioPhysics___c::setStaticF___9(::Oculus::Interaction::CollisionEvents_AudioPhysics___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::CollisionEvents_AudioPhysics___c*, "<>9", ::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>(std::forward<::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>(value));
}
inline ::Oculus::Interaction::CollisionEvents_AudioPhysics___c* Oculus::Interaction::CollisionEvents_AudioPhysics___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::CollisionEvents_AudioPhysics___c*, "<>9", ::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>();
}
inline void Oculus::Interaction::CollisionEvents_AudioPhysics___c::setStaticF___9__4_0(::System::Action_1<::UnityEngine::Collision*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Collision*>*, "<>9__4_0", ::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>(std::forward<::System::Action_1<::UnityEngine::Collision*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Collision*>* Oculus::Interaction::CollisionEvents_AudioPhysics___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Collision*>*, "<>9__4_0", ::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>();
}
inline void Oculus::Interaction::CollisionEvents_AudioPhysics___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::CollisionEvents_AudioPhysics___c::__ctor_b__4_0(::UnityEngine::Collision*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>(),
                        {"<.ctor>b__4_0", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::CollisionEvents_AudioPhysics___c* Oculus::Interaction::CollisionEvents_AudioPhysics___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::CollisionEvents_AudioPhysics___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::CollisionEvents_AudioPhysics___c::CollisionEvents_AudioPhysics___c()   {
}
