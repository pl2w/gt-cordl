#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/RespawnOnDrop.hpp"
#include "Oculus/Interaction/zzzz__TwoGrabFreeTransformer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__RespawnOnDrop_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::RespawnOnDrop.get_WhenRespawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Oculus::Interaction::Samples::RespawnOnDrop::*)()>(&::Oculus::Interaction::Samples::RespawnOnDrop::get_WhenRespawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43decc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(),
                        {"get_WhenRespawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::RespawnOnDrop.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::RespawnOnDrop::*)()>(&::Oculus::Interaction::Samples::RespawnOnDrop::OnEnable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa43ded4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::RespawnOnDrop.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::RespawnOnDrop::*)()>(&::Oculus::Interaction::Samples::RespawnOnDrop::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa43dfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::RespawnOnDrop.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::RespawnOnDrop::*)()>(&::Oculus::Interaction::Samples::RespawnOnDrop::FixedUpdate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa43e1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::RespawnOnDrop.Respawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::RespawnOnDrop::*)()>(&::Oculus::Interaction::Samples::RespawnOnDrop::Respawn)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa43e000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(),
                        {"Respawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::RespawnOnDrop._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::RespawnOnDrop::*)()>(&::Oculus::Interaction::Samples::RespawnOnDrop::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa43e21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__yThresholdForRespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yThresholdForRespawn;
}
constexpr float_t const& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__yThresholdForRespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yThresholdForRespawn;
}
constexpr void Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_set__yThresholdForRespawn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yThresholdForRespawn = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__whenRespawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenRespawned;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__whenRespawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenRespawned;
}
constexpr void Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_set__whenRespawned(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenRespawned = value;
}
constexpr int32_t& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__sleepFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sleepFrames;
}
constexpr int32_t const& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__sleepFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sleepFrames;
}
constexpr void Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_set__sleepFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sleepFrames = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__initialPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialPosition;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__initialPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialPosition;
}
constexpr void Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_set__initialPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialPosition = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__initialRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialRotation;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__initialRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialRotation;
}
constexpr void Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_set__initialRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialRotation = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__initialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__initialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialScale;
}
constexpr void Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_set__initialScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialScale = value;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::TwoGrabFreeTransformer>>& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__freeTransformers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeTransformers;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::TwoGrabFreeTransformer>> const& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__freeTransformers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeTransformers;
}
constexpr void Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_set__freeTransformers(::ArrayW<::UnityW<::Oculus::Interaction::TwoGrabFreeTransformer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freeTransformers = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidBody;
}
constexpr void Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_set__rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidBody = value;
}
constexpr int32_t& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__sleepCountDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sleepCountDown;
}
constexpr int32_t const& Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_get__sleepCountDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sleepCountDown;
}
constexpr void Oculus::Interaction::Samples::RespawnOnDrop::__cordl_internal_set__sleepCountDown(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sleepCountDown = value;
}
inline ::UnityEngine::Events::UnityEvent* Oculus::Interaction::Samples::RespawnOnDrop::get_WhenRespawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(),
                        {"get_WhenRespawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::RespawnOnDrop::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::RespawnOnDrop::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::RespawnOnDrop::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::RespawnOnDrop::Respawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(),
                        {"Respawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::RespawnOnDrop::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::RespawnOnDrop*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::RespawnOnDrop* Oculus::Interaction::Samples::RespawnOnDrop::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::RespawnOnDrop*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::RespawnOnDrop::RespawnOnDrop()   {
}
