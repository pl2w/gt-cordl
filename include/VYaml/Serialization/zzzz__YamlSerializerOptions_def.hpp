#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlSerializerOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(YamlSerializerOptions)
namespace VYaml::Emitter {
class YamlEmitOptions;
}
namespace VYaml::Serialization {
class IYamlFormatterResolver;
}
// Forward declare root types
namespace VYaml::Serialization {
class YamlSerializerOptions;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::YamlSerializerOptions*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::YamlSerializerOptions*, "VYaml.Serialization", "YamlSerializerOptions");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.YamlSerializerOptions
class CORDL_TYPE YamlSerializerOptions : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EmitOptions, put=set_EmitOptions)) ::VYaml::Emitter::YamlEmitOptions*  EmitOptions;

 __declspec(property(get=get_EnableAliasForDeserialization, put=set_EnableAliasForDeserialization)) bool  EnableAliasForDeserialization;

 __declspec(property(get=get_Resolver, put=set_Resolver)) ::VYaml::Serialization::IYamlFormatterResolver*  Resolver;

/// @brief Field <EmitOptions>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__EmitOptions_k__BackingField, put=__cordl_internal_set__EmitOptions_k__BackingField)) ::VYaml::Emitter::YamlEmitOptions*  _EmitOptions_k__BackingField;

/// @brief Field <EnableAliasForDeserialization>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableAliasForDeserialization_k__BackingField, put=__cordl_internal_set__EnableAliasForDeserialization_k__BackingField)) bool  _EnableAliasForDeserialization_k__BackingField;

/// @brief Field <Resolver>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Resolver_k__BackingField, put=__cordl_internal_set__Resolver_k__BackingField)) ::VYaml::Serialization::IYamlFormatterResolver*  _Resolver_k__BackingField;

static inline ::VYaml::Serialization::YamlSerializerOptions* New_ctor() ;

constexpr ::VYaml::Emitter::YamlEmitOptions* const& __cordl_internal_get__EmitOptions_k__BackingField() const;

constexpr ::VYaml::Emitter::YamlEmitOptions*& __cordl_internal_get__EmitOptions_k__BackingField() ;

constexpr bool const& __cordl_internal_get__EnableAliasForDeserialization_k__BackingField() const;

constexpr bool& __cordl_internal_get__EnableAliasForDeserialization_k__BackingField() ;

constexpr ::VYaml::Serialization::IYamlFormatterResolver* const& __cordl_internal_get__Resolver_k__BackingField() const;

constexpr ::VYaml::Serialization::IYamlFormatterResolver*& __cordl_internal_get__Resolver_k__BackingField() ;

constexpr void __cordl_internal_set__EmitOptions_k__BackingField(::VYaml::Emitter::YamlEmitOptions*  value) ;

constexpr void __cordl_internal_set__EnableAliasForDeserialization_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Resolver_k__BackingField(::VYaml::Serialization::IYamlFormatterResolver*  value) ;

/// @brief Method .ctor, addr 0xb958a34, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_EmitOptions, addr 0xb958ab8, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Emitter::YamlEmitOptions* get_EmitOptions() ;

/// [CompilerGenerated]
/// @brief Method get_EnableAliasForDeserialization, addr 0xb958ac8, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableAliasForDeserialization() ;

/// [CompilerGenerated]
/// @brief Method get_Resolver, addr 0xb958aa8, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Serialization::IYamlFormatterResolver* get_Resolver() ;

/// @brief Method get_Standard, addr 0xb958948, size 0x94, virtual false, abstract: false, final false
static inline ::VYaml::Serialization::YamlSerializerOptions* get_Standard() ;

/// [CompilerGenerated]
/// @brief Method set_EmitOptions, addr 0xb958ac0, size 0x8, virtual false, abstract: false, final false
inline void set_EmitOptions(::VYaml::Emitter::YamlEmitOptions*  value) ;

/// [CompilerGenerated]
/// @brief Method set_EnableAliasForDeserialization, addr 0xb958ad0, size 0x8, virtual false, abstract: false, final false
inline void set_EnableAliasForDeserialization(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Resolver, addr 0xb958ab0, size 0x8, virtual false, abstract: false, final false
inline void set_Resolver(::VYaml::Serialization::IYamlFormatterResolver*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlSerializerOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlSerializerOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlSerializerOptions(YamlSerializerOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlSerializerOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlSerializerOptions(YamlSerializerOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29008};

/// [CompilerGenerated]
/// @brief Field <Resolver>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::VYaml::Serialization::IYamlFormatterResolver*  ____Resolver_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EmitOptions>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VYaml::Emitter::YamlEmitOptions*  ____EmitOptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EnableAliasForDeserialization>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____EnableAliasForDeserialization_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Serialization::YamlSerializerOptions, ____Resolver_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::YamlSerializerOptions, ____EmitOptions_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::YamlSerializerOptions, ____EnableAliasForDeserialization_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::VYaml::Serialization::YamlSerializerOptions) == 0x28, "Size mismatch!");

} // namespace end def VYaml::Serialization
