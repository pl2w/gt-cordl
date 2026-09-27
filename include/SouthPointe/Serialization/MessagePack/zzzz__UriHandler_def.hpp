#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/UriHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UriHandler)
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
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class UriHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::UriHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::UriHandler*, "SouthPointe.Serialization.MessagePack", "UriHandler");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.UriHandler
class CORDL_TYPE UriHandler : public ::System::Object {
public:
// Declarations
/// @brief Field context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  context;

/// @brief Field stringHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringHandler, put=__cordl_internal_set_stringHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  stringHandler;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

/// @brief Method GetStringHandler, addr 0x9d133e8, size 0x80, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::ITypeHandler* GetStringHandler() ;

static inline ::SouthPointe::Serialization::MessagePack::UriHandler* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Method Read, addr 0x9d13468, size 0x138, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d135a0, size 0x14c, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get_context() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get_context() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_stringHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_stringHandler() ;

constexpr void __cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

constexpr void __cordl_internal_set_stringHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

/// @brief Method .ctor, addr 0x9d0bc58, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UriHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UriHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UriHandler(UriHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UriHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UriHandler(UriHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31788};

/// @brief Field context, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ___context;

/// @brief Field stringHandler, offset: 0x18, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___stringHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::UriHandler, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::UriHandler, ___stringHandler) == 0x18, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::UriHandler) == 0x20, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
