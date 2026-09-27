#pragma once
// IWYU pragma private; include "Unity/Cinemachine/AxisState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_SpeedMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisState)
namespace GlobalNamespace {
struct AxisState_Recentering;
}
namespace GlobalNamespace {
struct AxisState_SpeedMode;
}
namespace Unity::Cinemachine {
class AxisState_IInputAxisProvider;
}
namespace Unity::Cinemachine {
class AxisState_IRequiresInput;
}
// Forward declare root types
namespace Unity::Cinemachine {
class AxisState_IInputAxisProvider;
}
namespace Unity::Cinemachine {
class AxisState_IRequiresInput;
}
namespace Unity::Cinemachine {
struct AxisState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::AxisState_IInputAxisProvider*);
MARK_REF_T(::Unity::Cinemachine::AxisState_IRequiresInput*);
MARK_VAL_T(::Unity::Cinemachine::AxisState);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::AxisState_IInputAxisProvider*, "Unity.Cinemachine", "AxisState/IInputAxisProvider");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::AxisState_IRequiresInput*, "Unity.Cinemachine", "AxisState/IRequiresInput");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::AxisState, "Unity.Cinemachine", "AxisState");
// [Obsolete("AxisState is deprecated.  Use InputAxis instead")]
// Dependencies Unity.Cinemachine.AxisState::Recentering, Unity.Cinemachine.AxisState::SpeedMode
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.AxisState
struct CORDL_TYPE AxisState {
public:
// Declarations
using Recentering = ::GlobalNamespace::AxisState_Recentering;

using SpeedMode = ::GlobalNamespace::AxisState_SpeedMode;

using IInputAxisProvider = ::Unity::Cinemachine::AxisState_IInputAxisProvider;

using IRequiresInput = ::Unity::Cinemachine::AxisState_IRequiresInput;

 __declspec(property(get=get_HasInputProvider)) bool  HasInputProvider;

 __declspec(property(get=get_HasRecentering, put=set_HasRecentering)) bool  HasRecentering;

