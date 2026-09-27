#pragma once
// IWYU pragma private; include "Unity/Mathematics/half2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__half_impl.hpp"
#include "Unity/Mathematics/zzzz__half2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half2_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::half2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::half2::*)(::Unity::Mathematics::half, ::Unity::Mathematics::half)>(&::Unity::Mathematics::half2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb061afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half2>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::half2::*)(::Unity::Mathematics::half2)>(&::Unity::Mathematics::half2::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb061b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half2>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::half2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::half2::*)(::System::Object*)>(&::Unity::Mathematics::half2::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb061b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half2>(),
                    {::i2c::class_of<::Unity::Mathematics::half2>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half2.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::half2::*)()>(&::Unity::Mathematics::half2::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb061bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half2>(),
                    {::i2c::class_of<::Unity::Mathematics::half2>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::half2::*)()>(&::Unity::Mathematics::half2::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb061bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half2>(),
                    {::i2c::class_of<::Unity::Mathematics::half2>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::half2::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::half2::ToString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb061c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half2>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::half2::_ctor(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half2>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline bool Unity::Mathematics::half2::Equals(::Unity::Mathematics::half2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half2>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::half2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::half2::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half2>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::half2::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half2>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::half2::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half2>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::half2::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half2>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half2>"
constexpr  Unity::Mathematics::half2::operator ::System::IEquatable_1<::Unity::Mathematics::half2>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::half2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::half2>* Unity::Mathematics::half2::i___System__IEquatable_1___Unity__Mathematics__half2_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::half2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Unity::Mathematics::half2::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::half2::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::half2::half2(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y) noexcept  {
this->x = x;
this->y = y;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::half2::half2()   {
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::half2_DebuggerProxy::half2_DebuggerProxy()   {
}
