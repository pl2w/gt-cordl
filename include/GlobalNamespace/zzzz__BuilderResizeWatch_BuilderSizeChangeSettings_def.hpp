#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResizeWatch_BuilderSizeChangeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(BuilderResizeWatch_BuilderSizeChangeSettings)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderResizeWatch_BuilderSizeChangeSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings, "", "BuilderResizeWatch/BuilderSizeChangeSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderResizeWatch/BuilderSizeChangeSettings
struct CORDL_TYPE BuilderResizeWatch_BuilderSizeChangeSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderResizeWatch_BuilderSizeChangeSettings() ;

// Ctor Parameters [CppParam { name: "affectLayerA", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "affectLayerB", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "affectLayerC", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "affectLayerD", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr BuilderResizeWatch_BuilderSizeChangeSettings(bool  affectLayerA, bool  affectLayerB, bool  affectLayerC, bool  affectLayerD) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1624};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field affectLayerA, offset: 0x0, size: 0x1, def value: None
 bool  affectLayerA;

/// @brief Field affectLayerB, offset: 0x1, size: 0x1, def value: None
 bool  affectLayerB;

/// @brief Field affectLayerC, offset: 0x2, size: 0x1, def value: None
 bool  affectLayerC;

/// @brief Field affectLayerD, offset: 0x3, size: 0x1, def value: None
 bool  affectLayerD;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings, affectLayerA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings, affectLayerB) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings, affectLayerC) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings, affectLayerD) == 0x3, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
