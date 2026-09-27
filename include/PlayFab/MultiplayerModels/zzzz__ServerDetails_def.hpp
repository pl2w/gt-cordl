#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ServerDetails.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ServerDetails)
namespace PlayFab::MultiplayerModels {
class Port;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ServerDetails;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ServerDetails*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ServerDetails*, "PlayFab.MultiplayerModels", "ServerDetails");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ServerDetails
class CORDL_TYPE ServerDetails : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field IPV4Address, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_IPV4Address, put=__cordl_internal_set_IPV4Address)) ::StringW  IPV4Address;

/// @brief Field Ports, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ports, put=__cordl_internal_set_Ports)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  Ports;

/// @brief Field Region, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

static inline ::PlayFab::MultiplayerModels::ServerDetails* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_IPV4Address() const;

constexpr ::StringW& __cordl_internal_get_IPV4Address() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* const& __cordl_internal_get_Ports() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& __cordl_internal_get_Ports() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr void __cordl_internal_set_IPV4Address(::StringW  value) ;

constexpr void __cordl_internal_set_Ports(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  value) ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840bf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerDetails() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerDetails", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerDetails(ServerDetails && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerDetails", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerDetails(ServerDetails const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19731};

/// @brief Field IPV4Address, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___IPV4Address;

/// @brief Field Ports, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  ___Ports;

/// @brief Field Region, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Region;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ServerDetails, ___IPV4Address) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ServerDetails, ___Ports) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ServerDetails, ___Region) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ServerDetails) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
