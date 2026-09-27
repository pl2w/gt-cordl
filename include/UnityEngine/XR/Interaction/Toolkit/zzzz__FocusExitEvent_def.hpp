#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/FocusExitEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(FocusExitEvent)
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusExitEventArgs;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusExitEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*, "UnityEngine.XR.Interaction.Toolkit", "FocusExitEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.FocusExitEvent
class CORDL_TYPE FocusExitEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb408238, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FocusExitEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FocusExitEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FocusExitEvent(FocusExitEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FocusExitEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FocusExitEvent(FocusExitEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11092};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
