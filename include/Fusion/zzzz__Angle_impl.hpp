#pragma once
// IWYU pragma private; include "Fusion/Angle.hpp"
#include "Fusion/zzzz__Angle_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Angle.Clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Angle::*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::Clamp)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f95c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Clamp", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::Min)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f95ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Min", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::Max)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f95cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Max", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle, float_t)>(&::Fusion::Angle::Lerp)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f95d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Lerp", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.Clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::Clamp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f95ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Clamp", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::op_LessThan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f95edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f95ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::op_GreaterThan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f95ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f95f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f95f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f95f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Angle::*)(::Fusion::Angle)>(&::Fusion::Angle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f95f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Angle::*)(::System::Object*)>(&::Fusion::Angle::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f95f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Angle>(),
                    {::i2c::class_of<::Fusion::Angle>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Angle::*)()>(&::Fusion::Angle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f95fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Angle>(),
                    {::i2c::class_of<::Fusion::Angle>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::op_Addition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f95fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Addition", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Angle (*)(::Fusion::Angle, ::Fusion::Angle)>(&::Fusion::Angle::op_Subtraction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f9602c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_Explicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Fusion::Angle)>(&::Fusion::Angle::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f95e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_Explicit_double_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Fusion::Angle)>(&::Fusion::Angle::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f9609c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_Implicit___Fusion__Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Angle (*)(double_t)>(&::Fusion::Angle::op_Implicit___Fusion__Angle)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f960b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_Implicit___Fusion__Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Angle (*)(float_t)>(&::Fusion::Angle::op_Implicit___Fusion__Angle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f95e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.op_Implicit___Fusion__Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Angle (*)(int32_t)>(&::Fusion::Angle::op_Implicit___Fusion__Angle)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f9612c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Angle.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Angle::*)()>(&::Fusion::Angle::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f96198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Angle>(),
                    {::i2c::class_of<::Fusion::Angle>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Angle::__cordl_internal_get__value()  {
return this->____value;
}
constexpr int32_t const& Fusion::Angle::__cordl_internal_get__value() const {
return this->____value;
}
constexpr void Fusion::Angle::__cordl_internal_set__value(int32_t  value)  {
this->____value = value;
}
inline void Fusion::Angle::Clamp(::Fusion::Angle  min, ::Fusion::Angle  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Clamp", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline ::Fusion::Angle Fusion::Angle::Min(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Min", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Angle>(nullptr, ___internal_method, a, b);
}
inline ::Fusion::Angle Fusion::Angle::Max(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Max", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Angle>(nullptr, ___internal_method, a, b);
}
inline ::Fusion::Angle Fusion::Angle::Lerp(::Fusion::Angle  a, ::Fusion::Angle  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Lerp", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Angle>(nullptr, ___internal_method, a, b, t);
}
inline ::Fusion::Angle Fusion::Angle::Clamp(::Fusion::Angle  value, ::Fusion::Angle  min, ::Fusion::Angle  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Clamp", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Angle>(nullptr, ___internal_method, value, min, max);
}
inline bool Fusion::Angle::op_LessThan(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Angle::op_LessThanOrEqual(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Angle::op_GreaterThan(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Angle::op_GreaterThanOrEqual(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Angle::op_Equality(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Angle::op_Inequality(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::Angle::Equals(::Fusion::Angle  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::Angle::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Angle>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::Angle::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Angle>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::Angle Fusion::Angle::op_Addition(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Addition", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Angle>(nullptr, ___internal_method, a, b);
}
inline ::Fusion::Angle Fusion::Angle::op_Subtraction(::Fusion::Angle  a, ::Fusion::Angle  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Fusion::Angle>(), ::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Angle>(nullptr, ___internal_method, a, b);
}
inline float_t Fusion::Angle::op_Explicit_float_t(::Fusion::Angle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t Fusion::Angle::op_Explicit_double_t(::Fusion::Angle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline ::Fusion::Angle Fusion::Angle::op_Implicit___Fusion__Angle(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Angle>(nullptr, ___internal_method, value);
}
inline ::Fusion::Angle Fusion::Angle::op_Implicit___Fusion__Angle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Angle>(nullptr, ___internal_method, value);
}
inline ::Fusion::Angle Fusion::Angle::op_Implicit___Fusion__Angle(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Angle>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Angle>(nullptr, ___internal_method, value);
}
inline ::StringW Fusion::Angle::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Angle>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::Angle::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::Angle::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Angle>"
constexpr  Fusion::Angle::operator ::System::IEquatable_1<::Fusion::Angle>*()  {
return static_cast<::System::IEquatable_1<::Fusion::Angle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::Angle>"
constexpr ::System::IEquatable_1<::Fusion::Angle>* Fusion::Angle::i___System__IEquatable_1___Fusion__Angle_()  {
return static_cast<::System::IEquatable_1<::Fusion::Angle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_value", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Angle::Angle(int32_t  _value) noexcept  {
this->_value = _value;
}
// Ctor Parameters []
constexpr ::Fusion::Angle::Angle()   {
}
