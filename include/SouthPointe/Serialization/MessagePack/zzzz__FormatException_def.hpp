#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/FormatException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__FormatException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FormatException)
namespace SouthPointe::Serialization::MessagePack {
class FormatReader;
}
namespace SouthPointe::Serialization::MessagePack {
struct Format;
}
namespace SouthPointe::Serialization::MessagePack {
class ITypeHandler;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class FormatException;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::FormatException*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::FormatException*, "SouthPointe.Serialization.MessagePack", "FormatException");
// Dependencies System.FormatException
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.FormatException
class CORDL_TYPE FormatException : public ::System::FormatException {
public:
// Declarations
static inline ::SouthPointe::Serialization::MessagePack::FormatException* New_ctor() ;

static inline ::SouthPointe::Serialization::MessagePack::FormatException* New_ctor(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

static inline ::SouthPointe::Serialization::MessagePack::FormatException* New_ctor(::SouthPointe::Serialization::MessagePack::ITypeHandler*  handler, ::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

static inline ::SouthPointe::Serialization::MessagePack::FormatException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9d05cdc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9d05e0c, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method .ctor, addr 0x9d05cec, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::ITypeHandler*  handler, ::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method .ctor, addr 0x9d05ce4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatException(FormatException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatException(FormatException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31735};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::SouthPointe::Serialization::MessagePack::FormatException) == 0x90, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
