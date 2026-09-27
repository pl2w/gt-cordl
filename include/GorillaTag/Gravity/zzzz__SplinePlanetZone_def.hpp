#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/SplinePlanetZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__PlanetZone_def.hpp"
CORDL_MODULE_EXPORT(SplinePlanetZone)
namespace GlobalNamespace {
class CatmullRomSpline;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class SplinePlanetZone;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::SplinePlanetZone*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::SplinePlanetZone*, "GorillaTag.Gravity", "SplinePlanetZone");
// Dependencies GorillaTag.Gravity.PlanetZone
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.SplinePlanetZone
class CORDL_TYPE SplinePlanetZone : public ::GorillaTag::Gravity::PlanetZone {
public:
// Declarations
/// @brief Field spline, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::GlobalNamespace::CatmullRomSpline>  spline;

/// @brief Method GetGravityVectorAtPoint, addr 0x5d3b878, size 0x70, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller) ;

static inline ::GorillaTag::Gravity::SplinePlanetZone* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::CatmullRomSpline> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::GlobalNamespace::CatmullRomSpline>& __cordl_internal_get_spline() ;

constexpr void __cordl_internal_set_spline(::UnityW<::GlobalNamespace::CatmullRomSpline>  value) ;

/// @brief Method .ctor, addr 0x5d3b8e8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePlanetZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePlanetZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePlanetZone(SplinePlanetZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePlanetZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePlanetZone(SplinePlanetZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4689};

/// [SerializeField]
/// @brief Field spline, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CatmullRomSpline>  ___spline;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::SplinePlanetZone, ___spline) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::SplinePlanetZone) == 0xa0, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
