#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevices.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevices)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::XR {
struct ConnectionChangeType;
}
namespace UnityEngine::XR {
struct HapticCapabilities;
}
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct XRNode;
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
class InputDevices;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::InputDevices*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::InputDevices*, "UnityEngine.XR", "InputDevices");
// [StaticAccessor("XRInputDevices::Get()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputDevices.h")]
// [NativeConditional("ENABLE_VR")]
// [UsedByNativeCode]
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.InputDevices
class CORDL_TYPE InputDevices : public ::System::Object {
public:
// Declarations
/// @brief Field deviceConfigChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deviceConfigChanged, put=setStaticF_deviceConfigChanged)) ::System::Action_1<::UnityEngine::XR::InputDevice>*  deviceConfigChanged;

/// @brief Field deviceConnected, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deviceConnected, put=setStaticF_deviceConnected)) ::System::Action_1<::UnityEngine::XR::InputDevice>*  deviceConnected;

/// @brief Field deviceDisconnected, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deviceDisconnected, put=setStaticF_deviceDisconnected)) ::System::Action_1<::UnityEngine::XR::InputDevice>*  deviceDisconnected;

/// @brief Method GetDeviceAtXRNode, addr 0xb935a2c, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDevice GetDeviceAtXRNode(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetDeviceCharacteristics, addr 0xb934648, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics GetDeviceCharacteristics(uint64_t  deviceId) ;

/// @brief Method GetDeviceName, addr 0xb934520, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW GetDeviceName(uint64_t  deviceId) ;

/// @brief Method GetDeviceName_Injected, addr 0xb93672c, size 0x44, virtual false, abstract: false, final false
static inline void GetDeviceName_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetDevices, addr 0xb935d08, size 0x94, virtual false, abstract: false, final false
static inline void GetDevices(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices) ;

/// @brief Method GetDevicesAtXRNode, addr 0xb935a70, size 0x298, virtual false, abstract: false, final false
static inline void GetDevicesAtXRNode(::UnityEngine::XR::XRNode  node, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices) ;

/// @brief Method GetDevices_Internal, addr 0xb935d9c, size 0x1c8, virtual false, abstract: false, final false
static inline void GetDevices_Internal(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices) ;

/// @brief Method GetDevices_Internal_Injected, addr 0xb9364f8, size 0x3c, virtual false, abstract: false, final false
static inline void GetDevices_Internal_Injected(::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  inputDevices) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeConnectionEvent, addr 0xb93643c, size 0xbc, virtual false, abstract: false, final false
static inline void InvokeConnectionEvent(uint64_t  deviceId, ::UnityEngine::XR::ConnectionChangeType  change) ;

/// @brief Method IsDeviceValid, addr 0xb9344c4, size 0x3c, virtual false, abstract: false, final false
static inline bool IsDeviceValid(uint64_t  deviceId) ;

/// @brief Method SendHapticImpulse, addr 0xb93477c, size 0x5c, virtual false, abstract: false, final false
static inline bool SendHapticImpulse(uint64_t  deviceId, uint32_t  channel, float_t  amplitude, float_t  duration) ;

/// @brief Method TryGetFeatureValue_Quaternionf, addr 0xb9353d8, size 0x18c, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_Quaternionf(uint64_t  deviceId, ::StringW  usage, ::by_ref<::UnityEngine::Quaternion>  value) ;

/// @brief Method TryGetFeatureValue_Quaternionf_Injected, addr 0xb9366d8, size 0x54, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_Quaternionf_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<::UnityEngine::Quaternion>  value) ;

/// @brief Method TryGetFeatureValue_UInt32, addr 0xb934b68, size 0x18c, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_UInt32(uint64_t  deviceId, ::StringW  usage, ::by_ref<uint32_t>  value) ;

/// @brief Method TryGetFeatureValue_UInt32_Injected, addr 0xb936588, size 0x54, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_UInt32_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<uint32_t>  value) ;

/// @brief Method TryGetFeatureValue_Vector2f, addr 0xb934fa0, size 0x18c, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_Vector2f(uint64_t  deviceId, ::StringW  usage, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method TryGetFeatureValue_Vector2f_Injected, addr 0xb936630, size 0x54, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_Vector2f_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method TryGetFeatureValue_Vector3f, addr 0xb9351bc, size 0x18c, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_Vector3f(uint64_t  deviceId, ::StringW  usage, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method TryGetFeatureValue_Vector3f_Injected, addr 0xb936684, size 0x54, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_Vector3f_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method TryGetFeatureValue_bool, addr 0xb93494c, size 0x18c, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_bool(uint64_t  deviceId, ::StringW  usage, ::by_ref<bool>  value) ;

/// @brief Method TryGetFeatureValue_bool_Injected, addr 0xb936534, size 0x54, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_bool_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<bool>  value) ;

/// @brief Method TryGetFeatureValue_float, addr 0xb934d84, size 0x18c, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_float(uint64_t  deviceId, ::StringW  usage, ::by_ref<float_t>  value) ;

/// @brief Method TryGetFeatureValue_float_Injected, addr 0xb9365dc, size 0x54, virtual false, abstract: false, final false
static inline bool TryGetFeatureValue_float_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<float_t>  value) ;

/// @brief Method TryGetHapticCapabilities, addr 0xb934878, size 0x44, virtual false, abstract: false, final false
static inline bool TryGetHapticCapabilities(uint64_t  deviceId, ::by_ref<::UnityEngine::XR::HapticCapabilities>  capabilities) ;

/// [CompilerGenerated]
/// @brief Method add_deviceConfigChanged, addr 0xb93629c, size 0xd0, virtual false, abstract: false, final false
static inline void add_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_deviceConnected, addr 0xb935f64, size 0xcc, virtual false, abstract: false, final false
static inline void add_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_deviceDisconnected, addr 0xb9360fc, size 0xd0, virtual false, abstract: false, final false
static inline void add_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceConfigChanged() ;

static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceConnected() ;

static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceDisconnected() ;

/// [CompilerGenerated]
/// @brief Method remove_deviceConfigChanged, addr 0xb93636c, size 0xd0, virtual false, abstract: false, final false
static inline void remove_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_deviceConnected, addr 0xb936030, size 0xcc, virtual false, abstract: false, final false
static inline void remove_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_deviceDisconnected, addr 0xb9361cc, size 0xd0, virtual false, abstract: false, final false
static inline void remove_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

static inline void setStaticF_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

static inline void setStaticF_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

static inline void setStaticF_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputDevices() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputDevices(InputDevices && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputDevices(InputDevices const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31622};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::InputDevices) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR
