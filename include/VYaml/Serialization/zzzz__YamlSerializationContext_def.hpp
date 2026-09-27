#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlSerializationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(YamlSerializationContext)
namespace System::Buffers {
template<typename T>
class ArrayBufferWriter_1;
}
namespace System {
class IDisposable;
}
namespace VYaml::Emitter {
struct Utf8YamlEmitter;
}
namespace VYaml::Emitter {
class YamlEmitOptions;
}
namespace VYaml::Serialization {
class IYamlFormatterResolver;
}
namespace VYaml::Serialization {
class YamlSerializerOptions;
}
// Forward declare root types
namespace VYaml::Serialization {
class YamlSerializationContext;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::YamlSerializationContext*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::YamlSerializationContext*, "VYaml.Serialization", "YamlSerializationContext");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.YamlSerializationContext
class CORDL_TYPE YamlSerializationContext : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EmitOptions, put=set_EmitOptions)) ::VYaml::Emitter::YamlEmitOptions*  EmitOptions;

 __declspec(property(get=get_Options, put=set_Options)) ::VYaml::Serialization::YamlSerializerOptions*  Options;

 __declspec(property(get=get_Resolver, put=set_Resolver)) ::VYaml::Serialization::IYamlFormatterResolver*  Resolver;

/// @brief Field <EmitOptions>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__EmitOptions_k__BackingField, put=__cordl_internal_set__EmitOptions_k__BackingField)) ::VYaml::Emitter::YamlEmitOptions*  _EmitOptions_k__BackingField;

/// @brief Field <Options>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Options_k__BackingField, put=__cordl_internal_set__Options_k__BackingField)) ::VYaml::Serialization::YamlSerializerOptions*  _Options_k__BackingField;

/// @brief Field <Resolver>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Resolver_k__BackingField, put=__cordl_internal_set__Resolver_k__BackingField)) ::VYaml::Serialization::IYamlFormatterResolver*  _Resolver_k__BackingField;

/// @brief Field arrayBufferWriter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_arrayBufferWriter, put=__cordl_internal_set_arrayBufferWriter)) ::System::Buffers::ArrayBufferWriter_1<uint8_t>*  arrayBufferWriter;

/// @brief Field primitiveValueBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_primitiveValueBuffer, put=__cordl_internal_set_primitiveValueBuffer)) ::ArrayW<uint8_t>  primitiveValueBuffer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xb95548c, size 0xec, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetArrayBufferWriter, addr 0xb9553ac, size 0x88, virtual false, abstract: false, final false
inline ::System::Buffers::ArrayBufferWriter_1<uint8_t>* GetArrayBufferWriter() ;

/// @brief Method GetBuffer64, addr 0xb955578, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBuffer64() ;

static inline ::VYaml::Serialization::YamlSerializationContext* New_ctor(::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// @brief Method Reset, addr 0xb955434, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, T  value) ;

constexpr ::VYaml::Emitter::YamlEmitOptions* const& __cordl_internal_get__EmitOptions_k__BackingField() const;

constexpr ::VYaml::Emitter::YamlEmitOptions*& __cordl_internal_get__EmitOptions_k__BackingField() ;

constexpr ::VYaml::Serialization::YamlSerializerOptions* const& __cordl_internal_get__Options_k__BackingField() const;

constexpr ::VYaml::Serialization::YamlSerializerOptions*& __cordl_internal_get__Options_k__BackingField() ;

constexpr ::VYaml::Serialization::IYamlFormatterResolver* const& __cordl_internal_get__Resolver_k__BackingField() const;

constexpr ::VYaml::Serialization::IYamlFormatterResolver*& __cordl_internal_get__Resolver_k__BackingField() ;

constexpr ::System::Buffers::ArrayBufferWriter_1<uint8_t>* const& __cordl_internal_get_arrayBufferWriter() const;

constexpr ::System::Buffers::ArrayBufferWriter_1<uint8_t>*& __cordl_internal_get_arrayBufferWriter() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_primitiveValueBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_primitiveValueBuffer() ;

constexpr void __cordl_internal_set__EmitOptions_k__BackingField(::VYaml::Emitter::YamlEmitOptions*  value) ;

constexpr void __cordl_internal_set__Options_k__BackingField(::VYaml::Serialization::YamlSerializerOptions*  value) ;

constexpr void __cordl_internal_set__Resolver_k__BackingField(::VYaml::Serialization::IYamlFormatterResolver*  value) ;

constexpr void __cordl_internal_set_arrayBufferWriter(::System::Buffers::ArrayBufferWriter_1<uint8_t>*  value) ;

constexpr void __cordl_internal_set_primitiveValueBuffer(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xb955268, size 0x144, virtual false, abstract: false, final false
inline void _ctor(::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// [CompilerGenerated]
/// @brief Method get_EmitOptions, addr 0xb955258, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Emitter::YamlEmitOptions* get_EmitOptions() ;

/// [CompilerGenerated]
/// @brief Method get_Options, addr 0xb955238, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Serialization::YamlSerializerOptions* get_Options() ;

/// [CompilerGenerated]
/// @brief Method get_Resolver, addr 0xb955248, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Serialization::IYamlFormatterResolver* get_Resolver() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_EmitOptions, addr 0xb955260, size 0x8, virtual false, abstract: false, final false
inline void set_EmitOptions(::VYaml::Emitter::YamlEmitOptions*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Options, addr 0xb955240, size 0x8, virtual false, abstract: false, final false
inline void set_Options(::VYaml::Serialization::YamlSerializerOptions*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Resolver, addr 0xb955250, size 0x8, virtual false, abstract: false, final false
inline void set_Resolver(::VYaml::Serialization::IYamlFormatterResolver*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlSerializationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlSerializationContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlSerializationContext(YamlSerializationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlSerializationContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlSerializationContext(YamlSerializationContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28988};

/// [CompilerGenerated]
/// @brief Field <Options>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::VYaml::Serialization::YamlSerializerOptions*  ____Options_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Resolver>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VYaml::Serialization::IYamlFormatterResolver*  ____Resolver_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EmitOptions>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::VYaml::Emitter::YamlEmitOptions*  ____EmitOptions_k__BackingField;

/// @brief Field primitiveValueBuffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___primitiveValueBuffer;

/// [Nullable(2)]
/// @brief Field arrayBufferWriter, offset: 0x30, size: 0x8, def value: None
 ::System::Buffers::ArrayBufferWriter_1<uint8_t>*  ___arrayBufferWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Serialization::YamlSerializationContext, ____Options_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::YamlSerializationContext, ____Resolver_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::YamlSerializationContext, ____EmitOptions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::YamlSerializationContext, ___primitiveValueBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::YamlSerializationContext, ___arrayBufferWriter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::VYaml::Serialization::YamlSerializationContext) == 0x38, "Size mismatch!");

} // namespace end def VYaml::Serialization
