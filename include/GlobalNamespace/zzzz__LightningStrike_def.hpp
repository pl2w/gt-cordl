#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningStrike.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ShapeModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_TrailModule_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightningStrike)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LightningStrike;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightningStrike*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightningStrike*, "", "LightningStrike");
// [RequireComponent(typeof(UnityEngine.ParticleSystem))]
// [RequireComponent(typeof(UnityEngine.AudioSource))]
// Dependencies SRand, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::MainModule, UnityEngine.ParticleSystem::ShapeModule, UnityEngine.ParticleSystem::TrailModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightningStrike
class CORDL_TYPE LightningStrike : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field ps, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ps, put=__cordl_internal_set_ps)) ::UnityW<::UnityEngine::ParticleSystem>  ps;

/// @brief Field psMain, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_psMain, put=__cordl_internal_set_psMain)) ::GlobalNamespace::ParticleSystem_MainModule  psMain;

/// @brief Field psShape, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_psShape, put=__cordl_internal_set_psShape)) ::GlobalNamespace::ParticleSystem_ShapeModule  psShape;

/// @brief Field psTrails, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_psTrails, put=__cordl_internal_set_psTrails)) ::GlobalNamespace::ParticleSystem_TrailModule  psTrails;

/// @brief Field rand, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rand, put=setStaticF_rand)) ::GlobalNamespace::SRand  rand;

/// @brief Method Initialize, addr 0x5b2edc0, size 0x130, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::LightningStrike* New_ctor() ;

/// @brief Method Play, addr 0x5b2e634, size 0x2d4, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, float_t  beamWidthMultiplier, float_t  audioVolume, float_t  duration, ::UnityEngine::Gradient*  colorOverLifetime) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_ps() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_ps() ;

constexpr ::GlobalNamespace::ParticleSystem_MainModule const& __cordl_internal_get_psMain() const;

constexpr ::GlobalNamespace::ParticleSystem_MainModule& __cordl_internal_get_psMain() ;

constexpr ::GlobalNamespace::ParticleSystem_ShapeModule const& __cordl_internal_get_psShape() const;

constexpr ::GlobalNamespace::ParticleSystem_ShapeModule& __cordl_internal_get_psShape() ;

constexpr ::GlobalNamespace::ParticleSystem_TrailModule const& __cordl_internal_get_psTrails() const;

constexpr ::GlobalNamespace::ParticleSystem_TrailModule& __cordl_internal_get_psTrails() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_ps(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_psMain(::GlobalNamespace::ParticleSystem_MainModule  value) ;

constexpr void __cordl_internal_set_psShape(::GlobalNamespace::ParticleSystem_ShapeModule  value) ;

constexpr void __cordl_internal_set_psTrails(::GlobalNamespace::ParticleSystem_TrailModule  value) ;

/// @brief Method .ctor, addr 0x5b2eef0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SRand getStaticF_rand() ;

static inline void setStaticF_rand(::GlobalNamespace::SRand  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightningStrike() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightningStrike", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightningStrike(LightningStrike && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightningStrike", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightningStrike(LightningStrike const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3651};

/// @brief Field ps, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___ps;

/// @brief Field psMain, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_MainModule  ___psMain;

/// @brief Field psShape, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_ShapeModule  ___psShape;

/// @brief Field psTrails, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_TrailModule  ___psTrails;

/// @brief Field audioSource, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightningStrike, ___ps) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningStrike, ___psMain) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningStrike, ___psShape) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningStrike, ___psTrails) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningStrike, ___audioSource) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightningStrike) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
