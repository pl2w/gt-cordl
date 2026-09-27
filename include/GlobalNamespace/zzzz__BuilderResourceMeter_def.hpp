#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResourceMeter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderResourceType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderResourceMeter)
namespace GlobalNamespace {
class BuilderResourceColors;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderResourceMeter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderResourceMeter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderResourceMeter*, "", "BuilderResourceMeter");
// Dependencies BuilderResourceType, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderResourceMeter
class CORDL_TYPE BuilderResourceMeter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _resourceType, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__resourceType, put=__cordl_internal_set__resourceType)) ::GlobalNamespace::BuilderResourceType  _resourceType;

/// @brief Field animatingMeter, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_animatingMeter, put=__cordl_internal_set_animatingMeter)) bool  animatingMeter;

/// @brief Field emptyColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_emptyColor, put=__cordl_internal_set_emptyColor)) ::UnityEngine::Color  emptyColor;

/// @brief Field emptyCube, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptyCube, put=__cordl_internal_set_emptyCube)) ::UnityW<::UnityEngine::MeshRenderer>  emptyCube;

/// @brief Field fillAmount, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_fillAmount, put=__cordl_internal_set_fillAmount)) float_t  fillAmount;

/// @brief Field fillColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_fillColor, put=__cordl_internal_set_fillColor)) ::UnityEngine::Color  fillColor;

/// @brief Field fillCube, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fillCube, put=__cordl_internal_set_fillCube)) ::UnityW<::UnityEngine::MeshRenderer>  fillCube;

/// @brief Field fillTarget, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_fillTarget, put=__cordl_internal_set_fillTarget)) float_t  fillTarget;

/// @brief Field inBuilderZone, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_inBuilderZone, put=__cordl_internal_set_inBuilderZone)) bool  inBuilderZone;

/// @brief Field lerpSpeed, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpSpeed, put=__cordl_internal_set_lerpSpeed)) float_t  lerpSpeed;

/// @brief Field meshHeight, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_meshHeight, put=__cordl_internal_set_meshHeight)) float_t  meshHeight;

/// @brief Field meterHeight, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_meterHeight, put=__cordl_internal_set_meterHeight)) float_t  meterHeight;

/// @brief Field resourceColors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceColors, put=__cordl_internal_set_resourceColors)) ::UnityW<::GlobalNamespace::BuilderResourceColors>  resourceColors;

/// @brief Field resourceMax, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_resourceMax, put=__cordl_internal_set_resourceMax)) int32_t  resourceMax;

/// @brief Field table, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GorillaTagScripts::BuilderTable>  table;

/// @brief Field usedResource, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_usedResource, put=__cordl_internal_set_usedResource)) int32_t  usedResource;

/// @brief Method Awake, addr 0x57d6ed0, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BuilderResourceMeter* New_ctor() ;

/// @brief Method OnAvailableResourcesChange, addr 0x57d7308, size 0xfc, virtual false, abstract: false, final false
inline void OnAvailableResourcesChange() ;

/// @brief Method OnDestroy, addr 0x57d71c4, size 0x144, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnZoneChanged, addr 0x57d70e8, size 0xdc, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method SetNormalizedFillTarget, addr 0x57d7404, size 0x28, virtual false, abstract: false, final false
inline void SetNormalizedFillTarget(float_t  fill) ;

/// @brief Method Start, addr 0x57d6ff0, size 0xf8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateFill, addr 0x57d7490, size 0x3e8, virtual false, abstract: false, final false
inline void UpdateFill(float_t  newFill) ;

/// @brief Method UpdateMeterFill, addr 0x57d742c, size 0x64, virtual false, abstract: false, final false
inline void UpdateMeterFill() ;

constexpr ::GlobalNamespace::BuilderResourceType const& __cordl_internal_get__resourceType() const;

constexpr ::GlobalNamespace::BuilderResourceType& __cordl_internal_get__resourceType() ;

constexpr bool const& __cordl_internal_get_animatingMeter() const;

constexpr bool& __cordl_internal_get_animatingMeter() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_emptyColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_emptyColor() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_emptyCube() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_emptyCube() ;

constexpr float_t const& __cordl_internal_get_fillAmount() const;

constexpr float_t& __cordl_internal_get_fillAmount() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_fillColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_fillColor() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_fillCube() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_fillCube() ;

