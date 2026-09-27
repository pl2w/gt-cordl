#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(int32_t, int32_t, int32_t, int32_t)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb063094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(int32_t, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb0630a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::int4::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb0630b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.op_Explicit___Unity__Mathematics__int4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb0630dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb063134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"get_xyz", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_xy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb063144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"get_xy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_zw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::get_zw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb06314c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"get_zw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::int4::*)(int32_t)>(&::Unity::Mathematics::int4::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb063154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::int4::*)(int32_t, int32_t)>(&::Unity::Mathematics::int4::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb06315c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::int4::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::int4::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb063164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::int4::*)(::System::Object*)>(&::Unity::Mathematics::int4::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb0631a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::int4>(),
                    {::i2c::class_of<::Unity::Mathematics::int4>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::GetHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb063250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::int4>(),
                    {::i2c::class_of<::Unity::Mathematics::int4>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::int4::*)()>(&::Unity::Mathematics::int4::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb0632ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Mathematics::int4>(),
                    {::i2c::class_of<::Unity::Mathematics::int4>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::int4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::int4::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::int4::ToString)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb06347c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::int4::setStaticF_zero(::Unity::Mathematics::int4  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::int4, "zero", ::Unity::Mathematics::int4>(std::forward<::Unity::Mathematics::int4>(value));
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::int4, "zero", ::Unity::Mathematics::int4>();
}
inline void Unity::Mathematics::int4::_ctor(int32_t  x, int32_t  y, int32_t  z, int32_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, w);
}
inline void Unity::Mathematics::int4::_ctor(int32_t  x, ::Unity::Mathematics::int3  yzw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, yzw);
}
inline void Unity::Mathematics::int4::_ctor(::Unity::Mathematics::float4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::int4::op_Explicit___Unity__Mathematics__int4(::Unity::Mathematics::float4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::int4::get_xyz()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"get_xyz", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_xy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"get_xy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::int4::get_zw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"get_zw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline int32_t Unity::Mathematics::int4::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline void Unity::Mathematics::int4::set_Item(int32_t  index, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::int4::Equals(::Unity::Mathematics::int4  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::int4::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::int4>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::int4::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::int4>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::int4::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Mathematics::int4>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::int4::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::int4>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4>"
constexpr  Unity::Mathematics::int4::operator ::System::IEquatable_1<::Unity::Mathematics::int4>*()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::int4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::int4>* Unity::Mathematics::int4::i___System__IEquatable_1___Unity__Mathematics__int4_()  {
return static_cast<::System::IEquatable_1<::Unity::Mathematics::int4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Unity::Mathematics::int4::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::int4::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::int4::int4(int32_t  x, int32_t  y, int32_t  z, int32_t  w) noexcept  {
this->x = x;
this->y = y;
this->z = z;
this->w = w;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::int4::int4()   {
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::int4_DebuggerProxy::int4_DebuggerProxy()   {
}
