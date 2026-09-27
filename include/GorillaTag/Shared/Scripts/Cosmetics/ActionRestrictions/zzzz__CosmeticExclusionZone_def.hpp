#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CosmeticExclusionZone)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
class CosmeticExclusionZone;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "CosmeticExclusionZone");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.CosmeticExclusionZone
class CORDL_TYPE CosmeticExclusionZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field zoneCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneCollider, put=__cordl_internal_set_zoneCollider)) ::UnityW<::UnityEngine::Collider>  zoneCollider;

/// @brief Method Awake, addr 0x5d4dfa4, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d4e1a0, size 0x58, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnTriggerEnter, addr 0x5d4e278, size 0xc8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5d4e404, size 0xc8, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_zoneCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_zoneCollider() ;

constexpr void __cordl_internal_set_zoneCollider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x5d4e590, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticExclusionZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticExclusionZone(CosmeticExclusionZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticExclusionZone(CosmeticExclusionZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4772};

/// @brief Field zoneCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___zoneCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone, ___zoneCollider) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions
