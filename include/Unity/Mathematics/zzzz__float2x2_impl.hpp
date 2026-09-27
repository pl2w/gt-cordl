#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x2.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float2x2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::float2x2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2x2::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::float2x2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb05e57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2x2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float2x2::*)(float_t, float_t, float_t, float_t)>(&::Unity::Mathematics::float2x2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb05e588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2x2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float2x2::*)(::Unity::Mathematics::float2x2)>(&::Unity::Mathematics::float2x2::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb05e594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::float2x2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2x2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float2x2::*)(::System::Object*)>(&::Unity::Mathematics::float2x2::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb05e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                    {::i2c::class_of<::Unity::Mathematics::float2x2>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2x2.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::float2x2::*)()>(&::Unity::Mathematics::float2x2::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb05e678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                    {::i2c::class_of<::Unity::Mathematics::float2x2>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2x2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float2x2::*)()>(&::Unity::Mathematics::float2x2::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb05e6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                    {::i2c::class_of<::Unity::Mathematics::float2x2>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float2x2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float2x2::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::float2x2::ToString)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb05e8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::float2x2::setStaticF_identity(::Unity::Mathematics::float2x2  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float2x2, "identity", ::Unity::Mathematics::float2x2>(std::forward<::Unity::Mathematics::float2x2>(value));
}
inline ::Unity::Mathematics::float2x2 Unity::Mathematics::float2x2::getStaticF_identity()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float2x2, "identity", ::Unity::Mathematics::float2x2>();
}
inline void Unity::Mathematics::float2x2::_ctor(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c0, c1);
}
inline void Unity::Mathematics::float2x2::_ctor(float_t  m00, float_t  m01, float_t  m10, float_t  m11)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m00, m01, m10, m11);
}
inline bool Unity::Mathematics::float2x2::Equals(::Unity::Mathematics::float2x2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::float2x2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::float2x2::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::float2x2>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::float2x2::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::float2x2>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float2x2::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::float2x2>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float2x2::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float2x2>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
constexpr  Unity::Mathematics::float2x2::operator ::System::IEquatable_1<::Unity::Mathematics::float2x2>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::float2x2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x2>* Unity::Mathematics::float2x2::i___System__IEquatable_1___Unity__Mathematics__float2x2_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::float2x2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Unity::Mathematics::float2x2::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::float2x2::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::float2x2::float2x2(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) noexcept  {
this->c0 = c0;
this->c1 = c1;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::float2x2::float2x2()   {
}
