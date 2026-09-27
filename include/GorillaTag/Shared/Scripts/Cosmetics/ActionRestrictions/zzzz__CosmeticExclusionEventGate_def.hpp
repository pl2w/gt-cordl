#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionEventGate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CosmeticExclusionEventGate)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
class CosmeticExclusionEventGate;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate*, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "CosmeticExclusionEventGate");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.CosmeticExclusionEventGate
class CORDL_TYPE CosmeticExclusionEventGate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field effectSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectSource, put=__cordl_internal_set_effectSource)) ::UnityW<::UnityEngine::GameObject>  effectSource;

/// @brief Field onNormal, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onNormal, put=__cordl_internal_set_onNormal)) ::UnityEngine::Events::UnityEvent*  onNormal;

/// @brief Field onRestricted, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRestricted, put=__cordl_internal_set_onRestricted)) ::UnityEngine::Events::UnityEvent*  onRestricted;

/// @brief Field ownerRig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Method Awake, addr 0x5d4db04, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InvokeEvent, addr 0x5d4db5c, size 0x3c, virtual false, abstract: false, final false
inline void InvokeEvent() ;

static inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_effectSource() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_effectSource() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onNormal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onNormal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onRestricted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRestricted() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr void __cordl_internal_set_effectSource(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_onNormal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onRestricted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5d4dcac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticExclusionEventGate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionEventGate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticExclusionEventGate(CosmeticExclusionEventGate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionEventGate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticExclusionEventGate(CosmeticExclusionEventGate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4769};

/// [Header("Context")]
/// [Tooltip("Optional effect source.\nIf set and has CosmeticExclusionSource, world position will be checked.")]
/// [SerializeField]
/// @brief Field effectSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___effectSource;

/// [Header("Forwarded Events")]
/// [SerializeField]
/// @brief Field onNormal, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onNormal;

/// [SerializeField]
/// @brief Field onRestricted, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onRestricted;

/// @brief Field ownerRig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate, ___effectSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate, ___onNormal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate, ___onRestricted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate, ___ownerRig) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions
