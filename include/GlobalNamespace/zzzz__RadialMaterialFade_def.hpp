#pragma once
// IWYU pragma private; include "GlobalNamespace/RadialMaterialFade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RadialMaterialFade)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RadialMaterialFade;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RadialMaterialFade*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadialMaterialFade*, "", "RadialMaterialFade");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RadialMaterialFade
class CORDL_TYPE RadialMaterialFade : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field alphaAtMaxDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_alphaAtMaxDistance, put=__cordl_internal_set_alphaAtMaxDistance)) float_t  alphaAtMaxDistance;

/// @brief Field alphaAtMinDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_alphaAtMinDistance, put=__cordl_internal_set_alphaAtMinDistance)) float_t  alphaAtMinDistance;

/// @brief Field colorID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_colorID, put=setStaticF_colorID)) int32_t  colorID;

/// @brief Field material, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field maxDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field minDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistance, put=__cordl_internal_set_minDistance)) float_t  minDistance;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

static inline ::GlobalNamespace::RadialMaterialFade* New_ctor() ;

/// @brief Method Update, addr 0x597e330, size 0x2a8, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_alphaAtMaxDistance() const;

constexpr float_t& __cordl_internal_get_alphaAtMaxDistance() ;

constexpr float_t const& __cordl_internal_get_alphaAtMinDistance() const;

constexpr float_t& __cordl_internal_get_alphaAtMinDistance() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr float_t const& __cordl_internal_get_minDistance() const;

constexpr float_t& __cordl_internal_get_minDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_alphaAtMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_alphaAtMinDistance(float_t  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_minDistance(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x597e5d8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_colorID() ;

static inline void setStaticF_colorID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadialMaterialFade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadialMaterialFade", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RadialMaterialFade(RadialMaterialFade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadialMaterialFade", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadialMaterialFade(RadialMaterialFade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2524};

/// [SerializeField]
/// @brief Field material, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// [SerializeField]
/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [Header("Distance")]
/// [SerializeField]
/// @brief Field minDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___minDistance;

/// [SerializeField]
/// @brief Field maxDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxDistance;

/// [Header("Alpha")]
/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field alphaAtMinDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ___alphaAtMinDistance;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field alphaAtMaxDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___alphaAtMaxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadialMaterialFade, ___material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialMaterialFade, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialMaterialFade, ___minDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialMaterialFade, ___maxDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialMaterialFade, ___alphaAtMinDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialMaterialFade, ___alphaAtMaxDistance) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadialMaterialFade) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
