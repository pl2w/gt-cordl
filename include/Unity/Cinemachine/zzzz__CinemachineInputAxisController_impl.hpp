#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineInputAxisController.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerBase_1_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineInputAxisController_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineInputAxisController_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_Hints_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisReader_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerBase_1_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputAxisController::*)()>(&::Unity::Cinemachine::CinemachineInputAxisController::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaedf3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController.InitializeControllerDefaultsForAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputAxisController::*)(::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>, ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*)>(&::Unity::Cinemachine::CinemachineInputAxisController::InitializeControllerDefaultsForAxis)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaedf434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputAxisController::*)()>(&::Unity::Cinemachine::CinemachineInputAxisController::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaedf4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputAxisController::*)()>(&::Unity::Cinemachine::CinemachineInputAxisController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaedf52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::CinemachineInputAxisController::__cordl_internal_get_PlayerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIndex;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineInputAxisController::__cordl_internal_get_PlayerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIndex;
}
constexpr void Unity::Cinemachine::CinemachineInputAxisController::__cordl_internal_set_PlayerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerIndex = value;
}
constexpr bool& Unity::Cinemachine::CinemachineInputAxisController::__cordl_internal_get_AutoEnableInputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoEnableInputs;
}
constexpr bool const& Unity::Cinemachine::CinemachineInputAxisController::__cordl_internal_get_AutoEnableInputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoEnableInputs;
}
constexpr void Unity::Cinemachine::CinemachineInputAxisController::__cordl_internal_set_AutoEnableInputs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoEnableInputs = value;
}
constexpr ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*& Unity::Cinemachine::CinemachineInputAxisController::__cordl_internal_get_ReadControlValueOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadControlValueOverride;
}
constexpr ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader* const& Unity::Cinemachine::CinemachineInputAxisController::__cordl_internal_get_ReadControlValueOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadControlValueOverride;
}
constexpr void Unity::Cinemachine::CinemachineInputAxisController::__cordl_internal_set_ReadControlValueOverride(::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReadControlValueOverride = value;
}
inline void Unity::Cinemachine::CinemachineInputAxisController::setStaticF_SetControlDefaults(::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*, "SetControlDefaults", ::Unity::Cinemachine::CinemachineInputAxisController*>(std::forward<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(value));
}
inline ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis* Unity::Cinemachine::CinemachineInputAxisController::getStaticF_SetControlDefaults()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*, "SetControlDefaults", ::Unity::Cinemachine::CinemachineInputAxisController*>();
}
inline void Unity::Cinemachine::CinemachineInputAxisController::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineInputAxisController::InitializeControllerDefaultsForAxis(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, controller);
}
inline void Unity::Cinemachine::CinemachineInputAxisController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineInputAxisController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineInputAxisController* Unity::Cinemachine::CinemachineInputAxisController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineInputAxisController*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineInputAxisController::CinemachineInputAxisController()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController_Reader.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineInputAxisController_Reader::*)(::UnityEngine::Object*, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints)>(&::Unity::Cinemachine::CinemachineInputAxisController_Reader::GetValue)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaedf6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController_Reader.ResolveAndReadInputAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineInputAxisController_Reader::*)(::Unity::Cinemachine::CinemachineInputAxisController*, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints)>(&::Unity::Cinemachine::CinemachineInputAxisController_Reader::ResolveAndReadInputAction)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xaedf804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {"ResolveAndReadInputAction", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineInputAxisController*>(), ::i2c::type_of<::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController_Reader.ReadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineInputAxisController_Reader::*)(::UnityEngine::InputSystem::InputAction*, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints, ::UnityEngine::Object*, ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*)>(&::Unity::Cinemachine::CinemachineInputAxisController_Reader::ReadInput)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xaedfddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {"ReadInput", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController_Reader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputAxisController_Reader::*)()>(&::Unity::Cinemachine::CinemachineInputAxisController_Reader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaee00a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController_Reader._ResolveAndReadInputAction_g__GetFirstMatch_6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)(::by_ref<::UnityEngine::InputSystem::Users::InputUser>, ::UnityEngine::InputSystem::InputActionReference*)>(&::Unity::Cinemachine::CinemachineInputAxisController_Reader::_ResolveAndReadInputAction_g__GetFirstMatch_6_0)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xaedfaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {"<ResolveAndReadInputAction>g__GetFirstMatch|6_0", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Users::InputUser>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_get_InputAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_get_InputAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputAction;
}
constexpr void Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_set_InputAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputAction = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_get_Gain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gain;
}
constexpr float_t const& Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_get_Gain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gain;
}
constexpr void Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_set_Gain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Gain = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_get_m_CachedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_get_m_CachedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedAction;
}
constexpr void Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_set_m_CachedAction(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedAction = value;
}
constexpr bool& Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_get_CancelDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancelDeltaTime;
}
constexpr bool const& Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_get_CancelDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancelDeltaTime;
}
constexpr void Unity::Cinemachine::CinemachineInputAxisController_Reader::__cordl_internal_set_CancelDeltaTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CancelDeltaTime = value;
}
inline float_t Unity::Cinemachine::CinemachineInputAxisController_Reader::GetValue(::UnityEngine::Object*  context, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context, hint);
}
inline float_t Unity::Cinemachine::CinemachineInputAxisController_Reader::ResolveAndReadInputAction(::Unity::Cinemachine::CinemachineInputAxisController*  context, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {"ResolveAndReadInputAction", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineInputAxisController*>(), ::i2c::type_of<::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context, hint);
}
inline float_t Unity::Cinemachine::CinemachineInputAxisController_Reader::ReadInput(::UnityEngine::InputSystem::InputAction*  action, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint, ::UnityEngine::Object*  context, ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  defaultReader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {"ReadInput", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, action, hint, context, defaultReader);
}
inline void Unity::Cinemachine::CinemachineInputAxisController_Reader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* Unity::Cinemachine::CinemachineInputAxisController_Reader::_ResolveAndReadInputAction_g__GetFirstMatch_6_0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::InputSystem::Users::InputUser>  user, ::UnityEngine::InputSystem::InputActionReference*  aRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>(),
                        {"<ResolveAndReadInputAction>g__GetFirstMatch|6_0", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Users::InputUser>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method, user, aRef);
}
inline ::Unity::Cinemachine::CinemachineInputAxisController_Reader* Unity::Cinemachine::CinemachineInputAxisController_Reader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisReader"
constexpr  Unity::Cinemachine::CinemachineInputAxisController_Reader::operator ::Unity::Cinemachine::IInputAxisReader*() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::IInputAxisReader"
constexpr ::Unity::Cinemachine::IInputAxisReader* Unity::Cinemachine::CinemachineInputAxisController_Reader::i___Unity__Cinemachine__IInputAxisReader() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisReader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineInputAxisController_Reader::CinemachineInputAxisController_Reader()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaedfd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::*)(::UnityEngine::InputSystem::InputAction*, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints, ::UnityEngine::Object*, ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*)>(&::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaee00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(),
                    {::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::*)(::UnityEngine::InputSystem::InputAction*, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints, ::UnityEngine::Object*, ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaee00c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(),
                    {::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaee0174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(),
                    {::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::Invoke(::UnityEngine::InputSystem::InputAction*  action, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint, ::UnityEngine::Object*  context, ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  defaultReader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, action, hint, context, defaultReader);
}
inline ::System::IAsyncResult* Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::BeginInvoke(::UnityEngine::InputSystem::InputAction*  action, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint, ::UnityEngine::Object*  context, ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*  defaultReader, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, action, hint, context, defaultReader, callback, object);
}
inline float_t Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader* Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Reader_CinemachineInputAxisController_ControlValueReader::Reader_CinemachineInputAxisController_ControlValueReader()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaedf584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::*)(::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>, ::by_ref<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*>)>(&::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaedf638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::*)(::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>, ::by_ref<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*>, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaedf64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::*)(::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>, ::by_ref<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*>, ::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaedf6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::Invoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::by_ref<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*>  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, controller);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::by_ref<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*>  controller, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, axis, controller, callback, object);
}
inline void Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::EndInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>  axis, ::by_ref<::Unity::Cinemachine::InputAxisControllerBase_1_Controller<::Unity::Cinemachine::CinemachineInputAxisController_Reader*>*>  controller, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, controller, result);
}
inline ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis* Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineInputAxisController_SetControlDefaultsForAxis::CinemachineInputAxisController_SetControlDefaultsForAxis()   {
}
