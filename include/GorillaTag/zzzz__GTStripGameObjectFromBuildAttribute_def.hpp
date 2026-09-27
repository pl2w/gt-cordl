#pragma once
// IWYU pragma private; include "GorillaTag/GTStripGameObjectFromBuildAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GTStripGameObjectFromBuildAttribute)
// Forward declare root types
namespace GorillaTag {
class GTStripGameObjectFromBuildAttribute;
}
// Write type traits
MARK_REF_T(::GorillaTag::GTStripGameObjectFromBuildAttribute*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GTStripGameObjectFromBuildAttribute*, "GorillaTag", "GTStripGameObjectFromBuildAttribute");
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.GTStripGameObjectFromBuildAttribute
class CORDL_TYPE GTStripGameObjectFromBuildAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Condition)) ::StringW  Condition;

/// @brief Field <Condition>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Condition_k__BackingField, put=__cordl_internal_set__Condition_k__BackingField)) ::StringW  _Condition_k__BackingField;

static inline ::GorillaTag::GTStripGameObjectFromBuildAttribute* New_ctor(::StringW  condition) ;

constexpr ::StringW const& __cordl_internal_get__Condition_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Condition_k__BackingField() ;

constexpr void __cordl_internal_set__Condition_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5d1f760, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  condition) ;

/// [CompilerGenerated]
/// @brief Method get_Condition, addr 0x5d1f758, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Condition() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTStripGameObjectFromBuildAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTStripGameObjectFromBuildAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTStripGameObjectFromBuildAttribute(GTStripGameObjectFromBuildAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTStripGameObjectFromBuildAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTStripGameObjectFromBuildAttribute(GTStripGameObjectFromBuildAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4590};

/// [CompilerGenerated]
/// @brief Field <Condition>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Condition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GTStripGameObjectFromBuildAttribute, ____Condition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GTStripGameObjectFromBuildAttribute) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag
