#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DynamicNullableHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DynamicNullableHandler)
namespace SouthPointe::Serialization::MessagePack {
class FormatReader;
}
namespace SouthPointe::Serialization::MessagePack {
class FormatWriter;
}
namespace SouthPointe::Serialization::MessagePack {
struct Format;
}
namespace SouthPointe::Serialization::MessagePack {
class ITypeHandler;
}
namespace SouthPointe::Serialization::MessagePack {
class SerializationContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class DynamicNullableHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::DynamicNullableHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::DynamicNullableHandler*, "SouthPointe.Serialization.MessagePack", "DynamicNullableHandler");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.DynamicNullableHandler
class CORDL_TYPE DynamicNullableHandler : public ::System::Object {
public:
// Declarations
/// @brief Field underlyingTypeHandler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_underlyingTypeHandler, put=__cordl_internal_set_underlyingTypeHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  underlyingTypeHandler;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::DynamicNullableHandler* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

/// @brief Method Read, addr 0x9d10dcc, size 0xd8, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d10ea4, size 0xec, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_underlyingTypeHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_underlyingTypeHandler() ;

constexpr void __cordl_internal_set_underlyingTypeHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

/// @brief Method .ctor, addr 0x9d0c194, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicNullableHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicNullableHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicNullableHandler(DynamicNullableHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicNullableHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicNullableHandler(DynamicNullableHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31773};

/// @brief Field underlyingTypeHandler, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___underlyingTypeHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicNullableHandler, ___underlyingTypeHandler) == 0x10, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::DynamicNullableHandler) == 0x18, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
