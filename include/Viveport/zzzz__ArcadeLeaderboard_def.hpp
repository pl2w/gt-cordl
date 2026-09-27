#pragma once
// IWYU pragma private; include "Viveport/ArcadeLeaderboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ArcadeLeaderboard)
// Forward declare root types
namespace Viveport {
class ArcadeLeaderboard;
}
// Write type traits
MARK_REF_T(::Viveport::ArcadeLeaderboard*);
DEFINE_IL2CPP_CLASS(::Viveport::ArcadeLeaderboard*, "Viveport", "ArcadeLeaderboard");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.ArcadeLeaderboard
class CORDL_TYPE ArcadeLeaderboard : public ::System::Object {
public:
// Declarations
static inline ::Viveport::ArcadeLeaderboard* New_ctor() ;

/// @brief Method .ctor, addr 0x5b4fbd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcadeLeaderboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcadeLeaderboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcadeLeaderboard(ArcadeLeaderboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcadeLeaderboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcadeLeaderboard(ArcadeLeaderboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::ArcadeLeaderboard) == 0x10, "Size mismatch!");

} // namespace end def Viveport
