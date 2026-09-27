#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GameServerRegionsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GameServerRegionsResult)
namespace PlayFab::ClientModels {
class RegionInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GameServerRegionsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GameServerRegionsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GameServerRegionsResult*, "PlayFab.ClientModels", "GameServerRegionsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GameServerRegionsResult
class CORDL_TYPE GameServerRegionsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Regions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Regions, put=__cordl_internal_set_Regions)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::RegionInfo*>*  Regions;

static inline ::PlayFab::ClientModels::GameServerRegionsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::RegionInfo*>* const& __cordl_internal_get_Regions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::RegionInfo*>*& __cordl_internal_get_Regions() ;

constexpr void __cordl_internal_set_Regions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::RegionInfo*>*  value) ;

/// @brief Method .ctor, addr 0xa84dba0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameServerRegionsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameServerRegionsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServerRegionsResult(GameServerRegionsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServerRegionsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServerRegionsResult(GameServerRegionsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20003};

/// @brief Field Regions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::RegionInfo*>*  ___Regions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GameServerRegionsResult, ___Regions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GameServerRegionsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
