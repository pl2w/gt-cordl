#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitActionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConduitActionAttribute)
// Forward declare root types
namespace Meta::Conduit {
class ConduitActionAttribute;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::ConduitActionAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ConduitActionAttribute*, "Meta.Conduit", "ConduitActionAttribute");
// [AttributeUsage((System.AttributeTargets)64)]
// Dependencies System.Attribute
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ConduitActionAttribute
class CORDL_TYPE ConduitActionAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Intent)) ::StringW  Intent;

 __declspec(property(get=get_MaxConfidence)) float_t  MaxConfidence;

 __declspec(property(get=get_MinConfidence)) float_t  MinConfidence;

 __declspec(property(get=get_ValidatePartial)) bool  ValidatePartial;

/// @brief Field <Intent>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Intent_k__BackingField, put=__cordl_internal_set__Intent_k__BackingField)) ::StringW  _Intent_k__BackingField;

/// @brief Field <MaxConfidence>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxConfidence_k__BackingField, put=__cordl_internal_set__MaxConfidence_k__BackingField)) float_t  _MaxConfidence_k__BackingField;

/// @brief Field <MinConfidence>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinConfidence_k__BackingField, put=__cordl_internal_set__MinConfidence_k__BackingField)) float_t  _MinConfidence_k__BackingField;

/// @brief Field <ValidatePartial>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__ValidatePartial_k__BackingField, put=__cordl_internal_set__ValidatePartial_k__BackingField)) bool  _ValidatePartial_k__BackingField;

constexpr ::StringW const& __cordl_internal_get__Intent_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Intent_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxConfidence_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxConfidence_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MinConfidence_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MinConfidence_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ValidatePartial_k__BackingField() const;

constexpr bool& __cordl_internal_get__ValidatePartial_k__BackingField() ;

constexpr void __cordl_internal_set__Intent_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MaxConfidence_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MinConfidence_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ValidatePartial_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method get_Intent, addr 0x9e1b7b0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Intent() ;

/// [CompilerGenerated]
/// @brief Method get_MaxConfidence, addr 0x9e1b7c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxConfidence() ;

/// [CompilerGenerated]
/// @brief Method get_MinConfidence, addr 0x9e1b7b8, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinConfidence() ;

/// [CompilerGenerated]
/// @brief Method get_ValidatePartial, addr 0x9e1b7c8, size 0x8, virtual false, abstract: false, final false
inline bool get_ValidatePartial() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConduitActionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConduitActionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConduitActionAttribute(ConduitActionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConduitActionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConduitActionAttribute(ConduitActionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25402};

/// [CompilerGenerated]
/// @brief Field <Intent>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Intent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MinConfidence>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  ____MinConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxConfidence>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  ____MaxConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ValidatePartial>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____ValidatePartial_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ConduitActionAttribute, ____Intent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitActionAttribute, ____MinConfidence_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitActionAttribute, ____MaxConfidence_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitActionAttribute, ____ValidatePartial_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ConduitActionAttribute) == 0x28, "Size mismatch!");

} // namespace end def Meta::Conduit
