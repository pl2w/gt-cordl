#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRInteractionStrengthFilterDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRInteractionStrengthFilterDelegate)
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRInteractionStrengthFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRInteractionStrengthFilterDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRInteractionStrengthFilterDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRInteractionStrengthFilterDelegate*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRInteractionStrengthFilterDelegate");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRInteractionStrengthFilterDelegate
class CORDL_TYPE XRInteractionStrengthFilterDelegate : public ::System::Object {
public:
// Declarations
/// @brief Field <canProcess>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__canProcess_k__BackingField, put=__cordl_internal_set__canProcess_k__BackingField)) bool  _canProcess_k__BackingField;

/// @brief Field <delegateToProcess>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__delegateToProcess_k__BackingField, put=__cordl_internal_set__delegateToProcess_k__BackingField)) ::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>*  _delegateToProcess_k__BackingField;

 __declspec(property(get=get_canProcess, put=set_canProcess)) bool  canProcess;

 __declspec(property(get=get_delegateToProcess, put=set_delegateToProcess)) ::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>*  delegateToProcess;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRInteractionStrengthFilterDelegate* New_ctor(::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>*  delegateToProcess) ;

/// @brief Method Process, addr 0xb4a54b0, size 0x20, virtual true, abstract: false, final true
inline float_t Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, float_t  interactionStrength) ;

constexpr bool const& __cordl_internal_get__canProcess_k__BackingField() const;

constexpr bool& __cordl_internal_get__canProcess_k__BackingField() ;

constexpr ::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>* const& __cordl_internal_get__delegateToProcess_k__BackingField() const;

constexpr ::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>*& __cordl_internal_get__delegateToProcess_k__BackingField() ;

constexpr void __cordl_internal_set__canProcess_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__delegateToProcess_k__BackingField(::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>*  value) ;

/// @brief Method .ctor, addr 0xb4a542c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>*  delegateToProcess) ;

/// [CompilerGenerated]
/// @brief Method get_canProcess, addr 0xb4a541c, size 0x8, virtual true, abstract: false, final true
inline bool get_canProcess() ;

/// [CompilerGenerated]
/// @brief Method get_delegateToProcess, addr 0xb4a540c, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>* get_delegateToProcess() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRInteractionStrengthFilter() noexcept;

/// [CompilerGenerated]
/// @brief Method set_canProcess, addr 0xb4a5424, size 0x8, virtual false, abstract: false, final false
inline void set_canProcess(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_delegateToProcess, addr 0xb4a5414, size 0x8, virtual false, abstract: false, final false
inline void set_delegateToProcess(::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionStrengthFilterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionStrengthFilterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractionStrengthFilterDelegate(XRInteractionStrengthFilterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionStrengthFilterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractionStrengthFilterDelegate(XRInteractionStrengthFilterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11545};

/// [CompilerGenerated]
/// @brief Field <delegateToProcess>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Func_4<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t,float_t>*  ____delegateToProcess_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <canProcess>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____canProcess_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRInteractionStrengthFilterDelegate, ____delegateToProcess_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRInteractionStrengthFilterDelegate, ____canProcess_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRInteractionStrengthFilterDelegate) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
