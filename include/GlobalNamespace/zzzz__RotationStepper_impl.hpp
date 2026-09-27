#pragma once
// IWYU pragma private; include "GlobalNamespace/RotationStepper.hpp"
#include "GlobalNamespace/zzzz__RotationStepper_ModeEnum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RotationStepper_def.hpp"
#include "GlobalNamespace/zzzz__RotationStepper_ModeEnum_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RotationStepper.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationStepper::*)()>(&::GlobalNamespace::RotationStepper::OnEnable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55eb590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationStepper*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationStepper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationStepper::*)()>(&::GlobalNamespace::RotationStepper::Update)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x55eb5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationStepper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationStepper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationStepper::*)()>(&::GlobalNamespace::RotationStepper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55eb6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationStepper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RotationStepper_ModeEnum& GlobalNamespace::RotationStepper::__cordl_internal_get_Mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mode;
}
constexpr ::GlobalNamespace::RotationStepper_ModeEnum const& GlobalNamespace::RotationStepper::__cordl_internal_get_Mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mode;
}
constexpr void GlobalNamespace::RotationStepper::__cordl_internal_set_Mode(::GlobalNamespace::RotationStepper_ModeEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mode = value;
}
constexpr float_t& GlobalNamespace::RotationStepper::__cordl_internal_get_Angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Angle;
}
constexpr float_t const& GlobalNamespace::RotationStepper::__cordl_internal_get_Angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Angle;
}
constexpr void GlobalNamespace::RotationStepper::__cordl_internal_set_Angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Angle = value;
}
constexpr float_t& GlobalNamespace::RotationStepper::__cordl_internal_get_Frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr float_t const& GlobalNamespace::RotationStepper::__cordl_internal_get_Frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr void GlobalNamespace::RotationStepper::__cordl_internal_set_Frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Frequency = value;
}
constexpr float_t& GlobalNamespace::RotationStepper::__cordl_internal_get_m_phase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_phase;
}
constexpr float_t const& GlobalNamespace::RotationStepper::__cordl_internal_get_m_phase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_phase;
}
constexpr void GlobalNamespace::RotationStepper::__cordl_internal_set_m_phase(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_phase = value;
}
inline void GlobalNamespace::RotationStepper::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationStepper*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotationStepper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationStepper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotationStepper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotationStepper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RotationStepper* GlobalNamespace::RotationStepper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotationStepper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotationStepper::RotationStepper()   {
}
