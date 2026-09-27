#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetDashYoyo_TargetRB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SIGadgetDashYoyo_TargetRB)
namespace GlobalNamespace {
class SIGadgetDashYoyo;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetDashYoyo_TargetRB;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetDashYoyo_TargetRB*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetDashYoyo_TargetRB*, "", "SIGadgetDashYoyo_TargetRB");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetDashYoyo_TargetRB
class CORDL_TYPE SIGadgetDashYoyo_TargetRB : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field gadget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadget, put=__cordl_internal_set_gadget)) ::UnityW<::GlobalNamespace::SIGadgetDashYoyo>  gadget;

static inline ::GlobalNamespace::SIGadgetDashYoyo_TargetRB* New_ctor() ;

/// @brief Method OnEnable, addr 0x58d4cd4, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x58d4cd8, size 0x1d8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  otherCollider) ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetDashYoyo> const& __cordl_internal_get_gadget() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetDashYoyo>& __cordl_internal_get_gadget() ;

constexpr void __cordl_internal_set_gadget(::UnityW<::GlobalNamespace::SIGadgetDashYoyo>  value) ;

/// @brief Method .ctor, addr 0x58d4eb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetDashYoyo_TargetRB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetDashYoyo_TargetRB", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetDashYoyo_TargetRB(SIGadgetDashYoyo_TargetRB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetDashYoyo_TargetRB", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetDashYoyo_TargetRB(SIGadgetDashYoyo_TargetRB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{236};

/// [SerializeField]
/// @brief Field gadget, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetDashYoyo>  ___gadget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo_TargetRB, ___gadget) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetDashYoyo_TargetRB) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
