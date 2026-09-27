#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/TimeSpanHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TimeSpanHandler)
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
class TimeSpanHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::TimeSpanHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::TimeSpanHandler*, "SouthPointe.Serialization.MessagePack", "TimeSpanHandler");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.TimeSpanHandler
class CORDL_TYPE TimeSpanHandler : public ::System::Object {
public:
// Declarations
/// @brief Field context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  context;

/// @brief Field longHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_longHandler, put=__cordl_internal_set_longHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  longHandler;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::TimeSpanHandler* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Method Read, addr 0x9d12e74, size 0x158, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d12fcc, size 0x94, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get_context() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get_context() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_longHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_longHandler() ;

constexpr void __cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

constexpr void __cordl_internal_set_longHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

/// @brief Method .ctor, addr 0x9d0bc28, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanHandler(TimeSpanHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanHandler(TimeSpanHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31785};

/// @brief Field context, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ___context;

/// @brief Field longHandler, offset: 0x18, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___longHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::TimeSpanHandler, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::TimeSpanHandler, ___longHandler) == 0x18, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::TimeSpanHandler) == 0x20, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
