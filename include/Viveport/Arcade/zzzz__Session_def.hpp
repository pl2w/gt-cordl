#pragma once
// IWYU pragma private; include "Viveport/Arcade/Session.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Session)
// Forward declare root types
namespace Viveport::Arcade {
class Session;
}
// Write type traits
MARK_REF_T(::Viveport::Arcade::Session*);
DEFINE_IL2CPP_CLASS(::Viveport::Arcade::Session*, "Viveport.Arcade", "Session");
// Dependencies System.Object
namespace Viveport::Arcade {
// Is value type: false
// CS Name: Viveport.Arcade.Session
class CORDL_TYPE Session : public ::System::Object {
public:
// Declarations
static inline ::Viveport::Arcade::Session* New_ctor() ;

/// @brief Method .ctor, addr 0x5b5a588, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Session() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Session", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Session(Session && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Session", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Session(Session const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Arcade::Session) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Arcade
