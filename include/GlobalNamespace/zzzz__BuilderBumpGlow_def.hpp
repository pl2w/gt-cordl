#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderBumpGlow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BuilderBumpGlow)
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderBumpGlow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderBumpGlow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderBumpGlow*, "", "BuilderBumpGlow");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderBumpGlow
class CORDL_TYPE BuilderBumpGlow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blendIn, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendIn, put=__cordl_internal_set_blendIn)) float_t  blendIn;

/// @brief Field glowRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_glowRenderer, put=__cordl_internal_set_glowRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  glowRenderer;

/// @brief Field intensity, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) float_t  intensity;

/// @brief Method Awake, addr 0x57b5e4c, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BuilderBumpGlow* New_ctor() ;

/// @brief Method SetBlendIn, addr 0x57b5e68, size 0x8, virtual false, abstract: false, final false
inline void SetBlendIn(float_t  blendIn) ;

/// @brief Method SetIntensity, addr 0x57b5e60, size 0x8, virtual false, abstract: false, final false
inline void SetIntensity(float_t  intensity) ;

/// @brief Method UpdateRender, addr 0x57b5e5c, size 0x4, virtual false, abstract: false, final false
inline void UpdateRender() ;

constexpr float_t const& __cordl_internal_get_blendIn() const;

constexpr float_t& __cordl_internal_get_blendIn() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_glowRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_glowRenderer() ;

constexpr float_t const& __cordl_internal_get_intensity() const;

constexpr float_t& __cordl_internal_get_intensity() ;

constexpr void __cordl_internal_set_blendIn(float_t  value) ;

constexpr void __cordl_internal_set_glowRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_intensity(float_t  value) ;

/// @brief Method .ctor, addr 0x57b5e70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderBumpGlow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderBumpGlow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderBumpGlow(BuilderBumpGlow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderBumpGlow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderBumpGlow(BuilderBumpGlow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1581};

/// @brief Field glowRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___glowRenderer;

/// @brief Field blendIn, offset: 0x28, size: 0x4, def value: None
 float_t  ___blendIn;

/// @brief Field intensity, offset: 0x2c, size: 0x4, def value: None
 float_t  ___intensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderBumpGlow, ___glowRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderBumpGlow, ___blendIn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderBumpGlow, ___intensity) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderBumpGlow) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
