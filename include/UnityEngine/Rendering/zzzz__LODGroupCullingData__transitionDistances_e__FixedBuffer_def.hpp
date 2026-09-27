#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupCullingData__transitionDistances_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LODGroupCullingData__transitionDistances_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct LODGroupCullingData__transitionDistances_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer, "UnityEngine.Rendering", "LODGroupCullingData/<transitionDistances>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupCullingData/<transitionDistances>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LODGroupCullingData__transitionDistances_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupCullingData__transitionDistances_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LODGroupCullingData__transitionDistances_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26684};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x20 - 0x4 = 0x1c, packed as 0x1c
 uint8_t  _cordl_size_padding[0x1c];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LODGroupCullingData__transitionDistances_e__FixedBuffer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
