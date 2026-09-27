#pragma once
// IWYU pragma private; include "CjLib/Vector2Spring.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "CjLib/zzzz__Vector2Spring_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::CjLib::Vector2Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::Vector2Spring::*)()>(&::CjLib::Vector2Spring::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e0c8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector2Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::Vector2Spring::*)(::UnityEngine::Vector2)>(&::CjLib::Vector2Spring::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e0c938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector2Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::Vector2Spring::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::CjLib::Vector2Spring::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e0c98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector2Spring.TrackDampingRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::CjLib::Vector2Spring::*)(::UnityEngine::Vector2, float_t, float_t, float_t)>(&::CjLib::Vector2Spring::TrackDampingRatio)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5e0c998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector2Spring.TrackHalfLife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::CjLib::Vector2Spring::*)(::UnityEngine::Vector2, float_t, float_t, float_t)>(&::CjLib::Vector2Spring::TrackHalfLife)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e0cbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector2Spring.TrackExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::CjLib::Vector2Spring::*)(::UnityEngine::Vector2, float_t, float_t)>(&::CjLib::Vector2Spring::TrackExponential)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e0cd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void CjLib::Vector2Spring::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::CjLib::Vector2Spring>(std::forward<int32_t>(value));
}
inline int32_t CjLib::Vector2Spring::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::CjLib::Vector2Spring>();
}
inline void CjLib::Vector2Spring::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void CjLib::Vector2Spring::Reset(::UnityEngine::Vector2  initValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void CjLib::Vector2Spring::Reset(::UnityEngine::Vector2  initValue, ::UnityEngine::Vector2  initVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue, initVelocity);
}
inline ::UnityEngine::Vector2 CjLib::Vector2Spring::TrackDampingRatio(::UnityEngine::Vector2  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, targetValue, angularFrequency, dampingRatio, deltaTime);
}
inline ::UnityEngine::Vector2 CjLib::Vector2Spring::TrackHalfLife(::UnityEngine::Vector2  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, targetValue, frequencyHz, halfLife, deltaTime);
}
inline ::UnityEngine::Vector2 CjLib::Vector2Spring::TrackExponential(::UnityEngine::Vector2  targetValue, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector2Spring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, targetValue, halfLife, deltaTime);
}
// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Velocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::CjLib::Vector2Spring::Vector2Spring(::UnityEngine::Vector2  Value, ::UnityEngine::Vector2  Velocity) noexcept  {
this->Value = Value;
this->Velocity = Velocity;
}
// Ctor Parameters []
constexpr ::CjLib::Vector2Spring::Vector2Spring()   {
}
