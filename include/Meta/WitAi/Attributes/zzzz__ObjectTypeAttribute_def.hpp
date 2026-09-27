#pragma once
// IWYU pragma private; include "Meta/WitAi/Attributes/ObjectTypeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ObjectTypeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi::Attributes {
class ObjectTypeAttribute;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Attributes::ObjectTypeAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Attributes::ObjectTypeAttribute*, "Meta.WitAi.Attributes", "ObjectTypeAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies System.Type, UnityEngine.PropertyAttribute
namespace Meta::WitAi::Attributes {
// Is value type: false
// CS Name: Meta.WitAi.Attributes.ObjectTypeAttribute
class CORDL_TYPE ObjectTypeAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field <RequiresAllTypes>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__RequiresAllTypes_k__BackingField, put=__cordl_internal_set__RequiresAllTypes_k__BackingField)) bool  _RequiresAllTypes_k__BackingField;

/// @brief Field <TargetTypes>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TargetTypes_k__BackingField, put=__cordl_internal_set__TargetTypes_k__BackingField)) ::ArrayW<::System::Type*>  _TargetTypes_k__BackingField;

static inline ::Meta::WitAi::Attributes::ObjectTypeAttribute* New_ctor(::System::Type*  targetType, /* [ParamArray] */ ::ArrayW<::System::Type*>  additionalTargetTypes) ;

/// @brief Method VerifyType, addr 0x9e9ee74, size 0xe0, virtual false, abstract: false, final false
inline bool VerifyType(::System::Type*  targetType) ;

/// @brief Method VerifyTypes, addr 0x9e9ec94, size 0x1e0, virtual false, abstract: false, final false
inline ::ArrayW<::System::Type*> VerifyTypes(::System::Type*  targetType, ::ArrayW<::System::Type*>  additionalTargetTypes) ;

constexpr bool const& __cordl_internal_get__RequiresAllTypes_k__BackingField() const;

constexpr bool& __cordl_internal_get__RequiresAllTypes_k__BackingField() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get__TargetTypes_k__BackingField() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get__TargetTypes_k__BackingField() ;

constexpr void __cordl_internal_set__RequiresAllTypes_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TargetTypes_k__BackingField(::ArrayW<::System::Type*>  value) ;

/// @brief Method .ctor, addr 0x9e9ec4c, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  targetType, /* [ParamArray] */ ::ArrayW<::System::Type*>  additionalTargetTypes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectTypeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectTypeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectTypeAttribute(ObjectTypeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectTypeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectTypeAttribute(ObjectTypeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25740};

/// [CompilerGenerated]
/// @brief Field <TargetTypes>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ____TargetTypes_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RequiresAllTypes>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____RequiresAllTypes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Attributes::ObjectTypeAttribute, ____TargetTypes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Attributes::ObjectTypeAttribute, ____RequiresAllTypes_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Attributes::ObjectTypeAttribute) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Attributes
