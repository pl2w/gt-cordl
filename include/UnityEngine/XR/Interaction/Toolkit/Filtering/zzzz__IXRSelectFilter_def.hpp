#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRSelectFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRSelectFilter)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRSelectFilter");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter
class CORDL_TYPE IXRSelectFilter {
public:
// Declarations
 __declspec(property(get=get_canProcess)) bool  canProcess;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method get_canProcess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_canProcess() ;

// Ctor Parameters [CppParam { name: "", ty: "IXRSelectFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRSelectFilter(IXRSelectFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11563};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
