#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__Utils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IHull_def.hpp"
#include "Technie/PhysicsCreator/zzzz__UnpackedMesh_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.CreateSkewableTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Transform*)>(&::Technie::PhysicsCreator::Utils::CreateSkewableTRS)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xadd6d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"CreateSkewableTRS", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.Inflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Technie::PhysicsCreator::Utils::Inflate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xadd6f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"Inflate", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.ConvertToPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Plane> (*)(::UnityEngine::Mesh*, bool)>(&::Technie::PhysicsCreator::Utils::ConvertToPlanes)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0xadd6f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"ConvertToPlanes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Plane, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*)>(&::Technie::PhysicsCreator::Utils::Contains)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xadd7780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Plane>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Mesh*, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Utils::Clip)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xadd79e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"Clip", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.CalcTriangleArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::Utils::CalcTriangleArea)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xadd7c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"CalcTriangleArea", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.TimeProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::Technie::PhysicsCreator::Utils::TimeProgression)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xadd7d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"TimeProgression", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.AsymtopicProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Technie::PhysicsCreator::Utils::AsymtopicProgression)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadd7d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"AsymtopicProgression", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.FindBoneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Transform*)>(&::Technie::PhysicsCreator::Utils::FindBoneIndex)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xadd7d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"FindBoneIndex", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.IsWeightAboveThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::BoneWeight, int32_t, float_t, float_t)>(&::Technie::PhysicsCreator::Utils::IsWeightAboveThreshold)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xadd7e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"IsWeightAboveThreshold", {}, {::i2c::type_of<::UnityEngine::BoneWeight>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.IsWeightAboveThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, float_t, int32_t, float_t, float_t)>(&::Technie::PhysicsCreator::Utils::IsWeightAboveThreshold)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xadd7f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"IsWeightAboveThreshold", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.NumVerticesForBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Technie::PhysicsCreator::UnpackedMesh*, ::UnityEngine::Transform*, float_t, float_t)>(&::Technie::PhysicsCreator::Utils::NumVerticesForBone)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xadd7f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"NumVerticesForBone", {}, {::i2c::type_of<::Technie::PhysicsCreator::UnpackedMesh*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Utils.UpdateCachedVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Technie::PhysicsCreator::IHull*, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Utils::UpdateCachedVertices)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xadd7fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"UpdateCachedVertices", {}, {::i2c::type_of<::Technie::PhysicsCreator::IHull*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Matrix4x4 Technie::PhysicsCreator::Utils::CreateSkewableTRS(::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"CreateSkewableTRS", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, target);
}
inline void Technie::PhysicsCreator::Utils::Inflate(::UnityEngine::Vector3  point, ::by_ref<::UnityEngine::Vector3>  min, ::by_ref<::UnityEngine::Vector3>  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"Inflate", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, point, min, max);
}
inline ::ArrayW<::UnityEngine::Plane> Technie::PhysicsCreator::Utils::ConvertToPlanes(::UnityEngine::Mesh*  convexMesh, bool  show)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"ConvertToPlanes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Plane>>(nullptr, ___internal_method, convexMesh, show);
}
inline bool Technie::PhysicsCreator::Utils::Contains(::UnityEngine::Plane  toTest, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Plane>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, toTest, planes);
}
inline ::UnityW<::UnityEngine::Mesh> Technie::PhysicsCreator::Utils::Clip(::UnityEngine::Mesh*  boundingMesh, ::UnityEngine::Mesh*  inputMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"Clip", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, boundingMesh, inputMesh);
}
inline float_t Technie::PhysicsCreator::Utils::CalcTriangleArea(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"CalcTriangleArea", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p0, p1, p2);
}
inline float_t Technie::PhysicsCreator::Utils::TimeProgression(float_t  elapsedTime, float_t  maxTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"TimeProgression", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, elapsedTime, maxTime);
}
inline float_t Technie::PhysicsCreator::Utils::AsymtopicProgression(float_t  inputProgress, float_t  maxProgression, float_t  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"AsymtopicProgression", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, inputProgress, maxProgression, rate);
}
inline int32_t Technie::PhysicsCreator::Utils::FindBoneIndex(::UnityEngine::SkinnedMeshRenderer*  skinnedRenderer, ::UnityEngine::Transform*  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"FindBoneIndex", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, skinnedRenderer, bone);
}
inline bool Technie::PhysicsCreator::Utils::IsWeightAboveThreshold(::UnityEngine::BoneWeight  weights, int32_t  ownBoneIndex, float_t  minThreshold, float_t  maxThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"IsWeightAboveThreshold", {}, {::i2c::type_of<::UnityEngine::BoneWeight>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, weights, ownBoneIndex, minThreshold, maxThreshold);
}
inline bool Technie::PhysicsCreator::Utils::IsWeightAboveThreshold(int32_t  boneIndex, float_t  boneWeight, int32_t  ourIndex, float_t  minThreshold, float_t  maxThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"IsWeightAboveThreshold", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, boneIndex, boneWeight, ourIndex, minThreshold, maxThreshold);
}
inline int32_t Technie::PhysicsCreator::Utils::NumVerticesForBone(::Technie::PhysicsCreator::UnpackedMesh*  mesh, ::UnityEngine::Transform*  bone, float_t  minThreshold, float_t  maxThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"NumVerticesForBone", {}, {::i2c::type_of<::Technie::PhysicsCreator::UnpackedMesh*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mesh, bone, minThreshold, maxThreshold);
}
inline void Technie::PhysicsCreator::Utils::UpdateCachedVertices(::Technie::PhysicsCreator::IHull*  hull, ::UnityEngine::Mesh*  srcMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Utils*>(),
                        {"UpdateCachedVertices", {}, {::i2c::type_of<::Technie::PhysicsCreator::IHull*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hull, srcMesh);
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Utils::Utils()   {
}
