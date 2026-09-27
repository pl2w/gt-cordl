#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceValueReader_1.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__InputFeatureUsageString_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template<typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::__cordl_internal_get_m_Usage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Usage;
}
template<typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::__cordl_internal_get_m_Usage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Usage;
}
template<typename TValue>
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::__cordl_internal_set_m_Usage(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Usage = value;
}
template<typename TValue>
constexpr ::UnityEngine::XR::InputDevice& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::__cordl_internal_get_m_InputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputDevice;
}
template<typename TValue>
constexpr ::UnityEngine::XR::InputDevice const& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::__cordl_internal_get_m_InputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputDevice;
}
template<typename TValue>
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::__cordl_internal_set_m_InputDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputDevice = value;
}
template<typename TValue>
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::get_usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"get_usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*>(this, ___internal_method);
}
template<typename TValue>
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::set_usage(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"set_usage", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TValue>
inline TValue UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::ReadValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::TryReadValue(::by_ref<TValue>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::ReadBoolValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"ReadBoolValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TValue>
inline uint32_t UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::ReadUIntValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"ReadUIntValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
template<typename TValue>
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::ReadFloatValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"ReadFloatValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TValue>
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::ReadVector2Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"ReadVector2Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
template<typename TValue>
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::ReadVector3Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"ReadVector3Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
template<typename TValue>
inline ::UnityEngine::Quaternion UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::ReadQuaternionValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"ReadQuaternionValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
template<typename TValue>
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::ReadInputTrackingStateValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"ReadInputTrackingStateValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState>(this, ___internal_method);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::TryReadBoolValue(::by_ref<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"TryReadBoolValue", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::TryReadUIntValue(::by_ref<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"TryReadUIntValue", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::TryReadFloatValue(::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"TryReadFloatValue", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::TryReadVector2Value(::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"TryReadVector2Value", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::TryReadVector3Value(::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"TryReadVector3Value", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::TryReadQuaternionValue(::by_ref<::UnityEngine::Quaternion>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"TryReadQuaternionValue", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::TryReadInputTrackingStateValue(::by_ref<::UnityEngine::XR::InputTrackingState>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"TryReadInputTrackingStateValue", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::InputTrackingState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::RefreshInputDeviceIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {"RefreshInputDeviceIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TValue>
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TValue>
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
template<typename TValue>
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
template<typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_TValue_() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
template<typename TValue>
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
template<typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<TValue>::XRInputDeviceValueReader_1()   {
}
