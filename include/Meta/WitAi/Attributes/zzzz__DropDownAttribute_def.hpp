#pragma once
// IWYU pragma private; include "Meta/WitAi/Attributes/DropDownAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DropDownAttribute)
// Forward declare root types
namespace Meta::WitAi::Attributes {
class DropDownAttribute;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Attributes::DropDownAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Attributes::DropDownAttribute*, "Meta.WitAi.Attributes", "DropDownAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies UnityEngine.PropertyAttribute
namespace Meta::WitAi::Attributes {
// Is value type: false
// CS Name: Meta.WitAi.Attributes.DropDownAttribute
class CORDL_TYPE DropDownAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field <AllowInvalid>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowInvalid_k__BackingField, put=__cordl_internal_set__AllowInvalid_k__BackingField)) bool  _AllowInvalid_k__BackingField;

/// @brief Field <OptionListGetterName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__OptionListGetterName_k__BackingField, put=__cordl_internal_set__OptionListGetterName_k__BackingField)) ::StringW  _OptionListGetterName_k__BackingField;

/// @brief Field <RefreshMethodName>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__RefreshMethodName_k__BackingField, put=__cordl_internal_set__RefreshMethodName_k__BackingField)) ::StringW  _RefreshMethodName_k__BackingField;

/// @brief Field <RefreshOnRepaint>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__RefreshOnRepaint_k__BackingField, put=__cordl_internal_set__RefreshOnRepaint_k__BackingField)) bool  _RefreshOnRepaint_k__BackingField;

/// @brief Field <ShowPropertyIfListIsEmpty>k__BackingField, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowPropertyIfListIsEmpty_k__BackingField, put=__cordl_internal_set__ShowPropertyIfListIsEmpty_k__BackingField)) bool  _ShowPropertyIfListIsEmpty_k__BackingField;

/// @brief Field <ShowRefreshButton>k__BackingField, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowRefreshButton_k__BackingField, put=__cordl_internal_set__ShowRefreshButton_k__BackingField)) bool  _ShowRefreshButton_k__BackingField;

/// @brief Field <ShowSearch>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowSearch_k__BackingField, put=__cordl_internal_set__ShowSearch_k__BackingField)) bool  _ShowSearch_k__BackingField;

static inline ::Meta::WitAi::Attributes::DropDownAttribute* New_ctor(::StringW  optionListGetterName, bool  refreshOnRepaint, bool  allowInvalid, bool  showPropertyIfListIsEmpty, bool  showRefreshButton, ::StringW  refreshMethodName, bool  showSearch) ;

constexpr bool const& __cordl_internal_get__AllowInvalid_k__BackingField() const;

constexpr bool& __cordl_internal_get__AllowInvalid_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__OptionListGetterName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__OptionListGetterName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__RefreshMethodName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__RefreshMethodName_k__BackingField() ;

constexpr bool const& __cordl_internal_get__RefreshOnRepaint_k__BackingField() const;

constexpr bool& __cordl_internal_get__RefreshOnRepaint_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShowPropertyIfListIsEmpty_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowPropertyIfListIsEmpty_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShowRefreshButton_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowRefreshButton_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShowSearch_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowSearch_k__BackingField() ;

constexpr void __cordl_internal_set__AllowInvalid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OptionListGetterName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__RefreshMethodName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__RefreshOnRepaint_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ShowPropertyIfListIsEmpty_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ShowRefreshButton_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ShowSearch_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x9e9ebc4, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::StringW  optionListGetterName, bool  refreshOnRepaint, bool  allowInvalid, bool  showPropertyIfListIsEmpty, bool  showRefreshButton, ::StringW  refreshMethodName, bool  showSearch) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DropDownAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DropDownAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DropDownAttribute(DropDownAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropDownAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropDownAttribute(DropDownAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25739};

/// [CompilerGenerated]
/// @brief Field <OptionListGetterName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____OptionListGetterName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RefreshOnRepaint>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____RefreshOnRepaint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AllowInvalid>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____AllowInvalid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ShowPropertyIfListIsEmpty>k__BackingField, offset: 0x22, size: 0x1, def value: None
 bool  ____ShowPropertyIfListIsEmpty_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ShowRefreshButton>k__BackingField, offset: 0x23, size: 0x1, def value: None
 bool  ____ShowRefreshButton_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RefreshMethodName>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____RefreshMethodName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ShowSearch>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____ShowSearch_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Attributes::DropDownAttribute, ____OptionListGetterName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Attributes::DropDownAttribute, ____RefreshOnRepaint_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Attributes::DropDownAttribute, ____AllowInvalid_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Attributes::DropDownAttribute, ____ShowPropertyIfListIsEmpty_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Attributes::DropDownAttribute, ____ShowRefreshButton_k__BackingField) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Attributes::DropDownAttribute, ____RefreshMethodName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Attributes::DropDownAttribute, ____ShowSearch_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Attributes::DropDownAttribute) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::Attributes
