#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRBaseTargetFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XRBaseTargetFilter)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRBaseTargetFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRBaseTargetFilter");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
class CORDL_TYPE XRBaseTargetFilter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_canProcess)) bool  canProcess;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*() noexcept;

/// @brief Method Link, addr 0xb4aaf90, size 0x4, virtual true, abstract: false, final false
inline void Link(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter* New_ctor() ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results) ;

/// @brief Method Unlink, addr 0xb4aaf94, size 0x4, virtual true, abstract: false, final false
inline void Unlink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method .ctor, addr 0xb4aaf98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canProcess, addr 0xb4aaf88, size 0x8, virtual true, abstract: false, final false
inline bool get_canProcess() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRTargetFilter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseTargetFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseTargetFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseTargetFilter(XRBaseTargetFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseTargetFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseTargetFilter(XRBaseTargetFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
