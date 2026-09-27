#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/IXRReticleDirectionProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRReticleDirectionProvider)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class IXRReticleDirectionProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "IXRReticleDirectionProvider");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.IXRReticleDirectionProvider
class CORDL_TYPE IXRReticleDirectionProvider {
public:
// Declarations
/// @brief Method GetReticleDirection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetReticleDirection(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::Vector3  hitNormal, ::by_ref<::UnityEngine::Vector3>  reticleUp, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  optionalReticleForward) ;

// Ctor Parameters [CppParam { name: "", ty: "IXRReticleDirectionProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRReticleDirectionProvider(IXRReticleDirectionProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11487};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
