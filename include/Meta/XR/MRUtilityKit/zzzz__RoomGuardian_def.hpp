#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/RoomGuardian.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoomGuardian)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class RoomGuardian;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::RoomGuardian*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::RoomGuardian*, "Meta.XR.MRUtilityKit", "RoomGuardian");
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_room_guardian")]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.RoomGuardian
class CORDL_TYPE RoomGuardian : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field GuardianDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_GuardianDistance, put=__cordl_internal_set_GuardianDistance)) float_t  GuardianDistance;

/// @brief Field GuardianMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GuardianMaterial, put=__cordl_internal_set_GuardianMaterial)) ::UnityW<::UnityEngine::Material>  GuardianMaterial;

static inline ::Meta::XR::MRUtilityKit::RoomGuardian* New_ctor() ;

/// @brief Method Start, addr 0x9f3ab94, size 0xcc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x9f3ac60, size 0x31c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_GuardianDistance() const;

constexpr float_t& __cordl_internal_get_GuardianDistance() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_GuardianMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_GuardianMaterial() ;

constexpr void __cordl_internal_set_GuardianDistance(float_t  value) ;

constexpr void __cordl_internal_set_GuardianMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x9f3af7c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomGuardian() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomGuardian", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomGuardian(RoomGuardian && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomGuardian", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomGuardian(RoomGuardian const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25895};

/// [Tooltip("Material to use for the Guardian effect")]
/// @brief Field GuardianMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___GuardianMaterial;

/// [Tooltip("This is how far, in meters, the player must be form a surface for the Guardian to become visible (in other words, it blends `_GuardianFade` from 0 to 1). The position of the user is calculated as a point 0.2m above the ground. This is to catch tripping hazards, as well as walls.")]
/// @brief Field GuardianDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___GuardianDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::RoomGuardian, ___GuardianMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::RoomGuardian, ___GuardianDistance) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::RoomGuardian) == 0x30, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
