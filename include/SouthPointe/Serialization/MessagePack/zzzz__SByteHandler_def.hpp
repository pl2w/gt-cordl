#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/SByteHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SByteHandler)
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
namespace System {
class Object;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class SByteHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::SByteHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::SByteHandler*, "SouthPointe.Serialization.MessagePack", "SByteHandler");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.SByteHandler
class CORDL_TYPE SByteHandler : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::SByteHandler* New_ctor() ;

/// @brief Method Read, addr 0x9d128a8, size 0x194, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d12a3c, size 0x78, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

/// @brief Method .ctor, addr 0x9d0ba70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SByteHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SByteHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SByteHandler(SByteHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SByteHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SByteHandler(SByteHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31782};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::SouthPointe::Serialization::MessagePack::SByteHandler) == 0x10, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
