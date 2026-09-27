#pragma once
// IWYU pragma private; include "VYaml/Serialization/IYamlFormatterResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IYamlFormatterResolver)
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
}
// Forward declare root types
namespace VYaml::Serialization {
class IYamlFormatterResolver;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::IYamlFormatterResolver*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::IYamlFormatterResolver*, "VYaml.Serialization", "IYamlFormatterResolver");
// [NullableContext(2)]
// Dependencies 
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.IYamlFormatterResolver
class CORDL_TYPE IYamlFormatterResolver {
public:
// Declarations
/// @brief Method GetFormatter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* GetFormatter() ;

// Ctor Parameters [CppParam { name: "", ty: "IYamlFormatterResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IYamlFormatterResolver(IYamlFormatterResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
