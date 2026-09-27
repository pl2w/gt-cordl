#pragma once
// IWYU pragma private; include "VYaml/Serialization/IYamlFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IYamlFormatter)
// Forward declare root types
namespace VYaml::Serialization {
class IYamlFormatter;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::IYamlFormatter*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::IYamlFormatter*, "VYaml.Serialization", "IYamlFormatter");
// Dependencies 
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.IYamlFormatter
class CORDL_TYPE IYamlFormatter {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IYamlFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IYamlFormatter(IYamlFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
