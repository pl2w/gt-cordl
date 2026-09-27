#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/HoverExitEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
CORDL_MODULE_EXPORT(HoverExitEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "HoverExitEventArgs");
// Dependencies UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
class CORDL_TYPE HoverExitEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
public:
// Declarations
/// @brief Field <isCanceled>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCanceled_k__BackingField, put=__cordl_internal_set__isCanceled_k__BackingField)) bool  _isCanceled_k__BackingField;

/// @brief Field <manager>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__manager_k__BackingField, put=__cordl_internal_set__manager_k__BackingField)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  _manager_k__BackingField;

 __declspec(property(get=get_interactableObject, put=set_interactableObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactableObject;

 __declspec(property(get=get_interactorObject, put=set_interactorObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactorObject;

 __declspec(property(get=get_isCanceled, put=set_isCanceled)) bool  isCanceled;

 __declspec(property(get=get_manager, put=set_manager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  manager;

static inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* New_ctor() ;

constexpr bool const& __cordl_internal_get__isCanceled_k__BackingField() const;

constexpr bool& __cordl_internal_get__isCanceled_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get__manager_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get__manager_k__BackingField() ;

constexpr void __cordl_internal_set__isCanceled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__manager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

/// @brief Method .ctor, addr 0xb407eac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_interactableObject, addr 0xb407178, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* get_interactableObject() ;

/// @brief Method get_interactorObject, addr 0xb407e10, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* get_interactorObject() ;

/// [CompilerGenerated]
/// @brief Method get_isCanceled, addr 0xb407e9c, size 0x8, virtual false, abstract: false, final false
inline bool get_isCanceled() ;

/// [CompilerGenerated]
/// @brief Method get_manager, addr 0xb407e8c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_manager() ;

/// @brief Method set_interactableObject, addr 0xb407e84, size 0x8, virtual false, abstract: false, final false
inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  value) ;

/// @brief Method set_interactorObject, addr 0xb407e7c, size 0x8, virtual false, abstract: false, final false
inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isCanceled, addr 0xb407ea4, size 0x8, virtual false, abstract: false, final false
inline void set_isCanceled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_manager, addr 0xb407e94, size 0x8, virtual false, abstract: false, final false
inline void set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoverExitEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoverExitEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverExitEventArgs(HoverExitEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverExitEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverExitEventArgs(HoverExitEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11085};

/// [CompilerGenerated]
/// @brief Field <manager>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ____manager_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isCanceled>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____isCanceled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs, ____manager_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs, ____isCanceled_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
