#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/BuildSummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BuildSummary)
namespace PlayFab::MultiplayerModels {
class BuildRegion;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class BuildSummary;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::BuildSummary*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::BuildSummary*, "PlayFab.MultiplayerModels", "BuildSummary");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.BuildSummary
class CORDL_TYPE BuildSummary : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field BuildId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field BuildName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildName, put=__cordl_internal_set_BuildName)) ::StringW  BuildName;

/// @brief Field CreationTime, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_CreationTime, put=__cordl_internal_set_CreationTime)) ::System::Nullable_1<::System::DateTime>  CreationTime;

/// @brief Field Metadata, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Metadata, put=__cordl_internal_set_Metadata)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Metadata;

/// @brief Field RegionConfigurations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_RegionConfigurations, put=__cordl_internal_set_RegionConfigurations)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*  RegionConfigurations;

static inline ::PlayFab::MultiplayerModels::BuildSummary* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::StringW const& __cordl_internal_get_BuildName() const;

constexpr ::StringW& __cordl_internal_get_BuildName() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_CreationTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_CreationTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Metadata() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Metadata() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>* const& __cordl_internal_get_RegionConfigurations() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*& __cordl_internal_get_RegionConfigurations() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_BuildName(::StringW  value) ;

constexpr void __cordl_internal_set_CreationTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_RegionConfigurations(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*  value) ;

/// @brief Method .ctor, addr 0xa8407d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuildSummary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuildSummary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuildSummary(BuildSummary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuildSummary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuildSummary(BuildSummary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19595};

/// @brief Field BuildId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field BuildName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildName;

/// @brief Field CreationTime, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___CreationTime;

/// @brief Field Metadata, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Metadata;

/// @brief Field RegionConfigurations, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*  ___RegionConfigurations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::BuildSummary, ___BuildId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildSummary, ___BuildName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildSummary, ___CreationTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildSummary, ___Metadata) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildSummary, ___RegionConfigurations) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::BuildSummary) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
