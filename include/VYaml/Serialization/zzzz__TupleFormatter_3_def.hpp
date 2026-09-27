#pragma once
// IWYU pragma private; include "VYaml/Serialization/TupleFormatter_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TupleFormatter_3)
namespace System {
template<typename T1,typename T2,typename T3>
class Tuple_3;
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
template<typename T1,typename T2,typename T3>
class TupleFormatter_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::VYaml::Serialization::TupleFormatter_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::TupleFormatter_3, "VYaml.Serialization", "TupleFormatter`3");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: VYaml.Serialization.TupleFormatter`3<T1,T2,T3>
class CORDL_TYPE TupleFormatter_3 : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_3<T1,T2,T3>*>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_3<T1,T2,T3>*>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Tuple_3<T1,T2,T3>* Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::TupleFormatter_3<T1,T2,T3>* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 2, 1, 1, 1 })] */ ::System::Tuple_3<T1,T2,T3>*  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_3<T1,T2,T3>*>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Tuple_3<T1,T2,T3>*>* i___VYaml__Serialization__IYamlFormatter_1___System__Tuple_3_T1_T2_T3___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TupleFormatter_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TupleFormatter_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TupleFormatter_3(TupleFormatter_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TupleFormatter_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TupleFormatter_3(TupleFormatter_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
