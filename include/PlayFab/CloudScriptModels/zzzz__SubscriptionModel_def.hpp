#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/SubscriptionModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/CloudScriptModels/zzzz__SubscriptionProviderStatus_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SubscriptionModel)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class SubscriptionModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::SubscriptionModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::SubscriptionModel*, "PlayFab.CloudScriptModels", "SubscriptionModel");
// Dependencies PlayFab.CloudScriptModels.SubscriptionProviderStatus, PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.SubscriptionModel
class CORDL_TYPE SubscriptionModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Expiration, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Expiration, put=__cordl_internal_set_Expiration)) ::System::DateTime  Expiration;

/// @brief Field InitialSubscriptionTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_InitialSubscriptionTime, put=__cordl_internal_set_InitialSubscriptionTime)) ::System::DateTime  InitialSubscriptionTime;

/// @brief Field IsActive, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsActive, put=__cordl_internal_set_IsActive)) bool  IsActive;

/// @brief Field Status, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::System::Nullable_1<::PlayFab::CloudScriptModels::SubscriptionProviderStatus>  Status;

/// @brief Field SubscriptionId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubscriptionId, put=__cordl_internal_set_SubscriptionId)) ::StringW  SubscriptionId;

/// @brief Field SubscriptionItemId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubscriptionItemId, put=__cordl_internal_set_SubscriptionItemId)) ::StringW  SubscriptionItemId;

/// @brief Field SubscriptionProvider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubscriptionProvider, put=__cordl_internal_set_SubscriptionProvider)) ::StringW  SubscriptionProvider;

static inline ::PlayFab::CloudScriptModels::SubscriptionModel* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_Expiration() const;

constexpr ::System::DateTime& __cordl_internal_get_Expiration() ;

constexpr ::System::DateTime const& __cordl_internal_get_InitialSubscriptionTime() const;

constexpr ::System::DateTime& __cordl_internal_get_InitialSubscriptionTime() ;

constexpr bool const& __cordl_internal_get_IsActive() const;

constexpr bool& __cordl_internal_get_IsActive() ;

constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::SubscriptionProviderStatus> const& __cordl_internal_get_Status() const;

constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::SubscriptionProviderStatus>& __cordl_internal_get_Status() ;

constexpr ::StringW const& __cordl_internal_get_SubscriptionId() const;

constexpr ::StringW& __cordl_internal_get_SubscriptionId() ;

constexpr ::StringW const& __cordl_internal_get_SubscriptionItemId() const;

constexpr ::StringW& __cordl_internal_get_SubscriptionItemId() ;

constexpr ::StringW const& __cordl_internal_get_SubscriptionProvider() const;

constexpr ::StringW& __cordl_internal_get_SubscriptionProvider() ;

constexpr void __cordl_internal_set_Expiration(::System::DateTime  value) ;

constexpr void __cordl_internal_set_InitialSubscriptionTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_IsActive(bool  value) ;

constexpr void __cordl_internal_set_Status(::System::Nullable_1<::PlayFab::CloudScriptModels::SubscriptionProviderStatus>  value) ;

constexpr void __cordl_internal_set_SubscriptionId(::StringW  value) ;

constexpr void __cordl_internal_set_SubscriptionItemId(::StringW  value) ;

constexpr void __cordl_internal_set_SubscriptionProvider(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84300c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionModel(SubscriptionModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionModel(SubscriptionModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19907};

/// @brief Field Expiration, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ___Expiration;

/// @brief Field InitialSubscriptionTime, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___InitialSubscriptionTime;

/// @brief Field IsActive, offset: 0x20, size: 0x1, def value: None
 bool  ___IsActive;

/// @brief Field Status, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::CloudScriptModels::SubscriptionProviderStatus>  ___Status;

/// @brief Field SubscriptionId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___SubscriptionId;

/// @brief Field SubscriptionItemId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___SubscriptionItemId;

/// @brief Field SubscriptionProvider, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___SubscriptionProvider;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::SubscriptionModel, ___Expiration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::SubscriptionModel, ___InitialSubscriptionTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::SubscriptionModel, ___IsActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::SubscriptionModel, ___Status) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::SubscriptionModel, ___SubscriptionId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::SubscriptionModel, ___SubscriptionItemId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::SubscriptionModel, ___SubscriptionProvider) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::SubscriptionModel) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
