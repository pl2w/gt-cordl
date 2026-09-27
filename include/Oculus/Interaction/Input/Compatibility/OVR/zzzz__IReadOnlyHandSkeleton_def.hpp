#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/IReadOnlyHandSkeleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReadOnlyHandSkeleton)
namespace Oculus::Interaction::Input::Compatibility::OVR {
class IReadOnlyHandSkeletonJointList;
}
// Forward declare root types
namespace Oculus::Interaction::Input::Compatibility::OVR {
class IReadOnlyHandSkeleton;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton*, "Oculus.Interaction.Input.Compatibility.OVR", "IReadOnlyHandSkeleton");
// Dependencies 
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.IReadOnlyHandSkeleton
class CORDL_TYPE IReadOnlyHandSkeleton {
public:
// Declarations
 __declspec(property(get=get_Joints)) ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*  Joints;

/// @brief Method get_Joints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList* get_Joints() ;

// Ctor Parameters [CppParam { name: "", ty: "IReadOnlyHandSkeleton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReadOnlyHandSkeleton(IReadOnlyHandSkeleton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16536};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
