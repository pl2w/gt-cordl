#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/VectorizedBurstRopeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VectorizedBurstRopeData)
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
struct VectorizedBurstRopeData;
}
// Write type traits
MARK_VAL_T(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, "GorillaLocomotion.Gameplay", "VectorizedBurstRopeData");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, Unity.Mathematics.float4, Unity.Mathematics.int4
namespace GorillaLocomotion::Gameplay {
// Is value type: true
// CS Name: GorillaLocomotion.Gameplay.VectorizedBurstRopeData
struct CORDL_TYPE VectorizedBurstRopeData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VectorizedBurstRopeData() ;

// Ctor Parameters [CppParam { name: "posX", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "posY", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "posZ", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "validNodes", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastPosX", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastPosY", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastPosZ", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ropeRoots", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "nodeMass", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }]
constexpr VectorizedBurstRopeData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  posX, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  posY, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  posZ, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>  validNodes, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lastPosX, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lastPosY, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lastPosZ, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  ropeRoots, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  nodeMass) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4544};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field posX, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  posX;

/// @brief Field posY, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  posY;

/// @brief Field posZ, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  posZ;

/// @brief Field validNodes, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int4>  validNodes;

/// @brief Field lastPosX, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lastPosX;

/// @brief Field lastPosY, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lastPosY;

/// @brief Field lastPosZ, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lastPosZ;

/// @brief Field ropeRoots, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  ropeRoots;

/// @brief Field nodeMass, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  nodeMass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, posX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, posY) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, posZ) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, validNodes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, lastPosX) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, lastPosY) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, lastPosZ) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, ropeRoots) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData, nodeMass) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData) == 0x90, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
