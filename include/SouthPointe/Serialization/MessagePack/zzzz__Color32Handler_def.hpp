#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/Color32Handler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Color32Handler)
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
class Color32Handler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::Color32Handler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::Color32Handler*, "SouthPointe.Serialization.MessagePack", "Color32Handler");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.Color32Handler
class CORDL_TYPE Color32Handler : public ::System::Object {
public:
// Declarations
/// @brief Field byteHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_byteHandler, put=__cordl_internal_set_byteHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  byteHandler;

/// @brief Field context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  context;

/// @brief Field mapHandler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapHandler, put=__cordl_internal_set_mapHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  mapHandler;

/// @brief Field stringHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringHandler, put=__cordl_internal_set_stringHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  stringHandler;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::Color32Handler* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Method Read, addr 0x9d0cd10, size 0x600, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d0d310, size 0x104, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_byteHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_byteHandler() ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get_context() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get_context() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_mapHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_mapHandler() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_stringHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_stringHandler() ;

constexpr void __cordl_internal_set_byteHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

constexpr void __cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

constexpr void __cordl_internal_set_mapHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

constexpr void __cordl_internal_set_stringHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

/// @brief Method .ctor, addr 0x9d0bb98, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Color32Handler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Color32Handler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Color32Handler(Color32Handler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Color32Handler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Color32Handler(Color32Handler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31763};

/// @brief Field context, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ___context;

/// @brief Field byteHandler, offset: 0x18, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___byteHandler;

/// @brief Field stringHandler, offset: 0x20, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___stringHandler;

/// @brief Field mapHandler, offset: 0x28, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___mapHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::Color32Handler, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::Color32Handler, ___byteHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::Color32Handler, ___stringHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::Color32Handler, ___mapHandler) == 0x28, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::Color32Handler) == 0x30, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
