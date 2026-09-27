#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/IXRDropTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRDropTransformer)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class DropEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class IXRGrabTransformer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class IXRDropTransformer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRDropTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "IXRDropTransformer");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.IXRDropTransformer
class CORDL_TYPE IXRDropTransformer {
public:
// Declarations
 __declspec(property(get=get_canProcessOnDrop)) bool  canProcessOnDrop;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*() noexcept;

/// @brief Method OnDrop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDrop(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*  args) ;

/// @brief Method get_canProcessOnDrop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_canProcessOnDrop() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* i___UnityEngine__XR__Interaction__Toolkit__Transformers__IXRGrabTransformer() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRDropTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRDropTransformer(IXRDropTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
