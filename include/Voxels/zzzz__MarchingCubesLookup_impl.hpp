#pragma once
// IWYU pragma private; include "Voxels/MarchingCubesLookup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "Voxels/zzzz__MarchingCubesLookup_def.hpp"
inline void Voxels::MarchingCubesLookup::setStaticF_EdgeTable(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "EdgeTable", ::Voxels::MarchingCubesLookup*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Voxels::MarchingCubesLookup::getStaticF_EdgeTable()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "EdgeTable", ::Voxels::MarchingCubesLookup*>();
}
inline void Voxels::MarchingCubesLookup::setStaticF_TriTable(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "TriTable", ::Voxels::MarchingCubesLookup*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Voxels::MarchingCubesLookup::getStaticF_TriTable()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "TriTable", ::Voxels::MarchingCubesLookup*>();
}
inline void Voxels::MarchingCubesLookup::setStaticF_CornerOffsets(::ArrayW<::Unity::Mathematics::float3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::float3>, "CornerOffsets", ::Voxels::MarchingCubesLookup*>(std::forward<::ArrayW<::Unity::Mathematics::float3>>(value));
}
inline ::ArrayW<::Unity::Mathematics::float3> Voxels::MarchingCubesLookup::getStaticF_CornerOffsets()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::float3>, "CornerOffsets", ::Voxels::MarchingCubesLookup*>();
}
inline void Voxels::MarchingCubesLookup::setStaticF_EdgeVertices(::ArrayW<::Unity::Mathematics::int2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::int2>, "EdgeVertices", ::Voxels::MarchingCubesLookup*>(std::forward<::ArrayW<::Unity::Mathematics::int2>>(value));
}
inline ::ArrayW<::Unity::Mathematics::int2> Voxels::MarchingCubesLookup::getStaticF_EdgeVertices()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::int2>, "EdgeVertices", ::Voxels::MarchingCubesLookup*>();
}
// Ctor Parameters []
constexpr ::Voxels::MarchingCubesLookup::MarchingCubesLookup()   {
}
