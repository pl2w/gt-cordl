#pragma once
// IWYU pragma private; include "VYaml/Serialization/ValueTupleFormatter_6.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ValueTupleFormatter_6)
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
struct ValueTuple_6;
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
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class ValueTupleFormatter_6;
}
// Write type traits
MARK_GEN_REF_T_PTR(::VYaml::Serialization::ValueTupleFormatter_6);
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::ValueTupleFormatter_6, "VYaml.Serialization", "ValueTupleFormatter`6");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
// Is value type: false
// CS Name: VYaml.Serialization.ValueTupleFormatter`6<T1,T2,T3,T4,T5,T6>
class CORDL_TYPE ValueTupleFormatter_6 : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_6<T1,T2,T3,T4,T5,T6> Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::ValueTupleFormatter_6<T1,T2,T3,T4,T5,T6>* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 0, 1, 1, 1, 1, 1, 1 })] */ ::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>* i___VYaml__Serialization__IYamlFormatter_1___System__ValueTuple_6_T1_T2_T3_T4_T5_T6__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueTupleFormatter_6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueTupleFormatter_6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueTupleFormatter_6(ValueTupleFormatter_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueTupleFormatter_6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueTupleFormatter_6(ValueTupleFormatter_6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28983};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
