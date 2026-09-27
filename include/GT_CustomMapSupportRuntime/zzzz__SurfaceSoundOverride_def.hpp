#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/SurfaceSoundOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceSoundOverride)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct SurfaceSoundOverride;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::SurfaceSoundOverride);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::SurfaceSoundOverride, "GT_CustomMapSupportRuntime", "SurfaceSoundOverride");
// Dependencies 
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.SurfaceSoundOverride
struct CORDL_TYPE SurfaceSoundOverride {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SurfaceSoundOverride_Unwrapped
enum struct __SurfaceSoundOverride_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_None = static_cast<int32_t>(0x1),
__E_pillowhandtap = static_cast<int32_t>(0x3),
__E_grassrockhandtap = static_cast<int32_t>(0x7),
__E_barkhandtap = static_cast<int32_t>(0x8),
__E_woodhandtap = static_cast<int32_t>(0x9),
__E_dirthandtap = static_cast<int32_t>(0xe),
__E_metalhandtap = static_cast<int32_t>(0x12),
__E_crystalhandtap = static_cast<int32_t>(0x14),
__E_leafcrunch = static_cast<int32_t>(0x1f),
__E_snowstep = static_cast<int32_t>(0x20),
__E_crystalhandtap_root_2octdown = static_cast<int32_t>(0x28),
__E_crystalhandtap_second_2octdown = static_cast<int32_t>(0x29),
__E_crystalhandtap_third_2octdown = static_cast<int32_t>(0x2a),
__E_crystalhandtap_fifth_2octdown = static_cast<int32_t>(0x2b),
__E_crystalhandtap_sixth_2octdown = static_cast<int32_t>(0x2c),
__E_crystalhandtap_root_1octdown = static_cast<int32_t>(0x2d),
__E_crystalhandtap_second_1octdown = static_cast<int32_t>(0x2e),
__E_crystalhandtap_third_1octdown = static_cast<int32_t>(0x2f),
__E_crystalhandtap_fifth_1octdown = static_cast<int32_t>(0x30),
__E_crystalhandtap_sixth_1octdown = static_cast<int32_t>(0x31),
__E_crystalhandtap_root = static_cast<int32_t>(0x32),
__E_crystalhandtap_root_second = static_cast<int32_t>(0x33),
__E_crystalhandtap_third = static_cast<int32_t>(0x34),
__E_crystalhandtap_fifth = static_cast<int32_t>(0x35),
__E_crystalhandtap_sixth = static_cast<int32_t>(0x36),
__E_umbrellaopen = static_cast<int32_t>(0x40),
__E_umbrellaclose = static_cast<int32_t>(0x41),
__E_keyboardclick = static_cast<int32_t>(0x42),
__E_buttonpress = static_cast<int32_t>(0x43),
__E_p2_racktom = static_cast<int32_t>(0x44),
__E_p1_snare = static_cast<int32_t>(0x45),
__E_p2_floor_tom_2 = static_cast<int32_t>(0x46),
__E_p2_kick = static_cast<int32_t>(0x47),
__E_p1_open_hat = static_cast<int32_t>(0x48),
__E_bongolowest = static_cast<int32_t>(0x49),
__E_bongohigh = static_cast<int32_t>(0x4a),
__E_squeak_squeeze = static_cast<int32_t>(0x4b),
__E_squeak_release = static_cast<int32_t>(0x4c),
__E_bonerattle = static_cast<int32_t>(0x4d),
__E_Tombstone_Surface_04 = static_cast<int32_t>(0x4e),
__E_cauldroninner = static_cast<int32_t>(0x4f),
__E_Cauldron_Surface_04 = static_cast<int32_t>(0x50),
__E_pumpkinhit = static_cast<int32_t>(0x51),
__E_Web_Surface_02 = static_cast<int32_t>(0x52),
__E_ShortTurkeyGobbleBQuiet = static_cast<int32_t>(0x53),
__E_foodpop = static_cast<int32_t>(0x54),
__E_bite1 = static_cast<int32_t>(0x55),
__E_bite2 = static_cast<int32_t>(0x56),
__E_bite3 = static_cast<int32_t>(0x57),
__E_HayImpactA = static_cast<int32_t>(0x58),
__E_ropecreak = static_cast<int32_t>(0x59),
__E_planthit = static_cast<int32_t>(0x5a),
__E_ToyFrogSound = static_cast<int32_t>(0x5b),
__E_VineHit1 = static_cast<int32_t>(0x5c),
__E_cloud2 = static_cast<int32_t>(0x5d),
__E_woodfloor2 = static_cast<int32_t>(0x5e),
__E_tire = static_cast<int32_t>(0x5f),
__E_fruitsquish_1 = static_cast<int32_t>(0x60),
__E_washingmachinehit = static_cast<int32_t>(0x62),
__E_LeafHit1 = static_cast<int32_t>(0x63),
__E_skyjunglewood2 = static_cast<int32_t>(0x64),
__E_skyjunglewood = static_cast<int32_t>(0x65),
__E_huthit = static_cast<int32_t>(0x69),
__E_fireflyjarhit = static_cast<int32_t>(0x6a),
__E_beanbag1 = static_cast<int32_t>(0x6b),
__E_beanbag2 = static_cast<int32_t>(0x6c),
__E_softhit1 = static_cast<int32_t>(0x6e),
__E_storewoodhit = static_cast<int32_t>(0x70),
__E_shelfhit = static_cast<int32_t>(0x72),
__E_roofhit = static_cast<int32_t>(0x73),
__E_cranehit = static_cast<int32_t>(0x74),
__E_rughit1 = static_cast<int32_t>(0x76),
__E_snowglobehit = static_cast<int32_t>(0x78),
__E_ornamenthit = static_cast<int32_t>(0x79),
__E_gifthit = static_cast<int32_t>(0x86),
__E_ToyGorillaElf_Squeeze = static_cast<int32_t>(0x8c),
__E_ToyGorillaElf_Release = static_cast<int32_t>(0x8d),
__E_metalhit1 = static_cast<int32_t>(0x92),
__E_metalhit2 = static_cast<int32_t>(0x95),
__E_PenguinSqueeze = static_cast<int32_t>(0x9a),
__E_PenguinRelease = static_cast<int32_t>(0x9b),
__E_WolfSqueeze = static_cast<int32_t>(0x9c),
__E_WolfRelease = static_cast<int32_t>(0x9d),
__E_BoxHit = static_cast<int32_t>(0xa0),
__E_DungeonPillowHit = static_cast<int32_t>(0xa4),
__E_BasementWoodWall = static_cast<int32_t>(0xad),
__E_BookHit = static_cast<int32_t>(0xb2),
__E_MonkeyeSqueeze = static_cast<int32_t>(0xbb),
__E_DragonSqueeze = static_cast<int32_t>(0xbc),
__E_ConcreteHit = static_cast<int32_t>(0xbd),
__E_BeeSqueeze = static_cast<int32_t>(0xbf),
__E_SpongeSquish = static_cast<int32_t>(0xc1),
__E_SpongeRelease_CC0_234872__mlsulli__sponge_being_squeezed_01 = static_cast<int32_t>(0xc2),
__E_CoyoteHowl_Quiet2 = static_cast<int32_t>(0xc3),
__E_DivingBoardBounce = static_cast<int32_t>(0xc4),
__E_SandTap = static_cast<int32_t>(0xc5),
__E_PalmTreeBark = static_cast<int32_t>(0xc6),
__E_SharkSqueeze = static_cast<int32_t>(0xc8),
__E_SharkRelease = static_cast<int32_t>(0xc9),
__E_TentBounce = static_cast<int32_t>(0xca),
__E_FireworkMortarInteraction_01__442359__toddcircle__metallic_slap = static_cast<int32_t>(0xcb),
__E_WaterBalloonGrab_04 = static_cast<int32_t>(0xcc),
__E_SlipAndSlideStep = static_cast<int32_t>(0xcd),
__E_DolphinSqueeze3 = static_cast<int32_t>(0xce),
__E_DolphinRelease3 = static_cast<int32_t>(0xcf),
__E_BugSprayShort = static_cast<int32_t>(0xd0),
__E_Trampoline1 = static_cast<int32_t>(0xd2),
__E_ButtonSplitDownQuiet = static_cast<int32_t>(0xd3),
__E_ButtonSplitUpQuiet = static_cast<int32_t>(0xd4),
__E_HugeCrystalHit = static_cast<int32_t>(0xd5),
__E_crystalhandtap_seventh = static_cast<int32_t>(0xd6),
__E_crystalhandtap_seventh_1octup = static_cast<int32_t>(0xd7),
__E_crystalhandtap_seventh_1octdown = static_cast<int32_t>(0xd8),
__E_crystalhandtap_seventh_2octdown = static_cast<int32_t>(0xd9),
__E_crystalhandtap_fourth = static_cast<int32_t>(0xda),
__E_crystalhandtap_fourth_1octdown = static_cast<int32_t>(0xdb),
__E_crystalhandtap_fourth_1octup = static_cast<int32_t>(0xdc),
__E_crystalhandtap_fourth_2octdown = static_cast<int32_t>(0xdd),
__E_EelSqueeze = static_cast<int32_t>(0xde),
__E_EelRelease = static_cast<int32_t>(0xdf),
__E_crystalhandtap_root_1octup = static_cast<int32_t>(0xe0),
__E_crystalhandtap_second_1octup = static_cast<int32_t>(0xe1),
__E_crystalhandtap_third_1octup = static_cast<int32_t>(0xe2),
__E_crystalhandtap_fifth_1octup = static_cast<int32_t>(0xe3),
__E_crystalhandtap_sixth_1octup = static_cast<int32_t>(0xe4),
__E_BottleSqueeze = static_cast<int32_t>(0xe5),
__E_LavaRockBucketGrab_01 = static_cast<int32_t>(0xe7),
__E_sfx_phoenix_caw_fiery_short = static_cast<int32_t>(0xe8),
__E_sfx_fan_open = static_cast<int32_t>(0xe9),
__E_sfx_fan_close = static_cast<int32_t>(0xea),
__E_CatSqueeze = static_cast<int32_t>(0xeb),
__E_CatRelease = static_cast<int32_t>(0xec),
__E_Squirrel_Squeezy_Toy_01_SFX = static_cast<int32_t>(0xed),
__E_Turkey_Baster_Cosmetic_01_SFX = static_cast<int32_t>(0xee),
__E_Turkey_Baster_Cosmetic_02_SFX = static_cast<int32_t>(0xef),
__E_SFX_Tin_Soldier_Monke_Toy_001 = static_cast<int32_t>(0xf2),
__E_SFX_Tin_Soldier_Monke_Toy_002 = static_cast<int32_t>(0xf3),
__E_GT_Tuning_Fork_001 = static_cast<int32_t>(0xf4),
__E_GT_Tuning_Fork_002 = static_cast<int32_t>(0xf5),
__E_GT_Tuning_Fork_Fail_006 = static_cast<int32_t>(0xf6),
__E_GT_Tuning_Fork_deepring = static_cast<int32_t>(0xf7),
__E_GT_Tuning_Fork_neutralring = static_cast<int32_t>(0xf8),
__E_HeartSqueeze = static_cast<int32_t>(0xfa),
__E_HeartBeat1 = static_cast<int32_t>(0xfb),
__E_Smoker_Bellows_Out_short01 = static_cast<int32_t>(0xfd),
__E_Smoker_Bellows_In_short02 = static_cast<int32_t>(0xfe),
__E_Race_Bell = static_cast<int32_t>(0xff),
__E_hand_tap_bounce_house_001 = static_cast<int32_t>(0x100),
__E_hand_tap_bounce_house_002 = static_cast<int32_t>(0x101),
__E_Purple_Step_01 = static_cast<int32_t>(0x102),
__E_GT_Gate_Fence_Closing_End = static_cast<int32_t>(0x103),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SurfaceSoundOverride_Unwrapped () const noexcept {
return static_cast<__SurfaceSoundOverride_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SurfaceSoundOverride() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SurfaceSoundOverride(int32_t  value__) noexcept;

/// @brief Field BasementWoodWall value: I32(173)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const BasementWoodWall;

/// @brief Field BeeSqueeze value: I32(191)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const BeeSqueeze;

/// @brief Field BookHit value: I32(178)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const BookHit;

/// @brief Field BottleSqueeze value: I32(229)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const BottleSqueeze;

/// @brief Field BoxHit value: I32(160)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const BoxHit;

/// @brief Field BugSprayShort value: I32(208)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const BugSprayShort;

/// @brief Field ButtonSplitDownQuiet value: I32(211)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const ButtonSplitDownQuiet;

/// @brief Field ButtonSplitUpQuiet value: I32(212)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const ButtonSplitUpQuiet;

/// @brief Field CatRelease value: I32(236)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const CatRelease;

/// @brief Field CatSqueeze value: I32(235)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const CatSqueeze;

/// @brief Field Cauldron_Surface_04 value: I32(80)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Cauldron_Surface_04;

/// @brief Field ConcreteHit value: I32(189)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const ConcreteHit;

/// @brief Field CoyoteHowl_Quiet2 value: I32(195)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const CoyoteHowl_Quiet2;

/// @brief Field Default value: I32(0)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Default;

/// @brief Field DivingBoardBounce value: I32(196)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const DivingBoardBounce;

/// @brief Field DolphinRelease3 value: I32(207)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const DolphinRelease3;

/// @brief Field DolphinSqueeze3 value: I32(206)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const DolphinSqueeze3;

/// @brief Field DragonSqueeze value: I32(188)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const DragonSqueeze;

/// @brief Field DungeonPillowHit value: I32(164)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const DungeonPillowHit;

/// @brief Field EelRelease value: I32(223)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const EelRelease;

/// @brief Field EelSqueeze value: I32(222)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const EelSqueeze;

/// @brief Field FireworkMortarInteraction_01__442359__toddcircle__metallic_slap value: I32(203)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const FireworkMortarInteraction_01__442359__toddcircle__metallic_slap;

/// @brief Field GT_Gate_Fence_Closing_End value: I32(259)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const GT_Gate_Fence_Closing_End;

/// @brief Field GT_Tuning_Fork_001 value: I32(244)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const GT_Tuning_Fork_001;

/// @brief Field GT_Tuning_Fork_002 value: I32(245)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const GT_Tuning_Fork_002;

/// @brief Field GT_Tuning_Fork_Fail_006 value: I32(246)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const GT_Tuning_Fork_Fail_006;

/// @brief Field GT_Tuning_Fork_deepring value: I32(247)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const GT_Tuning_Fork_deepring;

/// @brief Field GT_Tuning_Fork_neutralring value: I32(248)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const GT_Tuning_Fork_neutralring;

/// @brief Field HayImpactA value: I32(88)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const HayImpactA;

/// @brief Field HeartBeat1 value: I32(251)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const HeartBeat1;

/// @brief Field HeartSqueeze value: I32(250)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const HeartSqueeze;

/// @brief Field HugeCrystalHit value: I32(213)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const HugeCrystalHit;

/// @brief Field LavaRockBucketGrab_01 value: I32(231)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const LavaRockBucketGrab_01;

/// @brief Field LeafHit1 value: I32(99)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const LeafHit1;

/// @brief Field MonkeyeSqueeze value: I32(187)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const MonkeyeSqueeze;

/// @brief Field None value: I32(1)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const None;

/// @brief Field PalmTreeBark value: I32(198)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const PalmTreeBark;

/// @brief Field PenguinRelease value: I32(155)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const PenguinRelease;

/// @brief Field PenguinSqueeze value: I32(154)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const PenguinSqueeze;

/// @brief Field Purple_Step_01 value: I32(258)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Purple_Step_01;

/// @brief Field Race_Bell value: I32(255)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Race_Bell;

/// @brief Field SFX_Tin_Soldier_Monke_Toy_001 value: I32(242)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const SFX_Tin_Soldier_Monke_Toy_001;

/// @brief Field SFX_Tin_Soldier_Monke_Toy_002 value: I32(243)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const SFX_Tin_Soldier_Monke_Toy_002;

/// @brief Field SandTap value: I32(197)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const SandTap;

/// @brief Field SharkRelease value: I32(201)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const SharkRelease;

/// @brief Field SharkSqueeze value: I32(200)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const SharkSqueeze;

/// @brief Field ShortTurkeyGobbleBQuiet value: I32(83)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const ShortTurkeyGobbleBQuiet;

/// @brief Field SlipAndSlideStep value: I32(205)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const SlipAndSlideStep;

/// @brief Field Smoker_Bellows_In_short02 value: I32(254)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Smoker_Bellows_In_short02;

/// @brief Field Smoker_Bellows_Out_short01 value: I32(253)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Smoker_Bellows_Out_short01;

/// @brief Field SpongeRelease_CC0_234872__mlsulli__sponge_being_squeezed_01 value: I32(194)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const SpongeRelease_CC0_234872__mlsulli__sponge_being_squeezed_01;

/// @brief Field SpongeSquish value: I32(193)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const SpongeSquish;

/// @brief Field Squirrel_Squeezy_Toy_01_SFX value: I32(237)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Squirrel_Squeezy_Toy_01_SFX;

/// @brief Field TentBounce value: I32(202)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const TentBounce;

/// @brief Field Tombstone_Surface_04 value: I32(78)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Tombstone_Surface_04;

/// @brief Field ToyFrogSound value: I32(91)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const ToyFrogSound;

/// @brief Field ToyGorillaElf_Release value: I32(141)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const ToyGorillaElf_Release;

/// @brief Field ToyGorillaElf_Squeeze value: I32(140)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const ToyGorillaElf_Squeeze;

/// @brief Field Trampoline1 value: I32(210)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Trampoline1;

/// @brief Field Turkey_Baster_Cosmetic_01_SFX value: I32(238)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Turkey_Baster_Cosmetic_01_SFX;

/// @brief Field Turkey_Baster_Cosmetic_02_SFX value: I32(239)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Turkey_Baster_Cosmetic_02_SFX;

/// @brief Field VineHit1 value: I32(92)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const VineHit1;

/// @brief Field WaterBalloonGrab_04 value: I32(204)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const WaterBalloonGrab_04;

/// @brief Field Web_Surface_02 value: I32(82)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const Web_Surface_02;

/// @brief Field WolfRelease value: I32(157)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const WolfRelease;

/// @brief Field WolfSqueeze value: I32(156)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const WolfSqueeze;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field barkhandtap value: I32(8)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const barkhandtap;

/// @brief Field beanbag1 value: I32(107)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const beanbag1;

/// @brief Field beanbag2 value: I32(108)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const beanbag2;

/// @brief Field bite1 value: I32(85)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const bite1;

/// @brief Field bite2 value: I32(86)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const bite2;

/// @brief Field bite3 value: I32(87)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const bite3;

/// @brief Field bonerattle value: I32(77)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const bonerattle;

/// @brief Field bongohigh value: I32(74)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const bongohigh;

/// @brief Field bongolowest value: I32(73)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const bongolowest;

/// @brief Field buttonpress value: I32(67)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const buttonpress;

/// @brief Field cauldroninner value: I32(79)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const cauldroninner;

/// @brief Field cloud2 value: I32(93)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const cloud2;

/// @brief Field cranehit value: I32(116)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const cranehit;

/// @brief Field crystalhandtap value: I32(20)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap;

/// @brief Field crystalhandtap_fifth value: I32(53)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_fifth;

/// @brief Field crystalhandtap_fifth_1octdown value: I32(48)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_fifth_1octdown;

/// @brief Field crystalhandtap_fifth_1octup value: I32(227)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_fifth_1octup;

/// @brief Field crystalhandtap_fifth_2octdown value: I32(43)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_fifth_2octdown;

/// @brief Field crystalhandtap_fourth value: I32(218)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_fourth;

/// @brief Field crystalhandtap_fourth_1octdown value: I32(219)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_fourth_1octdown;

/// @brief Field crystalhandtap_fourth_1octup value: I32(220)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_fourth_1octup;

/// @brief Field crystalhandtap_fourth_2octdown value: I32(221)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_fourth_2octdown;

/// @brief Field crystalhandtap_root value: I32(50)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_root;

/// @brief Field crystalhandtap_root_1octdown value: I32(45)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_root_1octdown;

/// @brief Field crystalhandtap_root_1octup value: I32(224)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_root_1octup;

/// @brief Field crystalhandtap_root_2octdown value: I32(40)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_root_2octdown;

/// @brief Field crystalhandtap_root_second value: I32(51)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_root_second;

/// @brief Field crystalhandtap_second_1octdown value: I32(46)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_second_1octdown;

/// @brief Field crystalhandtap_second_1octup value: I32(225)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_second_1octup;

/// @brief Field crystalhandtap_second_2octdown value: I32(41)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_second_2octdown;

/// @brief Field crystalhandtap_seventh value: I32(214)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_seventh;

/// @brief Field crystalhandtap_seventh_1octdown value: I32(216)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_seventh_1octdown;

/// @brief Field crystalhandtap_seventh_1octup value: I32(215)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_seventh_1octup;

/// @brief Field crystalhandtap_seventh_2octdown value: I32(217)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_seventh_2octdown;

/// @brief Field crystalhandtap_sixth value: I32(54)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_sixth;

/// @brief Field crystalhandtap_sixth_1octdown value: I32(49)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_sixth_1octdown;

/// @brief Field crystalhandtap_sixth_1octup value: I32(228)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_sixth_1octup;

/// @brief Field crystalhandtap_sixth_2octdown value: I32(44)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_sixth_2octdown;

/// @brief Field crystalhandtap_third value: I32(52)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_third;

/// @brief Field crystalhandtap_third_1octdown value: I32(47)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_third_1octdown;

/// @brief Field crystalhandtap_third_1octup value: I32(226)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_third_1octup;

/// @brief Field crystalhandtap_third_2octdown value: I32(42)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const crystalhandtap_third_2octdown;

/// @brief Field dirthandtap value: I32(14)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const dirthandtap;

/// @brief Field fireflyjarhit value: I32(106)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const fireflyjarhit;

/// @brief Field foodpop value: I32(84)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const foodpop;

/// @brief Field fruitsquish_1 value: I32(96)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const fruitsquish_1;

/// @brief Field gifthit value: I32(134)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const gifthit;

/// @brief Field grassrockhandtap value: I32(7)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const grassrockhandtap;

/// @brief Field hand_tap_bounce_house_001 value: I32(256)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const hand_tap_bounce_house_001;

/// @brief Field hand_tap_bounce_house_002 value: I32(257)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const hand_tap_bounce_house_002;

/// @brief Field huthit value: I32(105)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const huthit;

/// @brief Field keyboardclick value: I32(66)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const keyboardclick;

/// @brief Field leafcrunch value: I32(31)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const leafcrunch;

/// @brief Field metalhandtap value: I32(18)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const metalhandtap;

/// @brief Field metalhit1 value: I32(146)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const metalhit1;

/// @brief Field metalhit2 value: I32(149)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const metalhit2;

/// @brief Field ornamenthit value: I32(121)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const ornamenthit;

/// @brief Field p1_open_hat value: I32(72)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const p1_open_hat;

/// @brief Field p1_snare value: I32(69)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const p1_snare;

/// @brief Field p2_floor_tom_2 value: I32(70)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const p2_floor_tom_2;

/// @brief Field p2_kick value: I32(71)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const p2_kick;

/// @brief Field p2_racktom value: I32(68)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const p2_racktom;

/// @brief Field pillowhandtap value: I32(3)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const pillowhandtap;

/// @brief Field planthit value: I32(90)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const planthit;

/// @brief Field pumpkinhit value: I32(81)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const pumpkinhit;

/// @brief Field roofhit value: I32(115)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const roofhit;

/// @brief Field ropecreak value: I32(89)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const ropecreak;

/// @brief Field rughit1 value: I32(118)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const rughit1;

/// @brief Field sfx_fan_close value: I32(234)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const sfx_fan_close;

/// @brief Field sfx_fan_open value: I32(233)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const sfx_fan_open;

/// @brief Field sfx_phoenix_caw_fiery_short value: I32(232)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const sfx_phoenix_caw_fiery_short;

/// @brief Field shelfhit value: I32(114)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const shelfhit;

/// @brief Field skyjunglewood value: I32(101)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const skyjunglewood;

/// @brief Field skyjunglewood2 value: I32(100)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const skyjunglewood2;

/// @brief Field snowglobehit value: I32(120)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const snowglobehit;

/// @brief Field snowstep value: I32(32)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const snowstep;

/// @brief Field softhit1 value: I32(110)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const softhit1;

/// @brief Field squeak_release value: I32(76)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const squeak_release;

/// @brief Field squeak_squeeze value: I32(75)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const squeak_squeeze;

/// @brief Field storewoodhit value: I32(112)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const storewoodhit;

/// @brief Field tire value: I32(95)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const tire;

/// @brief Field umbrellaclose value: I32(65)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const umbrellaclose;

/// @brief Field umbrellaopen value: I32(64)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const umbrellaopen;

/// @brief Field washingmachinehit value: I32(98)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const washingmachinehit;

/// @brief Field woodfloor2 value: I32(94)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const woodfloor2;

/// @brief Field woodhandtap value: I32(9)
static ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const woodhandtap;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceSoundOverride, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::SurfaceSoundOverride) == 0x4, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
