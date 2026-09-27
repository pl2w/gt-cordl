#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/Point3d.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Vector3d_impl.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Point3d_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Vector3d_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Point3d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Point3d::*)()>(&::Technie::PhysicsCreator::QHull::Point3d::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddcee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Point3d*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Point3d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Point3d::*)(::Technie::PhysicsCreator::QHull::Vector3d*)>(&::Technie::PhysicsCreator::QHull::Point3d::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xadddeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Point3d*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vector3d*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Point3d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Point3d::*)(double_t, double_t, double_t)>(&::Technie::PhysicsCreator::QHull::Point3d::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xadddf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Point3d*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::QHull::Point3d::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Point3d*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::Point3d::_ctor(::Technie::PhysicsCreator::QHull::Vector3d*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Point3d*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vector3d*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Technie::PhysicsCreator::QHull::Point3d::_ctor(double_t  x, double_t  y, double_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Point3d*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, z);
}
inline ::Technie::PhysicsCreator::QHull::Point3d* Technie::PhysicsCreator::QHull::Point3d::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::Point3d*>());
}
inline ::Technie::PhysicsCreator::QHull::Point3d* Technie::PhysicsCreator::QHull::Point3d::New_ctor(::Technie::PhysicsCreator::QHull::Vector3d*  v)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::Point3d*>(v));
}
inline ::Technie::PhysicsCreator::QHull::Point3d* Technie::PhysicsCreator::QHull::Point3d::New_ctor(double_t  x, double_t  y, double_t  z)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::Point3d*>(x, y, z));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::QHull::Point3d::Point3d()   {
}
