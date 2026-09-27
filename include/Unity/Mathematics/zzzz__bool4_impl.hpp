#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::bool4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::bool4::*)(bool, bool, bool, bool)>(&::Unity::Mathematics::bool4::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb05d664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::bool4::*)(bool)>(&::Unity::Mathematics::bool4::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb05d678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4.op_BitwiseOr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::bool4, ::Unity::Mathematics::bool4)>(&::Unity::Mathematics::bool4::op_BitwiseOr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb05d68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4>(),
                        {"op_BitwiseOr", {}, {::i2c::type_of<::Unity::Mathematics::bool4>(), ::i2c::type_of<::Unity::Mathematics::bool4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::bool4::*)(::Unity::Mathematics::bool4)>(&::Unity::Mathematics::bool4::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb05d698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::bool4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::bool4::*)(::System::Object*)>(&::Unity::Mathematics::bool4::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb05d6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool4>(),
                    {::i2c::class_of<::Unity::Mathematics::bool4>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::bool4::*)()>(&::Unity::Mathematics::bool4::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb05d790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool4>(),
                    {::i2c::class_of<::Unity::Mathematics::bool4>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::bool4::*)()>(&::Unity::Mathematics::bool4::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb05d7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool4>(),
                    {::i2c::class_of<::Unity::Mathematics::bool4>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::bool4::_ctor(bool  x, bool  y, bool  z, bool  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, w);
}
inline void Unity::Mathematics::bool4::_ctor(bool  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::bool4::op_BitwiseOr(::Unity::Mathematics::bool4  lhs, ::Unity::Mathematics::bool4  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4>(),
                        {"op_BitwiseOr", {}, {::i2c::type_of<::Unity::Mathematics::bool4>(), ::i2c::type_of<::Unity::Mathematics::bool4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Mathematics::bool4::Equals(::Unity::Mathematics::bool4  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::bool4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::bool4::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool4>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::bool4::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool4>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::bool4::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool4>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool4>"
constexpr  Unity::Mathematics::bool4::operator ::System::IEquatable_1<::Unity::Mathematics::bool4>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::bool4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool4>* Unity::Mathematics::bool4::i___System__IEquatable_1___Unity__Mathematics__bool4_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::bool4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::bool4::bool4(bool  x, bool  y, bool  z, bool  w) noexcept  {
this->x = x;
this->y = y;
this->z = z;
this->w = w;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::bool4::bool4()   {
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::bool4_DebuggerProxy::bool4_DebuggerProxy()   {
}
