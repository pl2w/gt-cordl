#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIUpgradeType)
// Forward declare root types
namespace GlobalNamespace {
struct SIUpgradeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIUpgradeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIUpgradeType, "", "SIUpgradeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIUpgradeType
struct CORDL_TYPE SIUpgradeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIUpgradeType_Unwrapped
enum struct __SIUpgradeType_Unwrapped : int32_t {
__E_InvalidNode = static_cast<int32_t>(0xfffffffe),
__E_Initialize = static_cast<int32_t>(0xffffffff),
__E_Thruster_Unlock = static_cast<int32_t>(0x0),
__E_Thruster_Jet = static_cast<int32_t>(0x1),
__E_Thruster_Prop = static_cast<int32_t>(0x2),
__E_Thruster_Jet_Duration = static_cast<int32_t>(0x3),
__E_Thruster_Jet_Accel = static_cast<int32_t>(0x4),
__E_Thruster_Prop_Duration = static_cast<int32_t>(0x5),
__E_Thruster_Prop_Speed = static_cast<int32_t>(0x6),
__E_Thruster_Jet_Tag = static_cast<int32_t>(0x7),
__E_Thruster_Prop_Knockback = static_cast<int32_t>(0x8),
__E_Thruster_Fuel_Grounding = static_cast<int32_t>(0x9),
__E_Thruster_Throttle_Control = static_cast<int32_t>(0xa),
__E_Stilt_Unlock = static_cast<int32_t>(0x64),
__E_Stilt_Tag_Tip = static_cast<int32_t>(0x65),
__E_Stilt_Retractable = static_cast<int32_t>(0x66),
__E_Stilt_Adjustable_Length = static_cast<int32_t>(0x67),
__E_Stilt_Retract_Speed = static_cast<int32_t>(0x68),
__E_Stilt_Max_Length = static_cast<int32_t>(0x69),
__E_Stilt_Stun_Tip = static_cast<int32_t>(0x6a),
__E_Stilt_Muscle_Fusion = static_cast<int32_t>(0x6b),
__E_Stilt_Short = static_cast<int32_t>(0x6c),
__E_Stilt_Long = static_cast<int32_t>(0x6d),
__E_Stilt_Motorized = static_cast<int32_t>(0x6e),
__E_Stilt_Motorized_Triple = static_cast<int32_t>(0x6f),
__E_Stilt_Turkey_Coma = static_cast<int32_t>(0x70),
__E_Grenade_Concussion_Unlock = static_cast<int32_t>(0xc8),
__E_Grenade_Antigravity_Unlock = static_cast<int32_t>(0xc9),
__E_Grenade_Concussion_Stun = static_cast<int32_t>(0xca),
__E_Grenade_Concussion_Radius = static_cast<int32_t>(0xcb),
__E_Grenade_Antigravity_Persists = static_cast<int32_t>(0xcc),
__E_Grenade_Antigravity_Cooldown = static_cast<int32_t>(0xcd),
__E_Grenade_Concussion_Self_Boost = static_cast<int32_t>(0xce),
__E_Grenade_Concussion_Overcharge = static_cast<int32_t>(0xcf),
__E_Grenade_Antigravity_Pro_Gravity = static_cast<int32_t>(0xd0),
__E_Grenade_Concussion_Impact_Accelerant = static_cast<int32_t>(0xd1),
__E_Grenade_Antigravity_Gravity_Bomb = static_cast<int32_t>(0xd2),
__E_Grenade_Antigravity_Black_Hole = static_cast<int32_t>(0xd3),
__E_Grenade_Holster_Unlock = static_cast<int32_t>(0xd4),
__E_Grenade_Stun_Unlock = static_cast<int32_t>(0xd5),
__E_Grenade_Puller_Unlock = static_cast<int32_t>(0xd6),
__E_Grenade_Disrupter_Unlock = static_cast<int32_t>(0xd7),
__E_Dash_Yoyo_Unlock = static_cast<int32_t>(0x12d),
__E_Dash_Yoyo_Range = static_cast<int32_t>(0x130),
__E_Dash_Yoyo_Speed = static_cast<int32_t>(0x131),
__E_Dash_Unused_306 = static_cast<int32_t>(0x132),
__E_Dash_Unused_307 = static_cast<int32_t>(0x133),
__E_Dash_Yoyo_Cooldown = static_cast<int32_t>(0x134),
__E_Dash_Yoyo_Dynamic = static_cast<int32_t>(0x135),
__E_Dash_Unused_310 = static_cast<int32_t>(0x136),
__E_Dash_Yoyo_Stun = static_cast<int32_t>(0x137),
__E_Dash_Yoyo_Tag = static_cast<int32_t>(0x138),
__E_Dash_Unused_313 = static_cast<int32_t>(0x139),
__E_Dash_Unused_314 = static_cast<int32_t>(0x13a),
__E_Platform_Unlock = static_cast<int32_t>(0x190),
__E_Platform_Cooldown = static_cast<int32_t>(0x191),
__E_Platform_Duration = static_cast<int32_t>(0x192),
__E_Platform_Capacity = static_cast<int32_t>(0x193),
__E_Platform_SpeedBoost = static_cast<int32_t>(0x194),
__E_Tapteleport_Unlock = static_cast<int32_t>(0x1f4),
__E_Tapteleport_Zone = static_cast<int32_t>(0x1f5),
__E_Tapteleport_Stealth = static_cast<int32_t>(0x1f6),
__E_Tapteleport_Portal_Selection = static_cast<int32_t>(0x1f7),
__E_Tapteleport_Keep_Velocity = static_cast<int32_t>(0x1f8),
__E_Tapteleport_Infinite_Use = static_cast<int32_t>(0x1f9),
__E_Tentacle_Unlock = static_cast<int32_t>(0x258),
__E_Tentacle_Power_Claw = static_cast<int32_t>(0x259),
__E_Tentacle_Charge_Rate = static_cast<int32_t>(0x25a),
__E_Tentacle_Efficiency = static_cast<int32_t>(0x25b),
__E_Tentacle_Crawler = static_cast<int32_t>(0x25c),
__E_Tentacle_Strider = static_cast<int32_t>(0x25d),
__E_AirControl_AirJuke_Unlock = static_cast<int32_t>(0x2bc),
__E_AirControl_AirJuke_Speed = static_cast<int32_t>(0x2bd),
__E_AirControl_AirGrab_Unlock = static_cast<int32_t>(0x2be),
__E_AirControl_AirGrab_Speed = static_cast<int32_t>(0x2bf),
__E_AirControl_AirGrab_HoldTime = static_cast<int32_t>(0x2c0),
__E_AirControl_Zipline_Unlock = static_cast<int32_t>(0x2c1),
__E_AirControl_Zipline_Speed = static_cast<int32_t>(0x2c2),
__E_Prototype_SlipMitt = static_cast<int32_t>(0x320),
__E_Prototype_Wing = static_cast<int32_t>(0x321),
__E_Prototype_802 = static_cast<int32_t>(0x322),
__E_Prototype_803 = static_cast<int32_t>(0x323),
__E_Prototype_804 = static_cast<int32_t>(0x324),
__E_Prototype_805 = static_cast<int32_t>(0x325),
__E_Blaster_Standard_Unlock = static_cast<int32_t>(0x3e8),
__E_Blaster_Charge_Unlock = static_cast<int32_t>(0x3e9),
__E_Blaster_Lobber_Unlock = static_cast<int32_t>(0x3ea),
__E_Blaster_PumpDart_Unlock = static_cast<int32_t>(0x3eb),
__E_Blaster_MegaCharge_Unlock = static_cast<int32_t>(0x3ec),
__E_Blaster_LongBlaster_Unlock = static_cast<int32_t>(0x3ed),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIUpgradeType_Unwrapped () const noexcept {
return static_cast<__SIUpgradeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIUpgradeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIUpgradeType(int32_t  value__) noexcept;

/// @brief Field AirControl_AirGrab_HoldTime value: I32(704)
static ::GlobalNamespace::SIUpgradeType const AirControl_AirGrab_HoldTime;

/// @brief Field AirControl_AirGrab_Speed value: I32(703)
static ::GlobalNamespace::SIUpgradeType const AirControl_AirGrab_Speed;

/// @brief Field AirControl_AirGrab_Unlock value: I32(702)
static ::GlobalNamespace::SIUpgradeType const AirControl_AirGrab_Unlock;

/// @brief Field AirControl_AirJuke_Speed value: I32(701)
static ::GlobalNamespace::SIUpgradeType const AirControl_AirJuke_Speed;

/// @brief Field AirControl_AirJuke_Unlock value: I32(700)
static ::GlobalNamespace::SIUpgradeType const AirControl_AirJuke_Unlock;

/// @brief Field AirControl_Zipline_Speed value: I32(706)
static ::GlobalNamespace::SIUpgradeType const AirControl_Zipline_Speed;

/// @brief Field AirControl_Zipline_Unlock value: I32(705)
static ::GlobalNamespace::SIUpgradeType const AirControl_Zipline_Unlock;

/// @brief Field Blaster_Charge_Unlock value: I32(1001)
static ::GlobalNamespace::SIUpgradeType const Blaster_Charge_Unlock;

/// @brief Field Blaster_Lobber_Unlock value: I32(1002)
static ::GlobalNamespace::SIUpgradeType const Blaster_Lobber_Unlock;

/// @brief Field Blaster_LongBlaster_Unlock value: I32(1005)
static ::GlobalNamespace::SIUpgradeType const Blaster_LongBlaster_Unlock;

/// @brief Field Blaster_MegaCharge_Unlock value: I32(1004)
static ::GlobalNamespace::SIUpgradeType const Blaster_MegaCharge_Unlock;

/// @brief Field Blaster_PumpDart_Unlock value: I32(1003)
static ::GlobalNamespace::SIUpgradeType const Blaster_PumpDart_Unlock;

/// @brief Field Blaster_Standard_Unlock value: I32(1000)
static ::GlobalNamespace::SIUpgradeType const Blaster_Standard_Unlock;

/// @brief Field Dash_Unused_306 value: I32(306)
static ::GlobalNamespace::SIUpgradeType const Dash_Unused_306;

/// @brief Field Dash_Unused_307 value: I32(307)
static ::GlobalNamespace::SIUpgradeType const Dash_Unused_307;

/// @brief Field Dash_Unused_310 value: I32(310)
static ::GlobalNamespace::SIUpgradeType const Dash_Unused_310;

/// @brief Field Dash_Unused_313 value: I32(313)
static ::GlobalNamespace::SIUpgradeType const Dash_Unused_313;

/// @brief Field Dash_Unused_314 value: I32(314)
static ::GlobalNamespace::SIUpgradeType const Dash_Unused_314;

/// @brief Field Dash_Yoyo_Cooldown value: I32(308)
static ::GlobalNamespace::SIUpgradeType const Dash_Yoyo_Cooldown;

/// @brief Field Dash_Yoyo_Dynamic value: I32(309)
static ::GlobalNamespace::SIUpgradeType const Dash_Yoyo_Dynamic;

/// @brief Field Dash_Yoyo_Range value: I32(304)
static ::GlobalNamespace::SIUpgradeType const Dash_Yoyo_Range;

/// @brief Field Dash_Yoyo_Speed value: I32(305)
static ::GlobalNamespace::SIUpgradeType const Dash_Yoyo_Speed;

/// @brief Field Dash_Yoyo_Stun value: I32(311)
static ::GlobalNamespace::SIUpgradeType const Dash_Yoyo_Stun;

/// @brief Field Dash_Yoyo_Tag value: I32(312)
static ::GlobalNamespace::SIUpgradeType const Dash_Yoyo_Tag;

/// @brief Field Dash_Yoyo_Unlock value: I32(301)
static ::GlobalNamespace::SIUpgradeType const Dash_Yoyo_Unlock;

/// @brief Field Grenade_Antigravity_Black_Hole value: I32(211)
static ::GlobalNamespace::SIUpgradeType const Grenade_Antigravity_Black_Hole;

/// @brief Field Grenade_Antigravity_Cooldown value: I32(205)
static ::GlobalNamespace::SIUpgradeType const Grenade_Antigravity_Cooldown;

/// @brief Field Grenade_Antigravity_Gravity_Bomb value: I32(210)
static ::GlobalNamespace::SIUpgradeType const Grenade_Antigravity_Gravity_Bomb;

/// @brief Field Grenade_Antigravity_Persists value: I32(204)
static ::GlobalNamespace::SIUpgradeType const Grenade_Antigravity_Persists;

/// @brief Field Grenade_Antigravity_Pro_Gravity value: I32(208)
static ::GlobalNamespace::SIUpgradeType const Grenade_Antigravity_Pro_Gravity;

/// @brief Field Grenade_Antigravity_Unlock value: I32(201)
static ::GlobalNamespace::SIUpgradeType const Grenade_Antigravity_Unlock;

/// @brief Field Grenade_Concussion_Impact_Accelerant value: I32(209)
static ::GlobalNamespace::SIUpgradeType const Grenade_Concussion_Impact_Accelerant;

/// @brief Field Grenade_Concussion_Overcharge value: I32(207)
static ::GlobalNamespace::SIUpgradeType const Grenade_Concussion_Overcharge;

/// @brief Field Grenade_Concussion_Radius value: I32(203)
static ::GlobalNamespace::SIUpgradeType const Grenade_Concussion_Radius;

/// @brief Field Grenade_Concussion_Self_Boost value: I32(206)
static ::GlobalNamespace::SIUpgradeType const Grenade_Concussion_Self_Boost;

/// @brief Field Grenade_Concussion_Stun value: I32(202)
static ::GlobalNamespace::SIUpgradeType const Grenade_Concussion_Stun;

/// @brief Field Grenade_Concussion_Unlock value: I32(200)
static ::GlobalNamespace::SIUpgradeType const Grenade_Concussion_Unlock;

/// @brief Field Grenade_Disrupter_Unlock value: I32(215)
static ::GlobalNamespace::SIUpgradeType const Grenade_Disrupter_Unlock;

/// @brief Field Grenade_Holster_Unlock value: I32(212)
static ::GlobalNamespace::SIUpgradeType const Grenade_Holster_Unlock;

/// @brief Field Grenade_Puller_Unlock value: I32(214)
static ::GlobalNamespace::SIUpgradeType const Grenade_Puller_Unlock;

/// @brief Field Grenade_Stun_Unlock value: I32(213)
static ::GlobalNamespace::SIUpgradeType const Grenade_Stun_Unlock;

/// @brief Field Initialize value: I32(-1)
static ::GlobalNamespace::SIUpgradeType const Initialize;

/// @brief Field InvalidNode value: I32(-2)
static ::GlobalNamespace::SIUpgradeType const InvalidNode;

/// @brief Field Platform_Capacity value: I32(403)
static ::GlobalNamespace::SIUpgradeType const Platform_Capacity;

/// @brief Field Platform_Cooldown value: I32(401)
static ::GlobalNamespace::SIUpgradeType const Platform_Cooldown;

/// @brief Field Platform_Duration value: I32(402)
static ::GlobalNamespace::SIUpgradeType const Platform_Duration;

/// @brief Field Platform_SpeedBoost value: I32(404)
static ::GlobalNamespace::SIUpgradeType const Platform_SpeedBoost;

/// @brief Field Platform_Unlock value: I32(400)
static ::GlobalNamespace::SIUpgradeType const Platform_Unlock;

/// @brief Field Prototype_802 value: I32(802)
static ::GlobalNamespace::SIUpgradeType const Prototype_802;

/// @brief Field Prototype_803 value: I32(803)
static ::GlobalNamespace::SIUpgradeType const Prototype_803;

/// @brief Field Prototype_804 value: I32(804)
static ::GlobalNamespace::SIUpgradeType const Prototype_804;

/// @brief Field Prototype_805 value: I32(805)
static ::GlobalNamespace::SIUpgradeType const Prototype_805;

/// @brief Field Prototype_SlipMitt value: I32(800)
static ::GlobalNamespace::SIUpgradeType const Prototype_SlipMitt;

/// @brief Field Prototype_Wing value: I32(801)
static ::GlobalNamespace::SIUpgradeType const Prototype_Wing;

/// @brief Field Stilt_Adjustable_Length value: I32(103)
static ::GlobalNamespace::SIUpgradeType const Stilt_Adjustable_Length;

/// @brief Field Stilt_Long value: I32(109)
static ::GlobalNamespace::SIUpgradeType const Stilt_Long;

/// @brief Field Stilt_Max_Length value: I32(105)
static ::GlobalNamespace::SIUpgradeType const Stilt_Max_Length;

/// @brief Field Stilt_Motorized value: I32(110)
static ::GlobalNamespace::SIUpgradeType const Stilt_Motorized;

/// @brief Field Stilt_Motorized_Triple value: I32(111)
static ::GlobalNamespace::SIUpgradeType const Stilt_Motorized_Triple;

/// @brief Field Stilt_Muscle_Fusion value: I32(107)
static ::GlobalNamespace::SIUpgradeType const Stilt_Muscle_Fusion;

/// @brief Field Stilt_Retract_Speed value: I32(104)
static ::GlobalNamespace::SIUpgradeType const Stilt_Retract_Speed;

/// @brief Field Stilt_Retractable value: I32(102)
static ::GlobalNamespace::SIUpgradeType const Stilt_Retractable;

/// @brief Field Stilt_Short value: I32(108)
static ::GlobalNamespace::SIUpgradeType const Stilt_Short;

/// @brief Field Stilt_Stun_Tip value: I32(106)
static ::GlobalNamespace::SIUpgradeType const Stilt_Stun_Tip;

/// @brief Field Stilt_Tag_Tip value: I32(101)
static ::GlobalNamespace::SIUpgradeType const Stilt_Tag_Tip;

/// @brief Field Stilt_Turkey_Coma value: I32(112)
static ::GlobalNamespace::SIUpgradeType const Stilt_Turkey_Coma;

/// @brief Field Stilt_Unlock value: I32(100)
static ::GlobalNamespace::SIUpgradeType const Stilt_Unlock;

/// @brief Field Tapteleport_Infinite_Use value: I32(505)
static ::GlobalNamespace::SIUpgradeType const Tapteleport_Infinite_Use;

/// @brief Field Tapteleport_Keep_Velocity value: I32(504)
static ::GlobalNamespace::SIUpgradeType const Tapteleport_Keep_Velocity;

/// @brief Field Tapteleport_Portal_Selection value: I32(503)
static ::GlobalNamespace::SIUpgradeType const Tapteleport_Portal_Selection;

/// @brief Field Tapteleport_Stealth value: I32(502)
static ::GlobalNamespace::SIUpgradeType const Tapteleport_Stealth;

/// @brief Field Tapteleport_Unlock value: I32(500)
static ::GlobalNamespace::SIUpgradeType const Tapteleport_Unlock;

/// @brief Field Tapteleport_Zone value: I32(501)
static ::GlobalNamespace::SIUpgradeType const Tapteleport_Zone;

/// @brief Field Tentacle_Charge_Rate value: I32(602)
static ::GlobalNamespace::SIUpgradeType const Tentacle_Charge_Rate;

/// @brief Field Tentacle_Crawler value: I32(604)
static ::GlobalNamespace::SIUpgradeType const Tentacle_Crawler;

/// @brief Field Tentacle_Efficiency value: I32(603)
static ::GlobalNamespace::SIUpgradeType const Tentacle_Efficiency;

/// @brief Field Tentacle_Power_Claw value: I32(601)
static ::GlobalNamespace::SIUpgradeType const Tentacle_Power_Claw;

/// @brief Field Tentacle_Strider value: I32(605)
static ::GlobalNamespace::SIUpgradeType const Tentacle_Strider;

/// @brief Field Tentacle_Unlock value: I32(600)
static ::GlobalNamespace::SIUpgradeType const Tentacle_Unlock;

/// @brief Field Thruster_Fuel_Grounding value: I32(9)
static ::GlobalNamespace::SIUpgradeType const Thruster_Fuel_Grounding;

/// @brief Field Thruster_Jet value: I32(1)
static ::GlobalNamespace::SIUpgradeType const Thruster_Jet;

/// @brief Field Thruster_Jet_Accel value: I32(4)
static ::GlobalNamespace::SIUpgradeType const Thruster_Jet_Accel;

/// @brief Field Thruster_Jet_Duration value: I32(3)
static ::GlobalNamespace::SIUpgradeType const Thruster_Jet_Duration;

/// @brief Field Thruster_Jet_Tag value: I32(7)
static ::GlobalNamespace::SIUpgradeType const Thruster_Jet_Tag;

/// @brief Field Thruster_Prop value: I32(2)
static ::GlobalNamespace::SIUpgradeType const Thruster_Prop;

/// @brief Field Thruster_Prop_Duration value: I32(5)
static ::GlobalNamespace::SIUpgradeType const Thruster_Prop_Duration;

/// @brief Field Thruster_Prop_Knockback value: I32(8)
static ::GlobalNamespace::SIUpgradeType const Thruster_Prop_Knockback;

/// @brief Field Thruster_Prop_Speed value: I32(6)
static ::GlobalNamespace::SIUpgradeType const Thruster_Prop_Speed;

/// @brief Field Thruster_Throttle_Control value: I32(10)
static ::GlobalNamespace::SIUpgradeType const Thruster_Throttle_Control;

/// @brief Field Thruster_Unlock value: I32(0)
static ::GlobalNamespace::SIUpgradeType const Thruster_Unlock;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{289};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIUpgradeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIUpgradeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
