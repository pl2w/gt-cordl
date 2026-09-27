#pragma once
// IWYU pragma private; include "BoingKit/Vector3Spring.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__Vector3Spring_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BoingKit::Vector3Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Vector3Spring::*)()>(&::BoingKit::Vector3Spring::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e25780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector3Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Vector3Spring::*)(::UnityEngine::Vector3)>(&::BoingKit::Vector3Spring::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e259ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector3Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Vector3Spring::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::BoingKit::Vector3Spring::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e25878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector3Spring.TrackDampingRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BoingKit::Vector3Spring::*)(::UnityEngine::Vector3, float_t, float_t, float_t)>(&::BoingKit::Vector3Spring::TrackDampingRatio)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5e265a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector3Spring.TrackHalfLife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BoingKit::Vector3Spring::*)(::UnityEngine::Vector3, float_t, float_t, float_t)>(&::BoingKit::Vector3Spring::TrackHalfLife)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e26440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Vector3Spring.TrackExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BoingKit::Vector3Spring::*)(::UnityEngine::Vector3, float_t, float_t)>(&::BoingKit::Vector3Spring::TrackExponential)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e262fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::Vector3Spring::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::BoingKit::Vector3Spring>(std::forward<int32_t>(value));
}
inline int32_t BoingKit::Vector3Spring::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::BoingKit::Vector3Spring>();
}
inline void BoingKit::Vector3Spring::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BoingKit::Vector3Spring::Reset(::UnityEngine::Vector3  initValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void BoingKit::Vector3Spring::Reset(::UnityEngine::Vector3  initValue, ::UnityEngine::Vector3  initVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue, initVelocity);
}
inline ::UnityEngine::Vector3 BoingKit::Vector3Spring::TrackDampingRatio(::UnityEngine::Vector3  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, targetValue, angularFrequency, dampingRatio, deltaTime);
}
inline ::UnityEngine::Vector3 BoingKit::Vector3Spring::TrackHalfLife(::UnityEngine::Vector3  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, targetValue, frequencyHz, halfLife, deltaTime);
}
inline ::UnityEngine::Vector3 BoingKit::Vector3Spring::TrackExponential(::UnityEngine::Vector3  targetValue, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Vector3Spring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, targetValue, halfLife, deltaTime);
}
// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding0", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding1", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BoingKit::Vector3Spring::Vector3Spring(::UnityEngine::Vector3  Value, float_t  m_padding0, ::UnityEngine::Vector3  Velocity, float_t  m_padding1) noexcept  {
this->Value = Value;
this->m_padding0 = m_padding0;
this->Velocity = Velocity;
this->m_padding1 = m_padding1;
}
// Ctor Parameters []
constexpr ::BoingKit::Vector3Spring::Vector3Spring()   {
}
