#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/CanSelectMultipleAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CanSelectMultipleAttribute)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class CanSelectMultipleAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*, "UnityEngine.XR.Interaction.Toolkit", "CanSelectMultipleAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.CanSelectMultipleAttribute
class CORDL_TYPE CanSelectMultipleAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field <allowMultiple>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowMultiple_k__BackingField, put=__cordl_internal_set__allowMultiple_k__BackingField)) bool  _allowMultiple_k__BackingField;

 __declspec(property(get=get_allowMultiple)) bool  allowMultiple;

static inline ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute* New_ctor(bool  allowMultiple) ;

constexpr bool const& __cordl_internal_get__allowMultiple_k__BackingField() const;

constexpr bool& __cordl_internal_get__allowMultiple_k__BackingField() ;

constexpr void __cordl_internal_set__allowMultiple_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xb3fe184, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  allowMultiple) ;

/// [CompilerGenerated]
/// @brief Method get_allowMultiple, addr 0xb3fe17c, size 0x8, virtual false, abstract: false, final false
inline bool get_allowMultiple() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanSelectMultipleAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanSelectMultipleAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanSelectMultipleAttribute(CanSelectMultipleAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanSelectMultipleAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanSelectMultipleAttribute(CanSelectMultipleAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11064};

/// [CompilerGenerated]
/// @brief Field <allowMultiple>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____allowMultiple_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute, ____allowMultiple_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
