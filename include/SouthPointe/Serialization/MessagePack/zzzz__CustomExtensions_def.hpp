#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/CustomExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomExtensions)
namespace System {
class Type;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class CustomExtensions;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::CustomExtensions*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::CustomExtensions*, "SouthPointe.Serialization.MessagePack", "CustomExtensions");
// [Extension]
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.CustomExtensions
class CORDL_TYPE CustomExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method IsNullable, addr 0x9d0b9e8, size 0x70, virtual false, abstract: false, final false
static inline bool IsNullable(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomExtensions(CustomExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomExtensions(CustomExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::SouthPointe::Serialization::MessagePack::CustomExtensions) == 0x10, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
