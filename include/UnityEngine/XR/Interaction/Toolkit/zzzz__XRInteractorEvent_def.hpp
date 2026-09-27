#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRInteractorEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(XRInteractorEvent)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractorEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractorEvent");
// [Obsolete("XRInteractorEvent has been deprecated. Use events specific to each state change instead.", true)]
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
class CORDL_TYPE XRInteractorEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb4086ac, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorEvent(XRInteractorEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorEvent(XRInteractorEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11106};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
