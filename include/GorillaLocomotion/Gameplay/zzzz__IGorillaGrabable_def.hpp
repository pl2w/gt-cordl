#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/IGorillaGrabable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IGorillaGrabable)
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class IGorillaGrabable;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::IGorillaGrabable*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::IGorillaGrabable*, "GorillaLocomotion.Gameplay", "IGorillaGrabable");
// Dependencies 
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.IGorillaGrabable
class CORDL_TYPE IGorillaGrabable {
public:
// Declarations
 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Method CanBeGrabbed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method MomentaryGrabOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MomentaryGrabOnly() ;

/// @brief Method OnGrabReleased, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGrabReleased(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method OnGrabbed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGrabbed(::GlobalNamespace::GorillaGrabber*  grabber, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition) ;

/// @brief Method get_name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_name() ;

// Ctor Parameters [CppParam { name: "", ty: "IGorillaGrabable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGorillaGrabable(IGorillaGrabable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4534};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaLocomotion::Gameplay
