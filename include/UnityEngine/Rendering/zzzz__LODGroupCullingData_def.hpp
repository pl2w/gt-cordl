#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupCullingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData__percentageFlags_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData__sqrDistances_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData__transitionDistances_e__FixedBuffer_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroupCullingData)
namespace GlobalNamespace {
struct LODGroupCullingData__percentageFlags_e__FixedBuffer;
}
namespace GlobalNamespace {
struct LODGroupCullingData__sqrDistances_e__FixedBuffer;
}
namespace GlobalNamespace {
struct LODGroupCullingData__transitionDistances_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LODGroupCullingData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LODGroupCullingData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupCullingData, "UnityEngine.Rendering", "LODGroupCullingData");
// Dependencies Unity.Mathematics.float3, UnityEngine.Rendering.LODGroupCullingData::<percentageFlags>e__FixedBuffer, UnityEngine.Rendering.LODGroupCullingData::<sqrDistances>e__FixedBuffer, UnityEngine.Rendering.LODGroupCullingData::<transitionDistances>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupCullingData
struct CORDL_TYPE LODGroupCullingData {
public:
// Declarations
using _percentageFlags_e__FixedBuffer = ::GlobalNamespace::LODGroupCullingData__percentageFlags_e__FixedBuffer;

using _sqrDistances_e__FixedBuffer = ::GlobalNamespace::LODGroupCullingData__sqrDistances_e__FixedBuffer;

using _transitionDistances_e__FixedBuffer = ::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr LODGroupCullingData() ;

// Ctor Parameters [CppParam { name: "worldSpaceReferencePoint", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sqrDistances", ty: "::GlobalNamespace::LODGroupCullingData__sqrDistances_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "transitionDistances", ty: "::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldSpaceSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "percentageFlags", ty: "::GlobalNamespace::LODGroupCullingData__percentageFlags_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "forceLODMask", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr LODGroupCullingData(::Unity::Mathematics::float3  worldSpaceReferencePoint, int32_t  lodCount, ::GlobalNamespace::LODGroupCullingData__sqrDistances_e__FixedBuffer  sqrDistances, ::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer  transitionDistances, float_t  worldSpaceSize, ::GlobalNamespace::LODGroupCullingData__percentageFlags_e__FixedBuffer  percentageFlags, uint8_t  forceLODMask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field worldSpaceReferencePoint, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  worldSpaceReferencePoint;

/// @brief Field lodCount, offset: 0xc, size: 0x4, def value: None
 int32_t  lodCount;

/// [FixedBuffer(typeof(System.Single), 8)]
/// @brief Field sqrDistances, offset: 0x10, size: 0x20, def value: None
 ::GlobalNamespace::LODGroupCullingData__sqrDistances_e__FixedBuffer  sqrDistances;

/// [FixedBuffer(typeof(System.Single), 8)]
/// @brief Field transitionDistances, offset: 0x30, size: 0x20, def value: None
 ::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer  transitionDistances;

/// @brief Field worldSpaceSize, offset: 0x50, size: 0x4, def value: None
 float_t  worldSpaceSize;

/// [FixedBuffer(typeof(System.Boolean), 8)]
/// @brief Field percentageFlags, offset: 0x54, size: 0x8, def value: None
 ::GlobalNamespace::LODGroupCullingData__percentageFlags_e__FixedBuffer  percentageFlags;

/// @brief Field forceLODMask, offset: 0x5c, size: 0x1, def value: None
 uint8_t  forceLODMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, worldSpaceReferencePoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, lodCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, sqrDistances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, transitionDistances) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, worldSpaceSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, percentageFlags) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, forceLODMask) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::LODGroupCullingData) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
