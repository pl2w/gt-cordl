#pragma once
// IWYU pragma private; include "BoingKit/QuaternionUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BoingKit/zzzz__QuaternionUtil_def.hpp"
#include "BoingKit/zzzz__QuaternionUtil_SterpMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::BoingKit::QuaternionUtil.Magnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Quaternion)>(&::BoingKit::QuaternionUtil::Magnitude)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2bf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Magnitude", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.MagnitudeSqr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Quaternion)>(&::BoingKit::QuaternionUtil::MagnitudeSqr)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2bf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"MagnitudeSqr", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::BoingKit::QuaternionUtil::Normalize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e2bfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.AxisAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, float_t)>(&::BoingKit::QuaternionUtil::AxisAngle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e2bff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"AxisAngle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion)>(&::BoingKit::QuaternionUtil::GetAxis)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e2c04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"GetAxis", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.GetAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Quaternion)>(&::BoingKit::QuaternionUtil::GetAngle)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e2c158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"GetAngle", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.FromAngularVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3)>(&::BoingKit::QuaternionUtil::FromAngularVector)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e2616c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"FromAngularVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.ToAngularVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion)>(&::BoingKit::QuaternionUtil::ToAngularVector)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2c184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"ToAngularVector", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.Pow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, float_t)>(&::BoingKit::QuaternionUtil::Pow)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e210c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Pow", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.Integrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t)>(&::BoingKit::QuaternionUtil::Integrate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e2c1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Integrate", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.Integrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t)>(&::BoingKit::QuaternionUtil::Integrate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e2c298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Integrate", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.ToVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Quaternion)>(&::BoingKit::QuaternionUtil::ToVector4)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e25ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"ToVector4", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.FromVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector4, bool)>(&::BoingKit::QuaternionUtil::FromVector4)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e20fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"FromVector4", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.DecomposeSwingTwist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::BoingKit::QuaternionUtil::DecomposeSwingTwist)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x5e2c354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"DecomposeSwingTwist", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.Sterp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::QuaternionUtil_SterpMode)>(&::BoingKit::QuaternionUtil::Sterp)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.Sterp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, ::GlobalNamespace::QuaternionUtil_SterpMode)>(&::BoingKit::QuaternionUtil::Sterp)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e2c7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.Sterp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, float_t, ::GlobalNamespace::QuaternionUtil_SterpMode)>(&::BoingKit::QuaternionUtil::Sterp)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e2cacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil.Sterp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, float_t, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, ::GlobalNamespace::QuaternionUtil_SterpMode)>(&::BoingKit::QuaternionUtil::Sterp)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5e2c7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::QuaternionUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::QuaternionUtil::*)()>(&::BoingKit::QuaternionUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2cb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t BoingKit::QuaternionUtil::Magnitude(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Magnitude", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, q);
}
inline float_t BoingKit::QuaternionUtil::MagnitudeSqr(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"MagnitudeSqr", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::Normalize(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::AxisAngle(::UnityEngine::Vector3  axis, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"AxisAngle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, axis, angle);
}
inline ::UnityEngine::Vector3 BoingKit::QuaternionUtil::GetAxis(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"GetAxis", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, q);
}
inline float_t BoingKit::QuaternionUtil::GetAngle(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"GetAngle", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::FromAngularVector(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"FromAngularVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 BoingKit::QuaternionUtil::ToAngularVector(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"ToAngularVector", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::Pow(::UnityEngine::Quaternion  q, float_t  exp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Pow", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q, exp);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::Integrate(::UnityEngine::Quaternion  q, ::UnityEngine::Quaternion  v, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Integrate", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q, v, dt);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::Integrate(::UnityEngine::Quaternion  q, ::UnityEngine::Vector3  omega, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Integrate", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q, omega, dt);
}
inline ::UnityEngine::Vector4 BoingKit::QuaternionUtil::ToVector4(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"ToVector4", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::FromVector4(::UnityEngine::Vector4  v, bool  normalize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"FromVector4", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, v, normalize);
}
inline void BoingKit::QuaternionUtil::DecomposeSwingTwist(::UnityEngine::Quaternion  q, ::UnityEngine::Vector3  twistAxis, ::by_ref<::UnityEngine::Quaternion>  swing, ::by_ref<::UnityEngine::Quaternion>  twist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"DecomposeSwingTwist", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, q, twistAxis, swing, twist);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  t, ::GlobalNamespace::QuaternionUtil_SterpMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, twistAxis, t, mode);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  t, ::by_ref<::UnityEngine::Quaternion>  swing, ::by_ref<::UnityEngine::Quaternion>  twist, ::GlobalNamespace::QuaternionUtil_SterpMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, twistAxis, t, swing, twist, mode);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  tSwing, float_t  tTwist, ::GlobalNamespace::QuaternionUtil_SterpMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, twistAxis, tSwing, tTwist, mode);
}
inline ::UnityEngine::Quaternion BoingKit::QuaternionUtil::Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  tSwing, float_t  tTwist, ::by_ref<::UnityEngine::Quaternion>  swing, ::by_ref<::UnityEngine::Quaternion>  twist, ::GlobalNamespace::QuaternionUtil_SterpMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, twistAxis, tSwing, tTwist, swing, twist, mode);
}
inline void BoingKit::QuaternionUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::QuaternionUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::QuaternionUtil* BoingKit::QuaternionUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::QuaternionUtil*>());
}
// Ctor Parameters []
constexpr ::BoingKit::QuaternionUtil::QuaternionUtil()   {
}
