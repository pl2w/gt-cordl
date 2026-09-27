#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaColorizableParticle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaColorizableBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaColorizableParticle)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaColorizableParticle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaColorizableParticle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaColorizableParticle*, "", "GorillaColorizableParticle");
// Dependencies GorillaColorizableBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaColorizableParticle
class CORDL_TYPE GorillaColorizableParticle : public ::GlobalNamespace::GorillaColorizableBase {
public:
// Declarations
/// @brief Field gradientColorPower, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_gradientColorPower, put=__cordl_internal_set_gradientColorPower)) float_t  gradientColorPower;

/// @brief Field particleSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystem, put=__cordl_internal_set_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystem;

/// @brief Field useLinearColor, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLinearColor, put=__cordl_internal_set_useLinearColor)) bool  useLinearColor;

static inline ::GlobalNamespace::GorillaColorizableParticle* New_ctor() ;

/// @brief Method SetColor, addr 0x5904214, size 0x16c, virtual true, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

constexpr float_t const& __cordl_internal_get_gradientColorPower() const;

constexpr float_t& __cordl_internal_get_gradientColorPower() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystem() ;

constexpr bool const& __cordl_internal_get_useLinearColor() const;

constexpr bool& __cordl_internal_get_useLinearColor() ;

constexpr void __cordl_internal_set_gradientColorPower(float_t  value) ;

constexpr void __cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_useLinearColor(bool  value) ;

/// @brief Method .ctor, addr 0x5904380, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaColorizableParticle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaColorizableParticle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaColorizableParticle(GorillaColorizableParticle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaColorizableParticle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaColorizableParticle(GorillaColorizableParticle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2155};

/// @brief Field particleSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystem;

/// @brief Field gradientColorPower, offset: 0x28, size: 0x4, def value: None
 float_t  ___gradientColorPower;

/// @brief Field useLinearColor, offset: 0x2c, size: 0x1, def value: None
 bool  ___useLinearColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaColorizableParticle, ___particleSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorizableParticle, ___gradientColorPower) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorizableParticle, ___useLinearColor) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaColorizableParticle) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
