#pragma once
// IWYU pragma private; include "GTMathUtil/CriticalSpringDamper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GTMathUtil/zzzz__CriticalSpringDamper_def.hpp"
//  Writing Method size for method: ::GTMathUtil::CriticalSpringDamper.halflife_to_damping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GTMathUtil::CriticalSpringDamper::halflife_to_damping)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b794ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::CriticalSpringDamper*>(),
                        {"halflife_to_damping", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GTMathUtil::CriticalSpringDamper.fast_negexp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GTMathUtil::CriticalSpringDamper::fast_negexp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b794c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::CriticalSpringDamper*>(),
                        {"fast_negexp", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GTMathUtil::CriticalSpringDamper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GTMathUtil::CriticalSpringDamper::*)(float_t)>(&::GTMathUtil::CriticalSpringDamper::Update)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b794fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::CriticalSpringDamper*>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GTMathUtil::CriticalSpringDamper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GTMathUtil::CriticalSpringDamper::*)()>(&::GTMathUtil::CriticalSpringDamper::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b79598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::CriticalSpringDamper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GTMathUtil::CriticalSpringDamper::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr float_t const& GTMathUtil::CriticalSpringDamper::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void GTMathUtil::CriticalSpringDamper::__cordl_internal_set_x(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x = value;
}
constexpr float_t& GTMathUtil::CriticalSpringDamper::__cordl_internal_get_xGoal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xGoal;
}
constexpr float_t const& GTMathUtil::CriticalSpringDamper::__cordl_internal_get_xGoal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xGoal;
}
constexpr void GTMathUtil::CriticalSpringDamper::__cordl_internal_set_xGoal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xGoal = value;
}
constexpr float_t& GTMathUtil::CriticalSpringDamper::__cordl_internal_get_halfLife()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halfLife;
}
constexpr float_t const& GTMathUtil::CriticalSpringDamper::__cordl_internal_get_halfLife() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halfLife;
}
constexpr void GTMathUtil::CriticalSpringDamper::__cordl_internal_set_halfLife(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___halfLife = value;
}
constexpr float_t& GTMathUtil::CriticalSpringDamper::__cordl_internal_get_curVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curVel;
}
constexpr float_t const& GTMathUtil::CriticalSpringDamper::__cordl_internal_get_curVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curVel;
}
constexpr void GTMathUtil::CriticalSpringDamper::__cordl_internal_set_curVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curVel = value;
}
inline float_t GTMathUtil::CriticalSpringDamper::halflife_to_damping(float_t  halflife, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::CriticalSpringDamper*>(),
                        {"halflife_to_damping", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, halflife, eps);
}
inline float_t GTMathUtil::CriticalSpringDamper::fast_negexp(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::CriticalSpringDamper*>(),
                        {"fast_negexp", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t GTMathUtil::CriticalSpringDamper::Update(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::CriticalSpringDamper*>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, dt);
}
inline void GTMathUtil::CriticalSpringDamper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GTMathUtil::CriticalSpringDamper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GTMathUtil::CriticalSpringDamper* GTMathUtil::CriticalSpringDamper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GTMathUtil::CriticalSpringDamper*>());
}
// Ctor Parameters []
constexpr ::GTMathUtil::CriticalSpringDamper::CriticalSpringDamper()   {
}
