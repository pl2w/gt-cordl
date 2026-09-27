#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroupPlain.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroupPlain_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resolution", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderMode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderDirMode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "atlasPacker", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexBake", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "containsTerrains", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "probes", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isImplicit", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "computeSSS", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sssSamples", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sssDensity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sssR", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sssG", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sssB", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fakeShadowBias", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transparentSelfShadow", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flipNormal", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sceneLodLevel", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "autoResolution", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "holeFilling", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexSamplingDensity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BakeryLightmapGroupPlain::BakeryLightmapGroupPlain(::StringW  name, int32_t  resolution, int32_t  id, int32_t  renderMode, int32_t  renderDirMode, int32_t  atlasPacker, bool  vertexBake, bool  containsTerrains, bool  probes, bool  isImplicit, bool  computeSSS, int32_t  sssSamples, float_t  sssDensity, float_t  sssR, float_t  sssG, float_t  sssB, float_t  fakeShadowBias, bool  transparentSelfShadow, bool  flipNormal, ::StringW  parentName, int32_t  sceneLodLevel, bool  autoResolution, int32_t  holeFilling, int32_t  vertexSamplingDensity) noexcept  {
this->name = name;
this->resolution = resolution;
this->id = id;
this->renderMode = renderMode;
this->renderDirMode = renderDirMode;
this->atlasPacker = atlasPacker;
this->vertexBake = vertexBake;
this->containsTerrains = containsTerrains;
this->probes = probes;
this->isImplicit = isImplicit;
this->computeSSS = computeSSS;
this->sssSamples = sssSamples;
this->sssDensity = sssDensity;
this->sssR = sssR;
this->sssG = sssG;
this->sssB = sssB;
this->fakeShadowBias = fakeShadowBias;
this->transparentSelfShadow = transparentSelfShadow;
this->flipNormal = flipNormal;
this->parentName = parentName;
this->sceneLodLevel = sceneLodLevel;
this->autoResolution = autoResolution;
this->holeFilling = holeFilling;
this->vertexSamplingDensity = vertexSamplingDensity;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryLightmapGroupPlain::BakeryLightmapGroupPlain()   {
}
