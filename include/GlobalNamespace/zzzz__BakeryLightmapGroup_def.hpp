#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_AtlasPacker_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_HoleFilling_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_RenderDirMode_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_RenderMode_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_ftLMGroupMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryLightmapGroup)
namespace GlobalNamespace {
struct BakeryLightmapGroupPlain;
}
namespace GlobalNamespace {
struct BakeryLightmapGroup_AtlasPacker;
}
namespace GlobalNamespace {
struct BakeryLightmapGroup_HoleFilling;
}
namespace GlobalNamespace {
struct BakeryLightmapGroup_RenderDirMode;
}
namespace GlobalNamespace {
struct BakeryLightmapGroup_RenderMode;
}
namespace GlobalNamespace {
struct BakeryLightmapGroup_ftLMGroupMode;
}
// Forward declare root types
namespace GlobalNamespace {
class BakeryLightmapGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryLightmapGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightmapGroup*, "", "BakeryLightmapGroup");
// [CreateAssetMenu(menuName = "Bakery lightmap group")]
// Dependencies BakeryLightmapGroup::AtlasPacker, BakeryLightmapGroup::HoleFilling, BakeryLightmapGroup::RenderDirMode, BakeryLightmapGroup::RenderMode, BakeryLightmapGroup::ftLMGroupMode, UnityEngine.Color, UnityEngine.ScriptableObject, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryLightmapGroup
class CORDL_TYPE BakeryLightmapGroup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using AtlasPacker = ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker;

using HoleFilling = ::GlobalNamespace::BakeryLightmapGroup_HoleFilling;

using RenderDirMode = ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode;

using RenderMode = ::GlobalNamespace::BakeryLightmapGroup_RenderMode;

using ftLMGroupMode = ::GlobalNamespace::BakeryLightmapGroup_ftLMGroupMode;

/// @brief Field area, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_area, put=__cordl_internal_set_area)) float_t  area;

/// @brief Field atlasPacker, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_atlasPacker, put=__cordl_internal_set_atlasPacker)) ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker  atlasPacker;

/// @brief Field autoResolution, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoResolution, put=__cordl_internal_set_autoResolution)) bool  autoResolution;

/// @brief Field bitmask, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitmask, put=__cordl_internal_set_bitmask)) int32_t  bitmask;

/// @brief Field computeSSS, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_computeSSS, put=__cordl_internal_set_computeSSS)) bool  computeSSS;

/// @brief Field containsTerrains, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_containsTerrains, put=__cordl_internal_set_containsTerrains)) bool  containsTerrains;

/// @brief Field fakeShadowBias, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_fakeShadowBias, put=__cordl_internal_set_fakeShadowBias)) float_t  fakeShadowBias;

/// @brief Field fixPos3D, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_fixPos3D, put=__cordl_internal_set_fixPos3D)) bool  fixPos3D;

/// @brief Field flipNormal, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get_flipNormal, put=__cordl_internal_set_flipNormal)) bool  flipNormal;

/// @brief Field holeFilling, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_holeFilling, put=__cordl_internal_set_holeFilling)) ::GlobalNamespace::BakeryLightmapGroup_HoleFilling  holeFilling;

/// @brief Field id, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Field isImplicit, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isImplicit, put=__cordl_internal_set_isImplicit)) bool  isImplicit;

/// @brief Field mode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::BakeryLightmapGroup_ftLMGroupMode  mode;

/// @brief Field overridePath, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_overridePath, put=__cordl_internal_set_overridePath)) ::StringW  overridePath;

/// @brief Field parentName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentName, put=__cordl_internal_set_parentName)) ::StringW  parentName;

/// @brief Field passedFilter, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_passedFilter, put=__cordl_internal_set_passedFilter)) int32_t  passedFilter;

/// @brief Field probes, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_probes, put=__cordl_internal_set_probes)) bool  probes;

/// @brief Field renderDirMode, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderDirMode, put=__cordl_internal_set_renderDirMode)) ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode  renderDirMode;

/// @brief Field renderMode, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderMode, put=__cordl_internal_set_renderMode)) ::GlobalNamespace::BakeryLightmapGroup_RenderMode  renderMode;

/// @brief Field resolution, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_resolution, put=__cordl_internal_set_resolution)) int32_t  resolution;

/// @brief Field sceneLodLevel, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneLodLevel, put=__cordl_internal_set_sceneLodLevel)) int32_t  sceneLodLevel;

/// @brief Field sceneName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneName, put=__cordl_internal_set_sceneName)) ::StringW  sceneName;

