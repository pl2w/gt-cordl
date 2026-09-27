#pragma once
// IWYU pragma private; include "VYaml/Serialization/TupleFormatter_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TupleFormatter_2)
namespace System {
template<typename T1,typename T2>
class Tuple_2;
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
template<typename T1,typename T2>
class TupleFormatter_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::VYaml::Serialization::TupleFormatter_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::TupleFormatter_2, "VYaml.Serialization", "TupleFormatter`2");
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: VYaml.Serialization.TupleFormatter`2<T1,T2>
class CORDL_TYPE TupleFormatter_2 : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Tuple_2<T1,T2>* Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::TupleFormatter_2<T1,T2>* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 2, 1, 1 })] */ ::System::Tuple_2<T1,T2>*  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_2<T1,T2>*>* i___VYaml__Serialization__IYamlFormatter_1___System__Tuple_2_T1_T2___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TupleFormatter_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TupleFormatter_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TupleFormatter_2(TupleFormatter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TupleFormatter_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TupleFormatter_2(TupleFormatter_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
