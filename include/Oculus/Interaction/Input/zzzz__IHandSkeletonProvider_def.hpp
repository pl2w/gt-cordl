#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IHandSkeletonProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHandSkeletonProvider)
namespace Oculus::Interaction::Input {
class HandSkeleton;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class IHandSkeletonProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IHandSkeletonProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IHandSkeletonProvider*, "Oculus.Interaction.Input", "IHandSkeletonProvider");
// [DefaultMember("Item")]
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IHandSkeletonProvider
class CORDL_TYPE IHandSkeletonProvider {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Oculus::Interaction::Input::HandSkeleton*  Item[];

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Input::HandSkeleton* get_Item(::Oculus::Interaction::Input::Handedness  handedness) ;

// Ctor Parameters [CppParam { name: "", ty: "IHandSkeletonProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHandSkeletonProvider(IHandSkeletonProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16501};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
