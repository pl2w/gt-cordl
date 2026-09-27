#pragma once
// IWYU pragma private; include "GlobalNamespace/InputStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStruct)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputStruct;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputStruct);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputStruct, "", "InputStruct");
// [NetworkStructWeaved(45)]
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: InputStruct
#pragma pack(push, 0)
struct CORDL_TYPE InputStruct {
public:
// Declarations
/// @brief Field bodyRotation, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyRotation, put=__cordl_internal_set_bodyRotation)) int32_t  bodyRotation;

/// @brief Field grabbedRopeIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbedRopeIndex, put=__cordl_internal_set_grabbedRopeIndex)) int32_t  grabbedRopeIndex;

/// @brief Field gtPlayerStatsFlags, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_gtPlayerStatsFlags, put=__cordl_internal_set_gtPlayerStatsFlags)) int32_t  gtPlayerStatsFlags;

/// @brief Field handPosition, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_handPosition, put=__cordl_internal_set_handPosition)) int32_t  handPosition;

/// @brief Field headRotation, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_headRotation, put=__cordl_internal_set_headRotation)) int32_t  headRotation;

/// @brief Field hoverboardColor, offset 0x70, size 0x2 
 __declspec(property(get=__cordl_internal_get_hoverboardColor, put=__cordl_internal_set_hoverboardColor)) int16_t  hoverboardColor;

/// @brief Field hoverboardPosRot, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoverboardPosRot, put=__cordl_internal_set_hoverboardPosRot)) int64_t  hoverboardPosRot;

/// @brief Field isGroundedButt, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGroundedButt, put=__cordl_internal_set_isGroundedButt)) bool  isGroundedButt;

/// @brief Field isGroundedHand, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGroundedHand, put=__cordl_internal_set_isGroundedHand)) bool  isGroundedHand;

/// @brief Field lastHandTouchedGroundAtTime, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHandTouchedGroundAtTime, put=__cordl_internal_set_lastHandTouchedGroundAtTime)) float_t  lastHandTouchedGroundAtTime;

/// @brief Field lastTouchedGroundAtTime, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTouchedGroundAtTime, put=__cordl_internal_set_lastTouchedGroundAtTime)) float_t  lastTouchedGroundAtTime;

/// @brief Field leftGrabbedHandIsLeft, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftGrabbedHandIsLeft, put=__cordl_internal_set_leftGrabbedHandIsLeft)) bool  leftGrabbedHandIsLeft;

/// @brief Field leftHandGrabbedActorNumber, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftHandGrabbedActorNumber, put=__cordl_internal_set_leftHandGrabbedActorNumber)) int32_t  leftHandGrabbedActorNumber;

/// @brief Field leftHandLong, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandLong, put=__cordl_internal_set_leftHandLong)) int64_t  leftHandLong;

/// @brief Field leftUpperArmRotation, offset 0xc, size 0x2 
 __declspec(property(get=__cordl_internal_get_leftUpperArmRotation, put=__cordl_internal_set_leftUpperArmRotation)) int16_t  leftUpperArmRotation;

/// @brief Field movingSurfaceIsMonkeBlock, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_movingSurfaceIsMonkeBlock, put=__cordl_internal_set_movingSurfaceIsMonkeBlock)) bool  movingSurfaceIsMonkeBlock;

/// @brief Field packedCompetitiveData, offset 0x38, size 0x2 
 __declspec(property(get=__cordl_internal_get_packedCompetitiveData, put=__cordl_internal_set_packedCompetitiveData)) int16_t  packedCompetitiveData;

/// @brief Field packedFields, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_packedFields, put=__cordl_internal_set_packedFields)) int32_t  packedFields;

/// @brief Field packedGTPlayerStats, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_packedGTPlayerStats, put=__cordl_internal_set_packedGTPlayerStats)) int64_t  packedGTPlayerStats;

/// @brief Field position, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) int64_t  position;

/// @brief Field propHuntPosRot, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHuntPosRot, put=__cordl_internal_set_propHuntPosRot)) int64_t  propHuntPosRot;

/// @brief Field rightGrabbedHandIsLeft, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightGrabbedHandIsLeft, put=__cordl_internal_set_rightGrabbedHandIsLeft)) bool  rightGrabbedHandIsLeft;

/// @brief Field rightHandGrabbedActorNumber, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightHandGrabbedActorNumber, put=__cordl_internal_set_rightHandGrabbedActorNumber)) int32_t  rightHandGrabbedActorNumber;

/// @brief Field rightHandLong, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandLong, put=__cordl_internal_set_rightHandLong)) int64_t  rightHandLong;

/// @brief Field rightUpperArmRotation, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_rightUpperArmRotation, put=__cordl_internal_set_rightUpperArmRotation)) int16_t  rightUpperArmRotation;

/// @brief Field ropeBoneIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeBoneIndex, put=__cordl_internal_set_ropeBoneIndex)) int32_t  ropeBoneIndex;

/// @brief Field ropeGrabIsBody, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_ropeGrabIsBody, put=__cordl_internal_set_ropeGrabIsBody)) bool  ropeGrabIsBody;

/// @brief Field ropeGrabIsLeft, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_ropeGrabIsLeft, put=__cordl_internal_set_ropeGrabIsLeft)) bool  ropeGrabIsLeft;

/// @brief Field ropeGrabOffset, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_ropeGrabOffset, put=__cordl_internal_set_ropeGrabOffset)) ::UnityEngine::Vector3  ropeGrabOffset;

/// @brief Field rotation, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) int32_t  rotation;

/// @brief Field serverTimeStamp, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverTimeStamp, put=__cordl_internal_set_serverTimeStamp)) double_t  serverTimeStamp;

/// @brief Field taggedById, offset 0x84, size 0x2 
 __declspec(property(get=__cordl_internal_get_taggedById, put=__cordl_internal_set_taggedById)) int16_t  taggedById;

/// @brief Field usingNewIK, offset 0x4, size 0x1 
 __declspec(property(get=__cordl_internal_get_usingNewIK, put=__cordl_internal_set_usingNewIK)) bool  usingNewIK;

/// @brief Field velocity, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get_bodyRotation() const;

constexpr int32_t& __cordl_internal_get_bodyRotation() ;

constexpr int32_t const& __cordl_internal_get_grabbedRopeIndex() const;

constexpr int32_t& __cordl_internal_get_grabbedRopeIndex() ;

constexpr int32_t const& __cordl_internal_get_gtPlayerStatsFlags() const;

constexpr int32_t& __cordl_internal_get_gtPlayerStatsFlags() ;

constexpr int32_t const& __cordl_internal_get_handPosition() const;

constexpr int32_t& __cordl_internal_get_handPosition() ;

constexpr int32_t const& __cordl_internal_get_headRotation() const;

constexpr int32_t& __cordl_internal_get_headRotation() ;

constexpr int16_t const& __cordl_internal_get_hoverboardColor() const;

constexpr int16_t& __cordl_internal_get_hoverboardColor() ;

constexpr int64_t const& __cordl_internal_get_hoverboardPosRot() const;

constexpr int64_t& __cordl_internal_get_hoverboardPosRot() ;

constexpr bool const& __cordl_internal_get_isGroundedButt() const;

constexpr bool& __cordl_internal_get_isGroundedButt() ;

constexpr bool const& __cordl_internal_get_isGroundedHand() const;

constexpr bool& __cordl_internal_get_isGroundedHand() ;

constexpr float_t const& __cordl_internal_get_lastHandTouchedGroundAtTime() const;

constexpr float_t& __cordl_internal_get_lastHandTouchedGroundAtTime() ;

constexpr float_t const& __cordl_internal_get_lastTouchedGroundAtTime() const;

constexpr float_t& __cordl_internal_get_lastTouchedGroundAtTime() ;

constexpr bool const& __cordl_internal_get_leftGrabbedHandIsLeft() const;

constexpr bool& __cordl_internal_get_leftGrabbedHandIsLeft() ;

constexpr int32_t const& __cordl_internal_get_leftHandGrabbedActorNumber() const;

constexpr int32_t& __cordl_internal_get_leftHandGrabbedActorNumber() ;

constexpr int64_t const& __cordl_internal_get_leftHandLong() const;

constexpr int64_t& __cordl_internal_get_leftHandLong() ;

constexpr int16_t const& __cordl_internal_get_leftUpperArmRotation() const;

constexpr int16_t& __cordl_internal_get_leftUpperArmRotation() ;

constexpr bool const& __cordl_internal_get_movingSurfaceIsMonkeBlock() const;

constexpr bool& __cordl_internal_get_movingSurfaceIsMonkeBlock() ;

constexpr int16_t const& __cordl_internal_get_packedCompetitiveData() const;

constexpr int16_t& __cordl_internal_get_packedCompetitiveData() ;

constexpr int32_t const& __cordl_internal_get_packedFields() const;

constexpr int32_t& __cordl_internal_get_packedFields() ;

constexpr int64_t const& __cordl_internal_get_packedGTPlayerStats() const;

constexpr int64_t& __cordl_internal_get_packedGTPlayerStats() ;

constexpr int64_t const& __cordl_internal_get_position() const;

constexpr int64_t& __cordl_internal_get_position() ;

constexpr int64_t const& __cordl_internal_get_propHuntPosRot() const;

constexpr int64_t& __cordl_internal_get_propHuntPosRot() ;

constexpr bool const& __cordl_internal_get_rightGrabbedHandIsLeft() const;

constexpr bool& __cordl_internal_get_rightGrabbedHandIsLeft() ;

constexpr int32_t const& __cordl_internal_get_rightHandGrabbedActorNumber() const;

constexpr int32_t& __cordl_internal_get_rightHandGrabbedActorNumber() ;

constexpr int64_t const& __cordl_internal_get_rightHandLong() const;

constexpr int64_t& __cordl_internal_get_rightHandLong() ;

constexpr int16_t const& __cordl_internal_get_rightUpperArmRotation() const;

constexpr int16_t& __cordl_internal_get_rightUpperArmRotation() ;

constexpr int32_t const& __cordl_internal_get_ropeBoneIndex() const;

constexpr int32_t& __cordl_internal_get_ropeBoneIndex() ;

constexpr bool const& __cordl_internal_get_ropeGrabIsBody() const;

constexpr bool& __cordl_internal_get_ropeGrabIsBody() ;

constexpr bool const& __cordl_internal_get_ropeGrabIsLeft() const;

constexpr bool& __cordl_internal_get_ropeGrabIsLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ropeGrabOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ropeGrabOffset() ;

constexpr int32_t const& __cordl_internal_get_rotation() const;

constexpr int32_t& __cordl_internal_get_rotation() ;

constexpr double_t const& __cordl_internal_get_serverTimeStamp() const;

constexpr double_t& __cordl_internal_get_serverTimeStamp() ;

constexpr int16_t const& __cordl_internal_get_taggedById() const;

constexpr int16_t& __cordl_internal_get_taggedById() ;

constexpr bool const& __cordl_internal_get_usingNewIK() const;

constexpr bool& __cordl_internal_get_usingNewIK() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_bodyRotation(int32_t  value) ;

constexpr void __cordl_internal_set_grabbedRopeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_gtPlayerStatsFlags(int32_t  value) ;

constexpr void __cordl_internal_set_handPosition(int32_t  value) ;

constexpr void __cordl_internal_set_headRotation(int32_t  value) ;

constexpr void __cordl_internal_set_hoverboardColor(int16_t  value) ;

constexpr void __cordl_internal_set_hoverboardPosRot(int64_t  value) ;

constexpr void __cordl_internal_set_isGroundedButt(bool  value) ;

constexpr void __cordl_internal_set_isGroundedHand(bool  value) ;

constexpr void __cordl_internal_set_lastHandTouchedGroundAtTime(float_t  value) ;

constexpr void __cordl_internal_set_lastTouchedGroundAtTime(float_t  value) ;

constexpr void __cordl_internal_set_leftGrabbedHandIsLeft(bool  value) ;

constexpr void __cordl_internal_set_leftHandGrabbedActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_leftHandLong(int64_t  value) ;

constexpr void __cordl_internal_set_leftUpperArmRotation(int16_t  value) ;

constexpr void __cordl_internal_set_movingSurfaceIsMonkeBlock(bool  value) ;

constexpr void __cordl_internal_set_packedCompetitiveData(int16_t  value) ;

constexpr void __cordl_internal_set_packedFields(int32_t  value) ;

constexpr void __cordl_internal_set_packedGTPlayerStats(int64_t  value) ;

constexpr void __cordl_internal_set_position(int64_t  value) ;

constexpr void __cordl_internal_set_propHuntPosRot(int64_t  value) ;

constexpr void __cordl_internal_set_rightGrabbedHandIsLeft(bool  value) ;

constexpr void __cordl_internal_set_rightHandGrabbedActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_rightHandLong(int64_t  value) ;

constexpr void __cordl_internal_set_rightUpperArmRotation(int16_t  value) ;

constexpr void __cordl_internal_set_ropeBoneIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ropeGrabIsBody(bool  value) ;

constexpr void __cordl_internal_set_ropeGrabIsLeft(bool  value) ;

constexpr void __cordl_internal_set_ropeGrabOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotation(int32_t  value) ;

constexpr void __cordl_internal_set_serverTimeStamp(double_t  value) ;

constexpr void __cordl_internal_set_taggedById(int16_t  value) ;

constexpr void __cordl_internal_set_usingNewIK(bool  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputStruct() ;

// Ctor Parameters [CppParam { name: "headRotation", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "usingNewIK", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyRotation", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftUpperArmRotation", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightUpperArmRotation", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightHandLong", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftHandLong", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "handPosition", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "packedFields", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "packedCompetitiveData", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "grabbedRopeIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ropeBoneIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ropeGrabIsLeft", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ropeGrabIsBody", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ropeGrabOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "movingSurfaceIsMonkeBlock", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hoverboardPosRot", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hoverboardColor", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "propHuntPosRot", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "serverTimeStamp", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "taggedById", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isGroundedHand", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isGroundedButt", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftHandGrabbedActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftGrabbedHandIsLeft", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightHandGrabbedActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightGrabbedHandIsLeft", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastTouchedGroundAtTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastHandTouchedGroundAtTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "packedGTPlayerStats", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gtPlayerStatsFlags", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputStruct(int32_t  headRotation, bool  usingNewIK, int32_t  bodyRotation, int16_t  leftUpperArmRotation, int16_t  rightUpperArmRotation, int64_t  rightHandLong, int64_t  leftHandLong, int64_t  position, int32_t  handPosition, int32_t  rotation, int32_t  packedFields, int16_t  packedCompetitiveData, ::UnityEngine::Vector3  velocity, int32_t  grabbedRopeIndex, int32_t  ropeBoneIndex, bool  ropeGrabIsLeft, bool  ropeGrabIsBody, ::UnityEngine::Vector3  ropeGrabOffset, bool  movingSurfaceIsMonkeBlock, int64_t  hoverboardPosRot, int16_t  hoverboardColor, int64_t  propHuntPosRot, double_t  serverTimeStamp, int16_t  taggedById, bool  isGroundedHand, bool  isGroundedButt, int32_t  leftHandGrabbedActorNumber, bool  leftGrabbedHandIsLeft, int32_t  rightHandGrabbedActorNumber, bool  rightGrabbedHandIsLeft, float_t  lastTouchedGroundAtTime, float_t  lastHandTouchedGroundAtTime, int64_t  packedGTPlayerStats, int32_t  gtPlayerStatsFlags) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___headRotation_padding[0x0];
/// @brief Field headRotation, offset: 0x0, size: 0x4, def value: None
 int32_t  ___headRotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___headRotation_padding_forAlignment[0x0];
/// @brief Field headRotation, offset: 0x0, size: 0x4, def value: None
 int32_t  ___headRotation_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___usingNewIK_padding[0x4];
/// @brief Field usingNewIK, offset: 0x4, size: 0x1, def value: None
 bool  ___usingNewIK;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___usingNewIK_padding_forAlignment[0x4];
/// @brief Field usingNewIK, offset: 0x4, size: 0x1, def value: None
 bool  ___usingNewIK_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___bodyRotation_padding[0x8];
/// @brief Field bodyRotation, offset: 0x8, size: 0x4, def value: None
 int32_t  ___bodyRotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___bodyRotation_padding_forAlignment[0x8];
/// @brief Field bodyRotation, offset: 0x8, size: 0x4, def value: None
 int32_t  ___bodyRotation_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___leftUpperArmRotation_padding[0xc];
/// @brief Field leftUpperArmRotation, offset: 0xc, size: 0x2, def value: None
 int16_t  ___leftUpperArmRotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___leftUpperArmRotation_padding_forAlignment[0xc];
/// @brief Field leftUpperArmRotation, offset: 0xc, size: 0x2, def value: None
 int16_t  ___leftUpperArmRotation_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___rightUpperArmRotation_padding[0x10];
/// @brief Field rightUpperArmRotation, offset: 0x10, size: 0x2, def value: None
 int16_t  ___rightUpperArmRotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___rightUpperArmRotation_padding_forAlignment[0x10];
/// @brief Field rightUpperArmRotation, offset: 0x10, size: 0x2, def value: None
 int16_t  ___rightUpperArmRotation_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___rightHandLong_padding[0x18];
/// @brief Field rightHandLong, offset: 0x18, size: 0x8, def value: None
 int64_t  ___rightHandLong;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___rightHandLong_padding_forAlignment[0x18];
/// @brief Field rightHandLong, offset: 0x18, size: 0x8, def value: None
 int64_t  ___rightHandLong_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___leftHandLong_padding[0x20];
/// @brief Field leftHandLong, offset: 0x20, size: 0x8, def value: None
 int64_t  ___leftHandLong;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___leftHandLong_padding_forAlignment[0x20];
/// @brief Field leftHandLong, offset: 0x20, size: 0x8, def value: None
 int64_t  ___leftHandLong_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ___position_padding[0x28];
/// @brief Field position, offset: 0x28, size: 0x8, def value: None
 int64_t  ___position;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ___position_padding_forAlignment[0x28];
/// @brief Field position, offset: 0x28, size: 0x8, def value: None
 int64_t  ___position_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ___handPosition_padding[0x2c];
/// @brief Field handPosition, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___handPosition;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ___handPosition_padding_forAlignment[0x2c];
/// @brief Field handPosition, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___handPosition_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___rotation_padding[0x30];
/// @brief Field rotation, offset: 0x30, size: 0x4, def value: None
 int32_t  ___rotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___rotation_padding_forAlignment[0x30];
/// @brief Field rotation, offset: 0x30, size: 0x4, def value: None
 int32_t  ___rotation_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x34
 uint8_t  ___packedFields_padding[0x34];
/// @brief Field packedFields, offset: 0x34, size: 0x4, def value: None
 int32_t  ___packedFields;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x34 for alignment
 uint8_t  ___packedFields_padding_forAlignment[0x34];
/// @brief Field packedFields, offset: 0x34, size: 0x4, def value: None
 int32_t  ___packedFields_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ___packedCompetitiveData_padding[0x38];
/// @brief Field packedCompetitiveData, offset: 0x38, size: 0x2, def value: None
 int16_t  ___packedCompetitiveData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ___packedCompetitiveData_padding_forAlignment[0x38];
/// @brief Field packedCompetitiveData, offset: 0x38, size: 0x2, def value: None
 int16_t  ___packedCompetitiveData_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3c
 uint8_t  ___velocity_padding[0x3c];
/// @brief Field velocity, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3c for alignment
 uint8_t  ___velocity_padding_forAlignment[0x3c];
/// @brief Field velocity, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x48
 uint8_t  ___grabbedRopeIndex_padding[0x48];
/// @brief Field grabbedRopeIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___grabbedRopeIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x48 for alignment
 uint8_t  ___grabbedRopeIndex_padding_forAlignment[0x48];
/// @brief Field grabbedRopeIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___grabbedRopeIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4c
 uint8_t  ___ropeBoneIndex_padding[0x4c];
/// @brief Field ropeBoneIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___ropeBoneIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4c for alignment
 uint8_t  ___ropeBoneIndex_padding_forAlignment[0x4c];
/// @brief Field ropeBoneIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___ropeBoneIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x50
 uint8_t  ___ropeGrabIsLeft_padding[0x50];
/// @brief Field ropeGrabIsLeft, offset: 0x50, size: 0x1, def value: None
 bool  ___ropeGrabIsLeft;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x50 for alignment
 uint8_t  ___ropeGrabIsLeft_padding_forAlignment[0x50];
/// @brief Field ropeGrabIsLeft, offset: 0x50, size: 0x1, def value: None
 bool  ___ropeGrabIsLeft_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x54
 uint8_t  ___ropeGrabIsBody_padding[0x54];
/// @brief Field ropeGrabIsBody, offset: 0x54, size: 0x1, def value: None
 bool  ___ropeGrabIsBody;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x54 for alignment
 uint8_t  ___ropeGrabIsBody_padding_forAlignment[0x54];
/// @brief Field ropeGrabIsBody, offset: 0x54, size: 0x1, def value: None
 bool  ___ropeGrabIsBody_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x58
 uint8_t  ___ropeGrabOffset_padding[0x58];
/// @brief Field ropeGrabOffset, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ropeGrabOffset;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x58 for alignment
 uint8_t  ___ropeGrabOffset_padding_forAlignment[0x58];
/// @brief Field ropeGrabOffset, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ropeGrabOffset_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x64
 uint8_t  ___movingSurfaceIsMonkeBlock_padding[0x64];
/// @brief Field movingSurfaceIsMonkeBlock, offset: 0x64, size: 0x1, def value: None
 bool  ___movingSurfaceIsMonkeBlock;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x64 for alignment
 uint8_t  ___movingSurfaceIsMonkeBlock_padding_forAlignment[0x64];
/// @brief Field movingSurfaceIsMonkeBlock, offset: 0x64, size: 0x1, def value: None
 bool  ___movingSurfaceIsMonkeBlock_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x68
 uint8_t  ___hoverboardPosRot_padding[0x68];
/// @brief Field hoverboardPosRot, offset: 0x68, size: 0x8, def value: None
 int64_t  ___hoverboardPosRot;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x68 for alignment
 uint8_t  ___hoverboardPosRot_padding_forAlignment[0x68];
/// @brief Field hoverboardPosRot, offset: 0x68, size: 0x8, def value: None
 int64_t  ___hoverboardPosRot_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x70
 uint8_t  ___hoverboardColor_padding[0x70];
/// @brief Field hoverboardColor, offset: 0x70, size: 0x2, def value: None
 int16_t  ___hoverboardColor;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x70 for alignment
 uint8_t  ___hoverboardColor_padding_forAlignment[0x70];
/// @brief Field hoverboardColor, offset: 0x70, size: 0x2, def value: None
 int16_t  ___hoverboardColor_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x78
 uint8_t  ___propHuntPosRot_padding[0x78];
/// @brief Field propHuntPosRot, offset: 0x78, size: 0x8, def value: None
 int64_t  ___propHuntPosRot;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x78 for alignment
 uint8_t  ___propHuntPosRot_padding_forAlignment[0x78];
/// @brief Field propHuntPosRot, offset: 0x78, size: 0x8, def value: None
 int64_t  ___propHuntPosRot_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x80
 uint8_t  ___serverTimeStamp_padding[0x80];
/// @brief Field serverTimeStamp, offset: 0x80, size: 0x8, def value: None
 double_t  ___serverTimeStamp;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x80 for alignment
 uint8_t  ___serverTimeStamp_padding_forAlignment[0x80];
/// @brief Field serverTimeStamp, offset: 0x80, size: 0x8, def value: None
 double_t  ___serverTimeStamp_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x84
 uint8_t  ___taggedById_padding[0x84];
/// @brief Field taggedById, offset: 0x84, size: 0x2, def value: None
 int16_t  ___taggedById;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x84 for alignment
 uint8_t  ___taggedById_padding_forAlignment[0x84];
/// @brief Field taggedById, offset: 0x84, size: 0x2, def value: None
 int16_t  ___taggedById_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x88
 uint8_t  ___isGroundedHand_padding[0x88];
/// @brief Field isGroundedHand, offset: 0x88, size: 0x1, def value: None
 bool  ___isGroundedHand;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x88 for alignment
 uint8_t  ___isGroundedHand_padding_forAlignment[0x88];
/// @brief Field isGroundedHand, offset: 0x88, size: 0x1, def value: None
 bool  ___isGroundedHand_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8c
 uint8_t  ___isGroundedButt_padding[0x8c];
/// @brief Field isGroundedButt, offset: 0x8c, size: 0x1, def value: None
 bool  ___isGroundedButt;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8c for alignment
 uint8_t  ___isGroundedButt_padding_forAlignment[0x8c];
/// @brief Field isGroundedButt, offset: 0x8c, size: 0x1, def value: None
 bool  ___isGroundedButt_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x90
 uint8_t  ___leftHandGrabbedActorNumber_padding[0x90];
/// @brief Field leftHandGrabbedActorNumber, offset: 0x90, size: 0x4, def value: None
 int32_t  ___leftHandGrabbedActorNumber;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x90 for alignment
 uint8_t  ___leftHandGrabbedActorNumber_padding_forAlignment[0x90];
/// @brief Field leftHandGrabbedActorNumber, offset: 0x90, size: 0x4, def value: None
 int32_t  ___leftHandGrabbedActorNumber_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x94
 uint8_t  ___leftGrabbedHandIsLeft_padding[0x94];
/// @brief Field leftGrabbedHandIsLeft, offset: 0x94, size: 0x1, def value: None
 bool  ___leftGrabbedHandIsLeft;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x94 for alignment
 uint8_t  ___leftGrabbedHandIsLeft_padding_forAlignment[0x94];
/// @brief Field leftGrabbedHandIsLeft, offset: 0x94, size: 0x1, def value: None
 bool  ___leftGrabbedHandIsLeft_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x98
 uint8_t  ___rightHandGrabbedActorNumber_padding[0x98];
/// @brief Field rightHandGrabbedActorNumber, offset: 0x98, size: 0x4, def value: None
 int32_t  ___rightHandGrabbedActorNumber;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x98 for alignment
 uint8_t  ___rightHandGrabbedActorNumber_padding_forAlignment[0x98];
/// @brief Field rightHandGrabbedActorNumber, offset: 0x98, size: 0x4, def value: None
 int32_t  ___rightHandGrabbedActorNumber_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x9c
 uint8_t  ___rightGrabbedHandIsLeft_padding[0x9c];
/// @brief Field rightGrabbedHandIsLeft, offset: 0x9c, size: 0x1, def value: None
 bool  ___rightGrabbedHandIsLeft;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x9c for alignment
 uint8_t  ___rightGrabbedHandIsLeft_padding_forAlignment[0x9c];
/// @brief Field rightGrabbedHandIsLeft, offset: 0x9c, size: 0x1, def value: None
 bool  ___rightGrabbedHandIsLeft_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa0
 uint8_t  ___lastTouchedGroundAtTime_padding[0xa0];
/// @brief Field lastTouchedGroundAtTime, offset: 0xa0, size: 0x4, def value: None
 float_t  ___lastTouchedGroundAtTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa0 for alignment
 uint8_t  ___lastTouchedGroundAtTime_padding_forAlignment[0xa0];
/// @brief Field lastTouchedGroundAtTime, offset: 0xa0, size: 0x4, def value: None
 float_t  ___lastTouchedGroundAtTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa4
 uint8_t  ___lastHandTouchedGroundAtTime_padding[0xa4];
/// @brief Field lastHandTouchedGroundAtTime, offset: 0xa4, size: 0x4, def value: None
 float_t  ___lastHandTouchedGroundAtTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa4 for alignment
 uint8_t  ___lastHandTouchedGroundAtTime_padding_forAlignment[0xa4];
/// @brief Field lastHandTouchedGroundAtTime, offset: 0xa4, size: 0x4, def value: None
 float_t  ___lastHandTouchedGroundAtTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa8
 uint8_t  ___packedGTPlayerStats_padding[0xa8];
/// @brief Field packedGTPlayerStats, offset: 0xa8, size: 0x8, def value: None
 int64_t  ___packedGTPlayerStats;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa8 for alignment
 uint8_t  ___packedGTPlayerStats_padding_forAlignment[0xa8];
/// @brief Field packedGTPlayerStats, offset: 0xa8, size: 0x8, def value: None
 int64_t  ___packedGTPlayerStats_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xb0
 uint8_t  ___gtPlayerStatsFlags_padding[0xb0];
/// @brief Field gtPlayerStatsFlags, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___gtPlayerStatsFlags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xb0 for alignment
 uint8_t  ___gtPlayerStatsFlags_padding_forAlignment[0xb0];
/// @brief Field gtPlayerStatsFlags, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___gtPlayerStatsFlags_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb4};

/// @brief Size padding 0xb4 - 0xb8 = 0x4, packed as 0x4
 uint8_t  _cordl_size_padding[0x4];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::InputStruct) == 0xb4, "Size mismatch!");

} // namespace end def GlobalNamespace
