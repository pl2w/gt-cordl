#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayerDamageEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRPlayerDamageEffects)
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class GRPlayerDamageEffects;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRPlayerDamageEffects*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayerDamageEffects*, "", "GRPlayerDamageEffects");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRPlayerDamageEffects
class CORDL_TYPE GRPlayerDamageEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field frozenVisualRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_frozenVisualRenderer, put=__cordl_internal_set_frozenVisualRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  frozenVisualRenderer;

/// @brief Field lowHealthVisualRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lowHealthVisualRenderer, put=__cordl_internal_set_lowHealthVisualRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  lowHealthVisualRenderer;

/// @brief Field radialDamageEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_radialDamageEffect, put=__cordl_internal_set_radialDamageEffect)) ::UnityW<::UnityEngine::ParticleSystem>  radialDamageEffect;

/// @brief Field stealthModeVisualRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_stealthModeVisualRenderer, put=__cordl_internal_set_stealthModeVisualRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  stealthModeVisualRenderer;

static inline ::GlobalNamespace::GRPlayerDamageEffects* New_ctor() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_frozenVisualRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_frozenVisualRenderer() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_lowHealthVisualRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_lowHealthVisualRenderer() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_radialDamageEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_radialDamageEffect() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_stealthModeVisualRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_stealthModeVisualRenderer() ;

constexpr void __cordl_internal_set_frozenVisualRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_lowHealthVisualRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_radialDamageEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_stealthModeVisualRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x58a6940, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRPlayerDamageEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRPlayerDamageEffects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRPlayerDamageEffects(GRPlayerDamageEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRPlayerDamageEffects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRPlayerDamageEffects(GRPlayerDamageEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2009};

/// @brief Field radialDamageEffect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___radialDamageEffect;

/// @brief Field lowHealthVisualRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___lowHealthVisualRenderer;

/// @brief Field frozenVisualRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___frozenVisualRenderer;

/// @brief Field stealthModeVisualRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___stealthModeVisualRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayerDamageEffects, ___radialDamageEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayerDamageEffects, ___lowHealthVisualRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayerDamageEffects, ___frozenVisualRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayerDamageEffects, ___stealthModeVisualRenderer) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayerDamageEffects) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
