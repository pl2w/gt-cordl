#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/MoveByKeys.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__MoveByKeys_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::MoveByKeys.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::MoveByKeys::*)()>(&::Photon::Pun::UtilityScripts::MoveByKeys::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa739c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::MoveByKeys*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::MoveByKeys.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::MoveByKeys::*)()>(&::Photon::Pun::UtilityScripts::MoveByKeys::FixedUpdate)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0xa739d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::MoveByKeys*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::MoveByKeys._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::MoveByKeys::*)()>(&::Photon::Pun::UtilityScripts::MoveByKeys::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa73a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::MoveByKeys*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speed;
}
constexpr float_t const& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speed;
}
constexpr void Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_set_Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Speed = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_JumpForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JumpForce;
}
constexpr float_t const& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_JumpForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JumpForce;
}
constexpr void Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_set_JumpForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JumpForce = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_JumpTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JumpTimeout;
}
constexpr float_t const& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_JumpTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JumpTimeout;
}
constexpr void Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_set_JumpTimeout(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JumpTimeout = value;
}
constexpr bool& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_isSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSprite;
}
constexpr bool const& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_isSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSprite;
}
constexpr void Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_set_isSprite(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSprite = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_jumpingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpingTime;
}
constexpr float_t const& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_jumpingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpingTime;
}
constexpr void Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_set_jumpingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpingTime = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___body;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___body;
}
constexpr void Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_set_body(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___body = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D>& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_body2d()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___body2d;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_get_body2d() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___body2d;
}
constexpr void Photon::Pun::UtilityScripts::MoveByKeys::__cordl_internal_set_body2d(::UnityW<::UnityEngine::Rigidbody2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___body2d = value;
}
inline void Photon::Pun::UtilityScripts::MoveByKeys::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::MoveByKeys*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::MoveByKeys::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::MoveByKeys*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::MoveByKeys::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::MoveByKeys*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::MoveByKeys* Photon::Pun::UtilityScripts::MoveByKeys::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::MoveByKeys*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::MoveByKeys::MoveByKeys()   {
}
