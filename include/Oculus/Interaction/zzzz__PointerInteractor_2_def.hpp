#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointerInteractor_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Interactor_2_def.hpp"
CORDL_MODULE_EXPORT(PointerInteractor_2)
namespace Oculus::Interaction {
struct PointerEventType;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class PointerInteractor_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PointerInteractor_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PointerInteractor_2, "Oculus.Interaction", "PointerInteractor`2");
// Dependencies Oculus.Interaction.Interactor`2<TInteractor, TInteractable>
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.PointerInteractor`2<TInteractor,TInteractable>
class CORDL_TYPE PointerInteractor_2 : public ::Oculus::Interaction::Interactor_2<TInteractor,TInteractable> {
public:
// Declarations
/// @brief Method ComputePointerPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose ComputePointerPose() ;

/// @brief Method DoPostprocess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DoPostprocess() ;

/// @brief Method GeneratePointerEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GeneratePointerEvent(::Oculus::Interaction::PointerEventType  pointerEventType, TInteractable  interactable) ;

/// @brief Method HandlePointerEventRaised, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InteractableSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractableSelected(TInteractable  interactable) ;

/// @brief Method InteractableSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractableSet(TInteractable  interactable) ;

/// @brief Method InteractableUnselected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractableUnselected(TInteractable  interactable) ;

/// @brief Method InteractableUnset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractableUnset(TInteractable  interactable) ;

static inline ::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerInteractor_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerInteractor_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerInteractor_2(PointerInteractor_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerInteractor_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerInteractor_2(PointerInteractor_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
