#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::bool3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::bool3::*)(bool, bool, bool)>(&::Unity::Mathematics::bool3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb05d448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool3>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool3.op_BitwiseAnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::bool3, ::Unity::Mathematics::bool3)>(&::Unity::Mathematics::bool3::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb05d458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool3>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::Unity::Mathematics::bool3>(), ::i2c::type_of<::Unity::Mathematics::bool3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool3.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::bool3::*)(::Unity::Mathematics::bool3)>(&::Unity::Mathematics::bool3::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb05d46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool3>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::bool3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool3.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::bool3::*)(::System::Object*)>(&::Unity::Mathematics::bool3::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb05d4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool3>(),
                    {::i2c::class_of<::Unity::Mathematics::bool3>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool3.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::bool3::*)()>(&::Unity::Mathematics::bool3::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb05d54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool3>(),
                    {::i2c::class_of<::Unity::Mathematics::bool3>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool3.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::bool3::*)()>(&::Unity::Mathematics::bool3::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb05d5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool3>(),
                    {::i2c::class_of<::Unity::Mathematics::bool3>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::bool3::_ctor(bool  x, bool  y, bool  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool3>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::bool3::op_BitwiseAnd(::Unity::Mathematics::bool3  lhs, ::Unity::Mathematics::bool3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool3>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::Unity::Mathematics::bool3>(), ::i2c::type_of<::Unity::Mathematics::bool3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Mathematics::bool3::Equals(::Unity::Mathematics::bool3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool3>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::bool3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::bool3::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool3>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::bool3::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool3>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::bool3::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool3>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3>"
constexpr  Unity::Mathematics::bool3::operator ::System::IEquatable_1<::Unity::Mathematics::bool3>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::bool3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3>* Unity::Mathematics::bool3::i___System__IEquatable_1___Unity__Mathematics__bool3_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::bool3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::bool3::bool3(bool  x, bool  y, bool  z) noexcept  {
this->x = x;
this->y = y;
this->z = z;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::bool3::bool3()   {
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::bool3_DebuggerProxy::bool3_DebuggerProxy()   {
}
