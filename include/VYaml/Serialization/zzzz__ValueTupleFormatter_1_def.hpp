#pragma once
// IWYU pragma private; include "VYaml/Serialization/ValueTupleFormatter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ValueTupleFormatter_1)
namespace System {
template<typename T1>
struct ValueTuple_1;
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
template<typename T1>
class ValueTupleFormatter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::VYaml::Serialization::ValueTupleFormatter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::ValueTupleFormatter_1, "VYaml.Serialization", "ValueTupleFormatter`1");
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T1>
// Is value type: false
// CS Name: VYaml.Serialization.ValueTupleFormatter`1<T1>
class CORDL_TYPE ValueTupleFormatter_1 : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_1<T1>>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_1<T1>>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_1<T1> Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::ValueTupleFormatter_1<T1>* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 0, 1 })] */ ::System::ValueTuple_1<T1>  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_1<T1>>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_1<T1>>* i___VYaml__Serialization__IYamlFormatter_1___System__ValueTuple_1_T1__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueTupleFormatter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueTupleFormatter_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueTupleFormatter_1(ValueTupleFormatter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueTupleFormatter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueTupleFormatter_1(ValueTupleFormatter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
