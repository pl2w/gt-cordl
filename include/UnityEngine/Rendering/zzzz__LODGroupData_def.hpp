#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__LODGroupData__fadeTransitionWidth_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroupData)
namespace GlobalNamespace {
struct LODGroupData__fadeTransitionWidth_e__FixedBuffer;
}
namespace GlobalNamespace {
struct LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LODGroupData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LODGroupData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupData, "UnityEngine.Rendering", "LODGroupData");
// Dependencies UnityEngine.Rendering.LODGroupData::<fadeTransitionWidth>e__FixedBuffer, UnityEngine.Rendering.LODGroupData::<screenRelativeTransitionHeights>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupData
struct CORDL_TYPE LODGroupData {
public:
// Declarations
using _fadeTransitionWidth_e__FixedBuffer = ::GlobalNamespace::LODGroupData__fadeTransitionWidth_e__FixedBuffer;

using _screenRelativeTransitionHeights_e__FixedBuffer = ::GlobalNamespace::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr LODGroupData() ;

// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "screenRelativeTransitionHeights", ty: "::GlobalNamespace::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "fadeTransitionWidth", ty: "::GlobalNamespace::LODGroupData__fadeTransitionWidth_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr LODGroupData(bool  valid, int32_t  lodCount, int32_t  rendererCount, ::GlobalNamespace::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer  screenRelativeTransitionHeights, ::GlobalNamespace::LODGroupData__fadeTransitionWidth_e__FixedBuffer  fadeTransitionWidth) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4c};

/// @brief Field valid, offset: 0x0, size: 0x1, def value: None
 bool  valid;

/// @brief Field lodCount, offset: 0x4, size: 0x4, def value: None
 int32_t  lodCount;

/// @brief Field rendererCount, offset: 0x8, size: 0x4, def value: None
 int32_t  rendererCount;

/// [FixedBuffer(typeof(System.Single), 8)]
/// @brief Field screenRelativeTransitionHeights, offset: 0xc, size: 0x20, def value: None
 ::GlobalNamespace::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer  screenRelativeTransitionHeights;

/// [FixedBuffer(typeof(System.Single), 8)]
/// @brief Field fadeTransitionWidth, offset: 0x2c, size: 0x20, def value: None
 ::GlobalNamespace::LODGroupData__fadeTransitionWidth_e__FixedBuffer  fadeTransitionWidth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, lodCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, rendererCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, screenRelativeTransitionHeights) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, fadeTransitionWidth) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::LODGroupData) == 0x4c, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
