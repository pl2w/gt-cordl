#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RotatedCapsuleFitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__RotatedCapsuleFitter_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "Technie/PhysicsCreator/Rigid/zzzz__Hull_def.hpp"
#include "Technie/PhysicsCreator/zzzz__CapsuleDef_def.hpp"
#include "Technie/PhysicsCreator/zzzz__ConstructionPlane_def.hpp"
#include "Technie/PhysicsCreator/zzzz__RotatedCapsule_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter.Fit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::CapsuleDef (::Technie::PhysicsCreator::RotatedCapsuleFitter::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::Fit)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xadc7b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter.Fit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::CapsuleDef (::Technie::PhysicsCreator::RotatedCapsuleFitter::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::Fit)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xadc7f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter.FindBestCapsulePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::ConstructionPlane* (::Technie::PhysicsCreator::RotatedCapsuleFitter::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::FindBestCapsulePlane)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xadc7c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"FindBestCapsulePlane", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter.ToDef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::CapsuleDef (*)(::Technie::PhysicsCreator::RotatedCapsule, ::Technie::PhysicsCreator::ConstructionPlane*)>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::ToDef)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xadc7f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"ToDef", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedCapsule>(), ::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter.Refine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Technie::PhysicsCreator::RotatedCapsule, ::Technie::PhysicsCreator::ConstructionPlane*, ::ArrayW<::UnityEngine::Vector3>, ::by_ref<::Technie::PhysicsCreator::RotatedCapsule>, ::by_ref<::Technie::PhysicsCreator::ConstructionPlane*>)>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::Refine)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xadc3e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"Refine", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedCapsule>(), ::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Technie::PhysicsCreator::RotatedCapsule>>(), ::i2c::type_of<::by_ref<::Technie::PhysicsCreator::ConstructionPlane*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter.Jitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::System::Random*)>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::Jitter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xadc8054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"Jitter", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Random*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter.FitCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::RotatedCapsule (*)(::Technie::PhysicsCreator::ConstructionPlane*, ::ArrayW<::UnityEngine::Vector3>)>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::FitCapsule)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xadc3ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"FitCapsule", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter.ProjectOntoAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Technie::PhysicsCreator::ConstructionPlane*, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::ProjectOntoAxis)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xadc8098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"ProjectOntoAxis", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter.FindCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::ArrayW<::UnityEngine::Vector3>)>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::FindCenter)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xadc80ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"FindCenter", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedCapsuleFitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RotatedCapsuleFitter::*)()>(&::Technie::PhysicsCreator::RotatedCapsuleFitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc81c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Technie::PhysicsCreator::CapsuleDef Technie::PhysicsCreator::RotatedCapsuleFitter::Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::CapsuleDef>(this, ___internal_method, hull, meshVertices, meshIndices);
}
inline ::Technie::PhysicsCreator::CapsuleDef Technie::PhysicsCreator::RotatedCapsuleFitter::Fit(::ArrayW<::UnityEngine::Vector3>  hullVertices, ::ArrayW<int32_t>  hullIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::CapsuleDef>(this, ___internal_method, hullVertices, hullIndices);
}
inline ::Technie::PhysicsCreator::ConstructionPlane* Technie::PhysicsCreator::RotatedCapsuleFitter::FindBestCapsulePlane(::ArrayW<::UnityEngine::Vector3>  hullVertices, ::ArrayW<int32_t>  hullIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"FindBestCapsulePlane", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::ConstructionPlane*>(this, ___internal_method, hullVertices, hullIndices);
}
inline ::Technie::PhysicsCreator::CapsuleDef Technie::PhysicsCreator::RotatedCapsuleFitter::ToDef(::Technie::PhysicsCreator::RotatedCapsule  capsule, ::Technie::PhysicsCreator::ConstructionPlane*  plane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"ToDef", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedCapsule>(), ::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::CapsuleDef>(nullptr, ___internal_method, capsule, plane);
}
inline void Technie::PhysicsCreator::RotatedCapsuleFitter::Refine(::Technie::PhysicsCreator::RotatedCapsule  inputCapule, ::Technie::PhysicsCreator::ConstructionPlane*  inputPlane, ::ArrayW<::UnityEngine::Vector3>  hullVertices, ::by_ref<::Technie::PhysicsCreator::RotatedCapsule>  bestCapsule, ::by_ref<::Technie::PhysicsCreator::ConstructionPlane*>  bestPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"Refine", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedCapsule>(), ::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Technie::PhysicsCreator::RotatedCapsule>>(), ::i2c::type_of<::by_ref<::Technie::PhysicsCreator::ConstructionPlane*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputCapule, inputPlane, hullVertices, bestCapsule, bestPlane);
}
inline float_t Technie::PhysicsCreator::RotatedCapsuleFitter::Jitter(float_t  magnitude, ::System::Random*  random)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"Jitter", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Random*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, magnitude, random);
}
inline ::Technie::PhysicsCreator::RotatedCapsule Technie::PhysicsCreator::RotatedCapsuleFitter::FitCapsule(::Technie::PhysicsCreator::ConstructionPlane*  plane, ::ArrayW<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"FitCapsule", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::RotatedCapsule>(nullptr, ___internal_method, plane, points);
}
inline ::UnityEngine::Vector3 Technie::PhysicsCreator::RotatedCapsuleFitter::ProjectOntoAxis(::Technie::PhysicsCreator::ConstructionPlane*  plane, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"ProjectOntoAxis", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, plane, point);
}
inline ::UnityEngine::Vector3 Technie::PhysicsCreator::RotatedCapsuleFitter::FindCenter(::ArrayW<::UnityEngine::Vector3>  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {"FindCenter", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vertices);
}
inline void Technie::PhysicsCreator::RotatedCapsuleFitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedCapsuleFitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::RotatedCapsuleFitter* Technie::PhysicsCreator::RotatedCapsuleFitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::RotatedCapsuleFitter*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::RotatedCapsuleFitter::RotatedCapsuleFitter()   {
}
