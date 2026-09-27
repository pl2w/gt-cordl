#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DefaultNamingStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DefaultNamingStrategy)
namespace SouthPointe::Serialization::MessagePack {
class IMapNamingStrategy;
}
namespace SouthPointe::Serialization::MessagePack {
class MapDefinition;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class DefaultNamingStrategy;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy*, "SouthPointe.Serialization.MessagePack", "DefaultNamingStrategy");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.DefaultNamingStrategy
class CORDL_TYPE DefaultNamingStrategy : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::IMapNamingStrategy"
constexpr operator  ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*() noexcept;

static inline ::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy* New_ctor() ;

/// @brief Method OnPack, addr 0x9d0ab7c, size 0x8, virtual true, abstract: false, final true
inline ::StringW OnPack(::StringW  name, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition) ;

/// @brief Method OnUnpack, addr 0x9d0ab84, size 0x8, virtual true, abstract: false, final true
inline ::StringW OnUnpack(::StringW  name, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition) ;

/// @brief Method .ctor, addr 0x9d0ab74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::IMapNamingStrategy"
constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy* i___SouthPointe__Serialization__MessagePack__IMapNamingStrategy() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultNamingStrategy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultNamingStrategy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultNamingStrategy(DefaultNamingStrategy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultNamingStrategy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultNamingStrategy(DefaultNamingStrategy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31750};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy) == 0x10, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
