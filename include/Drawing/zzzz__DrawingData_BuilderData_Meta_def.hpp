#pragma once
// IWYU pragma private; include "Drawing/DrawingData_BuilderData_Meta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__DrawingData_Hasher_def.hpp"
#include "Drawing/zzzz__RedrawScope_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_BuilderData_Meta)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderData_DrawingData_Meta;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderData_DrawingData_Meta);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderData_DrawingData_Meta, "Drawing", "DrawingData/BuilderData/Meta");
// Dependencies Drawing.DrawingData::Hasher, Drawing.RedrawScope, UnityEngine.Camera
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/BuilderData/Meta
struct CORDL_TYPE BuilderData_DrawingData_Meta {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderData_DrawingData_Meta() ;

// Ctor Parameters [CppParam { name: "hasher", ty: "::GlobalNamespace::DrawingData_Hasher", modifiers: "", def_value: None, comment: None }, CppParam { name: "redrawScope1", ty: "::Drawing::RedrawScope", modifiers: "", def_value: None, comment: None }, CppParam { name: "redrawScope2", ty: "::Drawing::RedrawScope", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isGizmos", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "sceneModeVersion", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawOrderIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraTargets", ty: "::ArrayW<::UnityW<::UnityEngine::Camera>>", modifiers: "", def_value: None, comment: None }]
constexpr BuilderData_DrawingData_Meta(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  redrawScope1, ::Drawing::RedrawScope  redrawScope2, int32_t  version, bool  isGizmos, int32_t  sceneModeVersion, int32_t  drawOrderIndex, ::ArrayW<::UnityW<::UnityEngine::Camera>>  cameraTargets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27734};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field hasher, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::DrawingData_Hasher  hasher;

/// @brief Field redrawScope1, offset: 0x8, size: 0x10, def value: None
 ::Drawing::RedrawScope  redrawScope1;

/// @brief Field redrawScope2, offset: 0x18, size: 0x10, def value: None
 ::Drawing::RedrawScope  redrawScope2;

/// @brief Field version, offset: 0x28, size: 0x4, def value: None
 int32_t  version;

/// @brief Field isGizmos, offset: 0x2c, size: 0x1, def value: None
 bool  isGizmos;

/// @brief Field sceneModeVersion, offset: 0x30, size: 0x4, def value: None
 int32_t  sceneModeVersion;

/// @brief Field drawOrderIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  drawOrderIndex;

/// @brief Field cameraTargets, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Camera>>  cameraTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_Meta, hasher) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_Meta, redrawScope1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_Meta, redrawScope2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_Meta, version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_Meta, isGizmos) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_Meta, sceneModeVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_Meta, drawOrderIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_Meta, cameraTargets) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderData_DrawingData_Meta) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
