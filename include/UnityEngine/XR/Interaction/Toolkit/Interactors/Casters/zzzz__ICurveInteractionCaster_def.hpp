#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/ICurveInteractionCaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICurveInteractionCaster)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class IInteractionCaster;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class ICurveInteractionCaster;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Casters", "ICurveInteractionCaster");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.ICurveInteractionCaster
class CORDL_TYPE ICurveInteractionCaster {
public:
// Declarations
 __declspec(property(get=get_lastSamplePoint)) ::UnityEngine::Vector3  lastSamplePoint;

 __declspec(property(get=get_samplePoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  samplePoints;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*() noexcept;

/// @brief Method TryGetColliderTargets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  raycastHits) ;

/// @brief Method get_lastSamplePoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_lastSamplePoint() ;

/// @brief Method get_samplePoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_samplePoints() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Casters__IInteractionCaster() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ICurveInteractionCaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICurveInteractionCaster(ICurveInteractionCaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11502};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Casters
