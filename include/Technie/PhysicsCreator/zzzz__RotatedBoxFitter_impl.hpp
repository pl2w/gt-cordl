#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RotatedBoxFitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__RotatedBoxFitter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/Rigid/zzzz__Hull_def.hpp"
#include "Technie/PhysicsCreator/zzzz__BoxDef_def.hpp"
#include "Technie/PhysicsCreator/zzzz__ConstructionPlane_def.hpp"
#include "Technie/PhysicsCreator/zzzz__RotatedBox_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBoxFitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RotatedBoxFitter::*)()>(&::Technie::PhysicsCreator::RotatedBoxFitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc65a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBoxFitter.Fit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::BoxDef (::Technie::PhysicsCreator::RotatedBoxFitter::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::RotatedBoxFitter::Fit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xadc65a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBoxFitter.Fit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::BoxDef (::Technie::PhysicsCreator::RotatedBoxFitter::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::RotatedBoxFitter::Fit)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0xadc6ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBoxFitter.GeneratePlaneVariants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Technie::PhysicsCreator::ConstructionPlane*, int32_t, float_t, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*)>(&::Technie::PhysicsCreator::RotatedBoxFitter::GeneratePlaneVariants)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xadc7508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"GeneratePlaneVariants", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBoxFitter.UnifyOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Technie::PhysicsCreator::RotatedBox*)>(&::Technie::PhysicsCreator::RotatedBoxFitter::UnifyOffsets)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xadc76b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"UnifyOffsets", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBoxFitter.ToBoxDef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::BoxDef (*)(::Technie::PhysicsCreator::RotatedBox*)>(&::Technie::PhysicsCreator::RotatedBoxFitter::ToBoxDef)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadc7754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"ToBoxDef", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBoxFitter.ApplyToHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Technie::PhysicsCreator::RotatedBox*, ::Technie::PhysicsCreator::Rigid::Hull*)>(&::Technie::PhysicsCreator::RotatedBoxFitter::ApplyToHull)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xadc4634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"ApplyToHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>(), ::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBoxFitter.FindTightestBoxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::RotatedBox*>* (*)(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*, ::ArrayW<::UnityEngine::Vector3>)>(&::Technie::PhysicsCreator::RotatedBoxFitter::FindTightestBoxes)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xadc72ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"FindTightestBoxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBoxFitter.FindTightestBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::RotatedBox* (*)(::Technie::PhysicsCreator::ConstructionPlane*, ::ArrayW<::UnityEngine::Vector3>)>(&::Technie::PhysicsCreator::RotatedBoxFitter::FindTightestBox)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xadc3a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"FindTightestBox", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::RotatedBoxFitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::BoxDef Technie::PhysicsCreator::RotatedBoxFitter::Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::BoxDef>(this, ___internal_method, hull, meshVertices, meshIndices);
}
inline ::Technie::PhysicsCreator::BoxDef Technie::PhysicsCreator::RotatedBoxFitter::Fit(::ArrayW<::UnityEngine::Vector3>  hullVertices, ::ArrayW<int32_t>  hullIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::BoxDef>(this, ___internal_method, hullVertices, hullIndices);
}
inline void Technie::PhysicsCreator::RotatedBoxFitter::GeneratePlaneVariants(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, int32_t  numVariants, float_t  angleRange, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*  variantPlanes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"GeneratePlaneVariants", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, basePlane, numVariants, angleRange, variantPlanes);
}
inline void Technie::PhysicsCreator::RotatedBoxFitter::UnifyOffsets(::Technie::PhysicsCreator::RotatedBox*  inputBox)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"UnifyOffsets", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputBox);
}
inline ::Technie::PhysicsCreator::BoxDef Technie::PhysicsCreator::RotatedBoxFitter::ToBoxDef(::Technie::PhysicsCreator::RotatedBox*  computedBox)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"ToBoxDef", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::BoxDef>(nullptr, ___internal_method, computedBox);
}
inline void Technie::PhysicsCreator::RotatedBoxFitter::ApplyToHull(::Technie::PhysicsCreator::RotatedBox*  computedBox, ::Technie::PhysicsCreator::Rigid::Hull*  targetHull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"ApplyToHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>(), ::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, computedBox, targetHull);
}
inline ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::RotatedBox*>* Technie::PhysicsCreator::RotatedBoxFitter::FindTightestBoxes(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*  planes, ::ArrayW<::UnityEngine::Vector3>  inputVertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"FindTightestBoxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::RotatedBox*>*>(nullptr, ___internal_method, planes, inputVertices);
}
inline ::Technie::PhysicsCreator::RotatedBox* Technie::PhysicsCreator::RotatedBoxFitter::FindTightestBox(::Technie::PhysicsCreator::ConstructionPlane*  plane, ::ArrayW<::UnityEngine::Vector3>  inputVertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBoxFitter*>(),
                        {"FindTightestBox", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::RotatedBox*>(nullptr, ___internal_method, plane, inputVertices);
}
inline ::Technie::PhysicsCreator::RotatedBoxFitter* Technie::PhysicsCreator::RotatedBoxFitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::RotatedBoxFitter*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::RotatedBoxFitter::RotatedBoxFitter()   {
}
