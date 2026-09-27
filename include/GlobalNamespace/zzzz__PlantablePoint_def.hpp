#pragma once
// IWYU pragma private; include "GlobalNamespace/PlantablePoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlantablePoint)
namespace GlobalNamespace {
class PlantableObject;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class PlantablePoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlantablePoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlantablePoint*, "", "PlantablePoint");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlantablePoint
class CORDL_TYPE PlantablePoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field floorMask, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_floorMask, put=__cordl_internal_set_floorMask)) ::UnityEngine::LayerMask  floorMask;

/// @brief Field plantableObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_plantableObject, put=__cordl_internal_set_plantableObject)) ::UnityW<::GlobalNamespace::PlantableObject>  plantableObject;

/// @brief Field shouldBeSet, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldBeSet, put=__cordl_internal_set_shouldBeSet)) bool  shouldBeSet;

static inline ::GlobalNamespace::PlantablePoint* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x568e330, size 0x70, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x568e3a0, size 0x70, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_floorMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_floorMask() ;

constexpr ::UnityW<::GlobalNamespace::PlantableObject> const& __cordl_internal_get_plantableObject() const;

constexpr ::UnityW<::GlobalNamespace::PlantableObject>& __cordl_internal_get_plantableObject() ;

constexpr bool const& __cordl_internal_get_shouldBeSet() const;

constexpr bool& __cordl_internal_get_shouldBeSet() ;

constexpr void __cordl_internal_set_floorMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_plantableObject(::UnityW<::GlobalNamespace::PlantableObject>  value) ;

constexpr void __cordl_internal_set_shouldBeSet(bool  value) ;

/// @brief Method .ctor, addr 0x568e410, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlantablePoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlantablePoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlantablePoint(PlantablePoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlantablePoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlantablePoint(PlantablePoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{873};

/// @brief Field shouldBeSet, offset: 0x20, size: 0x1, def value: None
 bool  ___shouldBeSet;

/// @brief Field floorMask, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___floorMask;

/// @brief Field plantableObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlantableObject>  ___plantableObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlantablePoint, ___shouldBeSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantablePoint, ___floorMask) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantablePoint, ___plantableObject) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlantablePoint) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
