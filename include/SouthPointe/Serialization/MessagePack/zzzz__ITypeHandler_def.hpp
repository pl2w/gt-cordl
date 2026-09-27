#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/ITypeHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITypeHandler)
namespace SouthPointe::Serialization::MessagePack {
class FormatReader;
}
namespace SouthPointe::Serialization::MessagePack {
class FormatWriter;
}
namespace SouthPointe::Serialization::MessagePack {
struct Format;
}
namespace System {
class Object;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class ITypeHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::ITypeHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::ITypeHandler*, "SouthPointe.Serialization.MessagePack", "ITypeHandler");
// Dependencies 
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.ITypeHandler
class CORDL_TYPE ITypeHandler {
public:
// Declarations
/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

// Ctor Parameters [CppParam { name: "", ty: "ITypeHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITypeHandler(ITypeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31778};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def SouthPointe::Serialization::MessagePack
