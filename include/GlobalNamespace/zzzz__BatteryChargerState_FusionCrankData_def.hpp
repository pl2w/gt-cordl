#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryChargerState_FusionCrankData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatteryChargerState_FusionCrankData)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace GlobalNamespace {
struct BatteryChargerState_FusionCrankData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BatteryChargerState_FusionCrankData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BatteryChargerState_FusionCrankData, "", "BatteryChargerState/FusionCrankData");
// [NetworkStructWeaved(3)]
// Dependencies Fusion.NetworkBool
namespace GlobalNamespace {
// Is value type: true
// CS Name: BatteryChargerState/FusionCrankData
#pragma pack(push, 0)
struct CORDL_TYPE BatteryChargerState_FusionCrankData {
public:
// Declarations
/// @brief Field angle, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_angle, put=__cordl_internal_set_angle)) float_t  angle;

/// @brief Field holderActorNr, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_holderActorNr, put=__cordl_internal_set_holderActorNr)) int32_t  holderActorNr;

/// @brief Field isLeftHand, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) ::Fusion::NetworkBool  isLeftHand;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr float_t const& __cordl_internal_get_angle() const;

constexpr float_t& __cordl_internal_get_angle() ;

constexpr int32_t const& __cordl_internal_get_holderActorNr() const;

constexpr int32_t& __cordl_internal_get_holderActorNr() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_isLeftHand() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_isLeftHand() ;

constexpr void __cordl_internal_set_angle(float_t  value) ;

constexpr void __cordl_internal_set_holderActorNr(int32_t  value) ;

constexpr void __cordl_internal_set_isLeftHand(::Fusion::NetworkBool  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr BatteryChargerState_FusionCrankData() ;

// Ctor Parameters [CppParam { name: "holderActorNr", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLeftHand", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "angle", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BatteryChargerState_FusionCrankData(int32_t  holderActorNr, ::Fusion::NetworkBool  isLeftHand, float_t  angle) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___holderActorNr_padding[0x0];
/// @brief Field holderActorNr, offset: 0x0, size: 0x4, def value: None
 int32_t  ___holderActorNr;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___holderActorNr_padding_forAlignment[0x0];
/// @brief Field holderActorNr, offset: 0x0, size: 0x4, def value: None
 int32_t  ___holderActorNr_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___isLeftHand_padding[0x4];
/// @brief Field isLeftHand, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___isLeftHand;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___isLeftHand_padding_forAlignment[0x4];
/// @brief Field isLeftHand, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___isLeftHand_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___angle_padding[0x8];
/// @brief Field angle, offset: 0x8, size: 0x4, def value: None
 float_t  ___angle;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___angle_padding_forAlignment[0x8];
/// @brief Field angle, offset: 0x8, size: 0x4, def value: None
 float_t  ___angle_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{411};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BatteryChargerState_FusionCrankData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
