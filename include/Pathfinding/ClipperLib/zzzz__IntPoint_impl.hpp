#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/IntPoint.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::IntPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::IntPoint::*)(int64_t, int64_t)>(&::Pathfinding::ClipperLib::IntPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6834a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::IntPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::IntPoint::*)(::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::IntPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6834ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::IntPoint.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::IntPoint::*)(::System::Object*)>(&::Pathfinding::ClipperLib::IntPoint::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa6834b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                    {::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::IntPoint.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::ClipperLib::IntPoint::*)()>(&::Pathfinding::ClipperLib::IntPoint::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa68353c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                    {::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::IntPoint.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::IntPoint::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6835a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                        {"op_Equality", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::IntPoint.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::IntPoint::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6835b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::ClipperLib::IntPoint::_ctor(int64_t  X, int64_t  Y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, X, Y);
}
inline void Pathfinding::ClipperLib::IntPoint::_ctor(::Pathfinding::ClipperLib::IntPoint  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pt);
}
inline bool Pathfinding::ClipperLib::IntPoint::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Pathfinding::ClipperLib::IntPoint::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Pathfinding::ClipperLib::IntPoint::op_Equality(::Pathfinding::ClipperLib::IntPoint  a, ::Pathfinding::ClipperLib::IntPoint  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                        {"op_Equality", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Pathfinding::ClipperLib::IntPoint::op_Inequality(::Pathfinding::ClipperLib::IntPoint  a, ::Pathfinding::ClipperLib::IntPoint  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntPoint>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "X", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Y", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::ClipperLib::IntPoint::IntPoint(int64_t  X, int64_t  Y) noexcept  {
this->X = X;
this->Y = Y;
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::IntPoint::IntPoint()   {
}
