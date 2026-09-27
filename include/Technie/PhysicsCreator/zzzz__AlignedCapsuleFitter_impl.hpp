#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/AlignedCapsuleFitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__AlignedCapsuleFitter_def.hpp"
#include "Technie/PhysicsCreator/Rigid/zzzz__Hull_def.hpp"
#include "Technie/PhysicsCreator/zzzz__CapsuleDef_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::AlignedCapsuleFitter.Fit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::CapsuleDef (::Technie::PhysicsCreator::AlignedCapsuleFitter::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::AlignedCapsuleFitter::Fit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xadc34ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AlignedCapsuleFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::AlignedCapsuleFitter.Fit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::CapsuleDef (::Technie::PhysicsCreator::AlignedCapsuleFitter::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::AlignedCapsuleFitter::Fit)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xadc3610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AlignedCapsuleFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::AlignedCapsuleFitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::AlignedCapsuleFitter::*)()>(&::Technie::PhysicsCreator::AlignedCapsuleFitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc407c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AlignedCapsuleFitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Technie::PhysicsCreator::CapsuleDef Technie::PhysicsCreator::AlignedCapsuleFitter::Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AlignedCapsuleFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::CapsuleDef>(this, ___internal_method, hull, meshVertices, meshIndices);
}
inline ::Technie::PhysicsCreator::CapsuleDef Technie::PhysicsCreator::AlignedCapsuleFitter::Fit(::ArrayW<::UnityEngine::Vector3>  hullVertices, ::ArrayW<int32_t>  hullIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AlignedCapsuleFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::CapsuleDef>(this, ___internal_method, hullVertices, hullIndices);
}
inline void Technie::PhysicsCreator::AlignedCapsuleFitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::AlignedCapsuleFitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::AlignedCapsuleFitter* Technie::PhysicsCreator::AlignedCapsuleFitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::AlignedCapsuleFitter*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::AlignedCapsuleFitter::AlignedCapsuleFitter()   {
}
