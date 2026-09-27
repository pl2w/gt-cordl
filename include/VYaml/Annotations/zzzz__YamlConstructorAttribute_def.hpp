#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlConstructorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(YamlConstructorAttribute)
// Forward declare root types
namespace VYaml::Annotations {
class YamlConstructorAttribute;
}
// Write type traits
MARK_REF_T(::VYaml::Annotations::YamlConstructorAttribute*);
DEFINE_IL2CPP_CLASS(::VYaml::Annotations::YamlConstructorAttribute*, "VYaml.Annotations", "YamlConstructorAttribute");
// [AttributeUsage((System.AttributeTargets)32, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace VYaml::Annotations {
// Is value type: false
// CS Name: VYaml.Annotations.YamlConstructorAttribute
class CORDL_TYPE YamlConstructorAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::VYaml::Annotations::YamlConstructorAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xb973118, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlConstructorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlConstructorAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlConstructorAttribute(YamlConstructorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlConstructorAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlConstructorAttribute(YamlConstructorAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29051};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Annotations::YamlConstructorAttribute) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Annotations
