#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxisControllerBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__DefaultInputAxisDriver_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisController_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerBase_1_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerManager_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename T>
constexpr bool& Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_get_ScanRecursively()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScanRecursively;
}
template<typename T>
constexpr bool const& Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_get_ScanRecursively() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScanRecursively;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_set_ScanRecursively(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScanRecursively = value;
}
template<typename T>
constexpr bool& Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_get_SuppressInputWhileBlending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SuppressInputWhileBlending;
}
template<typename T>
constexpr bool const& Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_get_SuppressInputWhileBlending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SuppressInputWhileBlending;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_set_SuppressInputWhileBlending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SuppressInputWhileBlending = value;
}
template<typename T>
constexpr bool& Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_get_IgnoreTimeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTimeScale;
}
template<typename T>
constexpr bool const& Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_get_IgnoreTimeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTimeScale;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_set_IgnoreTimeScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreTimeScale = value;
}
template<typename T>
constexpr ::Unity::Cinemachine::InputAxisControllerManager_1<T>*& Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_get_m_ControllerManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerManager;
}
template<typename T>
constexpr ::Unity::Cinemachine::InputAxisControllerManager_1<T>* const& Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_get_m_ControllerManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerManager;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1<T>::__cordl_internal_set_m_ControllerManager(::Unity::Cinemachine::InputAxisControllerManager_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerManager = value;
}
template<typename T>
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>* Unity::Cinemachine::InputAxisControllerBase_1<T>::get_Controllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(),
                        {"get_Controllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1<T>::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1<T>::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1<T>::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1<T>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1<T>::SynchronizeControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(),
                        {"SynchronizeControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1<T>::InitializeControllerDefaultsForAxis(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, controller);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1<T>::UpdateControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(),
                        {"UpdateControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1<T>::UpdateControllers(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(),
                        {"UpdateControllers", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Unity::Cinemachine::InputAxisControllerBase_1<T>* Unity::Cinemachine::InputAxisControllerBase_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::InputAxisControllerBase_1<T>*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisController"
template<typename T>
constexpr  Unity::Cinemachine::InputAxisControllerBase_1<T>::operator ::Unity::Cinemachine::IInputAxisController*() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::IInputAxisController"
template<typename T>
constexpr ::Unity::Cinemachine::IInputAxisController* Unity::Cinemachine::InputAxisControllerBase_1<T>::i___Unity__Cinemachine__IInputAxisController() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisController*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Cinemachine::InputAxisControllerBase_1<T>::InputAxisControllerBase_1()   {
}
template<typename T>
constexpr ::StringW& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
template<typename T>
constexpr ::StringW const& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
template<typename T>
constexpr ::UnityW<::UnityEngine::Object>& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
template<typename T>
constexpr ::UnityW<::UnityEngine::Object> const& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Owner = value;
}
template<typename T>
constexpr bool& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
template<typename T>
constexpr bool const& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
template<typename T>
constexpr T& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Input;
}
template<typename T>
constexpr T const& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Input;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_set_Input(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Input = value;
}
template<typename T>
constexpr float_t& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_InputValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputValue;
}
template<typename T>
constexpr float_t const& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_InputValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputValue;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_set_InputValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputValue = value;
}
template<typename T>
constexpr ::Unity::Cinemachine::DefaultInputAxisDriver& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Driver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Driver;
}
template<typename T>
constexpr ::Unity::Cinemachine::DefaultInputAxisDriver const& Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_get_Driver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Driver;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::__cordl_internal_set_Driver(::Unity::Cinemachine::DefaultInputAxisDriver  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Driver = value;
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>* Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>::InputAxisControllerBase_1_Controller()   {
}
