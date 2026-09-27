#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__Region_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RegionInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class RegionInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RegionInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RegionInfo*, "PlayFab.ClientModels", "RegionInfo");
// Dependencies PlayFab.ClientModels.Region, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RegionInfo
class CORDL_TYPE RegionInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Available, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Available, put=__cordl_internal_set_Available)) bool  Available;

/// @brief Field Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field PingUrl, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PingUrl, put=__cordl_internal_set_PingUrl)) ::StringW  PingUrl;

/// @brief Field Region, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::System::Nullable_1<::PlayFab::ClientModels::Region>  Region;

static inline ::PlayFab::ClientModels::RegionInfo* New_ctor() ;

constexpr bool const& __cordl_internal_get_Available() const;

constexpr bool& __cordl_internal_get_Available() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::StringW const& __cordl_internal_get_PingUrl() const;

constexpr ::StringW& __cordl_internal_get_PingUrl() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region> const& __cordl_internal_get_Region() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region>& __cordl_internal_get_Region() ;

constexpr void __cordl_internal_set_Available(bool  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_PingUrl(::StringW  value) ;

constexpr void __cordl_internal_set_Region(::System::Nullable_1<::PlayFab::ClientModels::Region>  value) ;

/// @brief Method .ctor, addr 0xa84e160, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegionInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegionInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegionInfo(RegionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegionInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegionInfo(RegionInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20191};

/// @brief Field Available, offset: 0x10, size: 0x1, def value: None
 bool  ___Available;

/// @brief Field Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field PingUrl, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PingUrl;

/// @brief Field Region, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::Region>  ___Region;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RegionInfo, ___Available) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegionInfo, ___Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegionInfo, ___PingUrl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegionInfo, ___Region) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RegionInfo) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
