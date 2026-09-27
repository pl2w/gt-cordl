#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/ISkeletonMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISkeletonMapping)
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Collections {
template<typename T>
class IEnumerableHashSet_1;
}
// Forward declare root types
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Input::ISkeletonMapping*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::ISkeletonMapping*, "Oculus.Interaction.Body.Input", "ISkeletonMapping");
// Dependencies 
namespace Oculus::Interaction::Body::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.ISkeletonMapping
class CORDL_TYPE ISkeletonMapping {
public:
// Declarations
 __declspec(property(get=get_Joints)) ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  Joints;

/// @brief Method TryGetParentJointId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetParentJointId(::Oculus::Interaction::Body::Input::BodyJointId  jointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>  parent) ;

/// @brief Method get_Joints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* get_Joints() ;

// Ctor Parameters [CppParam { name: "", ty: "ISkeletonMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISkeletonMapping(ISkeletonMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Body::Input
