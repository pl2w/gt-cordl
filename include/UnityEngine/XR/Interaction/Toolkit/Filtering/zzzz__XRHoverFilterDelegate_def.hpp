#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRHoverFilterDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRHoverFilterDelegate)
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRHoverFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRHoverFilterDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRHoverFilterDelegate");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRHoverFilterDelegate
class CORDL_TYPE XRHoverFilterDelegate : public ::System::Object {
public:
// Declarations
/// @brief Field <canProcess>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__canProcess_k__BackingField, put=__cordl_internal_set__canProcess_k__BackingField)) bool  _canProcess_k__BackingField;

/// @brief Field <delegateToProcess>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__delegateToProcess_k__BackingField, put=__cordl_internal_set__delegateToProcess_k__BackingField)) ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>*  _delegateToProcess_k__BackingField;

 __declspec(property(get=get_canProcess, put=set_canProcess)) bool  canProcess;

 __declspec(property(get=get_delegateToProcess, put=set_delegateToProcess)) ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>*  delegateToProcess;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate* New_ctor(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>*  delegateToProcess) ;

/// @brief Method Process, addr 0xb4a51d0, size 0x20, virtual true, abstract: false, final true
inline bool Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

constexpr bool const& __cordl_internal_get__canProcess_k__BackingField() const;

constexpr bool& __cordl_internal_get__canProcess_k__BackingField() ;

constexpr ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>* const& __cordl_internal_get__delegateToProcess_k__BackingField() const;

constexpr ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>*& __cordl_internal_get__delegateToProcess_k__BackingField() ;

constexpr void __cordl_internal_set__canProcess_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__delegateToProcess_k__BackingField(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>*  value) ;

/// @brief Method .ctor, addr 0xb4a514c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>*  delegateToProcess) ;

/// [CompilerGenerated]
/// @brief Method get_canProcess, addr 0xb4a513c, size 0x8, virtual true, abstract: false, final true
inline bool get_canProcess() ;

/// [CompilerGenerated]
/// @brief Method get_delegateToProcess, addr 0xb4a512c, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>* get_delegateToProcess() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRHoverFilter() noexcept;

/// [CompilerGenerated]
/// @brief Method set_canProcess, addr 0xb4a5144, size 0x8, virtual false, abstract: false, final false
inline void set_canProcess(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_delegateToProcess, addr 0xb4a5134, size 0x8, virtual false, abstract: false, final false
inline void set_delegateToProcess(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRHoverFilterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRHoverFilterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRHoverFilterDelegate(XRHoverFilterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRHoverFilterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRHoverFilterDelegate(XRHoverFilterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11542};

/// [CompilerGenerated]
/// @brief Field <delegateToProcess>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*,bool>*  ____delegateToProcess_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <canProcess>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____canProcess_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate, ____delegateToProcess_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate, ____canProcess_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
