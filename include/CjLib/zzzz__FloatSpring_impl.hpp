#pragma once
// IWYU pragma private; include "CjLib/FloatSpring.hpp"
#include "CjLib/zzzz__FloatSpring_def.hpp"
//  Writing Method size for method: ::CjLib::FloatSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::FloatSpring::*)()>(&::CjLib::FloatSpring::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0c54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::FloatSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::FloatSpring::*)(float_t)>(&::CjLib::FloatSpring::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e0c554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"Reset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::FloatSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::FloatSpring::*)(float_t, float_t)>(&::CjLib::FloatSpring::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"Reset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::FloatSpring.TrackDampingRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::CjLib::FloatSpring::*)(float_t, float_t, float_t, float_t)>(&::CjLib::FloatSpring::TrackDampingRatio)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e0c568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::FloatSpring.TrackHalfLife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::CjLib::FloatSpring::*)(float_t, float_t, float_t, float_t)>(&::CjLib::FloatSpring::TrackHalfLife)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e0c6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::FloatSpring.TrackExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::CjLib::FloatSpring::*)(float_t, float_t, float_t)>(&::CjLib::FloatSpring::TrackExponential)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e0c7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"TrackExponential", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void CjLib::FloatSpring::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::CjLib::FloatSpring>(std::forward<int32_t>(value));
}
inline int32_t CjLib::FloatSpring::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::CjLib::FloatSpring>();
}
inline void CjLib::FloatSpring::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void CjLib::FloatSpring::Reset(float_t  initValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"Reset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void CjLib::FloatSpring::Reset(float_t  initValue, float_t  initVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"Reset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue, initVelocity);
}
inline float_t CjLib::FloatSpring::TrackDampingRatio(float_t  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, targetValue, angularFrequency, dampingRatio, deltaTime);
}
inline float_t CjLib::FloatSpring::TrackHalfLife(float_t  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, targetValue, frequencyHz, halfLife, deltaTime);
}
inline float_t CjLib::FloatSpring::TrackExponential(float_t  targetValue, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::FloatSpring>(),
                        {"TrackExponential", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, targetValue, halfLife, deltaTime);
}
// Ctor Parameters [CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Velocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::CjLib::FloatSpring::FloatSpring(float_t  Value, float_t  Velocity) noexcept  {
this->Value = Value;
this->Velocity = Velocity;
}
// Ctor Parameters []
constexpr ::CjLib::FloatSpring::FloatSpring()   {
}
