#pragma once
// IWYU pragma private; include "CjLib/Vector4Spring.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "CjLib/zzzz__Vector4Spring_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::CjLib::Vector4Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::Vector4Spring::*)()>(&::CjLib::Vector4Spring::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e0d550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector4Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::Vector4Spring::*)(::UnityEngine::Vector4)>(&::CjLib::Vector4Spring::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e0d5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector4Spring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::Vector4Spring::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::CjLib::Vector4Spring::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e0d608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector4Spring.TrackDampingRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::CjLib::Vector4Spring::*)(::UnityEngine::Vector4, float_t, float_t, float_t)>(&::CjLib::Vector4Spring::TrackDampingRatio)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5e0d61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector4Spring.TrackHalfLife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::CjLib::Vector4Spring::*)(::UnityEngine::Vector4, float_t, float_t, float_t)>(&::CjLib::Vector4Spring::TrackHalfLife)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5e0d8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::Vector4Spring.TrackExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::CjLib::Vector4Spring::*)(::UnityEngine::Vector4, float_t, float_t)>(&::CjLib::Vector4Spring::TrackExponential)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e0da38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void CjLib::Vector4Spring::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::CjLib::Vector4Spring>(std::forward<int32_t>(value));
}
inline int32_t CjLib::Vector4Spring::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::CjLib::Vector4Spring>();
}
inline void CjLib::Vector4Spring::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void CjLib::Vector4Spring::Reset(::UnityEngine::Vector4  initValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void CjLib::Vector4Spring::Reset(::UnityEngine::Vector4  initValue, ::UnityEngine::Vector4  initVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue, initVelocity);
}
inline ::UnityEngine::Vector4 CjLib::Vector4Spring::TrackDampingRatio(::UnityEngine::Vector4  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method, targetValue, angularFrequency, dampingRatio, deltaTime);
}
inline ::UnityEngine::Vector4 CjLib::Vector4Spring::TrackHalfLife(::UnityEngine::Vector4  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method, targetValue, frequencyHz, halfLife, deltaTime);
}
inline ::UnityEngine::Vector4 CjLib::Vector4Spring::TrackExponential(::UnityEngine::Vector4  targetValue, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::Vector4Spring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method, targetValue, halfLife, deltaTime);
}
// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Velocity", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::CjLib::Vector4Spring::Vector4Spring(::UnityEngine::Vector4  Value, ::UnityEngine::Vector4  Velocity) noexcept  {
this->Value = Value;
this->Velocity = Velocity;
}
// Ctor Parameters []
constexpr ::CjLib::Vector4Spring::Vector4Spring()   {
}
