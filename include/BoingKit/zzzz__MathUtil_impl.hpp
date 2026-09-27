#pragma once
// IWYU pragma private; include "BoingKit/MathUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BoingKit/zzzz__MathUtil_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::BoingKit::MathUtil.AsinSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::BoingKit::MathUtil::AsinSafe)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2bb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"AsinSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.AcosSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::BoingKit::MathUtil::AcosSafe)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2bb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"AcosSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.InvSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::BoingKit::MathUtil::InvSafe)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e248cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"InvSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.PointLineDist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::BoingKit::MathUtil::PointLineDist)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e2bb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"PointLineDist", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.PointSegmentDist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::BoingKit::MathUtil::PointSegmentDist)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e2bbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"PointSegmentDist", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::BoingKit::MathUtil::Seek)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2bd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Seek", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::BoingKit::MathUtil::Seek)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5e2bd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Seek", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.Remainder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::BoingKit::MathUtil::Remainder)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2beb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Remainder", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.Remainder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::BoingKit::MathUtil::Remainder)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Remainder", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.Modulo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::BoingKit::MathUtil::Modulo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e2becc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Modulo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil.Modulo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::BoingKit::MathUtil::Modulo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2bef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Modulo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::MathUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::MathUtil::*)()>(&::BoingKit::MathUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2bf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::MathUtil::setStaticF_Pi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Pi", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_Pi()  {
return ::cordl_internals::getStaticField<float_t, "Pi", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_TwoPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "TwoPi", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_TwoPi()  {
return ::cordl_internals::getStaticField<float_t, "TwoPi", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_HalfPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "HalfPi", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_HalfPi()  {
return ::cordl_internals::getStaticField<float_t, "HalfPi", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_QuaterPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "QuaterPi", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_QuaterPi()  {
return ::cordl_internals::getStaticField<float_t, "QuaterPi", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_SixthPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "SixthPi", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_SixthPi()  {
return ::cordl_internals::getStaticField<float_t, "SixthPi", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_Sqrt2(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Sqrt2", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_Sqrt2()  {
return ::cordl_internals::getStaticField<float_t, "Sqrt2", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_Sqrt2Inv(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Sqrt2Inv", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_Sqrt2Inv()  {
return ::cordl_internals::getStaticField<float_t, "Sqrt2Inv", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_Sqrt3(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Sqrt3", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_Sqrt3()  {
return ::cordl_internals::getStaticField<float_t, "Sqrt3", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_Sqrt3Inv(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Sqrt3Inv", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_Sqrt3Inv()  {
return ::cordl_internals::getStaticField<float_t, "Sqrt3Inv", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_Epsilon(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Epsilon", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_Epsilon()  {
return ::cordl_internals::getStaticField<float_t, "Epsilon", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_Rad2Deg(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Rad2Deg", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_Rad2Deg()  {
return ::cordl_internals::getStaticField<float_t, "Rad2Deg", ::BoingKit::MathUtil*>();
}
inline void BoingKit::MathUtil::setStaticF_Deg2Rad(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Deg2Rad", ::BoingKit::MathUtil*>(std::forward<float_t>(value));
}
inline float_t BoingKit::MathUtil::getStaticF_Deg2Rad()  {
return ::cordl_internals::getStaticField<float_t, "Deg2Rad", ::BoingKit::MathUtil*>();
}
inline float_t BoingKit::MathUtil::AsinSafe(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"AsinSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t BoingKit::MathUtil::AcosSafe(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"AcosSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t BoingKit::MathUtil::InvSafe(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"InvSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t BoingKit::MathUtil::PointLineDist(::UnityEngine::Vector2  point, ::UnityEngine::Vector2  linePos, ::UnityEngine::Vector2  lineDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"PointLineDist", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, point, linePos, lineDir);
}
inline float_t BoingKit::MathUtil::PointSegmentDist(::UnityEngine::Vector2  point, ::UnityEngine::Vector2  segmentPosA, ::UnityEngine::Vector2  segmentPosB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"PointSegmentDist", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, point, segmentPosA, segmentPosB);
}
inline float_t BoingKit::MathUtil::Seek(float_t  current, float_t  target, float_t  maxDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Seek", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, current, target, maxDelta);
}
inline ::UnityEngine::Vector2 BoingKit::MathUtil::Seek(::UnityEngine::Vector2  current, ::UnityEngine::Vector2  target, float_t  maxDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Seek", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, current, target, maxDelta);
}
inline float_t BoingKit::MathUtil::Remainder(float_t  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Remainder", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline int32_t BoingKit::MathUtil::Remainder(int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Remainder", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline float_t BoingKit::MathUtil::Modulo(float_t  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Modulo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline int32_t BoingKit::MathUtil::Modulo(int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {"Modulo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void BoingKit::MathUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::MathUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::MathUtil* BoingKit::MathUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::MathUtil*>());
}
// Ctor Parameters []
constexpr ::BoingKit::MathUtil::MathUtil()   {
}
