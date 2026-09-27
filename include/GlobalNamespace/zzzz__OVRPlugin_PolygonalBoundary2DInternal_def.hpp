#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PolygonalBoundary2DInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_PolygonalBoundary2DInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_PolygonalBoundary2DInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_PolygonalBoundary2DInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_PolygonalBoundary2DInternal, "", "OVRPlugin/PolygonalBoundary2DInternal");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/PolygonalBoundary2DInternal
struct CORDL_TYPE OVRPlugin_PolygonalBoundary2DInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PolygonalBoundary2DInternal() ;

// Ctor Parameters [CppParam { name: "vertexCapacityInput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexCountOutput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertices", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PolygonalBoundary2DInternal(int32_t  vertexCapacityInput, int32_t  vertexCountOutput, ::System::IntPtr  vertices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12239};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field vertexCapacityInput, offset: 0x0, size: 0x4, def value: None
 int32_t  vertexCapacityInput;

/// @brief Field vertexCountOutput, offset: 0x4, size: 0x4, def value: None
 int32_t  vertexCountOutput;

/// @brief Field vertices, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  vertices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_PolygonalBoundary2DInternal, vertexCapacityInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PolygonalBoundary2DInternal, vertexCountOutput) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PolygonalBoundary2DInternal, vertices) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_PolygonalBoundary2DInternal) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
