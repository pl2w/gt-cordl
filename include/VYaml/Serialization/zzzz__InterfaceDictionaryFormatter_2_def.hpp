#pragma once
// IWYU pragma private; include "VYaml/Serialization/InterfaceDictionaryFormatter_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InterfaceDictionaryFormatter_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
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
template<typename TKey,typename TValue>
class InterfaceDictionaryFormatter_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::VYaml::Serialization::InterfaceDictionaryFormatter_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::InterfaceDictionaryFormatter_2, "VYaml.Serialization", "InterfaceDictionaryFormatter`2");
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: VYaml.Serialization.InterfaceDictionaryFormatter`2<TKey,TValue>
class CORDL_TYPE InterfaceDictionaryFormatter_2 : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>*() noexcept;

/// [NullableContext(1)]
/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IDictionary_2<TKey,TValue>* Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::InterfaceDictionaryFormatter_2<TKey,TValue>* New_ctor() ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(new[] { 2, 1, 1 })] */ ::System::Collections::Generic::IDictionary_2<TKey,TValue>*  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>* i___VYaml__Serialization__IYamlFormatter_1___System__Collections__Generic__IDictionary_2_TKey_TValue___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InterfaceDictionaryFormatter_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InterfaceDictionaryFormatter_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InterfaceDictionaryFormatter_2(InterfaceDictionaryFormatter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InterfaceDictionaryFormatter_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InterfaceDictionaryFormatter_2(InterfaceDictionaryFormatter_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28948};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
