#pragma once
// IWYU pragma private; include "CjLib/QuaternionUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "CjLib/zzzz__QuaternionUtil_def.hpp"
#include "CjLib/zzzz__QuaternionUtil_SterpMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::CjLib::QuaternionUtil.Magnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Quaternion)>(&::CjLib::QuaternionUtil::Magnitude)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e0e4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Magnitude", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.MagnitudeSqr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Quaternion)>(&::CjLib::QuaternionUtil::MagnitudeSqr)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e0e4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"MagnitudeSqr", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::CjLib::QuaternionUtil::Normalize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0e4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.AngularVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3)>(&::CjLib::QuaternionUtil::AngularVector)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e0e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"AngularVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.AxisAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, float_t)>(&::CjLib::QuaternionUtil::AxisAngle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e0e668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"AxisAngle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion)>(&::CjLib::QuaternionUtil::GetAxis)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e0e6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"GetAxis", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.GetAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Quaternion)>(&::CjLib::QuaternionUtil::GetAngle)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e0e7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"GetAngle", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.Pow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, float_t)>(&::CjLib::QuaternionUtil::Pow)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e0e7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Pow", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.Integrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t)>(&::CjLib::QuaternionUtil::Integrate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e0e874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Integrate", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.Integrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t)>(&::CjLib::QuaternionUtil::Integrate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e0e92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Integrate", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.ToVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Quaternion)>(&::CjLib::QuaternionUtil::ToVector4)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0dcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"ToVector4", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.FromVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector4, bool)>(&::CjLib::QuaternionUtil::FromVector4)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e0dbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"FromVector4", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.DecomposeSwingTwist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::CjLib::QuaternionUtil::DecomposeSwingTwist)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x5e0e9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"DecomposeSwingTwist", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.Sterp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::QuaternionUtil_SterpMode)>(&::CjLib::QuaternionUtil::Sterp)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e0ee08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.Sterp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, ::GlobalNamespace::QuaternionUtil_SterpMode)>(&::CjLib::QuaternionUtil::Sterp)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e0ee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.Sterp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, float_t, ::GlobalNamespace::QuaternionUtil_SterpMode)>(&::CjLib::QuaternionUtil::Sterp)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e0f154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil.Sterp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, float_t, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, ::GlobalNamespace::QuaternionUtil_SterpMode)>(&::CjLib::QuaternionUtil::Sterp)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5e0ee84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::QuaternionUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::QuaternionUtil::*)()>(&::CjLib::QuaternionUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t CjLib::QuaternionUtil::Magnitude(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Magnitude", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, q);
}
inline float_t CjLib::QuaternionUtil::MagnitudeSqr(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"MagnitudeSqr", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::Normalize(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::AngularVector(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"AngularVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::AxisAngle(::UnityEngine::Vector3  axis, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"AxisAngle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, axis, angle);
}
inline ::UnityEngine::Vector3 CjLib::QuaternionUtil::GetAxis(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"GetAxis", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, q);
}
inline float_t CjLib::QuaternionUtil::GetAngle(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"GetAngle", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::Pow(::UnityEngine::Quaternion  q, float_t  exp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Pow", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q, exp);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::Integrate(::UnityEngine::Quaternion  q, ::UnityEngine::Quaternion  v, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Integrate", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q, v, dt);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::Integrate(::UnityEngine::Quaternion  q, ::UnityEngine::Vector3  omega, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Integrate", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q, omega, dt);
}
inline ::UnityEngine::Vector4 CjLib::QuaternionUtil::ToVector4(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"ToVector4", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::FromVector4(::UnityEngine::Vector4  v, bool  normalize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"FromVector4", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, v, normalize);
}
inline void CjLib::QuaternionUtil::DecomposeSwingTwist(::UnityEngine::Quaternion  q, ::UnityEngine::Vector3  twistAxis, ::by_ref<::UnityEngine::Quaternion>  swing, ::by_ref<::UnityEngine::Quaternion>  twist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"DecomposeSwingTwist", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, q, twistAxis, swing, twist);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  t, ::GlobalNamespace::QuaternionUtil_SterpMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, twistAxis, t, mode);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  t, ::by_ref<::UnityEngine::Quaternion>  swing, ::by_ref<::UnityEngine::Quaternion>  twist, ::GlobalNamespace::QuaternionUtil_SterpMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, twistAxis, t, swing, twist, mode);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  tSwing, float_t  tTwist, ::GlobalNamespace::QuaternionUtil_SterpMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, twistAxis, tSwing, tTwist, mode);
}
inline ::UnityEngine::Quaternion CjLib::QuaternionUtil::Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  tSwing, float_t  tTwist, ::by_ref<::UnityEngine::Quaternion>  swing, ::by_ref<::UnityEngine::Quaternion>  twist, ::GlobalNamespace::QuaternionUtil_SterpMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {"Sterp", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::GlobalNamespace::QuaternionUtil_SterpMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, a, b, twistAxis, tSwing, tTwist, swing, twist, mode);
}
inline void CjLib::QuaternionUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::QuaternionUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::QuaternionUtil* CjLib::QuaternionUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::QuaternionUtil*>());
}
// Ctor Parameters []
constexpr ::CjLib::QuaternionUtil::QuaternionUtil()   {
}
