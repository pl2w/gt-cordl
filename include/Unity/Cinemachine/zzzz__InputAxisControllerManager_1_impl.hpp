#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxisControllerManager_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerManager_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisResetSource_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerBase_1_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerManager_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*& Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_get_Controllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controllers;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>* const& Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_get_Controllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controllers;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_set_Controllers(::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Controllers = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*& Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_get_m_Axes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axes;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>* const& Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_get_m_Axes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axes;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_set_m_Axes(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Axes = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisOwner*>*& Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_get_m_AxisOwners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AxisOwners;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisOwner*>* const& Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_get_m_AxisOwners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AxisOwners;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_set_m_AxisOwners(::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisOwner*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AxisOwners = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisResetSource*>*& Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_get_m_AxisResetters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AxisResetters;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisResetSource*>* const& Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_get_m_AxisResetters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AxisResetters;
}
template<typename T>
constexpr void Unity::Cinemachine::InputAxisControllerManager_1<T>::__cordl_internal_set_m_AxisResetters(::System::Collections::Generic::List_1<::Unity::Cinemachine::IInputAxisResetSource*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AxisResetters = value;
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1<T>::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1<T>::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1<T>::OnResetInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>(),
                        {"OnResetInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1<T>::CreateControllers(::UnityEngine::GameObject*  root, bool  scanRecursively, bool  enabled, ::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>*  defaultInitializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>(),
                        {"CreateControllers", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, scanRecursively, enabled, defaultInitializer);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1<T>::RegisterResetHandlers(::UnityEngine::GameObject*  root, bool  scanRecursively)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>(),
                        {"RegisterResetHandlers", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, scanRecursively);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1<T>::UpdateControllers(::UnityEngine::Object*  context, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>(),
                        {"UpdateControllers", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, deltaTime);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t Unity::Cinemachine::InputAxisControllerManager_1<T>::_CreateControllers_g__GetControllerIndex_9_0(::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*  list, ::Unity::Cinemachine::IInputAxisOwner*  owner, ::StringW  axisName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>(),
                        {"<CreateControllers>g__GetControllerIndex|9_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*>*>(), ::i2c::type_of<::Unity::Cinemachine::IInputAxisOwner*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, owner, axisName);
}
template<typename T>
inline ::Unity::Cinemachine::InputAxisControllerManager_1<T>* Unity::Cinemachine::InputAxisControllerManager_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::InputAxisControllerManager_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Cinemachine::InputAxisControllerManager_1<T>::InputAxisControllerManager_1()   {
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>::Invoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, controller);
}
template<typename T>
inline ::System::IAsyncResult* Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<T>*  controller, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, axis, controller, callback, object);
}
template<typename T>
inline void Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>::EndInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, result);
}
template<typename T>
inline ::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>* Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Cinemachine::InputAxisControllerManager_1_DefaultInitializer<T>::InputAxisControllerManager_1_DefaultInitializer()   {
}
