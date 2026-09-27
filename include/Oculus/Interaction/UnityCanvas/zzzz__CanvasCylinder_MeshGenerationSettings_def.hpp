#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasCylinder_MeshGenerationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasCylinder_MeshGenerationSettings)
// Forward declare root types
namespace GlobalNamespace {
struct CanvasCylinder_MeshGenerationSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CanvasCylinder_MeshGenerationSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CanvasCylinder_MeshGenerationSettings, "Oculus.Interaction.UnityCanvas", "CanvasCylinder/MeshGenerationSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.UnityCanvas.CanvasCylinder/MeshGenerationSettings
struct CORDL_TYPE CanvasCylinder_MeshGenerationSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CanvasCylinder_MeshGenerationSettings() ;

// Ctor Parameters [CppParam { name: "VerticesPerDegree", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxHorizontalResolution", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxVerticalResolution", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CanvasCylinder_MeshGenerationSettings(float_t  VerticesPerDegree, int32_t  MaxHorizontalResolution, int32_t  MaxVerticalResolution) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [Delayed]
/// @brief Field VerticesPerDegree, offset: 0x0, size: 0x4, def value: None
 float_t  VerticesPerDegree;

/// [Delayed]
/// @brief Field MaxHorizontalResolution, offset: 0x4, size: 0x4, def value: None
 int32_t  MaxHorizontalResolution;

/// [Delayed]
/// @brief Field MaxVerticalResolution, offset: 0x8, size: 0x4, def value: None
 int32_t  MaxVerticalResolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CanvasCylinder_MeshGenerationSettings, VerticesPerDegree) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasCylinder_MeshGenerationSettings, MaxHorizontalResolution) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasCylinder_MeshGenerationSettings, MaxVerticalResolution) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CanvasCylinder_MeshGenerationSettings) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
