#pragma once
// IWYU pragma private; include "Oculus/Interaction/IHandVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHandVisual)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Space;
}
// Forward declare root types
namespace Oculus::Interaction {
class IHandVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IHandVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IHandVisual*, "Oculus.Interaction", "IHandVisual");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IHandVisual
class CORDL_TYPE IHandVisual {
public:
// Declarations
 __declspec(property(get=get_ForceOffVisibility, put=set_ForceOffVisibility)) bool  ForceOffVisibility;

 __declspec(property(get=get_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_IsVisible)) bool  IsVisible;

/// @brief Method GetJointPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose GetJointPose(::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Space  space) ;

/// [CompilerGenerated]
/// @brief Method add_WhenHandVisualUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenHandVisualUpdated(::System::Action*  value) ;

/// @brief Method get_ForceOffVisibility, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ForceOffVisibility() ;

/// @brief Method get_Hand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_IsVisible, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsVisible() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenHandVisualUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenHandVisualUpdated(::System::Action*  value) ;

/// @brief Method set_ForceOffVisibility, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ForceOffVisibility(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IHandVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHandVisual(IHandVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15925};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
