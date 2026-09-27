#pragma once
// IWYU pragma private; include "Fusion/ExponentialDecay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ExponentialDecay_def.hpp"
//  Writing Method size for method: ::Fusion::ExponentialDecay.get_Fraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ExponentialDecay::*)()>(&::Fusion::ExponentialDecay::get_Fraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9e538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"get_Fraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ExponentialDecay.set_Fraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ExponentialDecay::*)(double_t)>(&::Fusion::ExponentialDecay::set_Fraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"set_Fraction", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ExponentialDecay.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ExponentialDecay::*)()>(&::Fusion::ExponentialDecay::get_Time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9e548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"get_Time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ExponentialDecay.set_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ExponentialDecay::*)(double_t)>(&::Fusion::ExponentialDecay::set_Time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"set_Time", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ExponentialDecay.get_TimeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ExponentialDecay::*)()>(&::Fusion::ExponentialDecay::get_TimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9e558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"get_TimeScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ExponentialDecay.set_TimeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ExponentialDecay::*)(double_t)>(&::Fusion::ExponentialDecay::set_TimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9e560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"set_TimeScale", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ExponentialDecay.get_Rate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ExponentialDecay::*)()>(&::Fusion::ExponentialDecay::get_Rate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f9e568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"get_Rate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ExponentialDecay.Calculate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ExponentialDecay::*)(double_t)>(&::Fusion::ExponentialDecay::Calculate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f9e5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"Calculate", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ExponentialDecay.CalculateLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ExponentialDecay::*)(double_t)>(&::Fusion::ExponentialDecay::CalculateLimit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f9e644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"CalculateLimit", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ExponentialDecay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ExponentialDecay::*)(double_t, double_t)>(&::Fusion::ExponentialDecay::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f9e660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Fusion::ExponentialDecay::__cordl_internal_get__Fraction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Fraction_k__BackingField;
}
constexpr double_t const& Fusion::ExponentialDecay::__cordl_internal_get__Fraction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Fraction_k__BackingField;
}
constexpr void Fusion::ExponentialDecay::__cordl_internal_set__Fraction_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Fraction_k__BackingField = value;
}
constexpr double_t& Fusion::ExponentialDecay::__cordl_internal_get__Time_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time_k__BackingField;
}
constexpr double_t const& Fusion::ExponentialDecay::__cordl_internal_get__Time_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time_k__BackingField;
}
constexpr void Fusion::ExponentialDecay::__cordl_internal_set__Time_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Time_k__BackingField = value;
}
constexpr double_t& Fusion::ExponentialDecay::__cordl_internal_get__TimeScale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeScale_k__BackingField;
}
constexpr double_t const& Fusion::ExponentialDecay::__cordl_internal_get__TimeScale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeScale_k__BackingField;
}
constexpr void Fusion::ExponentialDecay::__cordl_internal_set__TimeScale_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeScale_k__BackingField = value;
}
inline double_t Fusion::ExponentialDecay::get_Fraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"get_Fraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::ExponentialDecay::set_Fraction(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"set_Fraction", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::ExponentialDecay::get_Time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"get_Time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::ExponentialDecay::set_Time(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"set_Time", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::ExponentialDecay::get_TimeScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"get_TimeScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::ExponentialDecay::set_TimeScale(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"set_TimeScale", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::ExponentialDecay::get_Rate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"get_Rate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::ExponentialDecay::Calculate(double_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"Calculate", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, elapsed);
}
inline double_t Fusion::ExponentialDecay::CalculateLimit(double_t  period)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {"CalculateLimit", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, period);
}
inline void Fusion::ExponentialDecay::_ctor(double_t  fraction, double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ExponentialDecay*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fraction, time);
}
inline ::Fusion::ExponentialDecay* Fusion::ExponentialDecay::New_ctor(double_t  fraction, double_t  time)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ExponentialDecay*>(fraction, time));
}
// Ctor Parameters []
constexpr ::Fusion::ExponentialDecay::ExponentialDecay()   {
}
