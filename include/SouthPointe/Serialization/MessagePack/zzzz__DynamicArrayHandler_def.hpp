#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DynamicArrayHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DynamicArrayHandler)
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
class DynamicArrayHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::DynamicArrayHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::DynamicArrayHandler*, "SouthPointe.Serialization.MessagePack", "DynamicArrayHandler");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.DynamicArrayHandler
class CORDL_TYPE DynamicArrayHandler : public ::System::Object {
public:
// Declarations
/// @brief Field context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  context;

/// @brief Field elementType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementType, put=__cordl_internal_set_elementType)) ::System::Type*  elementType;

/// @brief Field elementTypeHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementTypeHandler, put=__cordl_internal_set_elementTypeHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  elementTypeHandler;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::DynamicArrayHandler* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

/// @brief Method Read, addr 0x9d0ea10, size 0x1dc, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d0ebec, size 0x364, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get_context() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get_context() ;

constexpr ::System::Type* const& __cordl_internal_get_elementType() const;

constexpr ::System::Type*& __cordl_internal_get_elementType() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_elementTypeHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_elementTypeHandler() ;

constexpr void __cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

constexpr void __cordl_internal_set_elementType(::System::Type*  value) ;

constexpr void __cordl_internal_set_elementTypeHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

/// @brief Method .ctor, addr 0x9d0c1ec, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicArrayHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicArrayHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicArrayHandler(DynamicArrayHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicArrayHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicArrayHandler(DynamicArrayHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31768};

/// @brief Field context, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ___context;

/// @brief Field elementType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___elementType;

/// @brief Field elementTypeHandler, offset: 0x20, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___elementTypeHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicArrayHandler, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicArrayHandler, ___elementType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicArrayHandler, ___elementTypeHandler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::DynamicArrayHandler) == 0x28, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
