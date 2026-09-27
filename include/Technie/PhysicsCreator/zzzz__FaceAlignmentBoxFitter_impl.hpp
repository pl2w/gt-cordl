#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/FaceAlignmentBoxFitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__FaceAlignmentBoxFitter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/Rigid/zzzz__Hull_def.hpp"
#include "Technie/PhysicsCreator/zzzz__ConstructionPlane_def.hpp"
#include "Technie/PhysicsCreator/zzzz__TriangleBucket_def.hpp"
#include "Technie/PhysicsCreator/zzzz__Triangle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::FaceAlignmentBoxFitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::FaceAlignmentBoxFitter::*)()>(&::Technie::PhysicsCreator::FaceAlignmentBoxFitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc50a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::FaceAlignmentBoxFitter.Fit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::FaceAlignmentBoxFitter::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::FaceAlignmentBoxFitter::Fit)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xadc50a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::FaceAlignmentBoxFitter.FindBestBucket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::TriangleBucket* (::Technie::PhysicsCreator::FaceAlignmentBoxFitter::*)(::Technie::PhysicsCreator::Triangle*, float_t, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*)>(&::Technie::PhysicsCreator::FaceAlignmentBoxFitter::FindBestBucket)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xadc57e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {"FindBestBucket", {}, {::i2c::type_of<::Technie::PhysicsCreator::Triangle*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::FaceAlignmentBoxFitter.MergeClosestBuckets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::FaceAlignmentBoxFitter::*)(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*)>(&::Technie::PhysicsCreator::FaceAlignmentBoxFitter::MergeClosestBuckets)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xadc5b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {"MergeClosestBuckets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::FaceAlignmentBoxFitter.CreateConstructionPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::ConstructionPlane* (::Technie::PhysicsCreator::FaceAlignmentBoxFitter::*)(::Technie::PhysicsCreator::TriangleBucket*, ::Technie::PhysicsCreator::TriangleBucket*, ::Technie::PhysicsCreator::TriangleBucket*)>(&::Technie::PhysicsCreator::FaceAlignmentBoxFitter::CreateConstructionPlane)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xadc5e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {"CreateConstructionPlane", {}, {::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>(), ::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>(), ::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::FaceAlignmentBoxFitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::FaceAlignmentBoxFitter::Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {"Fit", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hull, meshVertices, meshIndices);
}
inline ::Technie::PhysicsCreator::TriangleBucket* Technie::PhysicsCreator::FaceAlignmentBoxFitter::FindBestBucket(::Technie::PhysicsCreator::Triangle*  tri, float_t  thresholdAngleDeg, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*  buckets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {"FindBestBucket", {}, {::i2c::type_of<::Technie::PhysicsCreator::Triangle*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::TriangleBucket*>(this, ___internal_method, tri, thresholdAngleDeg, buckets);
}
inline void Technie::PhysicsCreator::FaceAlignmentBoxFitter::MergeClosestBuckets(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*  buckets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {"MergeClosestBuckets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buckets);
}
inline ::Technie::PhysicsCreator::ConstructionPlane* Technie::PhysicsCreator::FaceAlignmentBoxFitter::CreateConstructionPlane(::Technie::PhysicsCreator::TriangleBucket*  primaryBucket, ::Technie::PhysicsCreator::TriangleBucket*  secondaryBucket, ::Technie::PhysicsCreator::TriangleBucket*  tertiaryBucket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>(),
                        {"CreateConstructionPlane", {}, {::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>(), ::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>(), ::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::ConstructionPlane*>(this, ___internal_method, primaryBucket, secondaryBucket, tertiaryBucket);
}
inline ::Technie::PhysicsCreator::FaceAlignmentBoxFitter* Technie::PhysicsCreator::FaceAlignmentBoxFitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::FaceAlignmentBoxFitter*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::FaceAlignmentBoxFitter::FaceAlignmentBoxFitter()   {
}
