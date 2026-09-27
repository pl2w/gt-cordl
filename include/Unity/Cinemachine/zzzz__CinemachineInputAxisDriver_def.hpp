#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineInputAxisDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineInputAxisDriver)
namespace Unity::Cinemachine {
struct AxisBase;
}
namespace Unity::Cinemachine {
struct AxisState;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct CinemachineInputAxisDriver;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::CinemachineInputAxisDriver);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineInputAxisDriver, "Unity.Cinemachine", "CinemachineInputAxisDriver");
// [Obsolete("CinemachineInputAxisDriver has been deprecated. Use DefaultInputAxisDriver instead.")]
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineInputAxisDriver
struct CORDL_TYPE CinemachineInputAxisDriver {
public:
// Declarations
/// @brief Method ClampValue, addr 0xaed37c4, size 0x6c, virtual false, abstract: false, final false
inline float_t ClampValue(::by_ref<::Unity::Cinemachine::AxisBase>  axis, float_t  v) ;

/// @brief Method Update, addr 0xaed3548, size 0x27c, virtual false, abstract: false, final false
inline bool Update(float_t  deltaTime, ::by_ref<::Unity::Cinemachine::AxisBase>  axis) ;

/// @brief Method Update, addr 0xaed3830, size 0x50, virtual false, abstract: false, final false
inline bool Update(float_t  deltaTime, ::by_ref<::Unity::Cinemachine::AxisState>  axis) ;

/// @brief Method Validate, addr 0xaed3534, size 0x14, virtual false, abstract: false, final false
inline void Validate() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineInputAxisDriver() ;

// Ctor Parameters [CppParam { name: "multiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "accelTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "decelTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mCurrentSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineInputAxisDriver(float_t  multiplier, float_t  accelTime, float_t  decelTime, ::StringW  name, float_t  inputValue, float_t  mCurrentSpeed) noexcept;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22416};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [Tooltip("Multiply the input by this amount prior to processing.  Controls the input power.")]
/// @brief Field multiplier, offset: 0x0, size: 0x4, def value: None
 float_t  multiplier;

/// [Tooltip("The amount of time in seconds it takes to accelerate to a higher speed")]
/// @brief Field accelTime, offset: 0x4, size: 0x4, def value: None
 float_t  accelTime;

/// [Tooltip("The amount of time in seconds it takes to decelerate to a lower speed")]
/// @brief Field decelTime, offset: 0x8, size: 0x4, def value: None
 float_t  decelTime;

/// [Tooltip("The name of this axis as specified in Unity Input manager. Setting to an empty string will disable the automatic updating of this axis")]
/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  name;

/// [NoSaveDuringPlay]
/// [Tooltip("The value of the input axis.  A value of 0 means no input.  You can drive this directly from a custom input system, or you can set the Axis Name and have the value driven by the internal Input Manager")]
/// @brief Field inputValue, offset: 0x18, size: 0x4, def value: None
 float_t  inputValue;

/// @brief Field mCurrentSpeed, offset: 0x1c, size: 0x4, def value: None
 float_t  mCurrentSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisDriver, multiplier) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisDriver, accelTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisDriver, decelTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisDriver, name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisDriver, inputValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputAxisDriver, mCurrentSpeed) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineInputAxisDriver) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