/// @brief Field sortingID, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_sortingID, put=__cordl_internal_set_sortingID)) int32_t  sortingID;

/// @brief Field sssColor, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_sssColor, put=__cordl_internal_set_sssColor)) ::UnityEngine::Color  sssColor;

/// @brief Field sssDensity, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_sssDensity, put=__cordl_internal_set_sssDensity)) float_t  sssDensity;

/// @brief Field sssSamples, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sssSamples, put=__cordl_internal_set_sssSamples)) int32_t  sssSamples;

/// @brief Field sssScale, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_sssScale, put=__cordl_internal_set_sssScale)) float_t  sssScale;

/// @brief Field tag, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_tag, put=__cordl_internal_set_tag)) int32_t  tag;

/// @brief Field totalVertexCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalVertexCount, put=__cordl_internal_set_totalVertexCount)) int32_t  totalVertexCount;

/// @brief Field transparentSelfShadow, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_transparentSelfShadow, put=__cordl_internal_set_transparentSelfShadow)) bool  transparentSelfShadow;

/// @brief Field vertexCounter, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_vertexCounter, put=__cordl_internal_set_vertexCounter)) int32_t  vertexCounter;

/// @brief Field vertexSamplingDensity, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_vertexSamplingDensity, put=__cordl_internal_set_vertexSamplingDensity)) int32_t  vertexSamplingDensity;

/// @brief Field voxelSize, offset 0xa4, size 0xc 
 __declspec(property(get=__cordl_internal_get_voxelSize, put=__cordl_internal_set_voxelSize)) ::UnityEngine::Vector3  voxelSize;

/// @brief Method GetPlainStruct, addr 0x5f276a4, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::BakeryLightmapGroupPlain GetPlainStruct() ;

static inline ::GlobalNamespace::BakeryLightmapGroup* New_ctor() ;

constexpr float_t const& __cordl_internal_get_area() const;

constexpr float_t& __cordl_internal_get_area() ;

constexpr ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker const& __cordl_internal_get_atlasPacker() const;

constexpr ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker& __cordl_internal_get_atlasPacker() ;

constexpr bool const& __cordl_internal_get_autoResolution() const;

constexpr bool& __cordl_internal_get_autoResolution() ;

constexpr int32_t const& __cordl_internal_get_bitmask() const;

constexpr int32_t& __cordl_internal_get_bitmask() ;

constexpr bool const& __cordl_internal_get_computeSSS() const;

constexpr bool& __cordl_internal_get_computeSSS() ;

constexpr bool const& __cordl_internal_get_containsTerrains() const;

constexpr bool& __cordl_internal_get_containsTerrains() ;

constexpr float_t const& __cordl_internal_get_fakeShadowBias() const;

constexpr float_t& __cordl_internal_get_fakeShadowBias() ;

constexpr bool const& __cordl_internal_get_fixPos3D() const;

constexpr bool& __cordl_internal_get_fixPos3D() ;

constexpr bool const& __cordl_internal_get_flipNormal() const;

constexpr bool& __cordl_internal_get_flipNormal() ;

constexpr ::GlobalNamespace::BakeryLightmapGroup_HoleFilling const& __cordl_internal_get_holeFilling() const;

constexpr ::GlobalNamespace::BakeryLightmapGroup_HoleFilling& __cordl_internal_get_holeFilling() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr bool const& __cordl_internal_get_isImplicit() const;

constexpr bool& __cordl_internal_get_isImplicit() ;

constexpr ::GlobalNamespace::BakeryLightmapGroup_ftLMGroupMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::BakeryLightmapGroup_ftLMGroupMode& __cordl_internal_get_mode() ;

constexpr ::StringW const& __cordl_internal_get_overridePath() const;

constexpr ::StringW& __cordl_internal_get_overridePath() ;

constexpr ::StringW const& __cordl_internal_get_parentName() const;

constexpr ::StringW& __cordl_internal_get_parentName() ;

constexpr int32_t const& __cordl_internal_get_passedFilter() const;

constexpr int32_t& __cordl_internal_get_passedFilter() ;

constexpr bool const& __cordl_internal_get_probes() const;

constexpr bool& __cordl_internal_get_probes() ;

constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const& __cordl_internal_get_renderDirMode() const;

constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode& __cordl_internal_get_renderDirMode() ;

constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode const& __cordl_internal_get_renderMode() const;

constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode& __cordl_internal_get_renderMode() ;

constexpr int32_t const& __cordl_internal_get_resolution() const;

