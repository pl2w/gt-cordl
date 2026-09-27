#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevice)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct HapticCapabilities;
}
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
namespace UnityEngine::XR {
template<typename T>
struct InputFeatureUsage_1;
}
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR {
struct InputDevice;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputDevice);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::InputDevice, "UnityEngine.XR", "InputDevice");
// [UsedByNativeCode]
// [NativeConditional("ENABLE_VR")]
// Dependencies 
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.InputDevice
struct CORDL_TYPE InputDevice {
public:
// Declarations
 __declspec(property(get=get_characteristics)) ::UnityEngine::XR::InputDeviceCharacteristics  characteristics;

 __declspec(property(get=get_deviceId)) uint64_t  deviceId;

 __declspec(property(get=get_isValid)) bool  isValid;

 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Field s_InputSubsystemCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InputSubsystemCache, put=setStaticF_s_InputSubsystemCache)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*  s_InputSubsystemCache;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputDevice>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::InputDevice>*() ;

/// @brief Method CheckValidAndSetDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool CheckValidAndSetDefault(::by_ref<T>  value) ;

/// @brief Method Equals, addr 0xb9355f4, size 0x94, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb935688, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::XR::InputDevice  other) ;

/// @brief Method GetHashCode, addr 0xb9356b0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValidId, addr 0xb9344a4, size 0x20, virtual false, abstract: false, final false
inline bool IsValidId() ;

/// @brief Method SendHapticImpulse, addr 0xb934684, size 0xf8, virtual false, abstract: false, final false
inline bool SendHapticImpulse(uint32_t  channel, float_t  amplitude, float_t  duration) ;

/// @brief Method TryGetFeatureValue, addr 0xb935348, size 0x90, virtual false, abstract: false, final false
inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>  usage, ::by_ref<::UnityEngine::Quaternion>  value) ;

/// @brief Method TryGetFeatureValue, addr 0xb934f10, size 0x90, virtual false, abstract: false, final false
inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>  usage, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method TryGetFeatureValue, addr 0xb93512c, size 0x90, virtual false, abstract: false, final false
inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>  usage, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method TryGetFeatureValue, addr 0xb935564, size 0x90, virtual false, abstract: false, final false
inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState>  usage, ::by_ref<::UnityEngine::XR::InputTrackingState>  value) ;

/// @brief Method TryGetFeatureValue, addr 0xb9348bc, size 0x90, virtual false, abstract: false, final false
inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<bool>  usage, ::by_ref<bool>  value) ;

/// @brief Method TryGetFeatureValue, addr 0xb934cf4, size 0x90, virtual false, abstract: false, final false
inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<float_t>  usage, ::by_ref<float_t>  value) ;

/// @brief Method TryGetFeatureValue, addr 0xb934ad8, size 0x90, virtual false, abstract: false, final false
inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<uint32_t>  usage, ::by_ref<uint32_t>  value) ;

/// @brief Method TryGetHapticCapabilities, addr 0xb9347d8, size 0xa0, virtual false, abstract: false, final false
inline bool TryGetHapticCapabilities(::by_ref<::UnityEngine::XR::HapticCapabilities>  capabilities) ;

/// @brief Method .ctor, addr 0xb934420, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint64_t  deviceId) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* getStaticF_s_InputSubsystemCache() ;

/// @brief Method get_characteristics, addr 0xb9345ec, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputDeviceCharacteristics get_characteristics() ;

/// @brief Method get_deviceId, addr 0xb934430, size 0x18, virtual false, abstract: false, final false
inline uint64_t get_deviceId() ;

/// @brief Method get_isValid, addr 0xb934448, size 0x5c, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Method get_name, addr 0xb934500, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::InputDevice>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::InputDevice>* i___System__IEquatable_1___UnityEngine__XR__InputDevice_() ;

/// @brief Method op_Equality, addr 0xb9356e0, size 0x1c, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::XR::InputDevice  a, ::UnityEngine::XR::InputDevice  b) ;

static inline void setStaticF_s_InputSubsystemCache(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputDevice() ;

// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Initialized", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr InputDevice(uint64_t  m_DeviceId, bool  m_Initialized) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31618};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_DeviceId, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_DeviceId;

/// @brief Field m_Initialized, offset: 0x8, size: 0x1, def value: None
 bool  m_Initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::InputDevice, m_DeviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::InputDevice, m_Initialized) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR
