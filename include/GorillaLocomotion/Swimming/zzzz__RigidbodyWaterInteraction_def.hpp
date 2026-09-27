#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/RigidbodyWaterInteraction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RigidbodyWaterInteraction)
namespace GorillaLocomotion::Swimming {
class WaterCurrent;
}
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GorillaLocomotion::Swimming {
class RigidbodyWaterInteraction;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction*, "GorillaLocomotion.Swimming", "RigidbodyWaterInteraction");
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.RigidbodyWaterInteraction
class CORDL_TYPE RigidbodyWaterInteraction : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activeWaterCurrents, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeWaterCurrents, put=__cordl_internal_set_activeWaterCurrents)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*  activeWaterCurrents;

/// @brief Field angularDrag, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularDrag, put=__cordl_internal_set_angularDrag)) float_t  angularDrag;

/// @brief Field applyAngularDrag, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyAngularDrag, put=__cordl_internal_set_applyAngularDrag)) bool  applyAngularDrag;

/// @brief Field applyBuoyancyForce, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyBuoyancyForce, put=__cordl_internal_set_applyBuoyancyForce)) bool  applyBuoyancyForce;

/// @brief Field applyDamping, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyDamping, put=__cordl_internal_set_applyDamping)) bool  applyDamping;

/// @brief Field applySurfaceTorque, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_applySurfaceTorque, put=__cordl_internal_set_applySurfaceTorque)) bool  applySurfaceTorque;

/// @brief Field applyWaterCurrents, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyWaterCurrents, put=__cordl_internal_set_applyWaterCurrents)) bool  applyWaterCurrents;

/// @brief Field baseAngularDrag, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseAngularDrag, put=__cordl_internal_set_baseAngularDrag)) float_t  baseAngularDrag;

/// @brief Field buoyancyEquilibrium, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_buoyancyEquilibrium, put=__cordl_internal_set_buoyancyEquilibrium)) float_t  buoyancyEquilibrium;

/// @brief Field enablePreciseWaterCollision, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_enablePreciseWaterCollision, put=__cordl_internal_set_enablePreciseWaterCollision)) bool  enablePreciseWaterCollision;

/// @brief Field objectRadiusForWaterCollision, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_objectRadiusForWaterCollision, put=__cordl_internal_set_objectRadiusForWaterCollision)) float_t  objectRadiusForWaterCollision;

/// @brief Field overlappingWaterVolumes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlappingWaterVolumes, put=__cordl_internal_set_overlappingWaterVolumes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  overlappingWaterVolumes;

/// @brief Field rb, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field surfaceTorqueAmount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceTorqueAmount, put=__cordl_internal_set_surfaceTorqueAmount)) float_t  surfaceTorqueAmount;

/// @brief Field underWaterBuoyancyFactor, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_underWaterBuoyancyFactor, put=__cordl_internal_set_underWaterBuoyancyFactor)) float_t  underWaterBuoyancyFactor;

/// @brief Field underWaterDampingHalfLife, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_underWaterDampingHalfLife, put=__cordl_internal_set_underWaterDampingHalfLife)) float_t  underWaterDampingHalfLife;

/// @brief Field waterSurfaceDampingHalfLife, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_waterSurfaceDampingHalfLife, put=__cordl_internal_set_waterSurfaceDampingHalfLife)) float_t  waterSurfaceDampingHalfLife;

/// @brief Method Awake, addr 0x5cde560, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InvokeFixedUpdate, addr 0x5cde9c8, size 0xeac, virtual false, abstract: false, final false
inline void InvokeFixedUpdate() ;

static inline ::GorillaLocomotion::Swimming::RigidbodyWaterInteraction* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5cde974, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5cde7e4, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5cde754, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5ce0ab8, size 0x148, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5ce0c00, size 0xf4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>* const& __cordl_internal_get_activeWaterCurrents() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*& __cordl_internal_get_activeWaterCurrents() ;

constexpr float_t const& __cordl_internal_get_angularDrag() const;

constexpr float_t& __cordl_internal_get_angularDrag() ;

constexpr bool const& __cordl_internal_get_applyAngularDrag() const;

constexpr bool& __cordl_internal_get_applyAngularDrag() ;

constexpr bool const& __cordl_internal_get_applyBuoyancyForce() const;

constexpr bool& __cordl_internal_get_applyBuoyancyForce() ;

constexpr bool const& __cordl_internal_get_applyDamping() const;

constexpr bool& __cordl_internal_get_applyDamping() ;

constexpr bool const& __cordl_internal_get_applySurfaceTorque() const;

constexpr bool& __cordl_internal_get_applySurfaceTorque() ;

constexpr bool const& __cordl_internal_get_applyWaterCurrents() const;

constexpr bool& __cordl_internal_get_applyWaterCurrents() ;

constexpr float_t const& __cordl_internal_get_baseAngularDrag() const;

constexpr float_t& __cordl_internal_get_baseAngularDrag() ;

constexpr float_t const& __cordl_internal_get_buoyancyEquilibrium() const;

constexpr float_t& __cordl_internal_get_buoyancyEquilibrium() ;

constexpr bool const& __cordl_internal_get_enablePreciseWaterCollision() const;

constexpr bool& __cordl_internal_get_enablePreciseWaterCollision() ;

constexpr float_t const& __cordl_internal_get_objectRadiusForWaterCollision() const;

