#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/IMapNamingStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IMapNamingStrategy)
namespace SouthPointe::Serialization::MessagePack {
class MapDefinition;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class IMapNamingStrategy;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*, "SouthPointe.Serialization.MessagePack", "IMapNamingStrategy");
// Dependencies 
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.IMapNamingStrategy
class CORDL_TYPE IMapNamingStrategy {
public:
// Declarations
/// @brief Method OnPack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW OnPack(::StringW  name, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition) ;

/// @brief Method OnUnpack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW OnUnpack(::StringW  name, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition) ;

// Ctor Parameters [CppParam { name: "", ty: "IMapNamingStrategy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMapNamingStrategy(IMapNamingStrategy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31747};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def SouthPointe::Serialization::MessagePack
