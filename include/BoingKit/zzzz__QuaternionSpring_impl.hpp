#pragma once
// IWYU pragma private; include "BoingKit/QuaternionSpring.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "BoingKit/zzzz__QuaternionSpring_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::BoingKit::QuaternionSpring.get_ValueQuat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::BoingKit::QuaternionSpring::*)()>(&::BoingKit::QuaternionSpring::get_ValueQuat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2db48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"get_ValueQuat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.set_ValueQuat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::QuaternionSpring::*)(::UnityEngine::Quaternion)>(&::BoingKit::QuaternionSpring::set_ValueQuat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2db5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"set_ValueQuat", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::QuaternionSpring::*)()>(&::BoingKit::QuaternionSpring::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e257f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::QuaternionSpring::*)(::UnityEngine::Vector4)>(&::BoingKit::QuaternionSpring::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e26e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::QuaternionSpring::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::BoingKit::QuaternionSpring::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2db68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::QuaternionSpring::*)(::UnityEngine::Quaternion)>(&::BoingKit::QuaternionSpring::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e262a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::QuaternionSpring::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::BoingKit::QuaternionSpring::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2db7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.TrackDampingRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::BoingKit::QuaternionSpring::*)(::UnityEngine::Vector4, float_t, float_t, float_t)>(&::BoingKit::QuaternionSpring::TrackDampingRatio)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5e26b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.TrackDampingRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::BoingKit::QuaternionSpring::*)(::UnityEngine::Quaternion, float_t, float_t, float_t)>(&::BoingKit::QuaternionSpring::TrackDampingRatio)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e2db90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.TrackHalfLife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::BoingKit::QuaternionSpring::*)(::UnityEngine::Vector4, float_t, float_t, float_t)>(&::BoingKit::QuaternionSpring::TrackHalfLife)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5e269c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.TrackHalfLife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::BoingKit::QuaternionSpring::*)(::UnityEngine::Quaternion, float_t, float_t, float_t)>(&::BoingKit::QuaternionSpring::TrackHalfLife)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5e2dc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.TrackExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::BoingKit::QuaternionSpring::*)(::UnityEngine::Vector4, float_t, float_t)>(&::BoingKit::QuaternionSpring::TrackExponential)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5e26874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionSpring.TrackExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::BoingKit::QuaternionSpring::*)(::UnityEngine::Quaternion, float_t, float_t)>(&::BoingKit::QuaternionSpring::TrackExponential)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e2ddb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::QuaternionSpring::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::BoingKit::QuaternionSpring>(std::forward<int32_t>(value));
}
inline int32_t BoingKit::QuaternionSpring::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::BoingKit::QuaternionSpring>();
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionSpring::get_ValueQuat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"get_ValueQuat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void BoingKit::QuaternionSpring::set_ValueQuat(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"set_ValueQuat", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void BoingKit::QuaternionSpring::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BoingKit::QuaternionSpring::Reset(::UnityEngine::Vector4  initValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void BoingKit::QuaternionSpring::Reset(::UnityEngine::Vector4  initValue, ::UnityEngine::Vector4  initVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue, initVelocity);
}
inline void BoingKit::QuaternionSpring::Reset(::UnityEngine::Quaternion  initValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void BoingKit::QuaternionSpring::Reset(::UnityEngine::Quaternion  initValue, ::UnityEngine::Quaternion  initVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue, initVelocity);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionSpring::TrackDampingRatio(::UnityEngine::Vector4  targetValueVec, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, targetValueVec, angularFrequency, dampingRatio, deltaTime);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionSpring::TrackDampingRatio(::UnityEngine::Quaternion  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackDampingRatio", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, targetValue, angularFrequency, dampingRatio, deltaTime);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionSpring::TrackHalfLife(::UnityEngine::Vector4  targetValueVec, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, targetValueVec, frequencyHz, halfLife, deltaTime);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionSpring::TrackHalfLife(::UnityEngine::Quaternion  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackHalfLife", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, targetValue, frequencyHz, halfLife, deltaTime);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionSpring::TrackExponential(::UnityEngine::Vector4  targetValueVec, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, targetValueVec, halfLife, deltaTime);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionSpring::TrackExponential(::UnityEngine::Quaternion  targetValue, float_t  halfLife, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionSpring>(),
                        {"TrackExponential", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, targetValue, halfLife, deltaTime);
}
// Ctor Parameters [CppParam { name: "ValueVec", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VelocityVec", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BoingKit::QuaternionSpring::QuaternionSpring(::UnityEngine::Vector4  ValueVec, ::UnityEngine::Vector4  VelocityVec) noexcept  {
this->ValueVec = ValueVec;
this->VelocityVec = VelocityVec;
}
// Ctor Parameters []
constexpr ::BoingKit::QuaternionSpring::QuaternionSpring()   {
}
