#pragma once
// IWYU pragma private; include "GlobalNamespace/PaintbrawlBalloons.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PaintbrawlBalloons)
namespace GlobalNamespace {
class GorillaPaintbrawlManager;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Realtime {
class Player;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class PaintbrawlBalloons;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PaintbrawlBalloons*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PaintbrawlBalloons*, "", "PaintbrawlBalloons");
// Dependencies UnityEngine.Color, UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: PaintbrawlBalloons
class CORDL_TYPE PaintbrawlBalloons : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bMgr, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_bMgr, put=__cordl_internal_set_bMgr)) ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  bMgr;

/// @brief Field balloonPopFXPrefab, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloonPopFXPrefab, put=__cordl_internal_set_balloonPopFXPrefab)) ::UnityW<::UnityEngine::GameObject>  balloonPopFXPrefab;

/// @brief Field balloons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloons, put=__cordl_internal_set_balloons)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  balloons;

/// @brief Field balloonsCachedActiveState, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloonsCachedActiveState, put=__cordl_internal_set_balloonsCachedActiveState)) ::ArrayW<bool>  balloonsCachedActiveState;

/// @brief Field blueColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_blueColor, put=__cordl_internal_set_blueColor)) ::UnityEngine::Color  blueColor;

/// @brief Field colorShaderPropID, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorShaderPropID, put=__cordl_internal_set_colorShaderPropID)) int32_t  colorShaderPropID;

/// @brief Field defaultColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultColor, put=__cordl_internal_set_defaultColor)) ::UnityEngine::Color  defaultColor;

/// @brief Field lastColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastColor, put=__cordl_internal_set_lastColor)) ::UnityEngine::Color  lastColor;

/// @brief Field matPropBlock, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_matPropBlock, put=__cordl_internal_set_matPropBlock)) ::UnityEngine::MaterialPropertyBlock*  matPropBlock;

/// @brief Field myPlayer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPlayer, put=__cordl_internal_set_myPlayer)) ::Photon::Realtime::Player*  myPlayer;

/// @brief Field myRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field orangeColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_orangeColor, put=__cordl_internal_set_orangeColor)) ::UnityEngine::Color  orangeColor;

/// @brief Field renderers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field teamColor, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_teamColor, put=__cordl_internal_set_teamColor)) ::UnityEngine::Color  teamColor;

/// @brief Method Awake, addr 0x573695c, size 0x220, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5736e9c, size 0x278, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::PaintbrawlBalloons* New_ctor() ;

/// @brief Method OnEnable, addr 0x5736b7c, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PopBalloon, addr 0x5737114, size 0x164, virtual false, abstract: false, final false
inline void PopBalloon(int32_t  i) ;

/// @brief Method UpdateBalloonColors, addr 0x5736b80, size 0x31c, virtual false, abstract: false, final false
inline void UpdateBalloonColors() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager> const& __cordl_internal_get_bMgr() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>& __cordl_internal_get_bMgr() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_balloonPopFXPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_balloonPopFXPrefab() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_balloons() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_balloons() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_balloonsCachedActiveState() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_balloonsCachedActiveState() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_blueColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_blueColor() ;

constexpr int32_t const& __cordl_internal_get_colorShaderPropID() const;

constexpr int32_t& __cordl_internal_get_colorShaderPropID() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_defaultColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_lastColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_lastColor() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_matPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_matPropBlock() ;

constexpr ::Photon::Realtime::Player* const& __cordl_internal_get_myPlayer() const;

constexpr ::Photon::Realtime::Player*& __cordl_internal_get_myPlayer() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_orangeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_orangeColor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_teamColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_teamColor() ;

constexpr void __cordl_internal_set_bMgr(::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  value) ;

constexpr void __cordl_internal_set_balloonPopFXPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_balloons(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_balloonsCachedActiveState(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_blueColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorShaderPropID(int32_t  value) ;

constexpr void __cordl_internal_set_defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_lastColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_myPlayer(::Photon::Realtime::Player*  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_orangeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_teamColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x5737278, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaintbrawlBalloons() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaintbrawlBalloons", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PaintbrawlBalloons(PaintbrawlBalloons && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaintbrawlBalloons", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaintbrawlBalloons(PaintbrawlBalloons const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1211};

/// @brief Field myRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field balloons, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___balloons;

/// @brief Field orangeColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___orangeColor;

/// @brief Field blueColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___blueColor;

/// @brief Field defaultColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ___defaultColor;

/// @brief Field lastColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___lastColor;

/// @brief Field balloonPopFXPrefab, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___balloonPopFXPrefab;

/// [HideInInspector]
/// @brief Field bMgr, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  ___bMgr;

/// @brief Field myPlayer, offset: 0x80, size: 0x8, def value: None
 ::Photon::Realtime::Player*  ___myPlayer;

/// @brief Field colorShaderPropID, offset: 0x88, size: 0x4, def value: None
 int32_t  ___colorShaderPropID;

/// @brief Field matPropBlock, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___matPropBlock;

/// @brief Field balloonsCachedActiveState, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<bool>  ___balloonsCachedActiveState;

/// @brief Field renderers, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// @brief Field teamColor, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Color  ___teamColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___myRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___balloons) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___orangeColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___blueColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___defaultColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___lastColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___balloonPopFXPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___bMgr) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___myPlayer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___colorShaderPropID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___matPropBlock) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___balloonsCachedActiveState) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___renderers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlBalloons, ___teamColor) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PaintbrawlBalloons) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