constexpr float_t const& __cordl_internal_get_fillTarget() const;

constexpr float_t& __cordl_internal_get_fillTarget() ;

constexpr bool const& __cordl_internal_get_inBuilderZone() const;

constexpr bool& __cordl_internal_get_inBuilderZone() ;

constexpr float_t const& __cordl_internal_get_lerpSpeed() const;

constexpr float_t& __cordl_internal_get_lerpSpeed() ;

constexpr float_t const& __cordl_internal_get_meshHeight() const;

constexpr float_t& __cordl_internal_get_meshHeight() ;

constexpr float_t const& __cordl_internal_get_meterHeight() const;

constexpr float_t& __cordl_internal_get_meterHeight() ;

constexpr ::UnityW<::GlobalNamespace::BuilderResourceColors> const& __cordl_internal_get_resourceColors() const;

constexpr ::UnityW<::GlobalNamespace::BuilderResourceColors>& __cordl_internal_get_resourceColors() ;

constexpr int32_t const& __cordl_internal_get_resourceMax() const;

constexpr int32_t& __cordl_internal_get_resourceMax() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_table() ;

constexpr int32_t const& __cordl_internal_get_usedResource() const;

constexpr int32_t& __cordl_internal_get_usedResource() ;

constexpr void __cordl_internal_set__resourceType(::GlobalNamespace::BuilderResourceType  value) ;

constexpr void __cordl_internal_set_animatingMeter(bool  value) ;

constexpr void __cordl_internal_set_emptyColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_emptyCube(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_fillAmount(float_t  value) ;

constexpr void __cordl_internal_set_fillColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_fillCube(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_fillTarget(float_t  value) ;

constexpr void __cordl_internal_set_inBuilderZone(bool  value) ;

constexpr void __cordl_internal_set_lerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_meshHeight(float_t  value) ;

constexpr void __cordl_internal_set_meterHeight(float_t  value) ;

constexpr void __cordl_internal_set_resourceColors(::UnityW<::GlobalNamespace::BuilderResourceColors>  value) ;

constexpr void __cordl_internal_set_resourceMax(int32_t  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_usedResource(int32_t  value) ;

/// @brief Method .ctor, addr 0x57d7878, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderResourceMeter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderResourceMeter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderResourceMeter(BuilderResourceMeter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderResourceMeter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderResourceMeter(BuilderResourceMeter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1626};

/// @brief Field resourceColors, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderResourceColors>  ___resourceColors;

/// @brief Field fillCube, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___fillCube;

/// @brief Field emptyCube, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___emptyCube;

/// @brief Field fillColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___fillColor;

/// @brief Field emptyColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___emptyColor;

/// [FormerlySerializedAs("MeterHeight")]
/// @brief Field meterHeight, offset: 0x58, size: 0x4, def value: None
 float_t  ___meterHeight;

/// @brief Field meshHeight, offset: 0x5c, size: 0x4, def value: None
 float_t  ___meshHeight;

/// @brief Field _resourceType, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::BuilderResourceType  ____resourceType;

/// @brief Field fillAmount, offset: 0x64, size: 0x4, def value: None
 float_t  ___fillAmount;

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field fillTarget, offset: 0x68, size: 0x4, def value: None
 float_t  ___fillTarget;

/// @brief Field lerpSpeed, offset: 0x6c, size: 0x4, def value: None
 float_t  ___lerpSpeed;

/// @brief Field animatingMeter, offset: 0x70, size: 0x1, def value: None
 bool  ___animatingMeter;

/// @brief Field resourceMax, offset: 0x74, size: 0x4, def value: None
 int32_t  ___resourceMax;

/// @brief Field usedResource, offset: 0x78, size: 0x4, def value: None
 int32_t  ___usedResource;

/// @brief Field inBuilderZone, offset: 0x7c, size: 0x1, def value: None
 bool  ___inBuilderZone;

/// @brief Field table, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___table;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___resourceColors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___fillCube) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___emptyCube) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___fillColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___emptyColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___meterHeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___meshHeight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ____resourceType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___fillAmount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___fillTarget) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___lerpSpeed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___animatingMeter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___resourceMax) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___usedResource) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___inBuilderZone) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderResourceMeter, ___table) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderResourceMeter) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
