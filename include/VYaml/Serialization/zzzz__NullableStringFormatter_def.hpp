#pragma once
// IWYU pragma private; include "VYaml/Serialization/NullableStringFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NullableStringFormatter)
namespace VYaml::Emitter {
struct Utf8YamlEmitter;
}
namespace VYaml::Parser {
struct YamlParser;
}
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
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
class NullableStringFormatter;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::NullableStringFormatter*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::NullableStringFormatter*, "VYaml.Serialization", "NullableStringFormatter");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.NullableStringFormatter
class CORDL_TYPE NullableStringFormatter : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::NullableStringFormatter*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::StringW>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::StringW>*() noexcept;

/// @brief Method Deserialize, addr 0xb95288c, size 0x78, virtual true, abstract: false, final true
inline ::StringW Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::NullableStringFormatter* New_ctor() ;

/// @brief Method Serialize, addr 0xb952770, size 0x11c, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(2)] */ ::StringW  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0xb952904, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::NullableStringFormatter* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::StringW>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::StringW>* i___VYaml__Serialization__IYamlFormatter_1___StringW_() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::NullableStringFormatter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NullableStringFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NullableStringFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NullableStringFormatter(NullableStringFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullableStringFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullableStringFormatter(NullableStringFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::NullableStringFormatter) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
