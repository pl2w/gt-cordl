#pragma once
// IWYU pragma private; include "PlayFab/PlayFabException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/zzzz__PlayFabExceptionCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabException)
namespace PlayFab {
struct PlayFabExceptionCode;
}
// Forward declare root types
namespace PlayFab {
class PlayFabException;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabException*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabException*, "PlayFab", "PlayFabException");
// Dependencies PlayFab.PlayFabExceptionCode, System.Exception
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabException
class CORDL_TYPE PlayFabException : public ::System::Exception {
public:
// Declarations
/// @brief Field Code, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Code, put=__cordl_internal_set_Code)) ::PlayFab::PlayFabExceptionCode  Code;

static inline ::PlayFab::PlayFabException* New_ctor(::PlayFab::PlayFabExceptionCode  code, ::StringW  message) ;

constexpr ::PlayFab::PlayFabExceptionCode const& __cordl_internal_get_Code() const;

constexpr ::PlayFab::PlayFabExceptionCode& __cordl_internal_get_Code() ;

constexpr void __cordl_internal_set_Code(::PlayFab::PlayFabExceptionCode  value) ;

/// @brief Method .ctor, addr 0xa7c1a08, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabExceptionCode  code, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabException(PlayFabException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabException(PlayFabException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19511};

/// @brief Field Code, offset: 0x8c, size: 0x4, def value: None
 ::PlayFab::PlayFabExceptionCode  ___Code;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabException, ___Code) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabException) == 0x90, "Size mismatch!");

} // namespace end def PlayFab
