#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNets.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "FastSurfaceNets/zzzz__SurfaceNets_def.hpp"
#include "FastSurfaceNets/zzzz__SurfaceNetsBuffer_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNets.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, ::Unity::Mathematics::int3, ::Unity::Mathematics::int3, ::Unity::Mathematics::int3, ::FastSurfaceNets::SurfaceNetsBuffer*)>(&::FastSurfaceNets::SurfaceNets::Generate)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5da8698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"Generate", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNets.EstimateSurfaceInCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<float_t>, ::Unity::Mathematics::int3, ::Unity::Mathematics::int3, int32_t, int32_t, int32_t, int32_t, ::FastSurfaceNets::SurfaceNetsBuffer*, ::by_ref<::Unity::Mathematics::float3>)>(&::FastSurfaceNets::SurfaceNets::EstimateSurfaceInCube)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5da8ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"EstimateSurfaceInCube", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNets.EdgeIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(int32_t, int32_t, float_t, float_t)>(&::FastSurfaceNets::SurfaceNets::EdgeIntersection)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5da9260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"EdgeIntersection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNets.CentralDifferenceGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::ArrayW<float_t>, ::Unity::Mathematics::int3, ::Unity::Mathematics::int3, int32_t, int32_t, int32_t)>(&::FastSurfaceNets::SurfaceNets::CentralDifferenceGradient)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5da9348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"CentralDifferenceGradient", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNets.MakeAllQuads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, ::Unity::Mathematics::int3, ::Unity::Mathematics::int3, ::Unity::Mathematics::int3, int32_t, int32_t, int32_t, ::FastSurfaceNets::SurfaceNetsBuffer*)>(&::FastSurfaceNets::SurfaceNets::MakeAllQuads)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5da8df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"MakeAllQuads", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNets.MaybeQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, ::FastSurfaceNets::SurfaceNetsBuffer*, int32_t, int32_t, int32_t, int32_t)>(&::FastSurfaceNets::SurfaceNets::MaybeQuad)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5da9444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"MaybeQuad", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNets.AccumulateNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::FastSurfaceNets::SurfaceNetsBuffer*)>(&::FastSurfaceNets::SurfaceNets::AccumulateNormals)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5da9010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"AccumulateNormals", {}, {::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void FastSurfaceNets::SurfaceNets::setStaticF_CubeCorners(::ArrayW<::Unity::Mathematics::int3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::int3>, "CubeCorners", ::FastSurfaceNets::SurfaceNets*>(std::forward<::ArrayW<::Unity::Mathematics::int3>>(value));
}
inline ::ArrayW<::Unity::Mathematics::int3> FastSurfaceNets::SurfaceNets::getStaticF_CubeCorners()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::int3>, "CubeCorners", ::FastSurfaceNets::SurfaceNets*>();
}
inline void FastSurfaceNets::SurfaceNets::setStaticF_CornerVectors(::ArrayW<::Unity::Mathematics::float3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::float3>, "CornerVectors", ::FastSurfaceNets::SurfaceNets*>(std::forward<::ArrayW<::Unity::Mathematics::float3>>(value));
}
inline ::ArrayW<::Unity::Mathematics::float3> FastSurfaceNets::SurfaceNets::getStaticF_CornerVectors()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::float3>, "CornerVectors", ::FastSurfaceNets::SurfaceNets*>();
}
inline void FastSurfaceNets::SurfaceNets::setStaticF_CubeEdges(::ArrayW<::Unity::Mathematics::int2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::int2>, "CubeEdges", ::FastSurfaceNets::SurfaceNets*>(std::forward<::ArrayW<::Unity::Mathematics::int2>>(value));
}
inline ::ArrayW<::Unity::Mathematics::int2> FastSurfaceNets::SurfaceNets::getStaticF_CubeEdges()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::int2>, "CubeEdges", ::FastSurfaceNets::SurfaceNets*>();
}
inline void FastSurfaceNets::SurfaceNets::Generate(::ArrayW<float_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, ::FastSurfaceNets::SurfaceNetsBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"Generate", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sdf, shape, min, max, output);
}
inline bool FastSurfaceNets::SurfaceNets::EstimateSurfaceInCube(::ArrayW<float_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  voxel, int32_t  cubeMinStride, int32_t  strideX, int32_t  strideY, int32_t  strideZ, ::FastSurfaceNets::SurfaceNetsBuffer*  output, ::by_ref<::Unity::Mathematics::float3>  centroid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"EstimateSurfaceInCube", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sdf, shape, voxel, cubeMinStride, strideX, strideY, strideZ, output, centroid);
}
inline ::Unity::Mathematics::float3 FastSurfaceNets::SurfaceNets::EdgeIntersection(int32_t  c1, int32_t  c2, float_t  v1, float_t  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"EdgeIntersection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, c1, c2, v1, v2);
}
inline ::Unity::Mathematics::float3 FastSurfaceNets::SurfaceNets::CentralDifferenceGradient(::ArrayW<float_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  v, int32_t  sx, int32_t  sy, int32_t  sz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"CentralDifferenceGradient", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, sdf, shape, v, sx, sy, sz);
}
inline void FastSurfaceNets::SurfaceNets::MakeAllQuads(::ArrayW<float_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, int32_t  sx, int32_t  sy, int32_t  sz, ::FastSurfaceNets::SurfaceNetsBuffer*  outBuf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"MakeAllQuads", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sdf, shape, min, max, sx, sy, sz, outBuf);
}
inline void FastSurfaceNets::SurfaceNets::MaybeQuad(::ArrayW<float_t>  sdf, ::FastSurfaceNets::SurfaceNetsBuffer*  b, int32_t  p1, int32_t  p2, int32_t  strideB, int32_t  strideC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"MaybeQuad", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sdf, b, p1, p2, strideB, strideC);
}
inline void FastSurfaceNets::SurfaceNets::AccumulateNormals(::FastSurfaceNets::SurfaceNetsBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNets*>(),
                        {"AccumulateNormals", {}, {::i2c::type_of<::FastSurfaceNets::SurfaceNetsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, b);
}
// Ctor Parameters []
constexpr ::FastSurfaceNets::SurfaceNets::SurfaceNets()   {
}
