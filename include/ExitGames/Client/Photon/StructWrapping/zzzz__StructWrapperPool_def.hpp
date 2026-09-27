#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapperPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StructWrapperPool)
namespace ExitGames::Client::Photon::StructWrapping {
struct WrappedType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapperPool;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*, "ExitGames.Client.Photon.StructWrapping", "StructWrapperPool");
// Dependencies System.Object
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: false
// CS Name: ExitGames.Client.Photon.StructWrapping.StructWrapperPool
class CORDL_TYPE StructWrapperPool : public ::System::Object {
public:
// Declarations
/// @brief Method GetWrappedType, addr 0xa6eef00, size 0x1c8, virtual false, abstract: false, final false
static inline ::ExitGames::Client::Photon::StructWrapping::WrappedType GetWrappedType(::System::Type*  type) ;

static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool* New_ctor() ;

/// @brief Method .ctor, addr 0xa6ef0c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StructWrapperPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StructWrapperPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StructWrapperPool(StructWrapperPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StructWrapperPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StructWrapperPool(StructWrapperPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26493};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon::StructWrapping
