#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CurrentGamesRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__Region_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CurrentGamesRequest)
namespace PlayFab::ClientModels {
class CollectionFilter;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class CurrentGamesRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CurrentGamesRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CurrentGamesRequest*, "PlayFab.ClientModels", "CurrentGamesRequest");
// Dependencies PlayFab.ClientModels.Region, PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CurrentGamesRequest
class CORDL_TYPE CurrentGamesRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildVersion, put=__cordl_internal_set_BuildVersion)) ::StringW  BuildVersion;

/// @brief Field GameMode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameMode, put=__cordl_internal_set_GameMode)) ::StringW  GameMode;

/// @brief Field Region, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::System::Nullable_1<::PlayFab::ClientModels::Region>  Region;

/// @brief Field StatisticName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

/// @brief Field TagFilter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TagFilter, put=__cordl_internal_set_TagFilter)) ::PlayFab::ClientModels::CollectionFilter*  TagFilter;

static inline ::PlayFab::ClientModels::CurrentGamesRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildVersion() const;

constexpr ::StringW& __cordl_internal_get_BuildVersion() ;

constexpr ::StringW const& __cordl_internal_get_GameMode() const;

constexpr ::StringW& __cordl_internal_get_GameMode() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region> const& __cordl_internal_get_Region() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region>& __cordl_internal_get_Region() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr ::PlayFab::ClientModels::CollectionFilter* const& __cordl_internal_get_TagFilter() const;

constexpr ::PlayFab::ClientModels::CollectionFilter*& __cordl_internal_get_TagFilter() ;

constexpr void __cordl_internal_set_BuildVersion(::StringW  value) ;

constexpr void __cordl_internal_set_GameMode(::StringW  value) ;

constexpr void __cordl_internal_set_Region(::System::Nullable_1<::PlayFab::ClientModels::Region>  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

constexpr void __cordl_internal_set_TagFilter(::PlayFab::ClientModels::CollectionFilter*  value) ;

/// @brief Method .ctor, addr 0xa84db30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrentGamesRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrentGamesRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrentGamesRequest(CurrentGamesRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrentGamesRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrentGamesRequest(CurrentGamesRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19986};

/// @brief Field BuildVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildVersion;

/// @brief Field GameMode, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___GameMode;

/// @brief Field Region, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::Region>  ___Region;

/// @brief Field StatisticName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Field TagFilter, offset: 0x40, size: 0x8, def value: None
 ::PlayFab::ClientModels::CollectionFilter*  ___TagFilter;

/// @brief Size padding 0x40 - 0x48 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CurrentGamesRequest, ___BuildVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CurrentGamesRequest, ___GameMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CurrentGamesRequest, ___Region) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CurrentGamesRequest, ___StatisticName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CurrentGamesRequest, ___TagFilter) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CurrentGamesRequest) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
