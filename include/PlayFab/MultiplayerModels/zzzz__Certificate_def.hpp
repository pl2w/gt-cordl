#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/Certificate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Certificate)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class Certificate;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::Certificate*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::Certificate*, "PlayFab.MultiplayerModels", "Certificate");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.Certificate
class CORDL_TYPE Certificate : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Base64EncodedValue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Base64EncodedValue, put=__cordl_internal_set_Base64EncodedValue)) ::StringW  Base64EncodedValue;

/// @brief Field Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Password, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Password, put=__cordl_internal_set_Password)) ::StringW  Password;

static inline ::PlayFab::MultiplayerModels::Certificate* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Base64EncodedValue() const;

constexpr ::StringW& __cordl_internal_get_Base64EncodedValue() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::StringW const& __cordl_internal_get_Password() const;

constexpr ::StringW& __cordl_internal_get_Password() ;

constexpr void __cordl_internal_set_Base64EncodedValue(::StringW  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Password(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840820, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Certificate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Certificate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Certificate(Certificate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Certificate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Certificate(Certificate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19605};

/// @brief Field Base64EncodedValue, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Base64EncodedValue;

/// @brief Field Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Password, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Password;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::Certificate, ___Base64EncodedValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::Certificate, ___Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::Certificate, ___Password) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::Certificate) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
