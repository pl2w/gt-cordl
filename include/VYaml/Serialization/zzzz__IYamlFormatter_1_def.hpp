#pragma once
// IWYU pragma private; include "VYaml/Serialization/IYamlFormatter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IYamlFormatter_1)
namespace VYaml::Emitter {
struct Utf8YamlEmitter;
}
namespace VYaml::Parser {
struct YamlParser;
}
namespace VYaml::Serialization {
class IYamlFormatter;
}
namespace VYaml::Serialization {
class YamlDeserializationContext;
}
namespace VYaml::Serialization {
class YamlSerializationContext;
}
// Forward declare root types
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::VYaml::Serialization::IYamlFormatter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::IYamlFormatter_1, "VYaml.Serialization", "IYamlFormatter`1");
// [NullableContext(1)]
// Dependencies 
namespace VYaml::Serialization {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Serialization.IYamlFormatter`1<T>
class CORDL_TYPE IYamlFormatter_1 {
public:
// Declarations
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, T  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IYamlFormatter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IYamlFormatter_1(IYamlFormatter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28990};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
