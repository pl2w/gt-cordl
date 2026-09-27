#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DynamicListHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DynamicListHandler)
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
class DynamicListHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::DynamicListHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::DynamicListHandler*, "SouthPointe.Serialization.MessagePack", "DynamicListHandler");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.DynamicListHandler
class CORDL_TYPE DynamicListHandler : public ::System::Object {
public:
// Declarations
/// @brief Field context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  context;

/// @brief Field innerType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerType, put=__cordl_internal_set_innerType)) ::System::Type*  innerType;

/// @brief Field innerTypeHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerTypeHandler, put=__cordl_internal_set_innerTypeHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  innerTypeHandler;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::DynamicListHandler* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

/// @brief Method Read, addr 0x9d0fb28, size 0x328, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d0fe50, size 0x424, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get_context() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get_context() ;

constexpr ::System::Type* const& __cordl_internal_get_innerType() const;

constexpr ::System::Type*& __cordl_internal_get_innerType() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_innerTypeHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_innerTypeHandler() ;

constexpr void __cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

constexpr void __cordl_internal_set_innerType(::System::Type*  value) ;

constexpr void __cordl_internal_set_innerTypeHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

/// @brief Method .ctor, addr 0x9d0c270, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicListHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicListHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicListHandler(DynamicListHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicListHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicListHandler(DynamicListHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31771};

/// @brief Field context, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ___context;

/// @brief Field innerType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___innerType;

/// @brief Field innerTypeHandler, offset: 0x20, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___innerTypeHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicListHandler, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicListHandler, ___innerType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicListHandler, ___innerTypeHandler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::DynamicListHandler) == 0x28, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
