#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityTag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTag)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTag;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTag);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTag, "", "UnityTag");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityTag
struct CORDL_TYPE UnityTag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityTag_Unwrapped
enum struct __UnityTag_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_Untagged = static_cast<int32_t>(0x0),
__E_Respawn = static_cast<int32_t>(0x1),
__E_Finish = static_cast<int32_t>(0x2),
__E_EditorOnly = static_cast<int32_t>(0x3),
__E_MainCamera = static_cast<int32_t>(0x4),
__E_Player = static_cast<int32_t>(0x5),
__E_GameController = static_cast<int32_t>(0x6),
__E_SceneChanger = static_cast<int32_t>(0x7),
__E_PlayerOffset = static_cast<int32_t>(0x8),
__E_GorillaTagManager = static_cast<int32_t>(0x9),
__E_GorillaTagCollider = static_cast<int32_t>(0xa),
__E_GorillaPlayer = static_cast<int32_t>(0xb),
__E_GorillaObject = static_cast<int32_t>(0xc),
__E_GorillaGameManager = static_cast<int32_t>(0xd),
__E_GorillaCosmetic = static_cast<int32_t>(0xe),
__E_projectile = static_cast<int32_t>(0xf),
__E_FxTemporaire = static_cast<int32_t>(0x10),
__E_SlingshotProjectile = static_cast<int32_t>(0x11),
__E_SlingshotProjectileTrail = static_cast<int32_t>(0x12),
__E_SlingshotProjectilePlayerImpactFX = static_cast<int32_t>(0x13),
__E_SlingshotProjectileSurfaceImpactFX = static_cast<int32_t>(0x14),
__E_BalloonPopFX = static_cast<int32_t>(0x15),
__E_WorldShareableItem = static_cast<int32_t>(0x16),
__E_HornsSlingshotProjectile = static_cast<int32_t>(0x17),
__E_HornsSlingshotProjectileTrail = static_cast<int32_t>(0x18),
__E_HornsSlingshotProjectilePlayerImpactFX = static_cast<int32_t>(0x19),
__E_HornsSlingshotProjectileSurfaceImpactFX = static_cast<int32_t>(0x1a),
__E_FryingPan = static_cast<int32_t>(0x1b),
__E_LeafPileImpactFX = static_cast<int32_t>(0x1c),
__E_BalloonPopFx = static_cast<int32_t>(0x1d),
__E_CloudSlingshotProjectile = static_cast<int32_t>(0x1e),
__E_CloudSlingshotProjectileTrail = static_cast<int32_t>(0x1f),
__E_CloudSlingshotProjectilePlayerImpactFX = static_cast<int32_t>(0x20),
__E_CloudSlingshotProjectileSurfaceImpactFX = static_cast<int32_t>(0x21),
__E_SnowballProjectile = static_cast<int32_t>(0x22),
__E_SnowballProjectileImpactFX = static_cast<int32_t>(0x23),
__E_CupidBowProjectile = static_cast<int32_t>(0x24),
__E_CupidBowProjectileTrail = static_cast<int32_t>(0x25),
__E_CupidBowProjectileSurfaceImpactFX = static_cast<int32_t>(0x26),
__E_NoCrazyCheck = static_cast<int32_t>(0x27),
__E_IceSlingshotProjectile = static_cast<int32_t>(0x28),
__E_IceSlingshotProjectileSurfaceImpactFX = static_cast<int32_t>(0x29),
__E_IceSlingshotProjectileTrail = static_cast<int32_t>(0x2a),
__E_ElfBowProjectile = static_cast<int32_t>(0x2b),
__E_ElfBowProjectileSurfaceImpactFX = static_cast<int32_t>(0x2c),
__E_ElfBowProjectileTrail = static_cast<int32_t>(0x2d),
__E_RenderIfSmall = static_cast<int32_t>(0x2e),
__E_DeleteOnNonBetaBuild = static_cast<int32_t>(0x2f),
__E_DeleteOnNonDebugBuild = static_cast<int32_t>(0x30),
__E_FlagColoringCauldon = static_cast<int32_t>(0x31),
__E_WaterRippleEffect = static_cast<int32_t>(0x32),
__E_WaterSplashEffect = static_cast<int32_t>(0x33),
__E_FireworkMortarProjectile = static_cast<int32_t>(0x34),
__E_FireworkMortarProjectileImpactFX = static_cast<int32_t>(0x35),
__E_WaterBalloonProjectile = static_cast<int32_t>(0x36),
__E_WaterBalloonProjectileImpactFX = static_cast<int32_t>(0x37),
__E_PlayerHeadTrigger = static_cast<int32_t>(0x38),
__E_WizardStaff = static_cast<int32_t>(0x39),
__E_LurkerGhost = static_cast<int32_t>(0x3a),
__E_HauntedObject = static_cast<int32_t>(0x3b),
__E_WanderingGhost = static_cast<int32_t>(0x3c),
__E_LavaSurfaceRock = static_cast<int32_t>(0x3d),
__E_LavaRockProjectile = static_cast<int32_t>(0x3e),
__E_LavaRockProjectileImpactFX = static_cast<int32_t>(0x3f),
__E_MoltenSlingshotProjectile = static_cast<int32_t>(0x40),
__E_MoltenSlingshotProjectileTrail = static_cast<int32_t>(0x41),
__E_MoltenSlingshotProjectileSurfaceImpactFX = static_cast<int32_t>(0x42),
__E_MoltenSlingshotProjectilePlayerImpactFX = static_cast<int32_t>(0x43),
__E_SpiderBowProjectile = static_cast<int32_t>(0x44),
__E_SpiderBowProjectileTrail = static_cast<int32_t>(0x45),
__E_SpiderBowProjectileSurfaceImpactFX = static_cast<int32_t>(0x46),
__E_SpiderBowProjectilePlayerImpactFX = static_cast<int32_t>(0x47),
__E_ZoneRoot = static_cast<int32_t>(0x48),
__E_DontProcessMaterials = static_cast<int32_t>(0x49),
__E_OrnamentProjectileSurfaceImpactFX = static_cast<int32_t>(0x4a),
__E_BucketGiftCane = static_cast<int32_t>(0x4b),
__E_BucketGiftCoal = static_cast<int32_t>(0x4c),
__E_BucketGiftRoll = static_cast<int32_t>(0x4d),
__E_BucketGiftRound = static_cast<int32_t>(0x4e),
__E_BucketGiftSquare = static_cast<int32_t>(0x4f),
__E_OrnamentProjectile = static_cast<int32_t>(0x50),
__E_OrnamentShatterFX = static_cast<int32_t>(0x51),
__E_ScienceCandyProjectile = static_cast<int32_t>(0x52),
__E_ScienceCandyImpactFX = static_cast<int32_t>(0x53),
__E_PaperAirplaneProjectile = static_cast<int32_t>(0x54),
__E_DevilBowProjectile = static_cast<int32_t>(0x55),
__E_DevilBowProjectileTrail = static_cast<int32_t>(0x56),
__E_DevilBowProjectileSurfaceImpactFX = static_cast<int32_t>(0x57),
__E_DevilBowProjectilePlayerImpactFX = static_cast<int32_t>(0x58),
__E_FireFX = static_cast<int32_t>(0x59),
__E_FishFood = static_cast<int32_t>(0x5a),
__E_FishFoodImpactFX = static_cast<int32_t>(0x5b),
__E_LeafNinjaStarProjectile = static_cast<int32_t>(0x5c),
__E_LeafNinjaStarProjectileC1 = static_cast<int32_t>(0x5d),
__E_LeafNinjaStarProjectileC2 = static_cast<int32_t>(0x5e),
__E_SamuraiBowProjectile = static_cast<int32_t>(0x5f),
__E_SamuraiBowProjectileTrail = static_cast<int32_t>(0x60),
__E_SamuraiBowProjectileSurfaceImpactFX = static_cast<int32_t>(0x61),
__E_SamuraiBowProjectilePlayerImpactFX = static_cast<int32_t>(0x62),
__E_DragonSlingProjectile = static_cast<int32_t>(0x63),
__E_DragonSlingProjectileTrail = static_cast<int32_t>(0x64),
__E_DragonSlingProjectileSurfaceImpactFX = static_cast<int32_t>(0x65),
__E_DragonSlingProjectilePlayerImpactFX = static_cast<int32_t>(0x66),
__E_FireballProjectile = static_cast<int32_t>(0x67),
__E_StealthHandTapFX = static_cast<int32_t>(0x68),
__E_EnvPieceTree01 = static_cast<int32_t>(0x69),
__E_FxSnapPiecePlaced = static_cast<int32_t>(0x6a),
__E_FxSnapPieceDisconnected = static_cast<int32_t>(0x6b),
__E_FxSnapPieceGrabbed = static_cast<int32_t>(0x6c),
__E_FxSnapPieceLocationLock = static_cast<int32_t>(0x6d),
__E_CyberNinjaStarProjectile = static_cast<int32_t>(0x6e),
__E_RoomLight = static_cast<int32_t>(0x6f),
__E_SamplesInfoPanel = static_cast<int32_t>(0x70),
__E_GorillaHandLeft = static_cast<int32_t>(0x71),
__E_GorillaHandRight = static_cast<int32_t>(0x72),
__E_GorillaHandSocket = static_cast<int32_t>(0x73),
__E_PlayingCardProjectile = static_cast<int32_t>(0x74),
__E_RottenPumpkinProjectile = static_cast<int32_t>(0x75),
__E_FxSnapPieceRecycle = static_cast<int32_t>(0x76),
__E_FxSnapPieceDispenser = static_cast<int32_t>(0x77),
__E_AppleProjectile = static_cast<int32_t>(0x78),
__E_AppleProjectileSurfaceImpactFX = static_cast<int32_t>(0x79),
__E_RecyclerForceVolumeFX = static_cast<int32_t>(0x7a),
__E_FxSnapPieceTooHeavy = static_cast<int32_t>(0x7b),
__E_FxBuilderPrivatePlotClaimed = static_cast<int32_t>(0x7c),
__E_TrickTreatCandy = static_cast<int32_t>(0x7d),
__E_TrickTreatEyeball = static_cast<int32_t>(0x7e),
__E_TrickTreatBat = static_cast<int32_t>(0x7f),
__E_TrickTreatBomb = static_cast<int32_t>(0x80),
__E_TrickTreatSurfaceImpact = static_cast<int32_t>(0x81),
__E_TrickTreatBatImpact = static_cast<int32_t>(0x82),
__E_TrickTreatBombImpact = static_cast<int32_t>(0x83),
__E_GuardianSlapFX = static_cast<int32_t>(0x84),
__E_GuardianSlamFX = static_cast<int32_t>(0x85),
__E_GuardianIdolLandedFX = static_cast<int32_t>(0x86),
__E_GuardianIdolFallFX = static_cast<int32_t>(0x87),
__E_GuardianIdolTappedFX = static_cast<int32_t>(0x88),
__E_VotingRockProjectile = static_cast<int32_t>(0x89),
__E_LeafPileImpactFXMedium = static_cast<int32_t>(0x8a),
__E_LeafPileImpactFXSmall = static_cast<int32_t>(0x8b),
__E_WoodenSword = static_cast<int32_t>(0x8c),
__E_WoodenShield = static_cast<int32_t>(0x8d),
__E_FxBuilderShrink = static_cast<int32_t>(0x8e),
__E_FxBuilderGrow = static_cast<int32_t>(0x8f),
__E_FxSnapPieceWreathJump = static_cast<int32_t>(0x90),
__E_ElfLauncherElf = static_cast<int32_t>(0x91),
__E_RubberBandCar = static_cast<int32_t>(0x92),
__E_SnowPileImpactFX = static_cast<int32_t>(0x93),
__E_FirecrackersProjectile = static_cast<int32_t>(0x94),
__E_PaperAirplaneSquareProjectile = static_cast<int32_t>(0x95),
__E_SmokeBombProjectile = static_cast<int32_t>(0x96),
__E_ThrowableHeartProjectile = static_cast<int32_t>(0x97),
__E_SunFlowers = static_cast<int32_t>(0x98),
__E_RobotCannonProjectile = static_cast<int32_t>(0x99),
__E_RobotCannonProjectileImpact = static_cast<int32_t>(0x9a),
__E_SmokeBombExplosionEffect = static_cast<int32_t>(0x9b),
__E_FireCrackerExplosionEffect = static_cast<int32_t>(0x9c),
__E_GorillaMouth = static_cast<int32_t>(0x9d),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityTag_Unwrapped () const noexcept {
return static_cast<__UnityTag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityTag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityTag(int32_t  value__) noexcept;

/// @brief Field AppleProjectile value: I32(120)
static ::GlobalNamespace::UnityTag const AppleProjectile;

/// @brief Field AppleProjectileSurfaceImpactFX value: I32(121)
static ::GlobalNamespace::UnityTag const AppleProjectileSurfaceImpactFX;

/// @brief Field BalloonPopFX value: I32(21)
static ::GlobalNamespace::UnityTag const BalloonPopFX;

/// @brief Field BalloonPopFx value: I32(29)
static ::GlobalNamespace::UnityTag const BalloonPopFx;

/// @brief Field BucketGiftCane value: I32(75)
static ::GlobalNamespace::UnityTag const BucketGiftCane;

/// @brief Field BucketGiftCoal value: I32(76)
static ::GlobalNamespace::UnityTag const BucketGiftCoal;

/// @brief Field BucketGiftRoll value: I32(77)
static ::GlobalNamespace::UnityTag const BucketGiftRoll;

/// @brief Field BucketGiftRound value: I32(78)
static ::GlobalNamespace::UnityTag const BucketGiftRound;

/// @brief Field BucketGiftSquare value: I32(79)
static ::GlobalNamespace::UnityTag const BucketGiftSquare;

/// @brief Field CloudSlingshotProjectile value: I32(30)
static ::GlobalNamespace::UnityTag const CloudSlingshotProjectile;

/// @brief Field CloudSlingshotProjectilePlayerImpactFX value: I32(32)
static ::GlobalNamespace::UnityTag const CloudSlingshotProjectilePlayerImpactFX;

/// @brief Field CloudSlingshotProjectileSurfaceImpactFX value: I32(33)
static ::GlobalNamespace::UnityTag const CloudSlingshotProjectileSurfaceImpactFX;

/// @brief Field CloudSlingshotProjectileTrail value: I32(31)
static ::GlobalNamespace::UnityTag const CloudSlingshotProjectileTrail;

/// @brief Field CupidBowProjectile value: I32(36)
static ::GlobalNamespace::UnityTag const CupidBowProjectile;

/// @brief Field CupidBowProjectileSurfaceImpactFX value: I32(38)
static ::GlobalNamespace::UnityTag const CupidBowProjectileSurfaceImpactFX;

/// @brief Field CupidBowProjectileTrail value: I32(37)
static ::GlobalNamespace::UnityTag const CupidBowProjectileTrail;

/// @brief Field CyberNinjaStarProjectile value: I32(110)
static ::GlobalNamespace::UnityTag const CyberNinjaStarProjectile;

/// @brief Field DeleteOnNonBetaBuild value: I32(47)
static ::GlobalNamespace::UnityTag const DeleteOnNonBetaBuild;

/// @brief Field DeleteOnNonDebugBuild value: I32(48)
static ::GlobalNamespace::UnityTag const DeleteOnNonDebugBuild;

/// @brief Field DevilBowProjectile value: I32(85)
static ::GlobalNamespace::UnityTag const DevilBowProjectile;

/// @brief Field DevilBowProjectilePlayerImpactFX value: I32(88)
static ::GlobalNamespace::UnityTag const DevilBowProjectilePlayerImpactFX;

/// @brief Field DevilBowProjectileSurfaceImpactFX value: I32(87)
static ::GlobalNamespace::UnityTag const DevilBowProjectileSurfaceImpactFX;

/// @brief Field DevilBowProjectileTrail value: I32(86)
static ::GlobalNamespace::UnityTag const DevilBowProjectileTrail;

/// @brief Field DontProcessMaterials value: I32(73)
static ::GlobalNamespace::UnityTag const DontProcessMaterials;

/// @brief Field DragonSlingProjectile value: I32(99)
static ::GlobalNamespace::UnityTag const DragonSlingProjectile;

/// @brief Field DragonSlingProjectilePlayerImpactFX value: I32(102)
static ::GlobalNamespace::UnityTag const DragonSlingProjectilePlayerImpactFX;

/// @brief Field DragonSlingProjectileSurfaceImpactFX value: I32(101)
static ::GlobalNamespace::UnityTag const DragonSlingProjectileSurfaceImpactFX;

/// @brief Field DragonSlingProjectileTrail value: I32(100)
static ::GlobalNamespace::UnityTag const DragonSlingProjectileTrail;

/// @brief Field EditorOnly value: I32(3)
static ::GlobalNamespace::UnityTag const EditorOnly;

/// @brief Field ElfBowProjectile value: I32(43)
static ::GlobalNamespace::UnityTag const ElfBowProjectile;

/// @brief Field ElfBowProjectileSurfaceImpactFX value: I32(44)
static ::GlobalNamespace::UnityTag const ElfBowProjectileSurfaceImpactFX;

/// @brief Field ElfBowProjectileTrail value: I32(45)
static ::GlobalNamespace::UnityTag const ElfBowProjectileTrail;

/// @brief Field ElfLauncherElf value: I32(145)
static ::GlobalNamespace::UnityTag const ElfLauncherElf;

/// @brief Field EnvPieceTree01 value: I32(105)
static ::GlobalNamespace::UnityTag const EnvPieceTree01;

/// @brief Field Finish value: I32(2)
static ::GlobalNamespace::UnityTag const Finish;

/// @brief Field FireCrackerExplosionEffect value: I32(156)
static ::GlobalNamespace::UnityTag const FireCrackerExplosionEffect;

/// @brief Field FireFX value: I32(89)
static ::GlobalNamespace::UnityTag const FireFX;

/// @brief Field FireballProjectile value: I32(103)
static ::GlobalNamespace::UnityTag const FireballProjectile;

/// @brief Field FirecrackersProjectile value: I32(148)
static ::GlobalNamespace::UnityTag const FirecrackersProjectile;

/// @brief Field FireworkMortarProjectile value: I32(52)
static ::GlobalNamespace::UnityTag const FireworkMortarProjectile;

/// @brief Field FireworkMortarProjectileImpactFX value: I32(53)
static ::GlobalNamespace::UnityTag const FireworkMortarProjectileImpactFX;

/// @brief Field FishFood value: I32(90)
static ::GlobalNamespace::UnityTag const FishFood;

/// @brief Field FishFoodImpactFX value: I32(91)
static ::GlobalNamespace::UnityTag const FishFoodImpactFX;

/// @brief Field FlagColoringCauldon value: I32(49)
static ::GlobalNamespace::UnityTag const FlagColoringCauldon;

/// @brief Field FryingPan value: I32(27)
static ::GlobalNamespace::UnityTag const FryingPan;

/// @brief Field FxBuilderGrow value: I32(143)
static ::GlobalNamespace::UnityTag const FxBuilderGrow;

/// @brief Field FxBuilderPrivatePlotClaimed value: I32(124)
static ::GlobalNamespace::UnityTag const FxBuilderPrivatePlotClaimed;

/// @brief Field FxBuilderShrink value: I32(142)
static ::GlobalNamespace::UnityTag const FxBuilderShrink;

/// @brief Field FxSnapPieceDisconnected value: I32(107)
static ::GlobalNamespace::UnityTag const FxSnapPieceDisconnected;

/// @brief Field FxSnapPieceDispenser value: I32(119)
static ::GlobalNamespace::UnityTag const FxSnapPieceDispenser;

/// @brief Field FxSnapPieceGrabbed value: I32(108)
static ::GlobalNamespace::UnityTag const FxSnapPieceGrabbed;

/// @brief Field FxSnapPieceLocationLock value: I32(109)
static ::GlobalNamespace::UnityTag const FxSnapPieceLocationLock;

/// @brief Field FxSnapPiecePlaced value: I32(106)
static ::GlobalNamespace::UnityTag const FxSnapPiecePlaced;

/// @brief Field FxSnapPieceRecycle value: I32(118)
static ::GlobalNamespace::UnityTag const FxSnapPieceRecycle;

/// @brief Field FxSnapPieceTooHeavy value: I32(123)
static ::GlobalNamespace::UnityTag const FxSnapPieceTooHeavy;

/// @brief Field FxSnapPieceWreathJump value: I32(144)
static ::GlobalNamespace::UnityTag const FxSnapPieceWreathJump;

/// @brief Field FxTemporaire value: I32(16)
static ::GlobalNamespace::UnityTag const FxTemporaire;

/// @brief Field GameController value: I32(6)
static ::GlobalNamespace::UnityTag const GameController;

/// @brief Field GorillaCosmetic value: I32(14)
static ::GlobalNamespace::UnityTag const GorillaCosmetic;

/// @brief Field GorillaGameManager value: I32(13)
static ::GlobalNamespace::UnityTag const GorillaGameManager;

/// @brief Field GorillaHandLeft value: I32(113)
static ::GlobalNamespace::UnityTag const GorillaHandLeft;

/// @brief Field GorillaHandRight value: I32(114)
static ::GlobalNamespace::UnityTag const GorillaHandRight;

/// @brief Field GorillaHandSocket value: I32(115)
static ::GlobalNamespace::UnityTag const GorillaHandSocket;

/// @brief Field GorillaMouth value: I32(157)
static ::GlobalNamespace::UnityTag const GorillaMouth;

/// @brief Field GorillaObject value: I32(12)
static ::GlobalNamespace::UnityTag const GorillaObject;

/// @brief Field GorillaPlayer value: I32(11)
static ::GlobalNamespace::UnityTag const GorillaPlayer;

/// @brief Field GorillaTagCollider value: I32(10)
static ::GlobalNamespace::UnityTag const GorillaTagCollider;

/// @brief Field GorillaTagManager value: I32(9)
static ::GlobalNamespace::UnityTag const GorillaTagManager;

/// @brief Field GuardianIdolFallFX value: I32(135)
static ::GlobalNamespace::UnityTag const GuardianIdolFallFX;

/// @brief Field GuardianIdolLandedFX value: I32(134)
static ::GlobalNamespace::UnityTag const GuardianIdolLandedFX;

/// @brief Field GuardianIdolTappedFX value: I32(136)
static ::GlobalNamespace::UnityTag const GuardianIdolTappedFX;

/// @brief Field GuardianSlamFX value: I32(133)
static ::GlobalNamespace::UnityTag const GuardianSlamFX;

/// @brief Field GuardianSlapFX value: I32(132)
static ::GlobalNamespace::UnityTag const GuardianSlapFX;

/// @brief Field HauntedObject value: I32(59)
static ::GlobalNamespace::UnityTag const HauntedObject;

/// @brief Field HornsSlingshotProjectile value: I32(23)
static ::GlobalNamespace::UnityTag const HornsSlingshotProjectile;

/// @brief Field HornsSlingshotProjectilePlayerImpactFX value: I32(25)
static ::GlobalNamespace::UnityTag const HornsSlingshotProjectilePlayerImpactFX;

/// @brief Field HornsSlingshotProjectileSurfaceImpactFX value: I32(26)
static ::GlobalNamespace::UnityTag const HornsSlingshotProjectileSurfaceImpactFX;

/// @brief Field HornsSlingshotProjectileTrail value: I32(24)
static ::GlobalNamespace::UnityTag const HornsSlingshotProjectileTrail;

/// @brief Field IceSlingshotProjectile value: I32(40)
static ::GlobalNamespace::UnityTag const IceSlingshotProjectile;

/// @brief Field IceSlingshotProjectileSurfaceImpactFX value: I32(41)
static ::GlobalNamespace::UnityTag const IceSlingshotProjectileSurfaceImpactFX;

/// @brief Field IceSlingshotProjectileTrail value: I32(42)
static ::GlobalNamespace::UnityTag const IceSlingshotProjectileTrail;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::UnityTag const Invalid;

/// @brief Field LavaRockProjectile value: I32(62)
static ::GlobalNamespace::UnityTag const LavaRockProjectile;

/// @brief Field LavaRockProjectileImpactFX value: I32(63)
static ::GlobalNamespace::UnityTag const LavaRockProjectileImpactFX;

/// @brief Field LavaSurfaceRock value: I32(61)
static ::GlobalNamespace::UnityTag const LavaSurfaceRock;

/// @brief Field LeafNinjaStarProjectile value: I32(92)
static ::GlobalNamespace::UnityTag const LeafNinjaStarProjectile;

/// @brief Field LeafNinjaStarProjectileC1 value: I32(93)
static ::GlobalNamespace::UnityTag const LeafNinjaStarProjectileC1;

/// @brief Field LeafNinjaStarProjectileC2 value: I32(94)
static ::GlobalNamespace::UnityTag const LeafNinjaStarProjectileC2;

/// @brief Field LeafPileImpactFX value: I32(28)
static ::GlobalNamespace::UnityTag const LeafPileImpactFX;

/// @brief Field LeafPileImpactFXMedium value: I32(138)
static ::GlobalNamespace::UnityTag const LeafPileImpactFXMedium;

/// @brief Field LeafPileImpactFXSmall value: I32(139)
static ::GlobalNamespace::UnityTag const LeafPileImpactFXSmall;

/// @brief Field LurkerGhost value: I32(58)
static ::GlobalNamespace::UnityTag const LurkerGhost;

/// @brief Field MainCamera value: I32(4)
static ::GlobalNamespace::UnityTag const MainCamera;

/// @brief Field MoltenSlingshotProjectile value: I32(64)
static ::GlobalNamespace::UnityTag const MoltenSlingshotProjectile;

/// @brief Field MoltenSlingshotProjectilePlayerImpactFX value: I32(67)
static ::GlobalNamespace::UnityTag const MoltenSlingshotProjectilePlayerImpactFX;

/// @brief Field MoltenSlingshotProjectileSurfaceImpactFX value: I32(66)
static ::GlobalNamespace::UnityTag const MoltenSlingshotProjectileSurfaceImpactFX;

/// @brief Field MoltenSlingshotProjectileTrail value: I32(65)
static ::GlobalNamespace::UnityTag const MoltenSlingshotProjectileTrail;

/// @brief Field NoCrazyCheck value: I32(39)
static ::GlobalNamespace::UnityTag const NoCrazyCheck;

/// @brief Field OrnamentProjectile value: I32(80)
static ::GlobalNamespace::UnityTag const OrnamentProjectile;

/// @brief Field OrnamentProjectileSurfaceImpactFX value: I32(74)
static ::GlobalNamespace::UnityTag const OrnamentProjectileSurfaceImpactFX;

/// @brief Field OrnamentShatterFX value: I32(81)
static ::GlobalNamespace::UnityTag const OrnamentShatterFX;

/// @brief Field PaperAirplaneProjectile value: I32(84)
static ::GlobalNamespace::UnityTag const PaperAirplaneProjectile;

/// @brief Field PaperAirplaneSquareProjectile value: I32(149)
static ::GlobalNamespace::UnityTag const PaperAirplaneSquareProjectile;

/// @brief Field Player value: I32(5)
static ::GlobalNamespace::UnityTag const Player;

/// @brief Field PlayerHeadTrigger value: I32(56)
static ::GlobalNamespace::UnityTag const PlayerHeadTrigger;

/// @brief Field PlayerOffset value: I32(8)
static ::GlobalNamespace::UnityTag const PlayerOffset;

/// @brief Field PlayingCardProjectile value: I32(116)
static ::GlobalNamespace::UnityTag const PlayingCardProjectile;

/// @brief Field RecyclerForceVolumeFX value: I32(122)
static ::GlobalNamespace::UnityTag const RecyclerForceVolumeFX;

/// @brief Field RenderIfSmall value: I32(46)
static ::GlobalNamespace::UnityTag const RenderIfSmall;

/// @brief Field Respawn value: I32(1)
static ::GlobalNamespace::UnityTag const Respawn;

/// @brief Field RobotCannonProjectile value: I32(153)
static ::GlobalNamespace::UnityTag const RobotCannonProjectile;

/// @brief Field RobotCannonProjectileImpact value: I32(154)
static ::GlobalNamespace::UnityTag const RobotCannonProjectileImpact;

/// @brief Field RoomLight value: I32(111)
static ::GlobalNamespace::UnityTag const RoomLight;

/// @brief Field RottenPumpkinProjectile value: I32(117)
static ::GlobalNamespace::UnityTag const RottenPumpkinProjectile;

/// @brief Field RubberBandCar value: I32(146)
static ::GlobalNamespace::UnityTag const RubberBandCar;

/// @brief Field SamplesInfoPanel value: I32(112)
static ::GlobalNamespace::UnityTag const SamplesInfoPanel;

/// @brief Field SamuraiBowProjectile value: I32(95)
static ::GlobalNamespace::UnityTag const SamuraiBowProjectile;

/// @brief Field SamuraiBowProjectilePlayerImpactFX value: I32(98)
static ::GlobalNamespace::UnityTag const SamuraiBowProjectilePlayerImpactFX;

/// @brief Field SamuraiBowProjectileSurfaceImpactFX value: I32(97)
static ::GlobalNamespace::UnityTag const SamuraiBowProjectileSurfaceImpactFX;

/// @brief Field SamuraiBowProjectileTrail value: I32(96)
static ::GlobalNamespace::UnityTag const SamuraiBowProjectileTrail;

/// @brief Field SceneChanger value: I32(7)
static ::GlobalNamespace::UnityTag const SceneChanger;

/// @brief Field ScienceCandyImpactFX value: I32(83)
static ::GlobalNamespace::UnityTag const ScienceCandyImpactFX;

/// @brief Field ScienceCandyProjectile value: I32(82)
static ::GlobalNamespace::UnityTag const ScienceCandyProjectile;

/// @brief Field SlingshotProjectile value: I32(17)
static ::GlobalNamespace::UnityTag const SlingshotProjectile;

/// @brief Field SlingshotProjectilePlayerImpactFX value: I32(19)
static ::GlobalNamespace::UnityTag const SlingshotProjectilePlayerImpactFX;

/// @brief Field SlingshotProjectileSurfaceImpactFX value: I32(20)
static ::GlobalNamespace::UnityTag const SlingshotProjectileSurfaceImpactFX;

/// @brief Field SlingshotProjectileTrail value: I32(18)
static ::GlobalNamespace::UnityTag const SlingshotProjectileTrail;

/// @brief Field SmokeBombExplosionEffect value: I32(155)
static ::GlobalNamespace::UnityTag const SmokeBombExplosionEffect;

/// @brief Field SmokeBombProjectile value: I32(150)
static ::GlobalNamespace::UnityTag const SmokeBombProjectile;

/// @brief Field SnowPileImpactFX value: I32(147)
static ::GlobalNamespace::UnityTag const SnowPileImpactFX;

/// @brief Field SnowballProjectile value: I32(34)
static ::GlobalNamespace::UnityTag const SnowballProjectile;

/// @brief Field SnowballProjectileImpactFX value: I32(35)
static ::GlobalNamespace::UnityTag const SnowballProjectileImpactFX;

/// @brief Field SpiderBowProjectile value: I32(68)
static ::GlobalNamespace::UnityTag const SpiderBowProjectile;

/// @brief Field SpiderBowProjectilePlayerImpactFX value: I32(71)
static ::GlobalNamespace::UnityTag const SpiderBowProjectilePlayerImpactFX;

/// @brief Field SpiderBowProjectileSurfaceImpactFX value: I32(70)
static ::GlobalNamespace::UnityTag const SpiderBowProjectileSurfaceImpactFX;

/// @brief Field SpiderBowProjectileTrail value: I32(69)
static ::GlobalNamespace::UnityTag const SpiderBowProjectileTrail;

/// @brief Field StealthHandTapFX value: I32(104)
static ::GlobalNamespace::UnityTag const StealthHandTapFX;

/// @brief Field SunFlowers value: I32(152)
static ::GlobalNamespace::UnityTag const SunFlowers;

/// @brief Field ThrowableHeartProjectile value: I32(151)
static ::GlobalNamespace::UnityTag const ThrowableHeartProjectile;

/// @brief Field TrickTreatBat value: I32(127)
static ::GlobalNamespace::UnityTag const TrickTreatBat;

/// @brief Field TrickTreatBatImpact value: I32(130)
static ::GlobalNamespace::UnityTag const TrickTreatBatImpact;

/// @brief Field TrickTreatBomb value: I32(128)
static ::GlobalNamespace::UnityTag const TrickTreatBomb;

/// @brief Field TrickTreatBombImpact value: I32(131)
static ::GlobalNamespace::UnityTag const TrickTreatBombImpact;

/// @brief Field TrickTreatCandy value: I32(125)
static ::GlobalNamespace::UnityTag const TrickTreatCandy;

/// @brief Field TrickTreatEyeball value: I32(126)
static ::GlobalNamespace::UnityTag const TrickTreatEyeball;

/// @brief Field TrickTreatSurfaceImpact value: I32(129)
static ::GlobalNamespace::UnityTag const TrickTreatSurfaceImpact;

/// @brief Field Untagged value: I32(0)
static ::GlobalNamespace::UnityTag const Untagged;

/// @brief Field VotingRockProjectile value: I32(137)
static ::GlobalNamespace::UnityTag const VotingRockProjectile;

/// @brief Field WanderingGhost value: I32(60)
static ::GlobalNamespace::UnityTag const WanderingGhost;

/// @brief Field WaterBalloonProjectile value: I32(54)
static ::GlobalNamespace::UnityTag const WaterBalloonProjectile;

/// @brief Field WaterBalloonProjectileImpactFX value: I32(55)
static ::GlobalNamespace::UnityTag const WaterBalloonProjectileImpactFX;

/// @brief Field WaterRippleEffect value: I32(50)
static ::GlobalNamespace::UnityTag const WaterRippleEffect;

/// @brief Field WaterSplashEffect value: I32(51)
static ::GlobalNamespace::UnityTag const WaterSplashEffect;

/// @brief Field WizardStaff value: I32(57)
static ::GlobalNamespace::UnityTag const WizardStaff;

/// @brief Field WoodenShield value: I32(141)
static ::GlobalNamespace::UnityTag const WoodenShield;

/// @brief Field WoodenSword value: I32(140)
static ::GlobalNamespace::UnityTag const WoodenSword;

/// @brief Field WorldShareableItem value: I32(22)
static ::GlobalNamespace::UnityTag const WorldShareableItem;

/// @brief Field ZoneRoot value: I32(72)
static ::GlobalNamespace::UnityTag const ZoneRoot;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{946};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field projectile value: I32(15)
static ::GlobalNamespace::UnityTag const projectile;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityTag, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityTag) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
