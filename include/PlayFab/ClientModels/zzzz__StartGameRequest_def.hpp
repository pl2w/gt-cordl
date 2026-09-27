#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StartGameRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__Region_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StartGameRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class StartGameRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::StartGameRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::StartGameRequest*, "PlayFab.ClientModels", "StartGameRequest");
// Dependencies PlayFab.ClientModels.Region, PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.StartGameRequest
class CORDL_TYPE StartGameRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildVersion, put=__cordl_internal_set_BuildVersion)) ::StringW  BuildVersion;

/// @brief Field CharacterId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field CustomCommandLineData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomCommandLineData, put=__cordl_internal_set_CustomCommandLineData)) ::StringW  CustomCommandLineData;

/// @brief Field GameMode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameMode, put=__cordl_internal_set_GameMode)) ::StringW  GameMode;

/// @brief Field Region, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::PlayFab::ClientModels::Region  Region;

/// @brief Field StatisticName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

static inline ::PlayFab::ClientModels::StartGameRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildVersion() const;

constexpr ::StringW& __cordl_internal_get_BuildVersion() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_CustomCommandLineData() const;

constexpr ::StringW& __cordl_internal_get_CustomCommandLineData() ;

constexpr ::StringW const& __cordl_internal_get_GameMode() const;

constexpr ::StringW& __cordl_internal_get_GameMode() ;

constexpr ::PlayFab::ClientModels::Region const& __cordl_internal_get_Region() const;

constexpr ::PlayFab::ClientModels::Region& __cordl_internal_get_Region() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr void __cordl_internal_set_BuildVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_CustomCommandLineData(::StringW  value) ;

constexpr void __cordl_internal_set_GameMode(::StringW  value) ;

constexpr void __cordl_internal_set_Region(::PlayFab::ClientModels::Region  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e250, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartGameRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartGameRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StartGameRequest(StartGameRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartGameRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartGameRequest(StartGameRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20222};

/// @brief Field BuildVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildVersion;

/// @brief Field CharacterId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field CustomCommandLineData, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___CustomCommandLineData;

/// @brief Field GameMode, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___GameMode;

/// @brief Field Region, offset: 0x38, size: 0x4, def value: None
 ::PlayFab::ClientModels::Region  ___Region;

/// @brief Field StatisticName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___StatisticName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::StartGameRequest, ___BuildVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartGameRequest, ___CharacterId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartGameRequest, ___CustomCommandLineData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartGameRequest, ___GameMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartGameRequest, ___Region) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartGameRequest, ___StatisticName) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::StartGameRequest) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
