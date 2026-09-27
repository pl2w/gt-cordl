#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlIgnoreAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(YamlIgnoreAttribute)
// Forward declare root types
namespace VYaml::Annotations {
class YamlIgnoreAttribute;
}
// Write type traits
MARK_REF_T(::VYaml::Annotations::YamlIgnoreAttribute*);
DEFINE_IL2CPP_CLASS(::VYaml::Annotations::YamlIgnoreAttribute*, "VYaml.Annotations", "YamlIgnoreAttribute");
// [AttributeUsage((System.AttributeTargets)384, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace VYaml::Annotations {
// Is value type: false
// CS Name: VYaml.Annotations.YamlIgnoreAttribute
class CORDL_TYPE YamlIgnoreAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::VYaml::Annotations::YamlIgnoreAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xb973110, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlIgnoreAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlIgnoreAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlIgnoreAttribute(YamlIgnoreAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlIgnoreAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlIgnoreAttribute(YamlIgnoreAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29050};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Annotations::YamlIgnoreAttribute) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Annotations
