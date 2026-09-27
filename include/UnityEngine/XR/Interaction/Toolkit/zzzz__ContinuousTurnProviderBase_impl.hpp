#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ContinuousTurnProviderBase.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousTurnProviderBase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase.get_turnSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::get_turnSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4184f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {"get_turnSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase.set_turnSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::set_turnSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb418500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {"set_turnSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::Update)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb418508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase.ReadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::ReadInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase.GetTurnAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::GetTurnAmount)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb4186c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase.TurnRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::TurnRig)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb418584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {"TurnRig", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4187d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::__cordl_internal_get_m_TurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::__cordl_internal_get_m_TurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::__cordl_internal_set_m_TurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TurnSpeed = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::__cordl_internal_get_m_IsTurningXROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTurningXROrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::__cordl_internal_get_m_IsTurningXROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTurningXROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::__cordl_internal_set_m_IsTurningXROrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsTurningXROrigin = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::get_turnSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {"get_turnSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::set_turnSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {"set_turnSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::ReadInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::GetTurnAmount(::UnityEngine::Vector2  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, input);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::TurnRig(float_t  turnAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {"TurnRig", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnAmount);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase* UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::ContinuousTurnProviderBase()   {
}