constexpr int32_t& __cordl_internal_get_resolution() ;

constexpr int32_t const& __cordl_internal_get_sceneLodLevel() const;

constexpr int32_t& __cordl_internal_get_sceneLodLevel() ;

constexpr ::StringW const& __cordl_internal_get_sceneName() const;

constexpr ::StringW& __cordl_internal_get_sceneName() ;

constexpr int32_t const& __cordl_internal_get_sortingID() const;

constexpr int32_t& __cordl_internal_get_sortingID() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_sssColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_sssColor() ;

constexpr float_t const& __cordl_internal_get_sssDensity() const;

constexpr float_t& __cordl_internal_get_sssDensity() ;

constexpr int32_t const& __cordl_internal_get_sssSamples() const;

constexpr int32_t& __cordl_internal_get_sssSamples() ;

constexpr float_t const& __cordl_internal_get_sssScale() const;

constexpr float_t& __cordl_internal_get_sssScale() ;

constexpr int32_t const& __cordl_internal_get_tag() const;

constexpr int32_t& __cordl_internal_get_tag() ;

constexpr int32_t const& __cordl_internal_get_totalVertexCount() const;

constexpr int32_t& __cordl_internal_get_totalVertexCount() ;

constexpr bool const& __cordl_internal_get_transparentSelfShadow() const;

constexpr bool& __cordl_internal_get_transparentSelfShadow() ;

constexpr int32_t const& __cordl_internal_get_vertexCounter() const;

constexpr int32_t& __cordl_internal_get_vertexCounter() ;

constexpr int32_t const& __cordl_internal_get_vertexSamplingDensity() const;

constexpr int32_t& __cordl_internal_get_vertexSamplingDensity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_voxelSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_voxelSize() ;

constexpr void __cordl_internal_set_area(float_t  value) ;

constexpr void __cordl_internal_set_atlasPacker(::GlobalNamespace::BakeryLightmapGroup_AtlasPacker  value) ;

constexpr void __cordl_internal_set_autoResolution(bool  value) ;

constexpr void __cordl_internal_set_bitmask(int32_t  value) ;

constexpr void __cordl_internal_set_computeSSS(bool  value) ;

constexpr void __cordl_internal_set_containsTerrains(bool  value) ;

constexpr void __cordl_internal_set_fakeShadowBias(float_t  value) ;

constexpr void __cordl_internal_set_fixPos3D(bool  value) ;

constexpr void __cordl_internal_set_flipNormal(bool  value) ;

