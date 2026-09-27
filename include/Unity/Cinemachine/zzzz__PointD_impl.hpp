#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PointD.hpp"
#include "Unity/Cinemachine/zzzz__PointD_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PointD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PointD::*)(::Unity::Cinemachine::PointD)>(&::Unity::Cinemachine::PointD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee7a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PointD::*)(::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::PointD::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaee7a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PointD::*)(::Unity::Cinemachine::PointD, double_t)>(&::Unity::Cinemachine::PointD::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaee7aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PointD::*)(::Unity::Cinemachine::Point64, double_t)>(&::Unity::Cinemachine::PointD::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaee7ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PointD::*)(int64_t, int64_t)>(&::Unity::Cinemachine::PointD::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaee7ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PointD::*)(double_t, double_t)>(&::Unity::Cinemachine::PointD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee7ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::PointD::*)()>(&::Unity::Cinemachine::PointD::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaee7ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                    {::i2c::class_of<::Unity::Cinemachine::PointD>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD.IsAlmostZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::Unity::Cinemachine::PointD::IsAlmostZero)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaee7b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {"IsAlmostZero", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::PointD, ::Unity::Cinemachine::PointD)>(&::Unity::Cinemachine::PointD::op_Equality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaee7be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::PointD, ::Unity::Cinemachine::PointD)>(&::Unity::Cinemachine::PointD::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaee7c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::PointD::*)(::System::Object*)>(&::Unity::Cinemachine::PointD::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaee7c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                    {::i2c::class_of<::Unity::Cinemachine::PointD>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PointD.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::PointD::*)()>(&::Unity::Cinemachine::PointD::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee7cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                    {::i2c::class_of<::Unity::Cinemachine::PointD>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::PointD::_ctor(::Unity::Cinemachine::PointD  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pt);
}
inline void Unity::Cinemachine::PointD::_ctor(::Unity::Cinemachine::Point64  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pt);
}
inline void Unity::Cinemachine::PointD::_ctor(::Unity::Cinemachine::PointD  pt, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pt, scale);
}
inline void Unity::Cinemachine::PointD::_ctor(::Unity::Cinemachine::Point64  pt, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pt, scale);
}
inline void Unity::Cinemachine::PointD::_ctor(int64_t  x, int64_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline void Unity::Cinemachine::PointD::_ctor(double_t  x, double_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline ::StringW Unity::Cinemachine::PointD::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::PointD>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Unity::Cinemachine::PointD::IsAlmostZero(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {"IsAlmostZero", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool Unity::Cinemachine::PointD::op_Equality(::Unity::Cinemachine::PointD  lhs, ::Unity::Cinemachine::PointD  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {"op_Equality", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Cinemachine::PointD::op_Inequality(::Unity::Cinemachine::PointD  lhs, ::Unity::Cinemachine::PointD  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PointD>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Cinemachine::PointD::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::PointD>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Unity::Cinemachine::PointD::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::PointD>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::PointD::PointD(double_t  x, double_t  y) noexcept  {
this->x = x;
this->y = y;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PointD::PointD()   {
}
