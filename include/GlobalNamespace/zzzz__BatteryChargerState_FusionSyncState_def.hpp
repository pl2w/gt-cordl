#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryChargerState_FusionSyncState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatteryChargerState_FusionSyncState)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace GlobalNamespace {
struct BatteryChargerState_FusionSyncState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BatteryChargerState_FusionSyncState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BatteryChargerState_FusionSyncState, "", "BatteryChargerState/FusionSyncState");
// [NetworkStructWeaved(2)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BatteryChargerState/FusionSyncState
#pragma pack(push, 0)
struct CORDL_TYPE BatteryChargerState_FusionSyncState {
public:
// Declarations
/// @brief Field charge, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_charge, put=__cordl_internal_set_charge)) float_t  charge;

/// @brief Field eventPhase, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventPhase, put=__cordl_internal_set_eventPhase)) int32_t  eventPhase;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr float_t const& __cordl_internal_get_charge() const;

constexpr float_t& __cordl_internal_get_charge() ;

constexpr int32_t const& __cordl_internal_get_eventPhase() const;

constexpr int32_t& __cordl_internal_get_eventPhase() ;

constexpr void __cordl_internal_set_charge(float_t  value) ;

constexpr void __cordl_internal_set_eventPhase(int32_t  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr BatteryChargerState_FusionSyncState() ;

// Ctor Parameters [CppParam { name: "charge", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "eventPhase", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BatteryChargerState_FusionSyncState(float_t  charge, int32_t  eventPhase) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___charge_padding[0x0];
/// @brief Field charge, offset: 0x0, size: 0x4, def value: None
 float_t  ___charge;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___charge_padding_forAlignment[0x0];
/// @brief Field charge, offset: 0x0, size: 0x4, def value: None
 float_t  ___charge_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___eventPhase_padding[0x4];
/// @brief Field eventPhase, offset: 0x4, size: 0x4, def value: None
 int32_t  ___eventPhase;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___eventPhase_padding_forAlignment[0x4];
/// @brief Field eventPhase, offset: 0x4, size: 0x4, def value: None
 int32_t  ___eventPhase_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{412};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BatteryChargerState_FusionSyncState) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
