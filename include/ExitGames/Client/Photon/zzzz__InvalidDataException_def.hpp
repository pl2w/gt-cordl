#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/InvalidDataException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InvalidDataException)
// Forward declare root types
namespace ExitGames::Client::Photon {
class InvalidDataException;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::InvalidDataException*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::InvalidDataException*, "ExitGames.Client.Photon", "InvalidDataException");
// Dependencies System.Exception
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.InvalidDataException
class CORDL_TYPE InvalidDataException : public ::System::Exception {
public:
// Declarations
static inline ::ExitGames::Client::Photon::InvalidDataException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xa6d21fc, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvalidDataException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvalidDataException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidDataException(InvalidDataException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidDataException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidDataException(InvalidDataException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26466};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::InvalidDataException) == 0x90, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
