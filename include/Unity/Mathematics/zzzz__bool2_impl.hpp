#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::bool2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::bool2::*)(bool, bool)>(&::Unity::Mathematics::bool2::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb05d2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool2>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::bool2::*)(::Unity::Mathematics::bool2)>(&::Unity::Mathematics::bool2::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb05d2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool2>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::bool2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::bool2::*)(::System::Object*)>(&::Unity::Mathematics::bool2::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb05d2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool2>(),
                    {::i2c::class_of<::Unity::Mathematics::bool2>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool2.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::bool2::*)()>(&::Unity::Mathematics::bool2::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb05d378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool2>(),
                    {::i2c::class_of<::Unity::Mathematics::bool2>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::bool2::*)()>(&::Unity::Mathematics::bool2::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb05d3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool2>(),
                    {::i2c::class_of<::Unity::Mathematics::bool2>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::bool2::_ctor(bool  x, bool  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool2>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline bool Unity::Mathematics::bool2::Equals(::Unity::Mathematics::bool2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool2>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::bool2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::bool2::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool2>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::bool2::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool2>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::bool2::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool2>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool2>"
constexpr  Unity::Mathematics::bool2::operator ::System::IEquatable_1<::Unity::Mathematics::bool2>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::bool2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool2>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool2>* Unity::Mathematics::bool2::i___System__IEquatable_1___Unity__Mathematics__bool2_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::bool2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::bool2::bool2(bool  x, bool  y) noexcept  {
this->x = x;
this->y = y;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::bool2::bool2()   {
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::bool2_DebuggerProxy::bool2_DebuggerProxy()   {
}
