#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::uint3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::uint3::*)(uint32_t, uint32_t, uint32_t)>(&::Unity::Mathematics::uint3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb064f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Multiply)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb064f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_Addition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb064fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_Addition", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb064fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_BitwiseAnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, uint32_t)>(&::Unity::Mathematics::uint3::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb064fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.op_ExclusiveOr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb065000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_ExclusiveOr", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::uint3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::uint3::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb06500c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::uint3::*)(::System::Object*)>(&::Unity::Mathematics::uint3::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb065040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::uint3>(),
                    {::i2c::class_of<::Unity::Mathematics::uint3>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb0650d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::uint3>(),
                    {::i2c::class_of<::Unity::Mathematics::uint3>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::uint3::*)()>(&::Unity::Mathematics::uint3::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb065120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::uint3>(),
                    {::i2c::class_of<::Unity::Mathematics::uint3>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::uint3.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::uint3::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::uint3::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb0651d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::uint3::_ctor(uint32_t  x, uint32_t  y, uint32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Multiply(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_Addition(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_Addition", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::uint3::op_GreaterThan(::Unity::Mathematics::uint3  lhs, uint32_t  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_BitwiseAnd(::Unity::Mathematics::uint3  lhs, uint32_t  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::uint3::op_ExclusiveOr(::Unity::Mathematics::uint3  lhs, ::Unity::Mathematics::uint3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"op_ExclusiveOr", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Mathematics::uint3::Equals(::Unity::Mathematics::uint3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::uint3::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::uint3>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::uint3::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::uint3>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::uint3::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::uint3>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::uint3::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::uint3>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
constexpr  Unity::Mathematics::uint3::operator ::System::IEquatable_1<::Unity::Mathematics::uint3>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::uint3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3>* Unity::Mathematics::uint3::i___System__IEquatable_1___Unity__Mathematics__uint3_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::uint3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Unity::Mathematics::uint3::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::uint3::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::uint3::uint3(uint32_t  x, uint32_t  y, uint32_t  z) noexcept  {
this->x = x;
this->y = y;
this->z = z;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::uint3::uint3()   {
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::uint3_DebuggerProxy::uint3_DebuggerProxy()   {
}
