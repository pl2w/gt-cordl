#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/FocusEnterEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(FocusEnterEvent)
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusEnterEventArgs;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusEnterEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*, "UnityEngine.XR.Interaction.Toolkit", "FocusEnterEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent
class CORDL_TYPE FocusEnterEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb408154, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FocusEnterEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FocusEnterEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FocusEnterEvent(FocusEnterEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FocusEnterEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FocusEnterEvent(FocusEnterEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11090};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
