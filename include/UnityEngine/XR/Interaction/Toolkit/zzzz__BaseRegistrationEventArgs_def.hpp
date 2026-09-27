#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/BaseRegistrationEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseRegistrationEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class BaseRegistrationEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "BaseRegistrationEventArgs");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs
class CORDL_TYPE BaseRegistrationEventArgs : public ::System::Object {
public:
// Declarations
/// @brief Field <manager>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__manager_k__BackingField, put=__cordl_internal_set__manager_k__BackingField)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  _manager_k__BackingField;

 __declspec(property(get=get_manager, put=set_manager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  manager;

static inline ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs* New_ctor() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get__manager_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get__manager_k__BackingField() ;

constexpr void __cordl_internal_set__manager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

/// @brief Method .ctor, addr 0xb40857c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_manager, addr 0xb40856c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_manager() ;

/// [CompilerGenerated]
/// @brief Method set_manager, addr 0xb408574, size 0x8, virtual false, abstract: false, final false
inline void set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseRegistrationEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseRegistrationEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseRegistrationEventArgs(BaseRegistrationEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseRegistrationEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseRegistrationEventArgs(BaseRegistrationEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11098};

/// [CompilerGenerated]
/// @brief Field <manager>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ____manager_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs, ____manager_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
