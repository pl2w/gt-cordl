#pragma once
// IWYU pragma private; include "VYaml/Serialization/UInt32Formatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UInt32Formatter)
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
class UInt32Formatter;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::UInt32Formatter*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::UInt32Formatter*, "VYaml.Serialization", "UInt32Formatter");
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.UInt32Formatter
class CORDL_TYPE UInt32Formatter : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::UInt32Formatter*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<uint32_t>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<uint32_t>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0xb954968, size 0x34, virtual true, abstract: false, final true
inline uint32_t Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::UInt32Formatter* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0xb954900, size 0x68, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, uint32_t  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0xb95499c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::UInt32Formatter* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<uint32_t>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<uint32_t>* i___VYaml__Serialization__IYamlFormatter_1_uint32_t_() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::UInt32Formatter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UInt32Formatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UInt32Formatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UInt32Formatter(UInt32Formatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UInt32Formatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UInt32Formatter(UInt32Formatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28973};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::UInt32Formatter) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
