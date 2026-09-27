#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CatalogItemConsumableInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CatalogItemConsumableInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class CatalogItemConsumableInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CatalogItemConsumableInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CatalogItemConsumableInfo*, "PlayFab.ClientModels", "CatalogItemConsumableInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CatalogItemConsumableInfo
class CORDL_TYPE CatalogItemConsumableInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field UsageCount, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_UsageCount, put=__cordl_internal_set_UsageCount)) ::System::Nullable_1<uint32_t>  UsageCount;

/// @brief Field UsagePeriod, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_UsagePeriod, put=__cordl_internal_set_UsagePeriod)) ::System::Nullable_1<uint32_t>  UsagePeriod;

/// @brief Field UsagePeriodGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UsagePeriodGroup, put=__cordl_internal_set_UsagePeriodGroup)) ::StringW  UsagePeriodGroup;

static inline ::PlayFab::ClientModels::CatalogItemConsumableInfo* New_ctor() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_UsageCount() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_UsageCount() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_UsagePeriod() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_UsagePeriod() ;

constexpr ::StringW const& __cordl_internal_get_UsagePeriodGroup() const;

constexpr ::StringW& __cordl_internal_get_UsagePeriodGroup() ;

constexpr void __cordl_internal_set_UsageCount(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_UsagePeriod(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_UsagePeriodGroup(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84daa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CatalogItemConsumableInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CatalogItemConsumableInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CatalogItemConsumableInfo(CatalogItemConsumableInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CatalogItemConsumableInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CatalogItemConsumableInfo(CatalogItemConsumableInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19964};

/// @brief Field UsageCount, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___UsageCount;

/// @brief Field UsagePeriod, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___UsagePeriod;

/// @brief Size padding 0x28 - 0x38 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field UsagePeriodGroup, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___UsagePeriodGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CatalogItemConsumableInfo, ___UsageCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItemConsumableInfo, ___UsagePeriod) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItemConsumableInfo, ___UsagePeriodGroup) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CatalogItemConsumableInfo) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
