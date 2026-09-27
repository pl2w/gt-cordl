#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/VectorizedBurstRopeData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__int4_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__VectorizedBurstRopeData_def.hpp"
// Ctor Parameters [CppParam { name: "posX", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "posY", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "posZ", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "validNodes", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastPosX", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastPosY", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastPosZ", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ropeRoots", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nodeMass", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData::VectorizedBurstRopeData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  posX, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  posY, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  posZ, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>  validNodes, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lastPosX, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lastPosY, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lastPosZ, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  ropeRoots, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  nodeMass) noexcept  {
this->posX = posX;
this->posY = posY;
this->posZ = posZ;
this->validNodes = validNodes;
this->lastPosX = lastPosX;
this->lastPosY = lastPosY;
this->lastPosZ = lastPosZ;
this->ropeRoots = ropeRoots;
this->nodeMass = nodeMass;
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData::VectorizedBurstRopeData()   {
}
