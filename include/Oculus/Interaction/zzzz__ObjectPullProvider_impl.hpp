#pragma once
// IWYU pragma private; include "Oculus/Interaction/ObjectPullProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ObjectPullProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ObjectPullProvider.get_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ObjectPullProvider::*)()>(&::Oculus::Interaction::ObjectPullProvider::get_Speed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4752c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"get_Speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPullProvider.set_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ObjectPullProvider::*)(float_t)>(&::Oculus::Interaction::ObjectPullProvider::set_Speed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4752cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPullProvider.get_DeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ObjectPullProvider::*)()>(&::Oculus::Interaction::ObjectPullProvider::get_DeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4752d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"get_DeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPullProvider.set_DeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ObjectPullProvider::*)(float_t)>(&::Oculus::Interaction::ObjectPullProvider::set_DeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4752dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"set_DeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPullProvider.CreateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::ObjectPullProvider::*)()>(&::Oculus::Interaction::ObjectPullProvider::CreateMovement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4752e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPullProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ObjectPullProvider::*)()>(&::Oculus::Interaction::ObjectPullProvider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa475428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::ObjectPullProvider::__cordl_internal_get__speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr float_t const& Oculus::Interaction::ObjectPullProvider::__cordl_internal_get__speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr void Oculus::Interaction::ObjectPullProvider::__cordl_internal_set__speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speed = value;
}
constexpr float_t& Oculus::Interaction::ObjectPullProvider::__cordl_internal_get__deadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr float_t const& Oculus::Interaction::ObjectPullProvider::__cordl_internal_get__deadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr void Oculus::Interaction::ObjectPullProvider::__cordl_internal_set__deadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deadZone = value;
}
inline float_t Oculus::Interaction::ObjectPullProvider::get_Speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"get_Speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::ObjectPullProvider::set_Speed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::ObjectPullProvider::get_DeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"get_DeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::ObjectPullProvider::set_DeadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"set_DeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::ObjectPullProvider::CreateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method);
}
inline void Oculus::Interaction::ObjectPullProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPullProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ObjectPullProvider* Oculus::Interaction::ObjectPullProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ObjectPullProvider*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr  Oculus::Interaction::ObjectPullProvider::operator ::Oculus::Interaction::IMovementProvider*() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* Oculus::Interaction::ObjectPullProvider::i___Oculus__Interaction__IMovementProvider() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ObjectPullProvider::ObjectPullProvider()   {
}
