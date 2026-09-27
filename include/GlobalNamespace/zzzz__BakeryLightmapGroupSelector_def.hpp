#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroupSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryLightmapGroupSelector)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BakeryLightmapGroupSelector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryLightmapGroupSelector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightmapGroupSelector*, "", "BakeryLightmapGroupSelector");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Lightmap_Group_Selector")]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryLightmapGroupSelector
class CORDL_TYPE BakeryLightmapGroupSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field active, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field instanceResolution, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_instanceResolution, put=__cordl_internal_set_instanceResolution)) int32_t  instanceResolution;

/// @brief Field instanceResolutionOverride, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_instanceResolutionOverride, put=__cordl_internal_set_instanceResolutionOverride)) bool  instanceResolutionOverride;

/// @brief Field lmgroupAsset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lmgroupAsset, put=__cordl_internal_set_lmgroupAsset)) ::UnityW<::UnityEngine::Object>  lmgroupAsset;

static inline ::GlobalNamespace::BakeryLightmapGroupSelector* New_ctor() ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr int32_t const& __cordl_internal_get_instanceResolution() const;

constexpr int32_t& __cordl_internal_get_instanceResolution() ;

constexpr bool const& __cordl_internal_get_instanceResolutionOverride() const;

constexpr bool& __cordl_internal_get_instanceResolutionOverride() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_lmgroupAsset() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_lmgroupAsset() ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_instanceResolution(int32_t  value) ;

constexpr void __cordl_internal_set_instanceResolutionOverride(bool  value) ;

constexpr void __cordl_internal_set_lmgroupAsset(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x5f27880, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightmapGroupSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightmapGroupSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryLightmapGroupSelector(BakeryLightmapGroupSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightmapGroupSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryLightmapGroupSelector(BakeryLightmapGroupSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32438};

/// @brief Field active, offset: 0x20, size: 0x1, def value: None
 bool  ___active;

/// @brief Field lmgroupAsset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___lmgroupAsset;

/// @brief Field instanceResolutionOverride, offset: 0x30, size: 0x1, def value: None
 bool  ___instanceResolutionOverride;

/// @brief Field instanceResolution, offset: 0x34, size: 0x4, def value: None
 int32_t  ___instanceResolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupSelector, ___active) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupSelector, ___lmgroupAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupSelector, ___instanceResolutionOverride) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroupSelector, ___instanceResolution) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroupSelector) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
