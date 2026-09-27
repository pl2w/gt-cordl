#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer, "UnityEngine.Rendering", "OcclusionCullingCommonShaderVariables/<_ViewProjMatrix>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommonShaderVariables/<_ViewProjMatrix>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26715};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x180};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x180 - 0x4 = 0x17c, packed as 0x17c
 uint8_t  _cordl_size_padding[0x17c];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer) == 0x180, "Size mismatch!");

} // namespace end def GlobalNamespace
