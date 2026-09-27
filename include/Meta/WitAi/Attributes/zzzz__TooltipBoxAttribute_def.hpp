#pragma once
// IWYU pragma private; include "Meta/WitAi/Attributes/TooltipBoxAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TooltipBoxAttribute)
// Forward declare root types
namespace Meta::WitAi::Attributes {
class TooltipBoxAttribute;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Attributes::TooltipBoxAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Attributes::TooltipBoxAttribute*, "Meta.WitAi.Attributes", "TooltipBoxAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Meta::WitAi::Attributes {
// Is value type: false
// CS Name: Meta.WitAi.Attributes.TooltipBoxAttribute
class CORDL_TYPE TooltipBoxAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
 __declspec(property(put=set_Text)) ::StringW  Text;

/// @brief Field <Text>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Text_k__BackingField, put=__cordl_internal_set__Text_k__BackingField)) ::StringW  _Text_k__BackingField;

static inline ::Meta::WitAi::Attributes::TooltipBoxAttribute* New_ctor(::StringW  text) ;

constexpr ::StringW const& __cordl_internal_get__Text_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Text_k__BackingField() ;

constexpr void __cordl_internal_set__Text_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e9ef5c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  text) ;

/// [CompilerGenerated]
/// @brief Method set_Text, addr 0x9e9ef54, size 0x8, virtual false, abstract: false, final false
inline void set_Text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TooltipBoxAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TooltipBoxAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TooltipBoxAttribute(TooltipBoxAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TooltipBoxAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TooltipBoxAttribute(TooltipBoxAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25741};

/// [CompilerGenerated]
/// @brief Field <Text>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Text_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Attributes::TooltipBoxAttribute, ____Text_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Attributes::TooltipBoxAttribute) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Attributes
