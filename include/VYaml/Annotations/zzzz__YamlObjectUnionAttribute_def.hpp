#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlObjectUnionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(YamlObjectUnionAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace VYaml::Annotations {
class YamlObjectUnionAttribute;
}
// Write type traits
MARK_REF_T(::VYaml::Annotations::YamlObjectUnionAttribute*);
DEFINE_IL2CPP_CLASS(::VYaml::Annotations::YamlObjectUnionAttribute*, "VYaml.Annotations", "YamlObjectUnionAttribute");
// [NullableContext(1)]
// [Nullable(0)]
// [AttributeUsage((System.AttributeTargets)1028, AllowMultiple = true, Inherited = false)]
// Dependencies System.Attribute
namespace VYaml::Annotations {
// Is value type: false
// CS Name: VYaml.Annotations.YamlObjectUnionAttribute
class CORDL_TYPE YamlObjectUnionAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_SubType)) ::System::Type*  SubType;

 __declspec(property(get=get_Tag)) ::StringW  Tag;

/// @brief Field <SubType>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__SubType_k__BackingField, put=__cordl_internal_set__SubType_k__BackingField)) ::System::Type*  _SubType_k__BackingField;

/// @brief Field <Tag>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tag_k__BackingField, put=__cordl_internal_set__Tag_k__BackingField)) ::StringW  _Tag_k__BackingField;

static inline ::VYaml::Annotations::YamlObjectUnionAttribute* New_ctor(::StringW  tagString, ::System::Type*  subType) ;

constexpr ::System::Type* const& __cordl_internal_get__SubType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__SubType_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Tag_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Tag_k__BackingField() ;

constexpr void __cordl_internal_set__SubType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__Tag_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb973130, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  tagString, ::System::Type*  subType) ;

/// [CompilerGenerated]
/// @brief Method get_SubType, addr 0xb973128, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_SubType() ;

/// [CompilerGenerated]
/// @brief Method get_Tag, addr 0xb973120, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Tag() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlObjectUnionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlObjectUnionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlObjectUnionAttribute(YamlObjectUnionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlObjectUnionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlObjectUnionAttribute(YamlObjectUnionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29052};

/// [CompilerGenerated]
/// @brief Field <Tag>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Tag_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SubType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____SubType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Annotations::YamlObjectUnionAttribute, ____Tag_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Annotations::YamlObjectUnionAttribute, ____SubType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::VYaml::Annotations::YamlObjectUnionAttribute) == 0x20, "Size mismatch!");

} // namespace end def VYaml::Annotations
