#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerColoredCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerColoredCosmetic_ColoringRule_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerColoredCosmetic)
namespace GlobalNamespace {
struct PlayerColoredCosmetic_ColoringRule;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerColoredCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerColoredCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerColoredCosmetic*, "", "PlayerColoredCosmetic");
// Dependencies PlayerColoredCosmetic::ColoringRule, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem, UnityEngine.ParticleSystem::MainModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerColoredCosmetic
class CORDL_TYPE PlayerColoredCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColoringRule = ::GlobalNamespace::PlayerColoredCosmetic_ColoringRule;

/// @brief Field coloringRules, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_coloringRules, put=__cordl_internal_set_coloringRules)) ::ArrayW<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>  coloringRules;

/// @brief Field didInit, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_didInit, put=__cordl_internal_set_didInit)) bool  didInit;

/// @brief Field dontCreateMaterialInstance, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontCreateMaterialInstance, put=__cordl_internal_set_dontCreateMaterialInstance)) bool  dontCreateMaterialInstance;

/// @brief Field lerpStrength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpStrength, put=__cordl_internal_set_lerpStrength)) float_t  lerpStrength;

/// @brief Field lerpToColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_lerpToColor, put=__cordl_internal_set_lerpToColor)) ::UnityEngine::Color  lerpToColor;

/// @brief Field particleMains, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleMains, put=__cordl_internal_set_particleMains)) ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  particleMains;

/// @brief Field particleSystems, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystems, put=__cordl_internal_set_particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  particleSystems;

/// @brief Field rig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Method Awake, addr 0x578e7b4, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InitIfNeeded, addr 0x578ed4c, size 0x248, virtual false, abstract: false, final false
inline void InitIfNeeded() ;

static inline ::GlobalNamespace::PlayerColoredCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x578f210, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x578ef94, size 0xf8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateColor, addr 0x578f08c, size 0x184, virtual false, abstract: false, final false
inline void UpdateColor(::UnityEngine::Color  color) ;

constexpr ::ArrayW<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule> const& __cordl_internal_get_coloringRules() const;

constexpr ::ArrayW<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>& __cordl_internal_get_coloringRules() ;

constexpr bool const& __cordl_internal_get_didInit() const;

constexpr bool& __cordl_internal_get_didInit() ;

constexpr bool const& __cordl_internal_get_dontCreateMaterialInstance() const;

constexpr bool& __cordl_internal_get_dontCreateMaterialInstance() ;

constexpr float_t const& __cordl_internal_get_lerpStrength() const;

constexpr float_t& __cordl_internal_get_lerpStrength() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_lerpToColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_lerpToColor() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule> const& __cordl_internal_get_particleMains() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>& __cordl_internal_get_particleMains() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_particleSystems() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_particleSystems() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr void __cordl_internal_set_coloringRules(::ArrayW<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>  value) ;

constexpr void __cordl_internal_set_didInit(bool  value) ;

constexpr void __cordl_internal_set_dontCreateMaterialInstance(bool  value) ;

constexpr void __cordl_internal_set_lerpStrength(float_t  value) ;

constexpr void __cordl_internal_set_lerpToColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_particleMains(::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  value) ;

constexpr void __cordl_internal_set_particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x578f52c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerColoredCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerColoredCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerColoredCosmetic(PlayerColoredCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerColoredCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerColoredCosmetic(PlayerColoredCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1440};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/PlayerColoredCosmetic]  "};

/// @brief Field didInit, offset: 0x20, size: 0x1, def value: None
 bool  ___didInit;

/// @brief Field rig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// [SerializeField]
/// @brief Field lerpToColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___lerpToColor;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field lerpStrength, offset: 0x40, size: 0x4, def value: None
 float_t  ___lerpStrength;

/// [SerializeField]
/// @brief Field dontCreateMaterialInstance, offset: 0x44, size: 0x1, def value: None
 bool  ___dontCreateMaterialInstance;

/// [SerializeField]
/// @brief Field coloringRules, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>  ___coloringRules;

/// [SerializeField]
/// @brief Field particleSystems, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___particleSystems;

/// @brief Field particleMains, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  ___particleMains;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic, ___didInit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic, ___rig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic, ___lerpToColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic, ___lerpStrength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic, ___dontCreateMaterialInstance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic, ___coloringRules) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic, ___particleSystems) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic, ___particleMains) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerColoredCosmetic) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
