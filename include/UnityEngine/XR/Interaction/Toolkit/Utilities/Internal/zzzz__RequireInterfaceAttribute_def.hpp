#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Internal/RequireInterfaceAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(RequireInterfaceAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Internal {
class RequireInterfaceAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Internal", "RequireInterfaceAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Internal {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Internal.RequireInterfaceAttribute
class CORDL_TYPE RequireInterfaceAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field <interfaceType>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__interfaceType_k__BackingField, put=__cordl_internal_set__interfaceType_k__BackingField)) ::System::Type*  _interfaceType_k__BackingField;

 __declspec(property(get=get_interfaceType)) ::System::Type*  interfaceType;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute* New_ctor(::System::Type*  interfaceType) ;

constexpr ::System::Type* const& __cordl_internal_get__interfaceType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__interfaceType_k__BackingField() ;

constexpr void __cordl_internal_set__interfaceType_k__BackingField(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xb42be98, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  interfaceType) ;

/// [CompilerGenerated]
/// @brief Method get_interfaceType, addr 0xb42be90, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_interfaceType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequireInterfaceAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequireInterfaceAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequireInterfaceAttribute(RequireInterfaceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequireInterfaceAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequireInterfaceAttribute(RequireInterfaceAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11247};

/// [CompilerGenerated]
/// @brief Field <interfaceType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____interfaceType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute, ____interfaceType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Internal
