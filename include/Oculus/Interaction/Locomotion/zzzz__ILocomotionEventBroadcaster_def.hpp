#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/ILocomotionEventBroadcaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILocomotionEventBroadcaster)
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*, "Oculus.Interaction.Locomotion", "ILocomotionEventBroadcaster");
// Dependencies 
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster
class CORDL_TYPE ILocomotionEventBroadcaster {
public:
// Declarations
/// [CompilerGenerated]
/// @brief Method add_WhenLocomotionPerformed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenLocomotionPerformed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILocomotionEventBroadcaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILocomotionEventBroadcaster(ILocomotionEventBroadcaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Locomotion
