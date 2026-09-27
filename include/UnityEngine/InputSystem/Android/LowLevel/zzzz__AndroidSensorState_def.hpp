#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidSensorState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState__data_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AndroidSensorState)
namespace GlobalNamespace {
struct AndroidSensorState__data_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorState");
// Dependencies UnityEngine.InputSystem.Android.LowLevel.AndroidSensorState::<data>e__FixedBuffer, UnityEngine.InputSystem.Utilities.FourCC
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidSensorState
struct CORDL_TYPE AndroidSensorState {
public:
// Declarations
using _data_e__FixedBuffer = ::GlobalNamespace::AndroidSensorState__data_e__FixedBuffer;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Field kFormat, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kFormat, put=setStaticF_kFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  kFormat;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

/// @brief Method WithData, addr 0xafec34c, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState WithData(/* [ParamArray] */ ::ArrayW<float_t>  data) ;

static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_kFormat() ;

/// @brief Method get_format, addr 0xafec40c, size 0x58, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() ;

static inline void setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidSensorState() ;

// Ctor Parameters [CppParam { name: "data", ty: "::GlobalNamespace::AndroidSensorState__data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr AndroidSensorState(::GlobalNamespace::AndroidSensorState__data_e__FixedBuffer  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// [FixedBuffer(typeof(System.Single), 16)]
/// [InputControl(name = "acceleration", layout = "Vector3", processors = "AndroidCompensateDirection", variants = "Accelerometer")]
/// [InputControl(name = "magneticField", layout = "Vector3", variants = "MagneticField")]
/// [InputControl(name = "angularVelocity", layout = "Vector3", processors = "CompensateDirection", variants = "Gyroscope")]
/// [InputControl(name = "lightLevel", layout = "Axis", variants = "Light")]
/// [InputControl(name = "atmosphericPressure", layout = "Axis", variants = "Pressure")]
/// [InputControl(name = "distance", layout = "Axis", variants = "Proximity")]
/// [InputControl(name = "gravity", layout = "Vector3", processors = "AndroidCompensateDirection", variants = "Gravity")]
/// [InputControl(name = "acceleration", layout = "Vector3", processors = "AndroidCompensateDirection", variants = "LinearAcceleration")]
/// [InputControl(name = "attitude", layout = "Quaternion", processors = "AndroidCompensateRotation", variants = "RotationVector")]
/// [InputControl(name = "relativeHumidity", layout = "Axis", variants = "RelativeHumidity")]
/// [InputControl(name = "ambientTemperature", layout = "Axis", variants = "AmbientTemperature")]
/// [InputControl(name = "attitude", layout = "Quaternion", processors = "AndroidCompensateRotation", variants = "GameRotationVector")]
/// [InputControl(name = "stepCounter", layout = "Integer", variants = "StepCounter")]
/// [InputControl(name = "rotation", layout = "Quaternion", processors = "AndroidCompensateRotation", variants = "GeomagneticRotationVector")]
/// [InputControl(name = "rate", layout = "Axis", variants = "HeartRate")]
/// [InputControl(name = "angle", layout = "Axis", variants = "HingeAngle")]
/// @brief Field data, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::AndroidSensorState__data_e__FixedBuffer  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
