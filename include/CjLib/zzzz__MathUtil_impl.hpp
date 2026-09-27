#pragma once
// IWYU pragma private; include "CjLib/MathUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "CjLib/zzzz__MathUtil_def.hpp"
//  Writing Method size for method: ::CjLib::MathUtil.AsinSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::CjLib::MathUtil::AsinSafe)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e0c424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::MathUtil*>(),
                        {"AsinSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::MathUtil.AcosSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::CjLib::MathUtil::AcosSafe)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e0c440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::MathUtil*>(),
                        {"AcosSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::MathUtil.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::CjLib::MathUtil::CatmullRom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e0c45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::MathUtil*>(),
                        {"CatmullRom", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::MathUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::MathUtil::*)()>(&::CjLib::MathUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0c4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::MathUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void CjLib::MathUtil::setStaticF_Pi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Pi", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_Pi()  {
return ::cordl_internals::getStaticField<float_t, "Pi", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_TwoPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "TwoPi", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_TwoPi()  {
return ::cordl_internals::getStaticField<float_t, "TwoPi", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_HalfPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "HalfPi", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_HalfPi()  {
return ::cordl_internals::getStaticField<float_t, "HalfPi", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_ThirdPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "ThirdPi", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_ThirdPi()  {
return ::cordl_internals::getStaticField<float_t, "ThirdPi", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_QuarterPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "QuarterPi", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_QuarterPi()  {
return ::cordl_internals::getStaticField<float_t, "QuarterPi", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_FifthPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "FifthPi", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_FifthPi()  {
return ::cordl_internals::getStaticField<float_t, "FifthPi", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_SixthPi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "SixthPi", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_SixthPi()  {
return ::cordl_internals::getStaticField<float_t, "SixthPi", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_Sqrt2(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Sqrt2", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_Sqrt2()  {
return ::cordl_internals::getStaticField<float_t, "Sqrt2", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_Sqrt2Inv(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Sqrt2Inv", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_Sqrt2Inv()  {
return ::cordl_internals::getStaticField<float_t, "Sqrt2Inv", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_Sqrt3(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Sqrt3", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_Sqrt3()  {
return ::cordl_internals::getStaticField<float_t, "Sqrt3", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_Sqrt3Inv(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Sqrt3Inv", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_Sqrt3Inv()  {
return ::cordl_internals::getStaticField<float_t, "Sqrt3Inv", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_Epsilon(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Epsilon", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_Epsilon()  {
return ::cordl_internals::getStaticField<float_t, "Epsilon", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_EpsilonComp(float_t  value)  {
::cordl_internals::setStaticField<float_t, "EpsilonComp", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_EpsilonComp()  {
return ::cordl_internals::getStaticField<float_t, "EpsilonComp", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_Rad2Deg(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Rad2Deg", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_Rad2Deg()  {
return ::cordl_internals::getStaticField<float_t, "Rad2Deg", ::CjLib::MathUtil*>();
}
inline void CjLib::MathUtil::setStaticF_Deg2Rad(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Deg2Rad", ::CjLib::MathUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::MathUtil::getStaticF_Deg2Rad()  {
return ::cordl_internals::getStaticField<float_t, "Deg2Rad", ::CjLib::MathUtil*>();
}
inline float_t CjLib::MathUtil::AsinSafe(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::MathUtil*>(),
                        {"AsinSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t CjLib::MathUtil::AcosSafe(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::MathUtil*>(),
                        {"AcosSafe", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t CjLib::MathUtil::CatmullRom(float_t  p0, float_t  p1, float_t  p2, float_t  p3, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::MathUtil*>(),
                        {"CatmullRom", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p0, p1, p2, p3, t);
}
inline void CjLib::MathUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::MathUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::MathUtil* CjLib::MathUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::MathUtil*>());
}
// Ctor Parameters []
constexpr ::CjLib::MathUtil::MathUtil()   {
}
