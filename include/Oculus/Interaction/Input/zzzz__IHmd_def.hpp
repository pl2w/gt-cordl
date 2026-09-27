#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IHmd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHmd)
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class IHmd;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IHmd*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IHmd*, "Oculus.Interaction.Input", "IHmd");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IHmd
class CORDL_TYPE IHmd {
public:
// Declarations
/// @brief Method TryGetRootPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenUpdated(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IHmd", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHmd(IHmd const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16510};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