constexpr float_t& __cordl_internal_get_objectRadiusForWaterCollision() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* const& __cordl_internal_get_overlappingWaterVolumes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*& __cordl_internal_get_overlappingWaterVolumes() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_surfaceTorqueAmount() const;

constexpr float_t& __cordl_internal_get_surfaceTorqueAmount() ;

constexpr float_t const& __cordl_internal_get_underWaterBuoyancyFactor() const;

constexpr float_t& __cordl_internal_get_underWaterBuoyancyFactor() ;

constexpr float_t const& __cordl_internal_get_underWaterDampingHalfLife() const;

constexpr float_t& __cordl_internal_get_underWaterDampingHalfLife() ;

constexpr float_t const& __cordl_internal_get_waterSurfaceDampingHalfLife() const;

constexpr float_t& __cordl_internal_get_waterSurfaceDampingHalfLife() ;

constexpr void __cordl_internal_set_activeWaterCurrents(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*  value) ;

constexpr void __cordl_internal_set_angularDrag(float_t  value) ;

constexpr void __cordl_internal_set_applyAngularDrag(bool  value) ;

constexpr void __cordl_internal_set_applyBuoyancyForce(bool  value) ;

constexpr void __cordl_internal_set_applyDamping(bool  value) ;

constexpr void __cordl_internal_set_applySurfaceTorque(bool  value) ;

constexpr void __cordl_internal_set_applyWaterCurrents(bool  value) ;

constexpr void __cordl_internal_set_baseAngularDrag(float_t  value) ;

constexpr void __cordl_internal_set_buoyancyEquilibrium(float_t  value) ;

constexpr void __cordl_internal_set_enablePreciseWaterCollision(bool  value) ;

constexpr void __cordl_internal_set_objectRadiusForWaterCollision(float_t  value) ;

constexpr void __cordl_internal_set_overlappingWaterVolumes(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_surfaceTorqueAmount(float_t  value) ;

constexpr void __cordl_internal_set_underWaterBuoyancyFactor(float_t  value) ;

constexpr void __cordl_internal_set_underWaterDampingHalfLife(float_t  value) ;

constexpr void __cordl_internal_set_waterSurfaceDampingHalfLife(float_t  value) ;

/// @brief Method .ctor, addr 0x5ce0cf4, size 0x118, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigidbodyWaterInteraction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyWaterInteraction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigidbodyWaterInteraction(RigidbodyWaterInteraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyWaterInteraction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigidbodyWaterInteraction(RigidbodyWaterInteraction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4511};

/// @brief Field applyDamping, offset: 0x20, size: 0x1, def value: None
 bool  ___applyDamping;

/// @brief Field applyBuoyancyForce, offset: 0x21, size: 0x1, def value: None
 bool  ___applyBuoyancyForce;

/// @brief Field applyAngularDrag, offset: 0x22, size: 0x1, def value: None
 bool  ___applyAngularDrag;

/// @brief Field applyWaterCurrents, offset: 0x23, size: 0x1, def value: None
 bool  ___applyWaterCurrents;

/// @brief Field applySurfaceTorque, offset: 0x24, size: 0x1, def value: None
 bool  ___applySurfaceTorque;

/// @brief Field underWaterDampingHalfLife, offset: 0x28, size: 0x4, def value: None
 float_t  ___underWaterDampingHalfLife;

/// @brief Field waterSurfaceDampingHalfLife, offset: 0x2c, size: 0x4, def value: None
 float_t  ___waterSurfaceDampingHalfLife;

/// @brief Field underWaterBuoyancyFactor, offset: 0x30, size: 0x4, def value: None
 float_t  ___underWaterBuoyancyFactor;

/// @brief Field angularDrag, offset: 0x34, size: 0x4, def value: None
 float_t  ___angularDrag;

/// @brief Field surfaceTorqueAmount, offset: 0x38, size: 0x4, def value: None
 float_t  ___surfaceTorqueAmount;

/// @brief Field enablePreciseWaterCollision, offset: 0x3c, size: 0x1, def value: None
 bool  ___enablePreciseWaterCollision;

/// @brief Field objectRadiusForWaterCollision, offset: 0x40, size: 0x4, def value: None
 float_t  ___objectRadiusForWaterCollision;

/// [Range(0, 1)]
/// @brief Field buoyancyEquilibrium, offset: 0x44, size: 0x4, def value: None
 float_t  ___buoyancyEquilibrium;

/// @brief Field rb, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field overlappingWaterVolumes, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  ___overlappingWaterVolumes;

/// @brief Field activeWaterCurrents, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*  ___activeWaterCurrents;

/// @brief Field baseAngularDrag, offset: 0x60, size: 0x4, def value: None
 float_t  ___baseAngularDrag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___applyDamping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___applyBuoyancyForce) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___applyAngularDrag) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___applyWaterCurrents) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___applySurfaceTorque) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___underWaterDampingHalfLife) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___waterSurfaceDampingHalfLife) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___underWaterBuoyancyFactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___angularDrag) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___surfaceTorqueAmount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___enablePreciseWaterCollision) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___objectRadiusForWaterCollision) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___buoyancyEquilibrium) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___rb) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___overlappingWaterVolumes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___activeWaterCurrents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction, ___baseAngularDrag) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction) == 0x68, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
