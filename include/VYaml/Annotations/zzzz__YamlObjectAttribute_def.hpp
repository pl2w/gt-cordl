#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlObjectAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "VYaml/Annotations/zzzz__NamingConvention_def.hpp"
CORDL_MODULE_EXPORT(YamlObjectAttribute)
namespace VYaml::Annotations {
struct NamingConvention;
}
// Forward declare root types
namespace VYaml::Annotations {
class YamlObjectAttribute;
}
// Write type traits
MARK_REF_T(::VYaml::Annotations::YamlObjectAttribute*);
DEFINE_IL2CPP_CLASS(::VYaml::Annotations::YamlObjectAttribute*, "VYaml.Annotations", "YamlObjectAttribute");
// [AttributeUsage((System.AttributeTargets)1052, Inherited = false)]
// Dependencies System.Attribute, VYaml.Annotations.NamingConvention
namespace VYaml::Annotations {
// Is value type: false
// CS Name: VYaml.Annotations.YamlObjectAttribute
class CORDL_TYPE YamlObjectAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_NamingConvention)) ::VYaml::Annotations::NamingConvention  NamingConvention;

/// @brief Field <NamingConvention>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__NamingConvention_k__BackingField, put=__cordl_internal_set__NamingConvention_k__BackingField)) ::VYaml::Annotations::NamingConvention  _NamingConvention_k__BackingField;

static inline ::VYaml::Annotations::YamlObjectAttribute* New_ctor(::VYaml::Annotations::NamingConvention  namingConvention) ;

constexpr ::VYaml::Annotations::NamingConvention const& __cordl_internal_get__NamingConvention_k__BackingField() const;

constexpr ::VYaml::Annotations::NamingConvention& __cordl_internal_get__NamingConvention_k__BackingField() ;

constexpr void __cordl_internal_set__NamingConvention_k__BackingField(::VYaml::Annotations::NamingConvention  value) ;

/// @brief Method .ctor, addr 0xb9730a0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VYaml::Annotations::NamingConvention  namingConvention) ;

/// [CompilerGenerated]
/// @brief Method get_NamingConvention, addr 0xb973098, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Annotations::NamingConvention get_NamingConvention() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlObjectAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlObjectAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlObjectAttribute(YamlObjectAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlObjectAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlObjectAttribute(YamlObjectAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29048};

/// [CompilerGenerated]
/// @brief Field <NamingConvention>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::VYaml::Annotations::NamingConvention  ____NamingConvention_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Annotations::YamlObjectAttribute, ____NamingConvention_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::VYaml::Annotations::YamlObjectAttribute) == 0x18, "Size mismatch!");

} // namespace end def VYaml::Annotations
