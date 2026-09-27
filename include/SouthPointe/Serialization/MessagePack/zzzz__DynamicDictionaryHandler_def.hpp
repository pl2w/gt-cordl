#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DynamicDictionaryHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DynamicDictionaryHandler)
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
class DynamicDictionaryHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::DynamicDictionaryHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::DynamicDictionaryHandler*, "SouthPointe.Serialization.MessagePack", "DynamicDictionaryHandler");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.DynamicDictionaryHandler
class CORDL_TYPE DynamicDictionaryHandler : public ::System::Object {
public:
// Declarations
/// @brief Field keyHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyHandler, put=__cordl_internal_set_keyHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  keyHandler;

/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

/// @brief Field valueHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueHandler, put=__cordl_internal_set_valueHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  valueHandler;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::DynamicDictionaryHandler* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

/// @brief Method Read, addr 0x9d0ef50, size 0x238, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d0f188, size 0x4d8, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_keyHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_keyHandler() ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_valueHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_valueHandler() ;

constexpr void __cordl_internal_set_keyHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

constexpr void __cordl_internal_set_valueHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

/// @brief Method .ctor, addr 0x9d0c304, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicDictionaryHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicDictionaryHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicDictionaryHandler(DynamicDictionaryHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicDictionaryHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicDictionaryHandler(DynamicDictionaryHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31769};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

/// @brief Field keyHandler, offset: 0x18, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___keyHandler;

/// @brief Field valueHandler, offset: 0x20, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___valueHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicDictionaryHandler, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicDictionaryHandler, ___keyHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicDictionaryHandler, ___valueHandler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::DynamicDictionaryHandler) == 0x28, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
