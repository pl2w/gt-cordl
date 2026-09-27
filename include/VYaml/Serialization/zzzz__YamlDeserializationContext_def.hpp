#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlDeserializationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(YamlDeserializationContext)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace VYaml::Parser {
class Anchor;
}
namespace VYaml::Parser {
struct YamlParser;
}
namespace VYaml::Serialization {
class IYamlFormatterResolver;
}
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
}
namespace VYaml::Serialization {
class YamlSerializerOptions;
}
// Forward declare root types
namespace VYaml::Serialization {
class YamlDeserializationContext;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::YamlDeserializationContext*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::YamlDeserializationContext*, "VYaml.Serialization", "YamlDeserializationContext");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.YamlDeserializationContext
class CORDL_TYPE YamlDeserializationContext : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Options, put=set_Options)) ::VYaml::Serialization::YamlSerializerOptions*  Options;

 __declspec(property(get=get_Resolver, put=set_Resolver)) ::VYaml::Serialization::IYamlFormatterResolver*  Resolver;

/// @brief Field <Options>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Options_k__BackingField, put=__cordl_internal_set__Options_k__BackingField)) ::VYaml::Serialization::YamlSerializerOptions*  _Options_k__BackingField;

/// @brief Field <Resolver>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Resolver_k__BackingField, put=__cordl_internal_set__Resolver_k__BackingField)) ::VYaml::Serialization::IYamlFormatterResolver*  _Resolver_k__BackingField;

/// @brief Field aliases, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_aliases, put=__cordl_internal_set_aliases)) ::System::Collections::Generic::Dictionary_2<::VYaml::Parser::Anchor*,::System::Object*>*  aliases;

/// @brief Method DeserializeWithAlias, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T DeserializeWithAlias(::VYaml::Serialization::IYamlFormatter_1<T>*  innerFormatter, ::by_ref<::VYaml::Parser::YamlParser>  parser) ;

/// @brief Method DeserializeWithAlias, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T DeserializeWithAlias(::by_ref<::VYaml::Parser::YamlParser>  parser) ;

static inline ::VYaml::Serialization::YamlDeserializationContext* New_ctor(::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// @brief Method RegisterAnchor, addr 0xb9585ec, size 0x68, virtual false, abstract: false, final false
inline void RegisterAnchor(::VYaml::Parser::Anchor*  anchor, /* [Nullable(2)] */ ::System::Object*  value) ;

/// @brief Method Reset, addr 0xb95859c, size 0x50, virtual false, abstract: false, final false
inline void Reset() ;

/// [NullableContext(2)]
/// @brief Method TryResolveCurrentAlias, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryResolveCurrentAlias(::by_ref<::VYaml::Parser::YamlParser>  parser, ::by_ref<T>  aliasValue) ;

constexpr ::VYaml::Serialization::YamlSerializerOptions* const& __cordl_internal_get__Options_k__BackingField() const;

constexpr ::VYaml::Serialization::YamlSerializerOptions*& __cordl_internal_get__Options_k__BackingField() ;

constexpr ::VYaml::Serialization::IYamlFormatterResolver* const& __cordl_internal_get__Resolver_k__BackingField() const;

constexpr ::VYaml::Serialization::IYamlFormatterResolver*& __cordl_internal_get__Resolver_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::VYaml::Parser::Anchor*,::System::Object*>* const& __cordl_internal_get_aliases() const;

constexpr ::System::Collections::Generic::Dictionary_2<::VYaml::Parser::Anchor*,::System::Object*>*& __cordl_internal_get_aliases() ;

constexpr void __cordl_internal_set__Options_k__BackingField(::VYaml::Serialization::YamlSerializerOptions*  value) ;

constexpr void __cordl_internal_set__Resolver_k__BackingField(::VYaml::Serialization::IYamlFormatterResolver*  value) ;

constexpr void __cordl_internal_set_aliases(::System::Collections::Generic::Dictionary_2<::VYaml::Parser::Anchor*,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0xb9584e8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// [CompilerGenerated]
/// @brief Method get_Options, addr 0xb9584c8, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Serialization::YamlSerializerOptions* get_Options() ;

/// [CompilerGenerated]
/// @brief Method get_Resolver, addr 0xb9584d8, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Serialization::IYamlFormatterResolver* get_Resolver() ;

/// [CompilerGenerated]
/// @brief Method set_Options, addr 0xb9584d0, size 0x8, virtual false, abstract: false, final false
inline void set_Options(::VYaml::Serialization::YamlSerializerOptions*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Resolver, addr 0xb9584e0, size 0x8, virtual false, abstract: false, final false
inline void set_Resolver(::VYaml::Serialization::IYamlFormatterResolver*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlDeserializationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlDeserializationContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlDeserializationContext(YamlDeserializationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlDeserializationContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlDeserializationContext(YamlDeserializationContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29003};

/// [CompilerGenerated]
/// @brief Field <Options>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::VYaml::Serialization::YamlSerializerOptions*  ____Options_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Resolver>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VYaml::Serialization::IYamlFormatterResolver*  ____Resolver_k__BackingField;

/// [Nullable(new[] { 1, 1, 2 })]
/// @brief Field aliases, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::VYaml::Parser::Anchor*,::System::Object*>*  ___aliases;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Serialization::YamlDeserializationContext, ____Options_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::YamlDeserializationContext, ____Resolver_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::YamlDeserializationContext, ___aliases) == 0x20, "Offset mismatch!");

static_assert(sizeof(::VYaml::Serialization::YamlDeserializationContext) == 0x28, "Size mismatch!");

} // namespace end def VYaml::Serialization
