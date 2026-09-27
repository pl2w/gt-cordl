#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectileTrail.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SlingshotProjectileTrail)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class TrailRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SlingshotProjectileTrail;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotProjectileTrail*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectileTrail*, "", "SlingshotProjectileTrail");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotProjectileTrail
class CORDL_TYPE SlingshotProjectileTrail : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blueColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_blueColor, put=__cordl_internal_set_blueColor)) ::UnityEngine::Color  blueColor;

/// @brief Field defaultColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultColor, put=__cordl_internal_set_defaultColor)) ::UnityEngine::Color  defaultColor;

/// @brief Field followObject, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_followObject, put=__cordl_internal_set_followObject)) ::UnityW<::UnityEngine::GameObject>  followObject;

/// @brief Field followXform, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_followXform, put=__cordl_internal_set_followXform)) ::UnityW<::UnityEngine::Transform>  followXform;

/// @brief Field initialScale, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialScale, put=__cordl_internal_set_initialScale)) float_t  initialScale;

/// @brief Field initialWidthMultiplier, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialWidthMultiplier, put=__cordl_internal_set_initialWidthMultiplier)) float_t  initialWidthMultiplier;

/// @brief Field orangeColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_orangeColor, put=__cordl_internal_set_orangeColor)) ::UnityEngine::Color  orangeColor;

/// @brief Field timeToDie, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeToDie, put=__cordl_internal_set_timeToDie)) float_t  timeToDie;

/// @brief Field trailRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailRenderer, put=__cordl_internal_set_trailRenderer)) ::UnityW<::UnityEngine::TrailRenderer>  trailRenderer;

/// @brief Method AttachTrail, addr 0x573cdc8, size 0x19c, virtual false, abstract: false, final false
inline void AttachTrail(::UnityEngine::GameObject*  obj, bool  blueTeam, bool  redTeam, bool  shouldOverrideColor, ::UnityEngine::Color  overrideColor) ;

/// @brief Method Awake, addr 0x573cda0, size 0x28, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x573cfc0, size 0x1e4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SlingshotProjectileTrail* New_ctor() ;

/// @brief Method SetColor, addr 0x573cf64, size 0x5c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_blueColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_blueColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_defaultColor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_followObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_followObject() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followXform() ;

constexpr float_t const& __cordl_internal_get_initialScale() const;

constexpr float_t& __cordl_internal_get_initialScale() ;

constexpr float_t const& __cordl_internal_get_initialWidthMultiplier() const;

constexpr float_t& __cordl_internal_get_initialWidthMultiplier() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_orangeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_orangeColor() ;

constexpr float_t const& __cordl_internal_get_timeToDie() const;

constexpr float_t& __cordl_internal_get_timeToDie() ;

constexpr ::UnityW<::UnityEngine::TrailRenderer> const& __cordl_internal_get_trailRenderer() const;

constexpr ::UnityW<::UnityEngine::TrailRenderer>& __cordl_internal_get_trailRenderer() ;

constexpr void __cordl_internal_set_blueColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_followObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_followXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_initialScale(float_t  value) ;

constexpr void __cordl_internal_set_initialWidthMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_orangeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_timeToDie(float_t  value) ;

constexpr void __cordl_internal_set_trailRenderer(::UnityW<::UnityEngine::TrailRenderer>  value) ;

/// @brief Method .ctor, addr 0x573d1a4, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectileTrail() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileTrail", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotProjectileTrail(SlingshotProjectileTrail && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileTrail", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotProjectileTrail(SlingshotProjectileTrail const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1225};

/// @brief Field trailRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TrailRenderer>  ___trailRenderer;

/// @brief Field defaultColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___defaultColor;

/// @brief Field orangeColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___orangeColor;

/// @brief Field blueColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___blueColor;

/// @brief Field followObject, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___followObject;

/// @brief Field followXform, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___followXform;

/// @brief Field timeToDie, offset: 0x68, size: 0x4, def value: None
 float_t  ___timeToDie;

/// @brief Field initialScale, offset: 0x6c, size: 0x4, def value: None
 float_t  ___initialScale;

/// @brief Field initialWidthMultiplier, offset: 0x70, size: 0x4, def value: None
 float_t  ___initialWidthMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlingshotProjectileTrail, ___trailRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileTrail, ___defaultColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileTrail, ___orangeColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileTrail, ___blueColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileTrail, ___followObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileTrail, ___followXform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileTrail, ___timeToDie) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileTrail, ___initialScale) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileTrail, ___initialWidthMultiplier) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlingshotProjectileTrail) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
