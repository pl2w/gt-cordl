#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LensFlareCommonSRP___c__DisplayClass79_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LensFlareCommonSRP___c__DisplayClass79_0)
namespace UnityEngine::Rendering {
class LensFlareDataElementSRP;
}
// Forward declare root types
namespace GlobalNamespace {
struct LensFlareCommonSRP___c__DisplayClass79_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0, "UnityEngine.Rendering", "LensFlareCommonSRP/<>c__DisplayClass79_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.LensFlareCommonSRP/<>c__DisplayClass79_0
struct CORDL_TYPE LensFlareCommonSRP___c__DisplayClass79_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LensFlareCommonSRP___c__DisplayClass79_0() ;

// Ctor Parameters [CppParam { name: "screenPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "globalCos0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "globalSin0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vScreenRatio", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "element", ty: "::UnityEngine::Rendering::LensFlareDataElementSRP*", modifiers: "", def_value: None, comment: None }, CppParam { name: "combinedScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "usedAspectRatio", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LensFlareCommonSRP___c__DisplayClass79_0(::UnityEngine::Vector2  screenPos, float_t  position, float_t  globalCos0, float_t  globalSin0, ::UnityEngine::Vector2  vScreenRatio, ::UnityEngine::Rendering::LensFlareDataElementSRP*  element, float_t  combinedScale, float_t  usedAspectRatio) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field screenPos, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  screenPos;

/// @brief Field position, offset: 0x8, size: 0x4, def value: None
 float_t  position;

/// @brief Field globalCos0, offset: 0xc, size: 0x4, def value: None
 float_t  globalCos0;

/// @brief Field globalSin0, offset: 0x10, size: 0x4, def value: None
 float_t  globalSin0;

/// @brief Field vScreenRatio, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  vScreenRatio;

/// @brief Field element, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::LensFlareDataElementSRP*  element;

/// @brief Field combinedScale, offset: 0x28, size: 0x4, def value: None
 float_t  combinedScale;

/// @brief Field usedAspectRatio, offset: 0x2c, size: 0x4, def value: None
 float_t  usedAspectRatio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0, screenPos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0, globalCos0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0, globalSin0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0, vScreenRatio) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0, element) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0, combinedScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0, usedAspectRatio) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LensFlareCommonSRP___c__DisplayClass79_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
