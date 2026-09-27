#pragma once
// IWYU pragma private; include "BoingKit/Vector2Spring.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "BoingKit/zzzz__Vector2Spring_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::BoingKit::Vector2Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Vector2Spring::*)()>(&::BoingKit::Vector2Spring::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2ceac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector2Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Vector2Spring::*)(::UnityEngine::Vector2)>(&::BoingKit::Vector2Spring::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e2cf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector2Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Vector2Spring::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::BoingKit::Vector2Spring::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2cf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector2Spring.TrackDampingRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::BoingKit::Vector2Spring::*)(::UnityEngine::Vector2, float_t, float_t, float_t)>(&::BoingKit::Vector2Spring::TrackDampingRatio)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5e2cf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector2Spring.TrackHalfLife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::BoingKit::Vector2Spring::*)(::UnityEngine::Vector2, float_t, float_t, float_t)>(&::BoingKit::Vector2Spring::TrackHalfLife)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e2d1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector2Spring.TrackExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::BoingKit::Vector2Spring::*)(::UnityEngine::Vector2, float_t, float_t)>(&::BoingKit::Vector2Spring::TrackExponential)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e2d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::Vector2Spring::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::BoingKit::Vector2Spring>(std::forward<int32_t>(value));
}
inline int32_t BoingKit::Vector2Spring::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::BoingKit::Vector2Spring>();
}
inline void BoingKit::Vector2Spring::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BoingKit::Vector2Spring::Reset(::UnityEngine::Vector2  initValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void BoingKit::Vector2Spring::Reset(::UnityEngine::Vector2  initValue, ::UnityEngine::Vector2  initVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue, initVelocity);
}
inline ::UnityEngine::Vector2 BoingKit::Vector2Spring::TrackDampingRatio(::UnityEngine::Vector2  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, targetValue, angularFrequency, dampingRatio, deltaTime);
}
inline ::UnityEngine::Vector2 BoingKit::Vector2Spring::TrackHalfLife(::UnityEngine::Vector2  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, targetValue, frequencyHz, halfLife, deltaTime);
}
inline ::UnityEngine::Vector2 BoingKit::Vector2Spring::TrackExponential(::UnityEngine::Vector2  targetValue, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector2Spring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, targetValue, halfLife, deltaTime);
}
// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Velocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BoingKit::Vector2Spring::Vector2Spring(::UnityEngine::Vector2  Value, ::UnityEngine::Vector2  Velocity) noexcept  {
this->Value = Value;
this->Velocity = Velocity;
}
// Ctor Parameters []
constexpr ::BoingKit::Vector2Spring::Vector2Spring()   {
}
