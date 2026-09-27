#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/CharHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CharHandler)
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
class CharHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::CharHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::CharHandler*, "SouthPointe.Serialization.MessagePack", "CharHandler");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.CharHandler
class CORDL_TYPE CharHandler : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::CharHandler* New_ctor() ;

/// @brief Method Read, addr 0x9d0caf0, size 0x1a8, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d0cc98, size 0x78, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

/// @brief Method .ctor, addr 0x9d0bad0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CharHandler(CharHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharHandler(CharHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::SouthPointe::Serialization::MessagePack::CharHandler) == 0x10, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
