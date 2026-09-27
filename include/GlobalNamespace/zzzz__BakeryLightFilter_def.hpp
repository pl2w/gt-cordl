#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryLightFilter)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BakeryLightFilter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeryLightFilter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightFilter*, "", "BakeryLightFilter");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Manual#Bakery_Light_Filter")]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeryLightFilter
class CORDL_TYPE BakeryLightFilter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lmid, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lmid, put=__cordl_internal_set_lmid)) int32_t  lmid;

/// @brief Field texture, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

static inline ::GlobalNamespace::BakeryLightFilter* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_lmid() const;

constexpr int32_t& __cordl_internal_get_lmid() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr void __cordl_internal_set_lmid(int32_t  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x5f2769c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeryLightFilter(BakeryLightFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeryLightFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeryLightFilter(BakeryLightFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32430};

/// @brief Field texture, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

/// [HideInInspector]
/// @brief Field lmid, offset: 0x28, size: 0x4, def value: None
 int32_t  ___lmid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryLightFilter, ___texture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeryLightFilter, ___lmid) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryLightFilter) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
