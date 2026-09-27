#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/IReadOnlyHandSkeletonJointList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IReadOnlyHandSkeletonJointList)
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct HandSkeletonJoint;
}
// Forward declare root types
namespace Oculus::Interaction::Input::Compatibility::OVR {
class IReadOnlyHandSkeletonJointList;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*, "Oculus.Interaction.Input.Compatibility.OVR", "IReadOnlyHandSkeletonJointList");
// [DefaultMember("Item")]
// Dependencies 
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.IReadOnlyHandSkeletonJointList
class CORDL_TYPE IReadOnlyHandSkeletonJointList {
public:
// Declarations
/// @brief [IsReadOnly]
 __declspec(property(get=get_Item)) ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint  Item[];

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::by_ref<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint> get_Item(int32_t  jointId) ;

// Ctor Parameters [CppParam { name: "", ty: "IReadOnlyHandSkeletonJointList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReadOnlyHandSkeletonJointList(IReadOnlyHandSkeletonJointList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16535};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
