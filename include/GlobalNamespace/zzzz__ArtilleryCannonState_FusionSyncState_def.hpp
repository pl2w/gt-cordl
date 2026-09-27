#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCannonState_FusionSyncState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArtilleryCannonState_FusionSyncState)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace GlobalNamespace {
struct ArtilleryCannonState_FusionSyncState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ArtilleryCannonState_FusionSyncState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArtilleryCannonState_FusionSyncState, "", "ArtilleryCannonState/FusionSyncState");
// [NetworkStructWeaved(8)]
// Dependencies Fusion.NetworkBool
namespace GlobalNamespace {
// Is value type: true
// CS Name: ArtilleryCannonState/FusionSyncState
#pragma pack(push, 0)
struct CORDL_TYPE ArtilleryCannonState_FusionSyncState {
public:
// Declarations
/// @brief Field pitch, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) float_t  pitch;

/// @brief Field pitchCrankAngle, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchCrankAngle, put=__cordl_internal_set_pitchCrankAngle)) float_t  pitchCrankAngle;

/// @brief Field pitchHolderActorNr, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchHolderActorNr, put=__cordl_internal_set_pitchHolderActorNr)) int32_t  pitchHolderActorNr;

/// @brief Field pitchIsLeftHand, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchIsLeftHand, put=__cordl_internal_set_pitchIsLeftHand)) ::Fusion::NetworkBool  pitchIsLeftHand;

/// @brief Field yaw, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_yaw, put=__cordl_internal_set_yaw)) float_t  yaw;

/// @brief Field yawCrankAngle, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_yawCrankAngle, put=__cordl_internal_set_yawCrankAngle)) float_t  yawCrankAngle;

/// @brief Field yawHolderActorNr, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_yawHolderActorNr, put=__cordl_internal_set_yawHolderActorNr)) int32_t  yawHolderActorNr;

/// @brief Field yawIsLeftHand, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_yawIsLeftHand, put=__cordl_internal_set_yawIsLeftHand)) ::Fusion::NetworkBool  yawIsLeftHand;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr float_t const& __cordl_internal_get_pitch() const;

constexpr float_t& __cordl_internal_get_pitch() ;

constexpr float_t const& __cordl_internal_get_pitchCrankAngle() const;

constexpr float_t& __cordl_internal_get_pitchCrankAngle() ;

constexpr int32_t const& __cordl_internal_get_pitchHolderActorNr() const;

constexpr int32_t& __cordl_internal_get_pitchHolderActorNr() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_pitchIsLeftHand() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_pitchIsLeftHand() ;

constexpr float_t const& __cordl_internal_get_yaw() const;

constexpr float_t& __cordl_internal_get_yaw() ;

constexpr float_t const& __cordl_internal_get_yawCrankAngle() const;

constexpr float_t& __cordl_internal_get_yawCrankAngle() ;

constexpr int32_t const& __cordl_internal_get_yawHolderActorNr() const;

constexpr int32_t& __cordl_internal_get_yawHolderActorNr() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_yawIsLeftHand() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_yawIsLeftHand() ;

constexpr void __cordl_internal_set_pitch(float_t  value) ;

constexpr void __cordl_internal_set_pitchCrankAngle(float_t  value) ;

constexpr void __cordl_internal_set_pitchHolderActorNr(int32_t  value) ;

constexpr void __cordl_internal_set_pitchIsLeftHand(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set_yaw(float_t  value) ;

constexpr void __cordl_internal_set_yawCrankAngle(float_t  value) ;

constexpr void __cordl_internal_set_yawHolderActorNr(int32_t  value) ;

constexpr void __cordl_internal_set_yawIsLeftHand(::Fusion::NetworkBool  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr ArtilleryCannonState_FusionSyncState() ;

// Ctor Parameters [CppParam { name: "pitch", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "yaw", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pitchHolderActorNr", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pitchIsLeftHand", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "pitchCrankAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "yawHolderActorNr", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "yawIsLeftHand", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }, CppParam { name: "yawCrankAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ArtilleryCannonState_FusionSyncState(float_t  pitch, float_t  yaw, int32_t  pitchHolderActorNr, ::Fusion::NetworkBool  pitchIsLeftHand, float_t  pitchCrankAngle, int32_t  yawHolderActorNr, ::Fusion::NetworkBool  yawIsLeftHand, float_t  yawCrankAngle) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pitch_padding[0x0];
/// @brief Field pitch, offset: 0x0, size: 0x4, def value: None
 float_t  ___pitch;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pitch_padding_forAlignment[0x0];
/// @brief Field pitch, offset: 0x0, size: 0x4, def value: None
 float_t  ___pitch_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___yaw_padding[0x4];
/// @brief Field yaw, offset: 0x4, size: 0x4, def value: None
 float_t  ___yaw;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___yaw_padding_forAlignment[0x4];
/// @brief Field yaw, offset: 0x4, size: 0x4, def value: None
 float_t  ___yaw_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___pitchHolderActorNr_padding[0x8];
/// @brief Field pitchHolderActorNr, offset: 0x8, size: 0x4, def value: None
 int32_t  ___pitchHolderActorNr;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___pitchHolderActorNr_padding_forAlignment[0x8];
/// @brief Field pitchHolderActorNr, offset: 0x8, size: 0x4, def value: None
 int32_t  ___pitchHolderActorNr_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___pitchIsLeftHand_padding[0xc];
/// @brief Field pitchIsLeftHand, offset: 0xc, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___pitchIsLeftHand;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___pitchIsLeftHand_padding_forAlignment[0xc];
/// @brief Field pitchIsLeftHand, offset: 0xc, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___pitchIsLeftHand_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___pitchCrankAngle_padding[0x10];
/// @brief Field pitchCrankAngle, offset: 0x10, size: 0x4, def value: None
 float_t  ___pitchCrankAngle;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___pitchCrankAngle_padding_forAlignment[0x10];
/// @brief Field pitchCrankAngle, offset: 0x10, size: 0x4, def value: None
 float_t  ___pitchCrankAngle_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___yawHolderActorNr_padding[0x14];
/// @brief Field yawHolderActorNr, offset: 0x14, size: 0x4, def value: None
 int32_t  ___yawHolderActorNr;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___yawHolderActorNr_padding_forAlignment[0x14];
/// @brief Field yawHolderActorNr, offset: 0x14, size: 0x4, def value: None
 int32_t  ___yawHolderActorNr_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___yawIsLeftHand_padding[0x18];
/// @brief Field yawIsLeftHand, offset: 0x18, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___yawIsLeftHand;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___yawIsLeftHand_padding_forAlignment[0x18];
/// @brief Field yawIsLeftHand, offset: 0x18, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___yawIsLeftHand_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___yawCrankAngle_padding[0x1c];
/// @brief Field yawCrankAngle, offset: 0x1c, size: 0x4, def value: None
 float_t  ___yawCrankAngle;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___yawCrankAngle_padding_forAlignment[0x1c];
/// @brief Field yawCrankAngle, offset: 0x1c, size: 0x4, def value: None
 float_t  ___yawCrankAngle_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{400};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ArtilleryCannonState_FusionSyncState) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
