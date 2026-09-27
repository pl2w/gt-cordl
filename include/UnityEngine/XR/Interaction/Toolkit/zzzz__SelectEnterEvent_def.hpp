#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/SelectEnterEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(SelectEnterEvent)
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*, "UnityEngine.XR.Interaction.Toolkit", "SelectEnterEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
class CORDL_TYPE SelectEnterEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb407eb4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectEnterEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectEnterEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectEnterEvent(SelectEnterEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectEnterEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectEnterEvent(SelectEnterEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
