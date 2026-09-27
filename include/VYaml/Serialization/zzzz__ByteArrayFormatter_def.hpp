#pragma once
// IWYU pragma private; include "VYaml/Serialization/ByteArrayFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteArrayFormatter)
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
class ByteArrayFormatter;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::ByteArrayFormatter*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::ByteArrayFormatter*, "VYaml.Serialization", "ByteArrayFormatter");
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.ByteArrayFormatter
class CORDL_TYPE ByteArrayFormatter : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0xb94f0f0, size 0xbc, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::ByteArrayFormatter* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0xb94ef9c, size 0x154, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(2)] */ ::ArrayW<uint8_t>  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0xb94f1ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>* i___VYaml__Serialization__IYamlFormatter_1___ArrayW_uint8_t__() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::IYamlFormatter_1<::ArrayW<uint8_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ByteArrayFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ByteArrayFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteArrayFormatter(ByteArrayFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteArrayFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteArrayFormatter(ByteArrayFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28922};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::ByteArrayFormatter) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
