#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/MembershipModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MembershipModel)
namespace PlayFab::ClientModels {
class SubscriptionModel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class MembershipModel;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::MembershipModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::MembershipModel*, "PlayFab.ClientModels", "MembershipModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.MembershipModel
class CORDL_TYPE MembershipModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field IsActive, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsActive, put=__cordl_internal_set_IsActive)) bool  IsActive;

/// @brief Field MembershipExpiration, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MembershipExpiration, put=__cordl_internal_set_MembershipExpiration)) ::System::DateTime  MembershipExpiration;

/// @brief Field MembershipId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MembershipId, put=__cordl_internal_set_MembershipId)) ::StringW  MembershipId;

/// @brief Field OverrideExpiration, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_OverrideExpiration, put=__cordl_internal_set_OverrideExpiration)) ::System::Nullable_1<::System::DateTime>  OverrideExpiration;

/// @brief Field Subscriptions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Subscriptions, put=__cordl_internal_set_Subscriptions)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>*  Subscriptions;

static inline ::PlayFab::ClientModels::MembershipModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_IsActive() const;

constexpr bool& __cordl_internal_get_IsActive() ;

constexpr ::System::DateTime const& __cordl_internal_get_MembershipExpiration() const;

constexpr ::System::DateTime& __cordl_internal_get_MembershipExpiration() ;

constexpr ::StringW const& __cordl_internal_get_MembershipId() const;

constexpr ::StringW& __cordl_internal_get_MembershipId() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_OverrideExpiration() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_OverrideExpiration() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>* const& __cordl_internal_get_Subscriptions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>*& __cordl_internal_get_Subscriptions() ;

constexpr void __cordl_internal_set_IsActive(bool  value) ;

constexpr void __cordl_internal_set_MembershipExpiration(::System::DateTime  value) ;

constexpr void __cordl_internal_set_MembershipId(::StringW  value) ;

constexpr void __cordl_internal_set_OverrideExpiration(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_Subscriptions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>*  value) ;

/// @brief Method .ctor, addr 0xa84e0b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MembershipModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MembershipModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MembershipModel(MembershipModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MembershipModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MembershipModel(MembershipModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20168};

/// @brief Field IsActive, offset: 0x10, size: 0x1, def value: None
 bool  ___IsActive;

/// @brief Field MembershipExpiration, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___MembershipExpiration;

/// @brief Field MembershipId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MembershipId;

/// @brief Field OverrideExpiration, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___OverrideExpiration;

/// @brief Field Subscriptions, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>*  ___Subscriptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::MembershipModel, ___IsActive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MembershipModel, ___MembershipExpiration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MembershipModel, ___MembershipId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MembershipModel, ___OverrideExpiration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MembershipModel, ___Subscriptions) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::MembershipModel) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
