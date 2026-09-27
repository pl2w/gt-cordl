#pragma once
// IWYU pragma private; include "Oculus/Interaction/IGrabbable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGrabbable)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class IGrabbable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IGrabbable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IGrabbable*, "Oculus.Interaction", "IGrabbable");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IGrabbable
class CORDL_TYPE IGrabbable {
public:
// Declarations
 __declspec(property(get=get_GrabPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  GrabPoints;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Method get_GrabPoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Pose>* get_GrabPoints() ;

/// @brief Method get_Transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

// Ctor Parameters [CppParam { name: "", ty: "IGrabbable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGrabbable(IGrabbable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
