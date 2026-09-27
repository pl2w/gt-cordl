#pragma once
// IWYU pragma private; include "Voxels/SurfaceNetsJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Voxels/zzzz__SurfaceNetsBuffer_impl.hpp"
#include "Voxels/zzzz__SurfaceNetsJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
//  Writing Method size for method: ::Voxels::SurfaceNetsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SurfaceNetsJob::*)()>(&::Voxels::SurfaceNetsJob::Execute)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5db4f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SurfaceNetsJob.EstimateSurfaceInCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::SurfaceNetsJob::*)(::Unity::Mathematics::int3, int32_t, int32_t, int32_t, int32_t, ::by_ref<::Unity::Mathematics::float3>)>(&::Voxels::SurfaceNetsJob::EstimateSurfaceInCube)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5db51e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"EstimateSurfaceInCube", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SurfaceNetsJob.EdgeIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(int32_t, int32_t, float_t, float_t)>(&::Voxels::SurfaceNetsJob::EdgeIntersection)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5db5a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"EdgeIntersection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SurfaceNetsJob.MakeAllQuads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SurfaceNetsJob::*)(int32_t, int32_t, int32_t)>(&::Voxels::SurfaceNetsJob::MakeAllQuads)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5db5454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"MakeAllQuads", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SurfaceNetsJob.TryQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SurfaceNetsJob::*)(int32_t, int32_t, int32_t, int32_t)>(&::Voxels::SurfaceNetsJob::TryQuad)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5db5b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"TryQuad", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SurfaceNetsJob.AccumulateNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SurfaceNetsJob::*)()>(&::Voxels::SurfaceNetsJob::AccumulateNormals)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5db5694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"AccumulateNormals", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::SurfaceNetsJob::setStaticF_cubeCorners(::ArrayW<::Unity::Mathematics::int3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::int3>, "cubeCorners", ::Voxels::SurfaceNetsJob>(std::forward<::ArrayW<::Unity::Mathematics::int3>>(value));
}
inline ::ArrayW<::Unity::Mathematics::int3> Voxels::SurfaceNetsJob::getStaticF_cubeCorners()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::int3>, "cubeCorners", ::Voxels::SurfaceNetsJob>();
}
inline void Voxels::SurfaceNetsJob::setStaticF_cornerVecs(::ArrayW<::Unity::Mathematics::float3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::float3>, "cornerVecs", ::Voxels::SurfaceNetsJob>(std::forward<::ArrayW<::Unity::Mathematics::float3>>(value));
}
inline ::ArrayW<::Unity::Mathematics::float3> Voxels::SurfaceNetsJob::getStaticF_cornerVecs()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::float3>, "cornerVecs", ::Voxels::SurfaceNetsJob>();
}
inline void Voxels::SurfaceNetsJob::setStaticF_cubeEdges(::ArrayW<::Unity::Mathematics::int2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::int2>, "cubeEdges", ::Voxels::SurfaceNetsJob>(std::forward<::ArrayW<::Unity::Mathematics::int2>>(value));
}
inline ::ArrayW<::Unity::Mathematics::int2> Voxels::SurfaceNetsJob::getStaticF_cubeEdges()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::int2>, "cubeEdges", ::Voxels::SurfaceNetsJob>();
}
inline void Voxels::SurfaceNetsJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Voxels::SurfaceNetsJob::EstimateSurfaceInCube(::Unity::Mathematics::int3  voxel, int32_t  cubeMin, int32_t  sx, int32_t  sy, int32_t  sz, ::by_ref<::Unity::Mathematics::float3>  centroid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"EstimateSurfaceInCube", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, voxel, cubeMin, sx, sy, sz, centroid);
}
inline ::Unity::Mathematics::float3 Voxels::SurfaceNetsJob::EdgeIntersection(int32_t  c1, int32_t  c2, float_t  v1, float_t  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"EdgeIntersection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, c1, c2, v1, v2);
}
inline void Voxels::SurfaceNetsJob::MakeAllQuads(int32_t  sx, int32_t  sy, int32_t  sz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"MakeAllQuads", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sx, sy, sz);
}
inline void Voxels::SurfaceNetsJob::TryQuad(int32_t  p1, int32_t  p2, int32_t  strideB, int32_t  strideC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"TryQuad", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p1, p2, strideB, strideC);
}
inline void Voxels::SurfaceNetsJob::AccumulateNormals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsJob>(),
                        {"AccumulateNormals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  Voxels::SurfaceNetsJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Voxels::SurfaceNetsJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "sdf", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shape", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "min", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "max", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isoLevel", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buffer", ty: "::Voxels::SurfaceNetsBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::SurfaceNetsJob::SurfaceNetsJob(::Unity::Collections::NativeArray_1<uint8_t>  sdf, ::Unity::Collections::NativeArray_1<uint8_t>  material, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, uint8_t  isoLevel, ::Voxels::SurfaceNetsBuffer  buffer) noexcept  {
this->sdf = sdf;
this->material = material;
this->shape = shape;
this->min = min;
this->max = max;
this->isoLevel = isoLevel;
this->buffer = buffer;
}
// Ctor Parameters []
constexpr ::Voxels::SurfaceNetsJob::SurfaceNetsJob()   {
}