constexpr void __cordl_internal_set_holeFilling(::GlobalNamespace::BakeryLightmapGroup_HoleFilling  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_isImplicit(bool  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::BakeryLightmapGroup_ftLMGroupMode  value) ;

constexpr void __cordl_internal_set_overridePath(::StringW  value) ;

constexpr void __cordl_internal_set_parentName(::StringW  value) ;

constexpr void __cordl_internal_set_passedFilter(int32_t  value) ;

constexpr void __cordl_internal_set_probes(bool  value) ;

constexpr void __cordl_internal_set_renderDirMode(::GlobalNamespace::BakeryLightmapGroup_RenderDirMode  value) ;

constexpr void __cordl_internal_set_renderMode(::GlobalNamespace::BakeryLightmapGroup_RenderMode  value) ;

constexpr void __cordl_internal_set_resolution(int32_t  value) ;

constexpr void __cordl_internal_set_sceneLodLevel(int32_t  value) ;

constexpr void __cordl_internal_set_sceneName(::StringW  value) ;

constexpr void __cordl_internal_set_sortingID(int32_t  value) ;

constexpr void __cordl_internal_set_sssColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_sssDensity(float_t  value) ;

constexpr void __cordl_internal_set_sssSamples(int32_t  value) ;

constexpr void __cordl_internal_set_sssScale(float_t  value) ;

constexpr void __cordl_internal_set_tag(int32_t  value) ;

constexpr void __cordl_internal_set_totalVertexCount(int32_t  value) ;

constexpr void __cordl_internal_set_transparentSelfShadow(bool  value) ;

constexpr void __cordl_internal_set_vertexCounter(int32_t  value) ;

constexpr void __cordl_internal_set_vertexSamplingDensity(int32_t  value) ;

constexpr void __cordl_internal_set_voxelSize(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5f277a8, size 0xd8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightmapGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightmapGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryLightmapGroup(BakeryLightmapGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightmapGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryLightmapGroup(BakeryLightmapGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32437};

/// [SerializeField]
/// [Range(1, 8192)]
/// @brief Field resolution, offset: 0x18, size: 0x4, def value: None
 int32_t  ___resolution;

/// [SerializeField]
/// @brief Field bitmask, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___bitmask;

/// [SerializeField]
/// @brief Field id, offset: 0x20, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field sortingID, offset: 0x24, size: 0x4, def value: None
 int32_t  ___sortingID;

/// [SerializeField]
/// @brief Field isImplicit, offset: 0x28, size: 0x1, def value: None
 bool  ___isImplicit;

/// [SerializeField]
/// @brief Field area, offset: 0x2c, size: 0x4, def value: None
 float_t  ___area;

/// [SerializeField]
/// @brief Field totalVertexCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___totalVertexCount;

/// [SerializeField]
/// @brief Field vertexCounter, offset: 0x34, size: 0x4, def value: None
 int32_t  ___vertexCounter;

/// [SerializeField]
/// @brief Field sceneLodLevel, offset: 0x38, size: 0x4, def value: None
 int32_t  ___sceneLodLevel;

/// [SerializeField]
/// @brief Field autoResolution, offset: 0x3c, size: 0x1, def value: None
 bool  ___autoResolution;

/// [SerializeField]
/// @brief Field sceneName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___sceneName;

/// [SerializeField]
/// @brief Field tag, offset: 0x48, size: 0x4, def value: None
 int32_t  ___tag;

/// [SerializeField]
/// @brief Field containsTerrains, offset: 0x4c, size: 0x1, def value: None
 bool  ___containsTerrains;

/// [SerializeField]
/// @brief Field probes, offset: 0x4d, size: 0x1, def value: None
 bool  ___probes;

/// [SerializeField]
/// @brief Field mode, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::BakeryLightmapGroup_ftLMGroupMode  ___mode;

/// [SerializeField]
/// @brief Field renderMode, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::BakeryLightmapGroup_RenderMode  ___renderMode;

/// [SerializeField]
/// @brief Field renderDirMode, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode  ___renderDirMode;

/// [SerializeField]
/// @brief Field atlasPacker, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker  ___atlasPacker;

/// [SerializeField]
/// @brief Field holeFilling, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::BakeryLightmapGroup_HoleFilling  ___holeFilling;

/// [SerializeField]
/// @brief Field vertexSamplingDensity, offset: 0x64, size: 0x4, def value: None
 int32_t  ___vertexSamplingDensity;

/// [SerializeField]
/// @brief Field computeSSS, offset: 0x68, size: 0x1, def value: None
 bool  ___computeSSS;

/// [SerializeField]
/// @brief Field sssSamples, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___sssSamples;

/// [SerializeField]
/// @brief Field sssDensity, offset: 0x70, size: 0x4, def value: None
 float_t  ___sssDensity;

/// [SerializeField]
/// @brief Field sssColor, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Color  ___sssColor;

/// [SerializeField]
/// @brief Field sssScale, offset: 0x84, size: 0x4, def value: None
 float_t  ___sssScale;

/// [SerializeField]
/// @brief Field fakeShadowBias, offset: 0x88, size: 0x4, def value: None
 float_t  ___fakeShadowBias;

/// [SerializeField]
/// @brief Field transparentSelfShadow, offset: 0x8c, size: 0x1, def value: None
 bool  ___transparentSelfShadow;

/// [SerializeField]
/// @brief Field flipNormal, offset: 0x8d, size: 0x1, def value: None
 bool  ___flipNormal;

/// [SerializeField]
/// @brief Field parentName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___parentName;

/// [SerializeField]
/// @brief Field overridePath, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___overridePath;

/// [SerializeField]
/// @brief Field fixPos3D, offset: 0xa0, size: 0x1, def value: None
 bool  ___fixPos3D;

/// [SerializeField]
/// @brief Field voxelSize, offset: 0xa4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___voxelSize;

/// @brief Field passedFilter, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___passedFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___resolution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___bitmask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___sortingID) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___isImplicit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___area) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___totalVertexCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___vertexCounter) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___sceneLodLevel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___autoResolution) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___sceneName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___tag) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___containsTerrains) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___probes) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___mode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___renderMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___renderDirMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___atlasPacker) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___holeFilling) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___vertexSamplingDensity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___computeSSS) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___sssSamples) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___sssDensity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___sssColor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___sssScale) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___fakeShadowBias) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___transparentSelfShadow) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___flipNormal) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___parentName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___overridePath) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___fixPos3D) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___voxelSize) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup, ___passedFilter) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroup) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
