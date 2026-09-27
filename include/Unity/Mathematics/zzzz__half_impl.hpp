#pragma once
// IWYU pragma private; include "Unity/Mathematics/half.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::half.get_MinValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Unity::Mathematics::half::get_MinValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb061850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"get_MinValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::half::*)(float_t)>(&::Unity::Mathematics::half::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb06185c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half.op_Explicit___Unity__Mathematics__half
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::half (*)(float_t)>(&::Unity::Mathematics::half::op_Explicit___Unity__Mathematics__half)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb0618bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"op_Explicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half.op_Implicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::half::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb061918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::half, ::Unity::Mathematics::half)>(&::Unity::Mathematics::half::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb061974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::half::*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::half::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb061984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::half::*)(::System::Object*)>(&::Unity::Mathematics::half::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb061994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half>(),
                    {::i2c::class_of<::Unity::Mathematics::half>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::half::*)()>(&::Unity::Mathematics::half::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb061a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half>(),
                    {::i2c::class_of<::Unity::Mathematics::half>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::half::*)()>(&::Unity::Mathematics::half::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb061a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half>(),
                    {::i2c::class_of<::Unity::Mathematics::half>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::half::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::half::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb061a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::half::setStaticF_zero(::Unity::Mathematics::half  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::half, "zero", ::Unity::Mathematics::half>(std::forward<::Unity::Mathematics::half>(value));
}
inline ::Unity::Mathematics::half Unity::Mathematics::half::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::half, "zero", ::Unity::Mathematics::half>();
}
inline float_t Unity::Mathematics::half::get_MinValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"get_MinValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Unity::Mathematics::half::_ctor(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::half Unity::Mathematics::half::op_Explicit___Unity__Mathematics__half(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"op_Explicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::half>(nullptr, ___internal_method, v);
}
inline float_t Unity::Mathematics::half::op_Implicit_float_t(::Unity::Mathematics::half  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, d);
}
inline bool Unity::Mathematics::half::op_Equality(::Unity::Mathematics::half  lhs, ::Unity::Mathematics::half  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Mathematics::half::Equals(::Unity::Mathematics::half  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::half::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::half::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::half::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::half::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half>"
constexpr  Unity::Mathematics::half::operator ::System::IEquatable_1<::Unity::Mathematics::half>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::half>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::half>* Unity::Mathematics::half::i___System__IEquatable_1___Unity__Mathematics__half_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::half>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Unity::Mathematics::half::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::half::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::half::half(uint16_t  value) noexcept  {
this->value = value;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::half::half()   {
}
