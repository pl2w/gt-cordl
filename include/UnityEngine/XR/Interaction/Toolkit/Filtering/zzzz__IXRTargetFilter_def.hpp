#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRTargetFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRTargetFilter)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRTargetFilter");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
class CORDL_TYPE IXRTargetFilter {
public:
// Declarations
 __declspec(property(get=get_canProcess)) bool  canProcess;

/// @brief Method Link, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Link(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results) ;

/// @brief Method Unlink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Unlink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method get_canProcess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_canProcess() ;

// Ctor Parameters [CppParam { name: "", ty: "IXRTargetFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRTargetFilter(IXRTargetFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11570};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
