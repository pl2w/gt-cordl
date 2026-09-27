#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/QosServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(QosServer)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class QosServer;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::QosServer*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::QosServer*, "PlayFab.MultiplayerModels", "QosServer");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.QosServer
class CORDL_TYPE QosServer : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Region, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

/// @brief Field ServerUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerUrl, put=__cordl_internal_set_ServerUrl)) ::StringW  ServerUrl;

static inline ::PlayFab::MultiplayerModels::QosServer* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr ::StringW const& __cordl_internal_get_ServerUrl() const;

constexpr ::StringW& __cordl_internal_get_ServerUrl() ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

constexpr void __cordl_internal_set_ServerUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840bb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QosServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QosServer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QosServer(QosServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QosServer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QosServer(QosServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19722};

/// @brief Field Region, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Region;

/// @brief Field ServerUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ServerUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::QosServer, ___Region) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::QosServer, ___ServerUrl) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::QosServer) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
