#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceValueReader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInputDeviceValueReader_1)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class IXRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputValueReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename T>
class InputFeatureUsageString_1;
}
namespace UnityEngine::XR {
struct InputTrackingState;
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
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputDeviceValueReader_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputDeviceValueReader`1");
// Dependencies UnityEngine.XR.InputDevice, UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceValueReader
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceValueReader`1<TValue>
class CORDL_TYPE XRInputDeviceValueReader_1 : public ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader {
public:
// Declarations
/// @brief Field m_InputDevice, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_InputDevice, put=__cordl_internal_set_m_InputDevice)) ::UnityEngine::XR::InputDevice  m_InputDevice;

/// @brief Field m_Usage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Usage, put=__cordl_internal_set_m_Usage)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*  m_Usage;

 __declspec(property(get=get_usage, put=set_usage)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*  usage;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>* New_ctor() ;

/// @brief Method ReadBoolValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ReadBoolValue() ;

/// @brief Method ReadFloatValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t ReadFloatValue() ;

/// @brief Method ReadInputTrackingStateValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputTrackingState ReadInputTrackingStateValue() ;

/// @brief Method ReadQuaternionValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion ReadQuaternionValue() ;

/// @brief Method ReadUIntValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint32_t ReadUIntValue() ;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TValue ReadValue() ;

/// @brief Method ReadVector2Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ReadVector2Value() ;

/// @brief Method ReadVector3Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ReadVector3Value() ;

/// @brief Method RefreshInputDeviceIfNeeded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RefreshInputDeviceIfNeeded() ;

/// @brief Method TryReadBoolValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReadBoolValue(::by_ref<bool>  value) ;

/// @brief Method TryReadFloatValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReadFloatValue(::by_ref<float_t>  value) ;

/// @brief Method TryReadInputTrackingStateValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReadInputTrackingStateValue(::by_ref<::UnityEngine::XR::InputTrackingState>  value) ;

/// @brief Method TryReadQuaternionValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReadQuaternionValue(::by_ref<::UnityEngine::Quaternion>  value) ;

/// @brief Method TryReadUIntValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReadUIntValue(::by_ref<uint32_t>  value) ;

/// @brief Method TryReadValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryReadValue(::by_ref<TValue>  value) ;

/// @brief Method TryReadVector2Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReadVector2Value(::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method TryReadVector3Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReadVector3Value(::by_ref<::UnityEngine::Vector3>  value) ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_m_InputDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_m_InputDevice() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>* const& __cordl_internal_get_m_Usage() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*& __cordl_internal_get_m_Usage() ;

constexpr void __cordl_internal_set_m_InputDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_m_Usage(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_usage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>* get_usage() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_TValue_() noexcept;

/// @brief Method set_usage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_usage(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputDeviceValueReader_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceValueReader_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputDeviceValueReader_1(XRInputDeviceValueReader_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceValueReader_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputDeviceValueReader_1(XRInputDeviceValueReader_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11654};

/// [SerializeField]
/// [Tooltip("The name of the input feature to read.")]
/// @brief Field m_Usage, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*  ___m_Usage;

/// @brief Field m_InputDevice, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___m_InputDevice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
