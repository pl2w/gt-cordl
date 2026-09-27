#pragma once
// IWYU pragma private; include "VYaml/Serialization/GuidFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GuidFormatter)
namespace System {
struct Guid;
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
class GuidFormatter;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::GuidFormatter*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::GuidFormatter*, "VYaml.Serialization", "GuidFormatter");
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.GuidFormatter
class CORDL_TYPE GuidFormatter : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::GuidFormatter*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Guid>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::System::Guid>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0xb951a34, size 0x1e8, virtual true, abstract: false, final true
inline ::System::Guid Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::GuidFormatter* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0xb951860, size 0x1d4, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, ::System::Guid  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0xb951c1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::GuidFormatter* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Guid>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Guid>* i___VYaml__Serialization__IYamlFormatter_1___System__Guid_() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::GuidFormatter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidFormatter(GuidFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidFormatter(GuidFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28940};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::GuidFormatter) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
