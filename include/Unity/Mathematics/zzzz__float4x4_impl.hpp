#pragma once
// IWYU pragma private; include "Unity/Mathematics/float4x4.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool4x4_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4, ::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb06035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb060380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4x4 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Equality)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb0603d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Mathematics::float4> (::Unity::Mathematics::float4x4::*)(int32_t)>(&::Unity::Mathematics::float4x4::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0604e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::Equals)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb0604e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::float4x4::*)(::System::Object*)>(&::Unity::Mathematics::float4x4::Equals)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb0605f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                    {::i2c::class_of<::Unity::Mathematics::float4x4>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::float4x4::*)()>(&::Unity::Mathematics::float4x4::GetHashCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb06075c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                    {::i2c::class_of<::Unity::Mathematics::float4x4>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float4x4::*)()>(&::Unity::Mathematics::float4x4::ToString)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0xb06087c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                    {::i2c::class_of<::Unity::Mathematics::float4x4>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::float4x4::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::float4x4::ToString)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0xb060ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Implicit___Unity__Mathematics__float4x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::UnityEngine::Matrix4x4)>(&::Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb061330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.op_Implicit___UnityEngine__Matrix4x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::float4x4::op_Implicit___UnityEngine__Matrix4x4)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb06140c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::float3x3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb061470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::float4x4::*)(::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb0614c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.RotateX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t)>(&::Unity::Mathematics::float4x4::RotateX)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb061554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"RotateX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.RotateZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(float_t)>(&::Unity::Mathematics::float4x4::RotateZ)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb061630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"RotateZ", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float4x4.TRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float4x4::TRS)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb061708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"TRS", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::float4x4::setStaticF_identity(::Unity::Mathematics::float4x4  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float4x4, "identity", ::Unity::Mathematics::float4x4>(std::forward<::Unity::Mathematics::float4x4>(value));
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::getStaticF_identity()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float4x4, "identity", ::Unity::Mathematics::float4x4>();
}
inline void Unity::Mathematics::float4x4::setStaticF_zero(::Unity::Mathematics::float4x4  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float4x4, "zero", ::Unity::Mathematics::float4x4>(std::forward<::Unity::Mathematics::float4x4>(value));
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float4x4, "zero", ::Unity::Mathematics::float4x4>();
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2, ::Unity::Mathematics::float4  c3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c0, c1, c2, c3);
}
inline void Unity::Mathematics::float4x4::_ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
}
inline ::Unity::Mathematics::bool4x4 Unity::Mathematics::float4x4::op_Equality(::Unity::Mathematics::float4x4  lhs, ::Unity::Mathematics::float4x4  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::by_ref<::Unity::Mathematics::float4> Unity::Mathematics::float4x4::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Mathematics::float4>>(*this, ___internal_method, index);
}
inline bool Unity::Mathematics::float4x4::Equals(::Unity::Mathematics::float4x4  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::float4x4::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::float4x4>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::float4x4::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::float4x4>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float4x4::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::float4x4>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float4x4::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::op_Implicit___Unity__Mathematics__float4x4(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Matrix4x4 Unity::Mathematics::float4x4::op_Implicit___UnityEngine__Matrix4x4(::Unity::Mathematics::float4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, m);
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotation, translation);
}
inline void Unity::Mathematics::float4x4::_ctor(::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  translation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotation, translation);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::RotateX(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"RotateX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::RotateZ(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"RotateZ", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::float4x4::TRS(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::float4x4>(),
                        {"TRS", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, translation, rotation, scale);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
constexpr  Unity::Mathematics::float4x4::operator ::System::IEquatable_1<::Unity::Mathematics::float4x4>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::float4x4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float4x4>* Unity::Mathematics::float4x4::i___System__IEquatable_1___Unity__Mathematics__float4x4_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::float4x4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Unity::Mathematics::float4x4::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::float4x4::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::float4x4::float4x4(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2, ::Unity::Mathematics::float4  c3) noexcept  {
this->c0 = c0;
this->c1 = c1;
this->c2 = c2;
this->c3 = c3;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::float4x4::float4x4()   {
}
