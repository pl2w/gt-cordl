#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/VirtualCurrencyRechargeTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualCurrencyRechargeTime)
// Forward declare root types
namespace PlayFab::ClientModels {
class VirtualCurrencyRechargeTime;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::VirtualCurrencyRechargeTime*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::VirtualCurrencyRechargeTime*, "PlayFab.ClientModels", "VirtualCurrencyRechargeTime");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.VirtualCurrencyRechargeTime
class CORDL_TYPE VirtualCurrencyRechargeTime : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field RechargeMax, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_RechargeMax, put=__cordl_internal_set_RechargeMax)) int32_t  RechargeMax;

/// @brief Field RechargeTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RechargeTime, put=__cordl_internal_set_RechargeTime)) ::System::DateTime  RechargeTime;

/// @brief Field SecondsToRecharge, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondsToRecharge, put=__cordl_internal_set_SecondsToRecharge)) int32_t  SecondsToRecharge;

static inline ::PlayFab::ClientModels::VirtualCurrencyRechargeTime* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_RechargeMax() const;

constexpr int32_t& __cordl_internal_get_RechargeMax() ;

constexpr ::System::DateTime const& __cordl_internal_get_RechargeTime() const;

constexpr ::System::DateTime& __cordl_internal_get_RechargeTime() ;

constexpr int32_t const& __cordl_internal_get_SecondsToRecharge() const;

constexpr int32_t& __cordl_internal_get_SecondsToRecharge() ;

constexpr void __cordl_internal_set_RechargeMax(int32_t  value) ;

constexpr void __cordl_internal_set_RechargeTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_SecondsToRecharge(int32_t  value) ;

/// @brief Method .ctor, addr 0xa84e558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualCurrencyRechargeTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualCurrencyRechargeTime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualCurrencyRechargeTime(VirtualCurrencyRechargeTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualCurrencyRechargeTime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualCurrencyRechargeTime(VirtualCurrencyRechargeTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20325};

/// @brief Field RechargeMax, offset: 0x10, size: 0x4, def value: None
 int32_t  ___RechargeMax;

/// @brief Field RechargeTime, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___RechargeTime;

/// @brief Field SecondsToRecharge, offset: 0x20, size: 0x4, def value: None
 int32_t  ___SecondsToRecharge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::VirtualCurrencyRechargeTime, ___RechargeMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::VirtualCurrencyRechargeTime, ___RechargeTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::VirtualCurrencyRechargeTime, ___SecondsToRecharge) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::VirtualCurrencyRechargeTime) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
