#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RotatedCapsule.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__RotatedCapsule_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsule.CalcVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Technie::PhysicsCreator::RotatedCapsule::*)()>(&::Technie::PhysicsCreator::RotatedCapsule::CalcVolume)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xadc77b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsule>(),
                        {"CalcVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsule.DrawWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RotatedCapsule::*)()>(&::Technie::PhysicsCreator::RotatedCapsule::DrawWireframe)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xadc77f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsule>(),
                        {"DrawWireframe", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Technie::PhysicsCreator::RotatedCapsule::CalcVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsule>(),
                        {"CalcVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Technie::PhysicsCreator::RotatedCapsule::DrawWireframe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsule>(),
                        {"DrawWireframe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::RotatedCapsule::RotatedCapsule(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  dir, float_t  radius, float_t  height) noexcept  {
this->center = center;
this->dir = dir;
this->radius = radius;
this->height = height;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::RotatedCapsule::RotatedCapsule()   {
}
