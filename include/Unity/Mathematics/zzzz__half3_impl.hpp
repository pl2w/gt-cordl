#pragma once
// IWYU pragma private; include "Unity/Mathematics/half3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__half_impl.hpp"
#include "Unity/Mathematics/zzzz__half3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__half3_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::half3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::half3::*)(::Unity::Mathematics::half, ::Unity::Mathematics::half, ::Unity::Mathematics::half)>(&::Unity::Mathematics::half3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb061de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::half3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::half3::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb061df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half3.op_Explicit___Unity__Mathematics__half3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::half3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::half3::op_Explicit___Unity__Mathematics__half3)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb061ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half3.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::half3::*)(::Unity::Mathematics::half3)>(&::Unity::Mathematics::half3::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb061fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::half3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half3.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::half3::*)(::System::Object*)>(&::Unity::Mathematics::half3::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb061fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half3>(),
                    {::i2c::class_of<::Unity::Mathematics::half3>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half3.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::half3::*)()>(&::Unity::Mathematics::half3::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb06207c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half3>(),
                    {::i2c::class_of<::Unity::Mathematics::half3>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half3.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::half3::*)()>(&::Unity::Mathematics::half3::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb0620cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half3>(),
                    {::i2c::class_of<::Unity::Mathematics::half3>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half3.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::half3::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::half3::ToString)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb062190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::half3::setStaticF_zero(::Unity::Mathematics::half3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::half3, "zero", ::Unity::Mathematics::half3>(std::forward<::Unity::Mathematics::half3>(value));
}
inline ::Unity::Mathematics::half3 Unity::Mathematics::half3::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::half3, "zero", ::Unity::Mathematics::half3>();
}
inline void Unity::Mathematics::half3::_ctor(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline void Unity::Mathematics::half3::_ctor(::Unity::Mathematics::float3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::half3 Unity::Mathematics::half3::op_Explicit___Unity__Mathematics__half3(::Unity::Mathematics::float3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::half3>(nullptr, ___internal_method, v);
}
inline bool Unity::Mathematics::half3::Equals(::Unity::Mathematics::half3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::half3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::half3::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half3>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::half3::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half3>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::half3::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half3>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::half3::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half3>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half3>"
constexpr  Unity::Mathematics::half3::operator ::System::IEquatable_1<::Unity::Mathematics::half3>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::half3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::half3>* Unity::Mathematics::half3::i___System__IEquatable_1___Unity__Mathematics__half3_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::half3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Unity::Mathematics::half3::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::half3::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "::Unity::Mathematics::half", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::half3::half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z) noexcept  {
this->x = x;
this->y = y;
this->z = z;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::half3::half3()   {
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::half3_DebuggerProxy::half3_DebuggerProxy()   {
}
