#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalUpdateCachedSystem_UpdateTransformsJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCachedSystem_UpdateTransformsJob_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob.DistanceBetweenQuaternions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::*)(::Unity::Mathematics::quaternion, ::Unity::Mathematics::quaternion)>(&::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::DistanceBetweenQuaternions)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb239a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                        {"DistanceBetweenQuaternions", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::Execute)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0xb239a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob.GetDecalProjectBoundingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::*)(::UnityEngine::Matrix4x4)>(&::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::GetDecalProjectBoundingSphere)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb239ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                        {"GetDecalProjectBoundingSphere", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::setStaticF_k_MinusYtoZRotation(::Unity::Mathematics::quaternion  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::quaternion, "k_MinusYtoZRotation", ::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob>(std::forward<::Unity::Mathematics::quaternion>(value));
}
inline ::Unity::Mathematics::quaternion GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::getStaticF_k_MinusYtoZRotation()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::quaternion, "k_MinusYtoZRotation", ::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob>();
}
inline float_t GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::DistanceBetweenQuaternions(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                        {"DistanceBetweenQuaternions", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, a, b);
}
inline void GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
inline ::UnityEngine::BoundingSphere GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::GetDecalProjectBoundingSphere(::UnityEngine::Matrix4x4  decalToWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                        {"GetDecalProjectBoundingSphere", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(*this, ___internal_method, decalToWorld);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr  GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::i___UnityEngine__Jobs__IJobParallelForTransform()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotations", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scales", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dirty", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scaleModes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sizeOffsets", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "decalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boundingSpheres", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::DecalUpdateCachedSystem_UpdateTransformsJob(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion>  rotations, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  scales, ::Unity::Collections::NativeArray_1<bool>  dirty, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>  scaleModes, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  sizeOffsets, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  decalToWorlds, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  normalToWorlds, ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>  boundingSpheres, float_t  minDistance) noexcept  {
this->positions = positions;
this->rotations = rotations;
this->scales = scales;
this->dirty = dirty;
this->scaleModes = scaleModes;
this->sizeOffsets = sizeOffsets;
this->decalToWorlds = decalToWorlds;
this->normalToWorlds = normalToWorlds;
this->boundingSpheres = boundingSpheres;
this->minDistance = minDistance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob::DecalUpdateCachedSystem_UpdateTransformsJob()   {
}
