#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/MessagePackFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessagePackFormatter)
namespace SouthPointe::Serialization::MessagePack {
class SerializationContext;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class MessagePackFormatter;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::MessagePackFormatter*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::MessagePackFormatter*, "SouthPointe.Serialization.MessagePack", "MessagePackFormatter");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.MessagePackFormatter
class CORDL_TYPE MessagePackFormatter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Context, put=set_Context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  Context;

/// @brief Field <Context>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Context_k__BackingField, put=__cordl_internal_set__Context_k__BackingField)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  _Context_k__BackingField;

/// @brief Method Deserialize, addr 0x9d0a528, size 0x94, virtual false, abstract: false, final false
inline ::System::Object* Deserialize(::System::Type*  type, ::ArrayW<uint8_t>  bytes) ;

/// @brief Method Deserialize, addr 0x9d0a5bc, size 0x300, virtual false, abstract: false, final false
inline ::System::Object* Deserialize(::System::Type*  type, ::System::IO::Stream*  stream) ;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T Deserialize(::ArrayW<uint8_t>  bytes) ;

static inline ::SouthPointe::Serialization::MessagePack::MessagePackFormatter* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<uint8_t> Serialize(T  obj) ;

/// @brief Method Serialize, addr 0x9d0a8bc, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Serialize(::System::Type*  type, ::System::Object*  obj) ;

/// @brief Method Serialize, addr 0x9d0a94c, size 0x104, virtual false, abstract: false, final false
inline void Serialize(::System::IO::Stream*  stream, ::System::Type*  type, ::System::Object*  obj) ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get__Context_k__BackingField() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get__Context_k__BackingField() ;

constexpr void __cordl_internal_set__Context_k__BackingField(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

/// @brief Method .ctor, addr 0x9d0a4e4, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// [CompilerGenerated]
/// @brief Method get_Context, addr 0x9d0a4d4, size 0x8, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::SerializationContext* get_Context() ;

/// [CompilerGenerated]
/// @brief Method set_Context, addr 0x9d0a4dc, size 0x8, virtual false, abstract: false, final false
inline void set_Context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessagePackFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessagePackFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MessagePackFormatter(MessagePackFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessagePackFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessagePackFormatter(MessagePackFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31741};

/// [CompilerGenerated]
/// @brief Field <Context>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ____Context_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MessagePackFormatter, ____Context_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::MessagePackFormatter) == 0x18, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
