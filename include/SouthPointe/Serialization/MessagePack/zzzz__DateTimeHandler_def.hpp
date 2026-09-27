#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DateTimeHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeHandler)
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
class IExtTypeHandler;
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
class DateTimeHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::DateTimeHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::DateTimeHandler*, "SouthPointe.Serialization.MessagePack", "DateTimeHandler");
// Dependencies System.DateTime, System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.DateTimeHandler
class CORDL_TYPE DateTimeHandler : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ExtType)) int8_t  ExtType;

/// @brief Field context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  context;

/// @brief Field doubleHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_doubleHandler, put=__cordl_internal_set_doubleHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  doubleHandler;

/// @brief Field epoch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_epoch, put=setStaticF_epoch)) ::System::DateTime  epoch;

/// @brief Field stringHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringHandler, put=__cordl_internal_set_stringHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  stringHandler;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::IExtTypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::IExtTypeHandler*() noexcept;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::DateTimeHandler* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

/// @brief Method Read, addr 0x9d0da80, size 0x3e0, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method ReadExt, addr 0x9d0de60, size 0x2c8, virtual true, abstract: false, final true
inline ::System::Object* ReadExt(uint32_t  length, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d0e128, size 0x2d0, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get_context() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get_context() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_doubleHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_doubleHandler() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_stringHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_stringHandler() ;

constexpr void __cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

constexpr void __cordl_internal_set_doubleHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

constexpr void __cordl_internal_set_stringHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

/// @brief Method .ctor, addr 0x9d0bb38, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

static inline ::System::DateTime getStaticF_epoch() ;

/// @brief Method get_ExtType, addr 0x9d0da78, size 0x8, virtual true, abstract: false, final true
inline int8_t get_ExtType() ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::IExtTypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::IExtTypeHandler* i___SouthPointe__Serialization__MessagePack__IExtTypeHandler() noexcept;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

static inline void setStaticF_epoch(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeHandler(DateTimeHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeHandler(DateTimeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31765};

/// @brief Field context, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ___context;

/// @brief Field stringHandler, offset: 0x18, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___stringHandler;

/// @brief Field doubleHandler, offset: 0x20, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___doubleHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DateTimeHandler, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DateTimeHandler, ___stringHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DateTimeHandler, ___doubleHandler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::DateTimeHandler) == 0x28, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
