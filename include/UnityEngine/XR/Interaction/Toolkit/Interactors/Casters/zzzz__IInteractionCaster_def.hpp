#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/IInteractionCaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInteractionCaster)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class IInteractionCaster;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Casters", "IInteractionCaster");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.IInteractionCaster
class CORDL_TYPE IInteractionCaster {
public:
// Declarations
 __declspec(property(get=get_castOrigin, put=set_castOrigin)) ::UnityW<::UnityEngine::Transform>  castOrigin;

 __declspec(property(get=get_effectiveCastOrigin)) ::UnityW<::UnityEngine::Transform>  effectiveCastOrigin;

 __declspec(property(get=get_isInitialized)) bool  isInitialized;

/// @brief Method TryGetColliderTargets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets) ;

/// @brief Method get_castOrigin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_castOrigin() ;

/// @brief Method get_effectiveCastOrigin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_effectiveCastOrigin() ;

/// @brief Method get_isInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isInitialized() ;

/// @brief Method set_castOrigin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_castOrigin(::UnityEngine::Transform*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IInteractionCaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInteractionCaster(IInteractionCaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11503};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Casters
