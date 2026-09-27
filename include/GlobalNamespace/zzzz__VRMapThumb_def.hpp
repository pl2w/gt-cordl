#pragma once
// IWYU pragma private; include "GlobalNamespace/VRMapThumb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRMap_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRMapThumb)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class VRMapThumb;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRMapThumb*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRMapThumb*, "", "VRMapThumb");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.InputDevice, UnityEngine.XR.InputFeatureUsage, VRMap
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRMapThumb
class CORDL_TYPE VRMapThumb : public ::GlobalNamespace::VRMap {
public:
// Declarations
/// @brief Field angle1Table, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_angle1Table, put=__cordl_internal_set_angle1Table)) ::ArrayW<::UnityEngine::Quaternion>  angle1Table;

/// @brief Field angle2Table, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_angle2Table, put=__cordl_internal_set_angle2Table)) ::ArrayW<::UnityEngine::Quaternion>  angle2Table;

/// @brief Field closedAngle1, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_closedAngle1, put=__cordl_internal_set_closedAngle1)) ::UnityEngine::Vector3  closedAngle1;

/// @brief Field closedAngle1Quat, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_closedAngle1Quat, put=__cordl_internal_set_closedAngle1Quat)) ::UnityEngine::Quaternion  closedAngle1Quat;

/// @brief Field closedAngle2, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_closedAngle2, put=__cordl_internal_set_closedAngle2)) ::UnityEngine::Vector3  closedAngle2;

/// @brief Field closedAngle2Quat, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get_closedAngle2Quat, put=__cordl_internal_set_closedAngle2Quat)) ::UnityEngine::Quaternion  closedAngle2Quat;

/// @brief Field currentAngle1, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAngle1, put=__cordl_internal_set_currentAngle1)) float_t  currentAngle1;

/// @brief Field currentAngle2, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAngle2, put=__cordl_internal_set_currentAngle2)) float_t  currentAngle2;

/// @brief Field fingerBone1, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fingerBone1, put=__cordl_internal_set_fingerBone1)) ::UnityW<::UnityEngine::Transform>  fingerBone1;

/// @brief Field fingerBone2, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fingerBone2, put=__cordl_internal_set_fingerBone2)) ::UnityW<::UnityEngine::Transform>  fingerBone2;

/// @brief Field inputAxis, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_inputAxis, put=__cordl_internal_set_inputAxis)) ::UnityEngine::XR::InputFeatureUsage  inputAxis;

/// @brief Field lastAngle1, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngle1, put=__cordl_internal_set_lastAngle1)) int32_t  lastAngle1;

/// @brief Field lastAngle2, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngle2, put=__cordl_internal_set_lastAngle2)) int32_t  lastAngle2;

/// @brief Field myTempInt, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_myTempInt, put=__cordl_internal_set_myTempInt)) int32_t  myTempInt;

/// @brief Field primaryButtonPress, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_primaryButtonPress, put=__cordl_internal_set_primaryButtonPress)) bool  primaryButtonPress;

/// @brief Field primaryButtonTouch, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_primaryButtonTouch, put=__cordl_internal_set_primaryButtonTouch)) bool  primaryButtonTouch;

/// @brief Field secondaryButtonPress, offset 0xa3, size 0x1 
 __declspec(property(get=__cordl_internal_get_secondaryButtonPress, put=__cordl_internal_set_secondaryButtonPress)) bool  secondaryButtonPress;

/// @brief Field secondaryButtonTouch, offset 0xa2, size 0x1 
 __declspec(property(get=__cordl_internal_get_secondaryButtonTouch, put=__cordl_internal_set_secondaryButtonTouch)) bool  secondaryButtonTouch;

/// @brief Field startingAngle1, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingAngle1, put=__cordl_internal_set_startingAngle1)) ::UnityEngine::Vector3  startingAngle1;

/// @brief Field startingAngle1Quat, offset 0x108, size 0x10 
 __declspec(property(get=__cordl_internal_get_startingAngle1Quat, put=__cordl_internal_set_startingAngle1Quat)) ::UnityEngine::Quaternion  startingAngle1Quat;

/// @brief Field startingAngle2, offset 0xdc, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingAngle2, put=__cordl_internal_set_startingAngle2)) ::UnityEngine::Vector3  startingAngle2;

/// @brief Field startingAngle2Quat, offset 0x118, size 0x10 
 __declspec(property(get=__cordl_internal_get_startingAngle2Quat, put=__cordl_internal_set_startingAngle2Quat)) ::UnityEngine::Quaternion  startingAngle2Quat;

/// @brief Field tempDevice, offset 0x148, size 0x10 
 __declspec(property(get=__cordl_internal_get_tempDevice, put=__cordl_internal_set_tempDevice)) ::UnityEngine::XR::InputDevice  tempDevice;

/// @brief Method Initialize, addr 0x57474e8, size 0xf4, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method LerpFinger, addr 0x5747778, size 0x274, virtual true, abstract: false, final false
inline void LerpFinger(float_t  lerpValue, bool  isOther) ;

/// @brief Method MapMyFinger, addr 0x57475dc, size 0x19c, virtual true, abstract: false, final false
inline void MapMyFinger(float_t  lerpValue) ;

static inline ::GlobalNamespace::VRMapThumb* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get_angle1Table() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get_angle1Table() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get_angle2Table() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get_angle2Table() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_closedAngle1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_closedAngle1() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_closedAngle1Quat() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_closedAngle1Quat() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_closedAngle2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_closedAngle2() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_closedAngle2Quat() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_closedAngle2Quat() ;

constexpr float_t const& __cordl_internal_get_currentAngle1() const;

constexpr float_t& __cordl_internal_get_currentAngle1() ;

constexpr float_t const& __cordl_internal_get_currentAngle2() const;

constexpr float_t& __cordl_internal_get_currentAngle2() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_fingerBone1() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_fingerBone1() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_fingerBone2() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_fingerBone2() ;

constexpr ::UnityEngine::XR::InputFeatureUsage const& __cordl_internal_get_inputAxis() const;

constexpr ::UnityEngine::XR::InputFeatureUsage& __cordl_internal_get_inputAxis() ;

constexpr int32_t const& __cordl_internal_get_lastAngle1() const;

constexpr int32_t& __cordl_internal_get_lastAngle1() ;

constexpr int32_t const& __cordl_internal_get_lastAngle2() const;

constexpr int32_t& __cordl_internal_get_lastAngle2() ;

constexpr int32_t const& __cordl_internal_get_myTempInt() const;

constexpr int32_t& __cordl_internal_get_myTempInt() ;

constexpr bool const& __cordl_internal_get_primaryButtonPress() const;

constexpr bool& __cordl_internal_get_primaryButtonPress() ;

constexpr bool const& __cordl_internal_get_primaryButtonTouch() const;

constexpr bool& __cordl_internal_get_primaryButtonTouch() ;

constexpr bool const& __cordl_internal_get_secondaryButtonPress() const;

constexpr bool& __cordl_internal_get_secondaryButtonPress() ;

constexpr bool const& __cordl_internal_get_secondaryButtonTouch() const;

constexpr bool& __cordl_internal_get_secondaryButtonTouch() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingAngle1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingAngle1() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_startingAngle1Quat() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_startingAngle1Quat() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingAngle2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingAngle2() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_startingAngle2Quat() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_startingAngle2Quat() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_tempDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_tempDevice() ;

constexpr void __cordl_internal_set_angle1Table(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_angle2Table(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_closedAngle1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_closedAngle1Quat(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_closedAngle2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_closedAngle2Quat(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_currentAngle1(float_t  value) ;

constexpr void __cordl_internal_set_currentAngle2(float_t  value) ;

constexpr void __cordl_internal_set_fingerBone1(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_fingerBone2(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_inputAxis(::UnityEngine::XR::InputFeatureUsage  value) ;

constexpr void __cordl_internal_set_lastAngle1(int32_t  value) ;

constexpr void __cordl_internal_set_lastAngle2(int32_t  value) ;

constexpr void __cordl_internal_set_myTempInt(int32_t  value) ;

constexpr void __cordl_internal_set_primaryButtonPress(bool  value) ;

constexpr void __cordl_internal_set_primaryButtonTouch(bool  value) ;

constexpr void __cordl_internal_set_secondaryButtonPress(bool  value) ;

constexpr void __cordl_internal_set_secondaryButtonTouch(bool  value) ;

constexpr void __cordl_internal_set_startingAngle1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startingAngle1Quat(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_startingAngle2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startingAngle2Quat(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_tempDevice(::UnityEngine::XR::InputDevice  value) ;

/// @brief Method .ctor, addr 0x57479ec, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRMapThumb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRMapThumb", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRMapThumb(VRMapThumb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRMapThumb", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRMapThumb(VRMapThumb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1277};

/// @brief Field inputAxis, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::XR::InputFeatureUsage  ___inputAxis;

/// @brief Field primaryButtonTouch, offset: 0xa0, size: 0x1, def value: None
 bool  ___primaryButtonTouch;

/// @brief Field primaryButtonPress, offset: 0xa1, size: 0x1, def value: None
 bool  ___primaryButtonPress;

/// @brief Field secondaryButtonTouch, offset: 0xa2, size: 0x1, def value: None
 bool  ___secondaryButtonTouch;

/// @brief Field secondaryButtonPress, offset: 0xa3, size: 0x1, def value: None
 bool  ___secondaryButtonPress;

/// @brief Field fingerBone1, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___fingerBone1;

/// @brief Field fingerBone2, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___fingerBone2;

/// @brief Field closedAngle1, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___closedAngle1;

/// @brief Field closedAngle2, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___closedAngle2;

/// @brief Field startingAngle1, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingAngle1;

/// @brief Field startingAngle2, offset: 0xdc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingAngle2;

/// @brief Field closedAngle1Quat, offset: 0xe8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___closedAngle1Quat;

/// @brief Field closedAngle2Quat, offset: 0xf8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___closedAngle2Quat;

/// @brief Field startingAngle1Quat, offset: 0x108, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___startingAngle1Quat;

/// @brief Field startingAngle2Quat, offset: 0x118, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___startingAngle2Quat;

/// @brief Field angle1Table, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ___angle1Table;

/// @brief Field angle2Table, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ___angle2Table;

/// @brief Field currentAngle1, offset: 0x138, size: 0x4, def value: None
 float_t  ___currentAngle1;

/// @brief Field currentAngle2, offset: 0x13c, size: 0x4, def value: None
 float_t  ___currentAngle2;

/// @brief Field lastAngle1, offset: 0x140, size: 0x4, def value: None
 int32_t  ___lastAngle1;

/// @brief Field lastAngle2, offset: 0x144, size: 0x4, def value: None
 int32_t  ___lastAngle2;

/// @brief Field tempDevice, offset: 0x148, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___tempDevice;

/// @brief Field myTempInt, offset: 0x158, size: 0x4, def value: None
 int32_t  ___myTempInt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___inputAxis) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___primaryButtonTouch) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___primaryButtonPress) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___secondaryButtonTouch) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___secondaryButtonPress) == 0xa3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___fingerBone1) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___fingerBone2) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___closedAngle1) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___closedAngle2) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___startingAngle1) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___startingAngle2) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___closedAngle1Quat) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___closedAngle2Quat) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___startingAngle1Quat) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___startingAngle2Quat) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___angle1Table) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___angle2Table) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___currentAngle1) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___currentAngle2) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___lastAngle1) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___lastAngle2) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___tempDevice) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMapThumb, ___myTempInt) == 0x158, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRMapThumb) == 0x160, "Size mismatch!");

} // namespace end def GlobalNamespace
