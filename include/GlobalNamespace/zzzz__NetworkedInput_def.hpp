#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkedInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkedInput)
namespace Fusion {
class INetworkInput;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkedInput;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkedInput);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkedInput, "", "NetworkedInput");
// [NetworkInputWeaved(35)]
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkedInput
#pragma pack(push, 0)
struct CORDL_TYPE NetworkedInput {
public:
// Declarations
/// @brief Field handPoseData, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_handPoseData, put=__cordl_internal_set_handPoseData)) int32_t  handPoseData;

/// @brief Field headRot_LS, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_headRot_LS, put=__cordl_internal_set_headRot_LS)) ::UnityEngine::Quaternion  headRot_LS;

/// @brief Field leftHandPos_LS, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHandPos_LS, put=__cordl_internal_set_leftHandPos_LS)) ::UnityEngine::Vector3  leftHandPos_LS;

/// @brief Field leftHandRot_LS, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftHandRot_LS, put=__cordl_internal_set_leftHandRot_LS)) ::UnityEngine::Quaternion  leftHandRot_LS;

/// @brief Field leftIndexValue, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftIndexValue, put=__cordl_internal_set_leftIndexValue)) float_t  leftIndexValue;

/// @brief Field leftMiddleValue, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftMiddleValue, put=__cordl_internal_set_leftMiddleValue)) float_t  leftMiddleValue;

/// @brief Field leftThumbPress, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftThumbPress, put=__cordl_internal_set_leftThumbPress)) bool  leftThumbPress;

/// @brief Field leftThumbTouch, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftThumbTouch, put=__cordl_internal_set_leftThumbTouch)) bool  leftThumbTouch;

/// @brief Field rightHandPos_LS, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHandPos_LS, put=__cordl_internal_set_rightHandPos_LS)) ::UnityEngine::Vector3  rightHandPos_LS;

/// @brief Field rightHandRot_LS, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightHandRot_LS, put=__cordl_internal_set_rightHandRot_LS)) ::UnityEngine::Quaternion  rightHandRot_LS;

/// @brief Field rightIndexValue, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightIndexValue, put=__cordl_internal_set_rightIndexValue)) float_t  rightIndexValue;

/// @brief Field rightMiddleValue, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightMiddleValue, put=__cordl_internal_set_rightMiddleValue)) float_t  rightMiddleValue;

/// @brief Field rightThumbPress, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightThumbPress, put=__cordl_internal_set_rightThumbPress)) bool  rightThumbPress;

/// @brief Field rightThumbTouch, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightThumbTouch, put=__cordl_internal_set_rightThumbTouch)) bool  rightThumbTouch;

/// @brief Field rootPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_rootPosition, put=__cordl_internal_set_rootPosition)) ::UnityEngine::Vector3  rootPosition;

/// @brief Field rootRotation, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_rootRotation, put=__cordl_internal_set_rootRotation)) ::UnityEngine::Quaternion  rootRotation;

/// @brief Field scale, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Convert operator to "::Fusion::INetworkInput"
constexpr operator  ::Fusion::INetworkInput*() ;

constexpr int32_t const& __cordl_internal_get_handPoseData() const;

constexpr int32_t& __cordl_internal_get_handPoseData() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_headRot_LS() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_headRot_LS() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandPos_LS() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandPos_LS() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_leftHandRot_LS() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_leftHandRot_LS() ;

constexpr float_t const& __cordl_internal_get_leftIndexValue() const;

constexpr float_t& __cordl_internal_get_leftIndexValue() ;

constexpr float_t const& __cordl_internal_get_leftMiddleValue() const;

constexpr float_t& __cordl_internal_get_leftMiddleValue() ;

constexpr bool const& __cordl_internal_get_leftThumbPress() const;

constexpr bool& __cordl_internal_get_leftThumbPress() ;

constexpr bool const& __cordl_internal_get_leftThumbTouch() const;

constexpr bool& __cordl_internal_get_leftThumbTouch() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandPos_LS() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandPos_LS() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rightHandRot_LS() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rightHandRot_LS() ;

constexpr float_t const& __cordl_internal_get_rightIndexValue() const;

constexpr float_t& __cordl_internal_get_rightIndexValue() ;

constexpr float_t const& __cordl_internal_get_rightMiddleValue() const;

constexpr float_t& __cordl_internal_get_rightMiddleValue() ;

constexpr bool const& __cordl_internal_get_rightThumbPress() const;

constexpr bool& __cordl_internal_get_rightThumbPress() ;

constexpr bool const& __cordl_internal_get_rightThumbTouch() const;

constexpr bool& __cordl_internal_get_rightThumbTouch() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rootPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rootPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rootRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rootRotation() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_handPoseData(int32_t  value) ;

constexpr void __cordl_internal_set_headRot_LS(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_leftHandPos_LS(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHandRot_LS(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_leftIndexValue(float_t  value) ;

constexpr void __cordl_internal_set_leftMiddleValue(float_t  value) ;

constexpr void __cordl_internal_set_leftThumbPress(bool  value) ;

constexpr void __cordl_internal_set_leftThumbTouch(bool  value) ;

constexpr void __cordl_internal_set_rightHandPos_LS(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHandRot_LS(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rightIndexValue(float_t  value) ;

constexpr void __cordl_internal_set_rightMiddleValue(float_t  value) ;

constexpr void __cordl_internal_set_rightThumbPress(bool  value) ;

constexpr void __cordl_internal_set_rightThumbTouch(bool  value) ;

constexpr void __cordl_internal_set_rootPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rootRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

/// @brief Convert to "::Fusion::INetworkInput"
constexpr ::Fusion::INetworkInput* i___Fusion__INetworkInput() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkedInput() ;

// Ctor Parameters [CppParam { name: "headRot_LS", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightHandPos_LS", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightHandRot_LS", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftHandPos_LS", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftHandRot_LS", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "rootPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rootRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftThumbTouch", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftThumbPress", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftIndexValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftMiddleValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightThumbTouch", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightThumbPress", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightIndexValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightMiddleValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "handPoseData", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkedInput(::UnityEngine::Quaternion  headRot_LS, ::UnityEngine::Vector3  rightHandPos_LS, ::UnityEngine::Quaternion  rightHandRot_LS, ::UnityEngine::Vector3  leftHandPos_LS, ::UnityEngine::Quaternion  leftHandRot_LS, ::UnityEngine::Vector3  rootPosition, ::UnityEngine::Quaternion  rootRotation, bool  leftThumbTouch, bool  leftThumbPress, float_t  leftIndexValue, float_t  leftMiddleValue, bool  rightThumbTouch, bool  rightThumbPress, float_t  rightIndexValue, float_t  rightMiddleValue, float_t  scale, int32_t  handPoseData) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___headRot_LS_padding[0x0];
/// @brief Field headRot_LS, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___headRot_LS;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___headRot_LS_padding_forAlignment[0x0];
/// @brief Field headRot_LS, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___headRot_LS_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___rightHandPos_LS_padding[0x10];
/// @brief Field rightHandPos_LS, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandPos_LS;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___rightHandPos_LS_padding_forAlignment[0x10];
/// @brief Field rightHandPos_LS, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandPos_LS_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___rightHandRot_LS_padding[0x1c];
/// @brief Field rightHandRot_LS, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rightHandRot_LS;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___rightHandRot_LS_padding_forAlignment[0x1c];
/// @brief Field rightHandRot_LS, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rightHandRot_LS_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ___leftHandPos_LS_padding[0x2c];
/// @brief Field leftHandPos_LS, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandPos_LS;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ___leftHandPos_LS_padding_forAlignment[0x2c];
/// @brief Field leftHandPos_LS, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandPos_LS_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ___leftHandRot_LS_padding[0x38];
/// @brief Field leftHandRot_LS, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___leftHandRot_LS;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ___leftHandRot_LS_padding_forAlignment[0x38];
/// @brief Field leftHandRot_LS, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___leftHandRot_LS_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x48
 uint8_t  ___rootPosition_padding[0x48];
/// @brief Field rootPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rootPosition;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x48 for alignment
 uint8_t  ___rootPosition_padding_forAlignment[0x48];
/// @brief Field rootPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rootPosition_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x54
 uint8_t  ___rootRotation_padding[0x54];
/// @brief Field rootRotation, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rootRotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x54 for alignment
 uint8_t  ___rootRotation_padding_forAlignment[0x54];
/// @brief Field rootRotation, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rootRotation_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x64
 uint8_t  ___leftThumbTouch_padding[0x64];
/// @brief Field leftThumbTouch, offset: 0x64, size: 0x1, def value: None
 bool  ___leftThumbTouch;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x64 for alignment
 uint8_t  ___leftThumbTouch_padding_forAlignment[0x64];
/// @brief Field leftThumbTouch, offset: 0x64, size: 0x1, def value: None
 bool  ___leftThumbTouch_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x68
 uint8_t  ___leftThumbPress_padding[0x68];
/// @brief Field leftThumbPress, offset: 0x68, size: 0x1, def value: None
 bool  ___leftThumbPress;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x68 for alignment
 uint8_t  ___leftThumbPress_padding_forAlignment[0x68];
/// @brief Field leftThumbPress, offset: 0x68, size: 0x1, def value: None
 bool  ___leftThumbPress_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6c
 uint8_t  ___leftIndexValue_padding[0x6c];
/// @brief Field leftIndexValue, offset: 0x6c, size: 0x4, def value: None
 float_t  ___leftIndexValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6c for alignment
 uint8_t  ___leftIndexValue_padding_forAlignment[0x6c];
/// @brief Field leftIndexValue, offset: 0x6c, size: 0x4, def value: None
 float_t  ___leftIndexValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x70
 uint8_t  ___leftMiddleValue_padding[0x70];
/// @brief Field leftMiddleValue, offset: 0x70, size: 0x4, def value: None
 float_t  ___leftMiddleValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x70 for alignment
 uint8_t  ___leftMiddleValue_padding_forAlignment[0x70];
/// @brief Field leftMiddleValue, offset: 0x70, size: 0x4, def value: None
 float_t  ___leftMiddleValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x74
 uint8_t  ___rightThumbTouch_padding[0x74];
/// @brief Field rightThumbTouch, offset: 0x74, size: 0x1, def value: None
 bool  ___rightThumbTouch;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x74 for alignment
 uint8_t  ___rightThumbTouch_padding_forAlignment[0x74];
/// @brief Field rightThumbTouch, offset: 0x74, size: 0x1, def value: None
 bool  ___rightThumbTouch_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x78
 uint8_t  ___rightThumbPress_padding[0x78];
/// @brief Field rightThumbPress, offset: 0x78, size: 0x1, def value: None
 bool  ___rightThumbPress;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x78 for alignment
 uint8_t  ___rightThumbPress_padding_forAlignment[0x78];
/// @brief Field rightThumbPress, offset: 0x78, size: 0x1, def value: None
 bool  ___rightThumbPress_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x7c
 uint8_t  ___rightIndexValue_padding[0x7c];
/// @brief Field rightIndexValue, offset: 0x7c, size: 0x4, def value: None
 float_t  ___rightIndexValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x7c for alignment
 uint8_t  ___rightIndexValue_padding_forAlignment[0x7c];
/// @brief Field rightIndexValue, offset: 0x7c, size: 0x4, def value: None
 float_t  ___rightIndexValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x80
 uint8_t  ___rightMiddleValue_padding[0x80];
/// @brief Field rightMiddleValue, offset: 0x80, size: 0x4, def value: None
 float_t  ___rightMiddleValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x80 for alignment
 uint8_t  ___rightMiddleValue_padding_forAlignment[0x80];
/// @brief Field rightMiddleValue, offset: 0x80, size: 0x4, def value: None
 float_t  ___rightMiddleValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x84
 uint8_t  ___scale_padding[0x84];
/// @brief Field scale, offset: 0x84, size: 0x4, def value: None
 float_t  ___scale;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x84 for alignment
 uint8_t  ___scale_padding_forAlignment[0x84];
/// @brief Field scale, offset: 0x84, size: 0x4, def value: None
 float_t  ___scale_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x88
 uint8_t  ___handPoseData_padding[0x88];
/// @brief Field handPoseData, offset: 0x88, size: 0x4, def value: None
 int32_t  ___handPoseData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x88 for alignment
 uint8_t  ___handPoseData_padding_forAlignment[0x88];
/// @brief Field handPoseData, offset: 0x88, size: 0x4, def value: None
 int32_t  ___handPoseData_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1087};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8c};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkedInput) == 0x8c, "Size mismatch!");

} // namespace end def GlobalNamespace
