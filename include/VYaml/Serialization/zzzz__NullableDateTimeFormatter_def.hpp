#pragma once
// IWYU pragma private; include "VYaml/Serialization/NullableDateTimeFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NullableDateTimeFormatter)
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
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
class NullableDateTimeFormatter;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::NullableDateTimeFormatter*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::NullableDateTimeFormatter*, "VYaml.Serialization", "NullableDateTimeFormatter");
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.NullableDateTimeFormatter
class CORDL_TYPE NullableDateTimeFormatter : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::NullableDateTimeFormatter*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<::System::DateTime>>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<::System::DateTime>>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0xb9501f4, size 0x2cc, virtual true, abstract: false, final true
inline ::System::Nullable_1<::System::DateTime> Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::NullableDateTimeFormatter* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0xb94ff10, size 0x2e4, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, ::System::Nullable_1<::System::DateTime>  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0xb9504c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::NullableDateTimeFormatter* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<::System::DateTime>>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<::System::DateTime>>* i___VYaml__Serialization__IYamlFormatter_1___System__Nullable_1___System__DateTime__() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::NullableDateTimeFormatter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NullableDateTimeFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NullableDateTimeFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NullableDateTimeFormatter(NullableDateTimeFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullableDateTimeFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullableDateTimeFormatter(NullableDateTimeFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28928};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::NullableDateTimeFormatter) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
