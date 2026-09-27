#pragma once
// IWYU pragma private; include "AA/Spring.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AA/zzzz__Spring_def.hpp"
//  Writing Method size for method: ::AA::Spring.Damper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::AA::Spring::Damper)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b6e9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"Damper", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.DamperExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::AA::Spring::DamperExponential)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DamperExponential", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.FastNegExp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::AA::Spring::FastNegExp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b6ea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"FastNegExp", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.DamperExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::AA::Spring::DamperExact)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b6ea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DamperExact", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.DamperDecayExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t)>(&::AA::Spring::DamperDecayExact)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b6eb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DamperDecayExact", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.CopySign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::AA::Spring::CopySign)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6eb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"CopySign", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.FastAtan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::AA::Spring::FastAtan)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b6eb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"FastAtan", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.Square
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::AA::Spring::Square)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6ebe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"Square", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.SpringDamperExactStiffnessDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, ::by_ref<float_t>, float_t, float_t, float_t, float_t, float_t, float_t)>(&::AA::Spring::SpringDamperExactStiffnessDamping)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5b6ebec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"SpringDamperExactStiffnessDamping", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.HalflifeToDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::AA::Spring::HalflifeToDamping)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6eeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"HalflifeToDamping", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.DampingToHalflife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::AA::Spring::DampingToHalflife)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DampingToHalflife", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.FrequencyToStiffness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::AA::Spring::FrequencyToStiffness)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6ef14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"FrequencyToStiffness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.stiffness_to_frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::AA::Spring::stiffness_to_frequency)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6ef28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"stiffness_to_frequency", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.critical_halflife
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::AA::Spring::critical_halflife)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b6ef3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"critical_halflife", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.critical_frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::AA::Spring::critical_frequency)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b6ef74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"critical_frequency", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.SpringDamperExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, ::by_ref<float_t>, float_t, float_t, float_t, float_t, float_t, float_t)>(&::AA::Spring::SpringDamperExact)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5b6efac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"SpringDamperExact", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.DampingRatioToStiffness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::AA::Spring::DampingRatioToStiffness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b6f2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DampingRatioToStiffness", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.DampingRatioToDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::AA::Spring::DampingRatioToDamping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b6f2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DampingRatioToDamping", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.SpringDamperExactRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, ::by_ref<float_t>, float_t, float_t, float_t, float_t, float_t, float_t)>(&::AA::Spring::SpringDamperExactRatio)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5b6f2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"SpringDamperExactRatio", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.CriticalSpringDamperExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, ::by_ref<float_t>, float_t, float_t, float_t, float_t)>(&::AA::Spring::CriticalSpringDamperExact)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b6f618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"CriticalSpringDamperExact", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.SimpleSpringDamperExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, ::by_ref<float_t>, float_t, float_t, float_t)>(&::AA::Spring::SimpleSpringDamperExact)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b6f6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"SimpleSpringDamperExact", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring.DecaySringDamperExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, ::by_ref<float_t>, float_t, float_t)>(&::AA::Spring::DecaySringDamperExact)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b6f770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DecaySringDamperExact", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AA::Spring._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AA::Spring::*)()>(&::AA::Spring::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6f808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t AA::Spring::Damper(float_t  x, float_t  g, float_t  factor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"Damper", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, g, factor);
}
inline float_t AA::Spring::DamperExponential(float_t  x, float_t  g, float_t  damping, float_t  dt, float_t  ft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DamperExponential", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, g, damping, dt, ft);
}
inline float_t AA::Spring::FastNegExp(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"FastNegExp", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t AA::Spring::DamperExact(float_t  x, float_t  g, float_t  halflife, float_t  dt, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DamperExact", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, g, halflife, dt, eps);
}
inline float_t AA::Spring::DamperDecayExact(float_t  x, float_t  halflife, float_t  dt, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DamperDecayExact", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, halflife, dt, eps);
}
inline float_t AA::Spring::CopySign(float_t  a, float_t  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"CopySign", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, s);
}
inline float_t AA::Spring::FastAtan(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"FastAtan", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t AA::Spring::Square(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"Square", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline void AA::Spring::SpringDamperExactStiffnessDamping(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  v_goal, float_t  stiffness, float_t  damping, float_t  dt, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"SpringDamperExactStiffnessDamping", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, v, x_goal, v_goal, stiffness, damping, dt, eps);
}
inline float_t AA::Spring::HalflifeToDamping(float_t  halflife, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"HalflifeToDamping", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, halflife, eps);
}
inline float_t AA::Spring::DampingToHalflife(float_t  damping, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DampingToHalflife", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, damping, eps);
}
inline float_t AA::Spring::FrequencyToStiffness(float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"FrequencyToStiffness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, frequency);
}
inline float_t AA::Spring::stiffness_to_frequency(float_t  stiffness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"stiffness_to_frequency", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, stiffness);
}
inline float_t AA::Spring::critical_halflife(float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"critical_halflife", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, frequency);
}
inline float_t AA::Spring::critical_frequency(float_t  halflife)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"critical_frequency", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, halflife);
}
inline void AA::Spring::SpringDamperExact(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  v_goal, float_t  frequency, float_t  halflife, float_t  dt, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"SpringDamperExact", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, v, x_goal, v_goal, frequency, halflife, dt, eps);
}
inline float_t AA::Spring::DampingRatioToStiffness(float_t  ratio, float_t  damping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DampingRatioToStiffness", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ratio, damping);
}
inline float_t AA::Spring::DampingRatioToDamping(float_t  ratio, float_t  stiffness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DampingRatioToDamping", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ratio, stiffness);
}
inline void AA::Spring::SpringDamperExactRatio(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  v_goal, float_t  damping_ratio, float_t  halflife, float_t  dt, float_t  eps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"SpringDamperExactRatio", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, v, x_goal, v_goal, damping_ratio, halflife, dt, eps);
}
inline void AA::Spring::CriticalSpringDamperExact(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  v_goal, float_t  halflife, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"CriticalSpringDamperExact", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, v, x_goal, v_goal, halflife, dt);
}
inline void AA::Spring::SimpleSpringDamperExact(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  halflife, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"SimpleSpringDamperExact", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, v, x_goal, halflife, dt);
}
inline void AA::Spring::DecaySringDamperExact(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  halflife, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {"DecaySringDamperExact", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, v, halflife, dt);
}
inline void AA::Spring::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AA::Spring*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::AA::Spring* AA::Spring::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AA::Spring*>());
}
// Ctor Parameters []
constexpr ::AA::Spring::Spring()   {
}
