#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/AxisAlignedBoxFitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__AxisAlignedBoxFitter_def.hpp"
#include "Technie/PhysicsCreator/Rigid/zzzz__Hull_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::AxisAlignedBoxFitter.Fit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::AxisAlignedBoxFitter::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::AxisAlignedBoxFitter::Fit)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xadc4084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AxisAlignedBoxFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::AxisAlignedBoxFitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::AxisAlignedBoxFitter::*)()>(&::Technie::PhysicsCreator::AxisAlignedBoxFitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc4678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AxisAlignedBoxFitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::AxisAlignedBoxFitter::Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AxisAlignedBoxFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hull, meshVertices, meshIndices);
}
inline void Technie::PhysicsCreator::AxisAlignedBoxFitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AxisAlignedBoxFitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::AxisAlignedBoxFitter* Technie::PhysicsCreator::AxisAlignedBoxFitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::AxisAlignedBoxFitter*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::AxisAlignedBoxFitter::AxisAlignedBoxFitter()   {
}
