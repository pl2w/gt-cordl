#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterSurfaceMaterialController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaterSurfaceMaterialController)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class WaterSurfaceMaterialController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WaterSurfaceMaterialController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaterSurfaceMaterialController*, "", "WaterSurfaceMaterialController");
// [ExecuteAlways]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaterSurfaceMaterialController
class CORDL_TYPE WaterSurfaceMaterialController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Scale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) float_t  Scale;

/// @brief Field ScrollX, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScrollX, put=__cordl_internal_set_ScrollX)) float_t  ScrollX;

/// @brief Field ScrollY, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScrollY, put=__cordl_internal_set_ScrollY)) float_t  ScrollY;

/// @brief Field matPropBlock, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_matPropBlock, put=__cordl_internal_set_matPropBlock)) ::UnityEngine::MaterialPropertyBlock*  matPropBlock;

/// @brief Field renderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::UnityW<::UnityEngine::Renderer>  renderer;

/// @brief Method ApplyProperties, addr 0x5c01438, size 0xd4, virtual false, abstract: false, final false
inline void ApplyProperties() ;

static inline ::GlobalNamespace::WaterSurfaceMaterialController* New_ctor() ;

/// @brief Method OnEnable, addr 0x5c01398, size 0xa0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get_Scale() const;

constexpr float_t& __cordl_internal_get_Scale() ;

constexpr float_t const& __cordl_internal_get_ScrollX() const;

constexpr float_t& __cordl_internal_get_ScrollX() ;

constexpr float_t const& __cordl_internal_get_ScrollY() const;

constexpr float_t& __cordl_internal_get_ScrollY() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_matPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_matPropBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_renderer() ;

constexpr void __cordl_internal_set_Scale(float_t  value) ;

constexpr void __cordl_internal_set_ScrollX(float_t  value) ;

constexpr void __cordl_internal_set_ScrollY(float_t  value) ;

constexpr void __cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x5c0150c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterSurfaceMaterialController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterSurfaceMaterialController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterSurfaceMaterialController(WaterSurfaceMaterialController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterSurfaceMaterialController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterSurfaceMaterialController(WaterSurfaceMaterialController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{420};

/// @brief Field ScrollX, offset: 0x20, size: 0x4, def value: None
 float_t  ___ScrollX;

/// @brief Field ScrollY, offset: 0x24, size: 0x4, def value: None
 float_t  ___ScrollY;

/// @brief Field Scale, offset: 0x28, size: 0x4, def value: None
 float_t  ___Scale;

/// @brief Field renderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___renderer;

/// @brief Field matPropBlock, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___matPropBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaterSurfaceMaterialController, ___ScrollX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSurfaceMaterialController, ___ScrollY) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSurfaceMaterialController, ___Scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSurfaceMaterialController, ___renderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSurfaceMaterialController, ___matPropBlock) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WaterSurfaceMaterialController) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
