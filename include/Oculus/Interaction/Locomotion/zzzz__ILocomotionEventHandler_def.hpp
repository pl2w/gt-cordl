#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/ILocomotionEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILocomotionEventHandler)
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventHandler;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*, "Oculus.Interaction.Locomotion", "ILocomotionEventHandler");
// Dependencies 
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.ILocomotionEventHandler
class CORDL_TYPE ILocomotionEventHandler {
public:
// Declarations
/// @brief Method HandleLocomotionEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent) ;

/// [CompilerGenerated]
/// @brief Method add_WhenLocomotionEventHandled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenLocomotionEventHandled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILocomotionEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILocomotionEventHandler(ILocomotionEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16253};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Locomotion
