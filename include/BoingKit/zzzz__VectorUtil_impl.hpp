#pragma once
// IWYU pragma private; include "BoingKit/VectorUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__VectorUtil_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::BoingKit::VectorUtil.Rotate2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::BoingKit::VectorUtil::Rotate2D)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2df4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"Rotate2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.NormalizeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::BoingKit::VectorUtil::NormalizeSafe)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5e24450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"NormalizeSafe", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.FindOrthogonal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::BoingKit::VectorUtil::FindOrthogonal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e260dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"FindOrthogonal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.FormOrthogonalBasis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::BoingKit::VectorUtil::FormOrthogonalBasis)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e2dfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"FormOrthogonalBasis", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.Slerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::BoingKit::VectorUtil::Slerp)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5e2e068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"Slerp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.GetClosestPointOnSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::BoingKit::VectorUtil::GetClosestPointOnSegment)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5e25ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"GetClosestPointOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.TriLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t)>(&::BoingKit::VectorUtil::TriLerp)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e2e24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.TriLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, bool, bool, float_t, float_t, float_t)>(&::BoingKit::VectorUtil::TriLerp)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5e2e374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.TriLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, bool, bool, float_t, float_t, float_t)>(&::BoingKit::VectorUtil::TriLerp)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e2e4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.TriLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, bool, bool, bool, float_t, float_t, float_t)>(&::BoingKit::VectorUtil::TriLerp)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e2e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.TriLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, bool, bool, bool, float_t, float_t, float_t)>(&::BoingKit::VectorUtil::TriLerp)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e2e6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.ClampLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t, float_t)>(&::BoingKit::VectorUtil::ClampLength)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e249fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ClampLength", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.MinComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3)>(&::BoingKit::VectorUtil::MinComponent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e25ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"MinComponent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.MaxComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3)>(&::BoingKit::VectorUtil::MaxComponent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2e7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"MaxComponent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.ComponentWiseAbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::BoingKit::VectorUtil::ComponentWiseAbs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2e7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ComponentWiseAbs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.ComponentWiseMult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::BoingKit::VectorUtil::ComponentWiseMult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e249ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ComponentWiseMult", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.ComponentWiseDiv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::BoingKit::VectorUtil::ComponentWiseDiv)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2e80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ComponentWiseDiv", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.ComponentWiseDivSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::BoingKit::VectorUtil::ComponentWiseDivSafe)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e24940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ComponentWiseDivSafe", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil.ClampBend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::BoingKit::VectorUtil::ClampBend)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5e245bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ClampBend", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::VectorUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::VectorUtil::*)()>(&::BoingKit::VectorUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2e81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::VectorUtil::setStaticF_Min(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "Min", ::BoingKit::VectorUtil*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::getStaticF_Min()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "Min", ::BoingKit::VectorUtil*>();
}
inline void BoingKit::VectorUtil::setStaticF_Max(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "Max", ::BoingKit::VectorUtil*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::getStaticF_Max()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "Max", ::BoingKit::VectorUtil*>();
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::Rotate2D(::UnityEngine::Vector3  v, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"Rotate2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, angle);
}
inline ::UnityEngine::Vector4 BoingKit::VectorUtil::NormalizeSafe(::UnityEngine::Vector4  v, ::UnityEngine::Vector4  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"NormalizeSafe", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v, fallback);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::FindOrthogonal(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"FindOrthogonal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline void BoingKit::VectorUtil::FormOrthogonalBasis(::UnityEngine::Vector3  v, ::by_ref<::UnityEngine::Vector3>  a, ::by_ref<::UnityEngine::Vector3>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"FormOrthogonalBasis", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v, a, b);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::Slerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"Slerp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::GetClosestPointOnSegment(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  segA, ::UnityEngine::Vector3  segB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"GetClosestPointOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, p, segA, segB);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::TriLerp(::by_ref<::UnityEngine::Vector3>  v000, ::by_ref<::UnityEngine::Vector3>  v001, ::by_ref<::UnityEngine::Vector3>  v010, ::by_ref<::UnityEngine::Vector3>  v011, ::by_ref<::UnityEngine::Vector3>  v100, ::by_ref<::UnityEngine::Vector3>  v101, ::by_ref<::UnityEngine::Vector3>  v110, ::by_ref<::UnityEngine::Vector3>  v111, float_t  tx, float_t  ty, float_t  tz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v000, v001, v010, v011, v100, v101, v110, v111, tx, ty, tz);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::TriLerp(::by_ref<::UnityEngine::Vector3>  v000, ::by_ref<::UnityEngine::Vector3>  v001, ::by_ref<::UnityEngine::Vector3>  v010, ::by_ref<::UnityEngine::Vector3>  v011, ::by_ref<::UnityEngine::Vector3>  v100, ::by_ref<::UnityEngine::Vector3>  v101, ::by_ref<::UnityEngine::Vector3>  v110, ::by_ref<::UnityEngine::Vector3>  v111, bool  lerpX, bool  lerpY, bool  lerpZ, float_t  tx, float_t  ty, float_t  tz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v000, v001, v010, v011, v100, v101, v110, v111, lerpX, lerpY, lerpZ, tx, ty, tz);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::TriLerp(::by_ref<::UnityEngine::Vector3>  min, ::by_ref<::UnityEngine::Vector3>  max, bool  lerpX, bool  lerpY, bool  lerpZ, float_t  tx, float_t  ty, float_t  tz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, min, max, lerpX, lerpY, lerpZ, tx, ty, tz);
}
inline ::UnityEngine::Vector4 BoingKit::VectorUtil::TriLerp(::by_ref<::UnityEngine::Vector4>  v000, ::by_ref<::UnityEngine::Vector4>  v001, ::by_ref<::UnityEngine::Vector4>  v010, ::by_ref<::UnityEngine::Vector4>  v011, ::by_ref<::UnityEngine::Vector4>  v100, ::by_ref<::UnityEngine::Vector4>  v101, ::by_ref<::UnityEngine::Vector4>  v110, ::by_ref<::UnityEngine::Vector4>  v111, bool  lerpX, bool  lerpY, bool  lerpZ, float_t  tx, float_t  ty, float_t  tz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v000, v001, v010, v011, v100, v101, v110, v111, lerpX, lerpY, lerpZ, tx, ty, tz);
}
inline ::UnityEngine::Vector4 BoingKit::VectorUtil::TriLerp(::by_ref<::UnityEngine::Vector4>  min, ::by_ref<::UnityEngine::Vector4>  max, bool  lerpX, bool  lerpY, bool  lerpZ, float_t  tx, float_t  ty, float_t  tz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"TriLerp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, min, max, lerpX, lerpY, lerpZ, tx, ty, tz);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::ClampLength(::UnityEngine::Vector3  v, float_t  minLen, float_t  maxLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ClampLength", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, minLen, maxLen);
}
inline float_t BoingKit::VectorUtil::MinComponent(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"MinComponent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline float_t BoingKit::VectorUtil::MaxComponent(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"MaxComponent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::ComponentWiseAbs(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ComponentWiseAbs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::ComponentWiseMult(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ComponentWiseMult", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::ComponentWiseDiv(::UnityEngine::Vector3  num, ::UnityEngine::Vector3  den)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ComponentWiseDiv", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, num, den);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::ComponentWiseDivSafe(::UnityEngine::Vector3  num, ::UnityEngine::Vector3  den)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ComponentWiseDivSafe", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, num, den);
}
inline ::UnityEngine::Vector3 BoingKit::VectorUtil::ClampBend(::UnityEngine::Vector3  vector, ::UnityEngine::Vector3  reference, float_t  maxBendAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {"ClampBend", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector, reference, maxBendAngle);
}
inline void BoingKit::VectorUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::VectorUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::VectorUtil* BoingKit::VectorUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::VectorUtil*>());
}
// Ctor Parameters []
constexpr ::BoingKit::VectorUtil::VectorUtil()   {
}
