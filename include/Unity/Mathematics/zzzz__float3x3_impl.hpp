#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x3.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::float3x3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3x3::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3x3::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb05f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3x3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3x3::*)(float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t)>(&::Unity::Mathematics::float3x3::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb05f1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3x3.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float3x3::*)(::Unity::Mathematics::float3x3)>(&::Unity::Mathematics::float3x3::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb05f1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3x3.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float3x3::*)(::System::Object*)>(&::Unity::Mathematics::float3x3::Equals)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb05f260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                    {::i2c::class_of<::Unity::Mathematics::float3x3>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3x3.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::float3x3::*)()>(&::Unity::Mathematics::float3x3::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb05f358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                    {::i2c::class_of<::Unity::Mathematics::float3x3>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3x3.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float3x3::*)()>(&::Unity::Mathematics::float3x3::ToString)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0xb05f3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                    {::i2c::class_of<::Unity::Mathematics::float3x3>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3x3.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float3x3::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::float3x3::ToString)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xb05f728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3x3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3x3::*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float3x3::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb05fa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3x3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float3x3::*)(::Unity::Mathematics::quaternion)>(&::Unity::Mathematics::float3x3::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb05c4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3x3.op_Explicit___Unity__Mathematics__float3x3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3x3 (*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float3x3::op_Explicit___Unity__Mathematics__float3x3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb05fa9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::float3x3::setStaticF_identity(::Unity::Mathematics::float3x3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float3x3, "identity", ::Unity::Mathematics::float3x3>(std::forward<::Unity::Mathematics::float3x3>(value));
}
inline ::Unity::Mathematics::float3x3 Unity::Mathematics::float3x3::getStaticF_identity()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float3x3, "identity", ::Unity::Mathematics::float3x3>();
}
inline void Unity::Mathematics::float3x3::_ctor(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c0, c1, c2);
}
inline void Unity::Mathematics::float3x3::_ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m00, m01, m02, m10, m11, m12, m20, m21, m22);
}
inline bool Unity::Mathematics::float3x3::Equals(::Unity::Mathematics::float3x3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::float3x3::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::float3x3>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::float3x3::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::float3x3>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float3x3::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::float3x3>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float3x3::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline void Unity::Mathematics::float3x3::_ctor(::Unity::Mathematics::float4x4  f4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, f4x4);
}
inline void Unity::Mathematics::float3x3::_ctor(::Unity::Mathematics::quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, q);
}
inline ::Unity::Mathematics::float3x3 Unity::Mathematics::float3x3::op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::float4x4  f4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float3x3>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3x3>(nullptr, ___internal_method, f4x4);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr  Unity::Mathematics::float3x3::operator ::System::IEquatable_1<::Unity::Mathematics::float3x3>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::float3x3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x3>* Unity::Mathematics::float3x3::i___System__IEquatable_1___Unity__Mathematics__float3x3_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::float3x3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Unity::Mathematics::float3x3::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::float3x3::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::float3x3::float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) noexcept  {
this->c0 = c0;
this->c1 = c1;
this->c2 = c2;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::float3x3::float3x3()   {
}