 __declspec(property(get=get_ValueRangeLocked, put=set_ValueRangeLocked)) bool  ValueRangeLocked;

/// @brief Method ClampValue, addr 0xaec3624, size 0x6c, virtual false, abstract: false, final false
inline float_t ClampValue(float_t  v) ;

/// @brief Method GetMaxSpeed, addr 0xaec3690, size 0x90, virtual false, abstract: false, final false
inline float_t GetMaxSpeed() ;

/// @brief Method MaxSpeedUpdate, addr 0xaec3488, size 0x19c, virtual false, abstract: false, final false
inline bool MaxSpeedUpdate(float_t  input, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaec3004, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetInputAxisProvider, addr 0xaec3014, size 0x14, virtual false, abstract: false, final false
inline void SetInputAxisProvider(int32_t  axis, ::Unity::Cinemachine::AxisState_IInputAxisProvider*  provider) ;

/// @brief Method Update, addr 0xaec3038, size 0x450, virtual false, abstract: false, final false
inline bool Update(float_t  deltaTime) ;

/// @brief Method Validate, addr 0xaec2fc4, size 0x40, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method .ctor, addr 0xaec2f14, size 0x94, virtual false, abstract: false, final false
inline void _ctor(float_t  minValue, float_t  maxValue, bool  wrap, bool  rangeLocked, float_t  maxSpeed, float_t  accelTime, float_t  decelTime, ::StringW  name, bool  invert) ;

/// @brief Method get_HasInputProvider, addr 0xaec3028, size 0x10, virtual false, abstract: false, final false
inline bool get_HasInputProvider() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_HasRecentering, addr 0xaec3730, size 0x8, virtual false, abstract: false, final false
inline bool get_HasRecentering() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ValueRangeLocked, addr 0xaec3720, size 0x8, virtual false, abstract: false, final false
inline bool get_ValueRangeLocked() ;

/// [CompilerGenerated]
/// @brief Method set_HasRecentering, addr 0xaec3738, size 0x8, virtual false, abstract: false, final false
inline void set_HasRecentering(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ValueRangeLocked, addr 0xaec3728, size 0x8, virtual false, abstract: false, final false
inline void set_ValueRangeLocked(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AxisState() ;

// Ctor Parameters [CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SpeedMode", ty: "::GlobalNamespace::AxisState_SpeedMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AccelTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DecelTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InputAxisName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InputAxisValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InvertInput", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MinValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Wrap", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Recentering", ty: "::GlobalNamespace::AxisState_Recentering", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LastUpdateTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LastUpdateFrame", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InputAxisProvider", ty: "::Unity::Cinemachine::AxisState_IInputAxisProvider*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InputAxisIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ValueRangeLocked_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HasRecentering_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr AxisState(float_t  Value, ::GlobalNamespace::AxisState_SpeedMode  m_SpeedMode, float_t  m_MaxSpeed, float_t  m_AccelTime, float_t  m_DecelTime, ::StringW  m_InputAxisName, float_t  m_InputAxisValue, bool  m_InvertInput, float_t  m_MinValue, float_t  m_MaxValue, bool  m_Wrap, ::GlobalNamespace::AxisState_Recentering  m_Recentering, float_t  m_CurrentSpeed, float_t  m_LastUpdateTime, int32_t  m_LastUpdateFrame, ::Unity::Cinemachine::AxisState_IInputAxisProvider*  m_InputAxisProvider, int32_t  m_InputAxisIndex, bool  _ValueRangeLocked_k__BackingField, bool  _HasRecentering_k__BackingField) noexcept;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// [NoSaveDuringPlay]
/// [Tooltip("The current value of the axis.")]
/// @brief Field Value, offset: 0x0, size: 0x4, def value: None
 float_t  Value;

/// [Tooltip("How to interpret the Max Speed setting: in units/second, or as a direct input value multiplier")]
/// @brief Field m_SpeedMode, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::AxisState_SpeedMode  m_SpeedMode;

/// [Tooltip("The maximum speed of this axis in units/second, or the input value multiplier, depending on the Speed Mode")]
/// @brief Field m_MaxSpeed, offset: 0x8, size: 0x4, def value: None
 float_t  m_MaxSpeed;

/// [Tooltip("The amount of time in seconds it takes to accelerate to MaxSpeed with the supplied Axis at its maximum value")]
/// @brief Field m_AccelTime, offset: 0xc, size: 0x4, def value: None
 float_t  m_AccelTime;

/// [Tooltip("The amount of time in seconds it takes to decelerate the axis to zero if the supplied axis is in a neutral position")]
/// @brief Field m_DecelTime, offset: 0x10, size: 0x4, def value: None
 float_t  m_DecelTime;

/// [InputAxisNameProperty]
/// [FormerlySerializedAs("m_AxisName")]
/// [Tooltip("The name of this axis as specified in Unity Input manager. Setting to an empty string will disable the automatic updating of this axis")]
/// @brief Field m_InputAxisName, offset: 0x18, size: 0x8, def value: None
 ::StringW  m_InputAxisName;

/// [NoSaveDuringPlay]
/// [Tooltip("The value of the input axis.  A value of 0 means no input.  You can drive this directly from a custom input system, or you can set the Axis Name and have the value driven by the internal Input Manager")]
/// @brief Field m_InputAxisValue, offset: 0x20, size: 0x4, def value: None
 float_t  m_InputAxisValue;

/// [FormerlySerializedAs("m_InvertAxis")]
/// [Tooltip("If checked, then the raw value of the input axis will be inverted before it is used")]
/// @brief Field m_InvertInput, offset: 0x24, size: 0x1, def value: None
 bool  m_InvertInput;

/// [Tooltip("The minimum value for the axis")]
/// @brief Field m_MinValue, offset: 0x28, size: 0x4, def value: None
 float_t  m_MinValue;

/// [Tooltip("The maximum value for the axis")]
/// @brief Field m_MaxValue, offset: 0x2c, size: 0x4, def value: None
 float_t  m_MaxValue;

/// [Tooltip("If checked, then the axis will wrap around at the min/max values, forming a loop")]
/// @brief Field m_Wrap, offset: 0x30, size: 0x1, def value: None
 bool  m_Wrap;

/// [Tooltip("Automatic recentering to at-rest position")]
/// @brief Field m_Recentering, offset: 0x34, size: 0x20, def value: None
 ::GlobalNamespace::AxisState_Recentering  m_Recentering;

/// @brief Field m_CurrentSpeed, offset: 0x54, size: 0x4, def value: None
 float_t  m_CurrentSpeed;

/// @brief Field m_LastUpdateTime, offset: 0x58, size: 0x4, def value: None
 float_t  m_LastUpdateTime;

/// @brief Field m_LastUpdateFrame, offset: 0x5c, size: 0x4, def value: None
 int32_t  m_LastUpdateFrame;

/// @brief Field m_InputAxisProvider, offset: 0x60, size: 0x8, def value: None
 ::Unity::Cinemachine::AxisState_IInputAxisProvider*  m_InputAxisProvider;

/// @brief Field m_InputAxisIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  m_InputAxisIndex;

/// [CompilerGenerated]
/// @brief Field <ValueRangeLocked>k__BackingField, offset: 0x6c, size: 0x1, def value: None
 bool  _ValueRangeLocked_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HasRecentering>k__BackingField, offset: 0x6d, size: 0x1, def value: None
 bool  _HasRecentering_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::AxisState, Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_SpeedMode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_MaxSpeed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_AccelTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_DecelTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_InputAxisName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_InputAxisValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_InvertInput) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_MinValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_MaxValue) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_Wrap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_Recentering) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_CurrentSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_LastUpdateTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_LastUpdateFrame) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_InputAxisProvider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, m_InputAxisIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, _ValueRangeLocked_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisState, _HasRecentering_k__BackingField) == 0x6d, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::AxisState) == 0x70, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// [Obsolete("IRequiresInput is deprecated.  Use InputAxis and InputAxisController instead")]
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.AxisState/IRequiresInput
class CORDL_TYPE AxisState_IRequiresInput {
public:
// Declarations
/// @brief Method RequiresInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool RequiresInput() ;

// Ctor Parameters [CppParam { name: "", ty: "AxisState_IRequiresInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisState_IRequiresInput(AxisState_IRequiresInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// [Obsolete("IInputAxisProvider is deprecated.  Use InputAxis and InputAxisController instead")]
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.AxisState/IInputAxisProvider
class CORDL_TYPE AxisState_IInputAxisProvider {
public:
// Declarations
/// @brief Method GetAxisValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetAxisValue(int32_t  axis) ;

// Ctor Parameters [CppParam { name: "", ty: "AxisState_IInputAxisProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisState_IInputAxisProvider(AxisState_IInputAxisProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
