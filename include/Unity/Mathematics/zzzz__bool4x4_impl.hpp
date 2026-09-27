#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool4x4.hpp"
#include "Unity/Mathematics/zzzz__bool4_impl.hpp"
#include "Unity/Mathematics/zzzz__bool4x4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::bool4x4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::bool4x4::*)(::Unity::Mathematics::bool4, ::Unity::Mathematics::bool4, ::Unity::Mathematics::bool4, ::Unity::Mathematics::bool4)>(&::Unity::Mathematics::bool4x4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb05d9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4x4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::bool4>(), ::i2c::type_of<::Unity::Mathematics::bool4>(), ::i2c::type_of<::Unity::Mathematics::bool4>(), ::i2c::type_of<::Unity::Mathematics::bool4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4x4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::bool4x4::*)(::Unity::Mathematics::bool4x4)>(&::Unity::Mathematics::bool4x4::Equals)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb05d9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4x4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::bool4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4x4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::bool4x4::*)(::System::Object*)>(&::Unity::Mathematics::bool4x4::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb05dacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool4x4>(),
                    {::i2c::class_of<::Unity::Mathematics::bool4x4>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4x4.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::bool4x4::*)()>(&::Unity::Mathematics::bool4x4::GetHashCode)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb05db4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool4x4>(),
                    {::i2c::class_of<::Unity::Mathematics::bool4x4>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::bool4x4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::bool4x4::*)()>(&::Unity::Mathematics::bool4x4::ToString)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0xb05dcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::bool4x4>(),
                    {::i2c::class_of<::Unity::Mathematics::bool4x4>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::bool4x4::_ctor(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4x4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::bool4>(), ::i2c::type_of<::Unity::Mathematics::bool4>(), ::i2c::type_of<::Unity::Mathematics::bool4>(), ::i2c::type_of<::Unity::Mathematics::bool4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c0, c1, c2, c3);
}
inline bool Unity::Mathematics::bool4x4::Equals(::Unity::Mathematics::bool4x4  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::bool4x4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::bool4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::bool4x4::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool4x4>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::bool4x4::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool4x4>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::bool4x4::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::bool4x4>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool4x4>"
constexpr  Unity::Mathematics::bool4x4::operator ::System::IEquatable_1<::Unity::Mathematics::bool4x4>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::bool4x4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::bool4x4>* Unity::Mathematics::bool4x4::i___System__IEquatable_1___Unity__Mathematics__bool4x4_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::bool4x4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::bool4x4::bool4x4(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3) noexcept  {
this->c0 = c0;
this->c1 = c1;
this->c2 = c2;
this->c3 = c3;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::bool4x4::bool4x4()   {
}
