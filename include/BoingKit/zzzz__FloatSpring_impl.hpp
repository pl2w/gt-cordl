#pragma once
// IWYU pragma private; include "BoingKit/FloatSpring.hpp"
#include "BoingKit/zzzz__FloatSpring_def.hpp"
//  Writing Method size for method: ::BoingKit::FloatSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::FloatSpring::*)()>(&::BoingKit::FloatSpring::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2cb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::FloatSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::FloatSpring::*)(float_t)>(&::BoingKit::FloatSpring::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2cb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"Reset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::FloatSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::FloatSpring::*)(float_t, float_t)>(&::BoingKit::FloatSpring::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2cb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"Reset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::FloatSpring.TrackDampingRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BoingKit::FloatSpring::*)(float_t, float_t, float_t, float_t)>(&::BoingKit::FloatSpring::TrackDampingRatio)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e2cb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::FloatSpring.TrackHalfLife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BoingKit::FloatSpring::*)(float_t, float_t, float_t, float_t)>(&::BoingKit::FloatSpring::TrackHalfLife)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e2cc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::FloatSpring.TrackExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BoingKit::FloatSpring::*)(float_t, float_t, float_t)>(&::BoingKit::FloatSpring::TrackExponential)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e2cd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"TrackExponential", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::FloatSpring::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::BoingKit::FloatSpring>(std::forward<int32_t>(value));
}
inline int32_t BoingKit::FloatSpring::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::BoingKit::FloatSpring>();
}
inline void BoingKit::FloatSpring::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BoingKit::FloatSpring::Reset(float_t  initValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"Reset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void BoingKit::FloatSpring::Reset(float_t  initValue, float_t  initVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"Reset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue, initVelocity);
}
inline float_t BoingKit::FloatSpring::TrackDampingRatio(float_t  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, targetValue, angularFrequency, dampingRatio, deltaTime);
}
inline float_t BoingKit::FloatSpring::TrackHalfLife(float_t  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, targetValue, frequencyHz, halfLife, deltaTime);
}
inline float_t BoingKit::FloatSpring::TrackExponential(float_t  targetValue, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::FloatSpring>(),
                        {"TrackExponential", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, targetValue, halfLife, deltaTime);
}
// Ctor Parameters [CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Velocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BoingKit::FloatSpring::FloatSpring(float_t  Value, float_t  Velocity) noexcept  {
this->Value = Value;
this->Velocity = Velocity;
}
// Ctor Parameters []
constexpr ::BoingKit::FloatSpring::FloatSpring()   {
}
