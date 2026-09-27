#pragma once
// IWYU pragma private; include "Unity/Mathematics/half4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__half_impl.hpp"
#include "Unity/Mathematics/zzzz__half4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half4_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::half4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::half4::*)(::Unity::Mathematics::half, ::Unity::Mathematics::half, ::Unity::Mathematics::half, ::Unity::Mathematics::half)>(&::Unity::Mathematics::half4::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb06234c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::half4::*)(::Unity::Mathematics::half4)>(&::Unity::Mathematics::half4::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb062360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::half4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::half4::*)(::System::Object*)>(&::Unity::Mathematics::half4::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb0623a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half4>(),
                    {::i2c::class_of<::Unity::Mathematics::half4>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half4.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::half4::*)()>(&::Unity::Mathematics::half4::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb062448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half4>(),
                    {::i2c::class_of<::Unity::Mathematics::half4>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::half4::*)()>(&::Unity::Mathematics::half4::ToString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb0624b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::half4>(),
                    {::i2c::class_of<::Unity::Mathematics::half4>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::half4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::half4::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::half4::ToString)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xb062690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half4>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::half4::_ctor(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>(), ::i2c::type_of<::Unity::Mathematics::half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, w);
}
inline bool Unity::Mathematics::half4::Equals(::Unity::Mathematics::half4  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::half4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::half4::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half4>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::half4::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half4>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::half4::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::half4>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::half4::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::half4>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half4>"
constexpr  Unity::Mathematics::half4::operator ::System::IEquatable_1<::Unity::Mathematics::half4>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::half4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::half4>* Unity::Mathematics::half4::i___System__IEquatable_1___Unity__Mathematics__half4_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::half4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Unity::Mathematics::half4::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::half4::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "::Unity::Mathematics::half", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "::Unity::Mathematics::half", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::half4::half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) noexcept  {
this->x = x;
this->y = y;
this->z = z;
this->w = w;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::half4::half4()   {
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::half4_DebuggerProxy::half4_DebuggerProxy()   {
}
