#pragma once
// IWYU pragma private; include "VYaml/Serialization/DateTimeOffsetFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DateTimeOffsetFormatter)
namespace System {
struct DateTimeOffset;
}
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
class DateTimeOffsetFormatter;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::DateTimeOffsetFormatter*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::DateTimeOffsetFormatter*, "VYaml.Serialization", "DateTimeOffsetFormatter");
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.DateTimeOffsetFormatter
class CORDL_TYPE DateTimeOffsetFormatter : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::DateTimeOffsetFormatter*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0xb95071c, size 0x1e8, virtual true, abstract: false, final true
inline ::System::DateTimeOffset Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::DateTimeOffsetFormatter* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0xb950530, size 0x1ec, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, ::System::DateTimeOffset  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0xb950904, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::DateTimeOffsetFormatter* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>* i___VYaml__Serialization__IYamlFormatter_1___System__DateTimeOffset_() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::DateTimeOffsetFormatter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeOffsetFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeOffsetFormatter(DateTimeOffsetFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeOffsetFormatter(DateTimeOffsetFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28929};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::DateTimeOffsetFormatter) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
