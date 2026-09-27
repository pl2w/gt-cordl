#pragma once
// IWYU pragma private; include "VYaml/Serialization/BooleanFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BooleanFormatter)
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
class BooleanFormatter;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::BooleanFormatter*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::BooleanFormatter*, "VYaml.Serialization", "BooleanFormatter");
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.BooleanFormatter
class CORDL_TYPE BooleanFormatter : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::BooleanFormatter*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<bool>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<bool>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0xb94ea30, size 0x34, virtual true, abstract: false, final true
inline bool Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::BooleanFormatter* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0xb94e9c8, size 0x68, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, bool  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0xb94ecb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::BooleanFormatter* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<bool>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<bool>* i___VYaml__Serialization__IYamlFormatter_1_bool_() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::BooleanFormatter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BooleanFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BooleanFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BooleanFormatter(BooleanFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BooleanFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BooleanFormatter(BooleanFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::BooleanFormatter) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
