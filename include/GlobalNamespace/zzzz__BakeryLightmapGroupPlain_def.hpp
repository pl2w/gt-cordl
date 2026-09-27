#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroupPlain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryLightmapGroupPlain)
// Forward declare root types
namespace GlobalNamespace {
struct BakeryLightmapGroupPlain;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BakeryLightmapGroupPlain);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightmapGroupPlain, "", "BakeryLightmapGroupPlain");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BakeryLightmapGroupPlain
struct CORDL_TYPE BakeryLightmapGroupPlain {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightmapGroupPlain() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "resolution", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderMode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderDirMode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "atlasPacker", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexBake", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "containsTerrains", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "probes", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isImplicit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "computeSSS", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "sssSamples", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sssDensity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sssR", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sssG", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sssB", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fakeShadowBias", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "transparentSelfShadow", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "flipNormal", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "sceneLodLevel", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "autoResolution", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "holeFilling", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexSamplingDensity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BakeryLightmapGroupPlain(::StringW  name, int32_t  resolution, int32_t  id, int32_t  renderMode, int32_t  renderDirMode, int32_t  atlasPacker, bool  vertexBake, bool  containsTerrains, bool  probes, bool  isImplicit, bool  computeSSS, int32_t  sssSamples, float_t  sssDensity, float_t  sssR, float_t  sssG, float_t  sssB, float_t  fakeShadowBias, bool  transparentSelfShadow, bool  flipNormal, ::StringW  parentName, int32_t  sceneLodLevel, bool  autoResolution, int32_t  holeFilling, int32_t  vertexSamplingDensity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field resolution, offset: 0x8, size: 0x4, def value: None
 int32_t  resolution;

/// @brief Field id, offset: 0xc, size: 0x4, def value: None
 int32_t  id;

/// @brief Field renderMode, offset: 0x10, size: 0x4, def value: None
 int32_t  renderMode;

/// @brief Field renderDirMode, offset: 0x14, size: 0x4, def value: None
 int32_t  renderDirMode;

/// @brief Field atlasPacker, offset: 0x18, size: 0x4, def value: None
 int32_t  atlasPacker;

/// @brief Field vertexBake, offset: 0x1c, size: 0x1, def value: None
 bool  vertexBake;

/// @brief Field containsTerrains, offset: 0x1d, size: 0x1, def value: None
 bool  containsTerrains;

/// @brief Field probes, offset: 0x1e, size: 0x1, def value: None
 bool  probes;

/// @brief Field isImplicit, offset: 0x1f, size: 0x1, def value: None
 bool  isImplicit;

/// @brief Field computeSSS, offset: 0x20, size: 0x1, def value: None
 bool  computeSSS;

/// @brief Field sssSamples, offset: 0x24, size: 0x4, def value: None
 int32_t  sssSamples;

/// @brief Field sssDensity, offset: 0x28, size: 0x4, def value: None
 float_t  sssDensity;

/// @brief Field sssR, offset: 0x2c, size: 0x4, def value: None
 float_t  sssR;

/// @brief Field sssG, offset: 0x30, size: 0x4, def value: None
 float_t  sssG;

/// @brief Field sssB, offset: 0x34, size: 0x4, def value: None
 float_t  sssB;

/// @brief Field fakeShadowBias, offset: 0x38, size: 0x4, def value: None
 float_t  fakeShadowBias;

/// @brief Field transparentSelfShadow, offset: 0x3c, size: 0x1, def value: None
 bool  transparentSelfShadow;

/// @brief Field flipNormal, offset: 0x3d, size: 0x1, def value: None
 bool  flipNormal;

/// @brief Field parentName, offset: 0x40, size: 0x8, def value: None
 ::StringW  parentName;

/// @brief Field sceneLodLevel, offset: 0x48, size: 0x4, def value: None
 int32_t  sceneLodLevel;

/// @brief Field autoResolution, offset: 0x4c, size: 0x1, def value: None
 bool  autoResolution;

/// @brief Field holeFilling, offset: 0x50, size: 0x4, def value: None
 int32_t  holeFilling;

/// @brief Field vertexSamplingDensity, offset: 0x54, size: 0x4, def value: None
 int32_t  vertexSamplingDensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, resolution) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, id) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, renderMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, renderDirMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, atlasPacker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, vertexBake) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, containsTerrains) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, probes) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, isImplicit) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, computeSSS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, sssSamples) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, sssDensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, sssR) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, sssG) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, sssB) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, fakeShadowBias) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, transparentSelfShadow) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, flipNormal) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, parentName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, sceneLodLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, autoResolution) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, holeFilling) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupPlain, vertexSamplingDensity) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroupPlain) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
