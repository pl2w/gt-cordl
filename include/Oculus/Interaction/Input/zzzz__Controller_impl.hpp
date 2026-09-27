#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Controller.hpp"
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__Controller_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerInput_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Controller_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.get_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Handedness (::Oculus::Interaction::Input::Controller::*)()>(&::Oculus::Interaction::Input::Controller::get_Handedness)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa504038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Controller::*)()>(&::Oculus::Interaction::Input::Controller::get_IsConnected)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa504098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.get_IsPoseValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Controller::*)()>(&::Oculus::Interaction::Input::Controller::get_IsPoseValid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa504108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.get_IsPointerPoseValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Controller::*)()>(&::Oculus::Interaction::Input::Controller::get_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa504178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.get_ControllerInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerInput (::Oculus::Interaction::Input::Controller::*)()>(&::Oculus::Interaction::Input::Controller::get_ControllerInput)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa5041e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.add_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Controller::*)(::System::Action*)>(&::Oculus::Interaction::Input::Controller::add_WhenUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa504258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.remove_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Controller::*)(::System::Action*)>(&::Oculus::Interaction::Input::Controller::remove_WhenUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa5042f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.get_TrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer* (::Oculus::Interaction::Input::Controller::*)()>(&::Oculus::Interaction::Input::Controller::get_TrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa504390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::Controller::*)()>(&::Oculus::Interaction::Input::Controller::get_Scale)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa5043f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.IsButtonUsageAnyActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Controller::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&::Oculus::Interaction::Input::Controller::IsButtonUsageAnyActive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa5044bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.IsButtonUsageAllActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Controller::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&::Oculus::Interaction::Input::Controller::IsButtonUsageAllActive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa504538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.TryGetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Controller::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Controller::TryGetPose)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa5045b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.TryGetPointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Controller::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Controller::TryGetPointerPose)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa504744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.MarkInputDataRequiresUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Controller::*)()>(&::Oculus::Interaction::Input::Controller::MarkInputDataRequiresUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa5048d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Controller::*)(::Oculus::Interaction::Input::ControllerDataAsset*)>(&::Oculus::Interaction::Input::Controller::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa504958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller.InjectAllController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Controller::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*, bool)>(&::Oculus::Interaction::Input::Controller::InjectAllController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa50495c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                        {"InjectAllController", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Controller::*)()>(&::Oculus::Interaction::Input::Controller::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa5049d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Oculus::Interaction::Input::Controller::__cordl_internal_get_WhenUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::Input::Controller::__cordl_internal_get_WhenUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUpdated;
}
constexpr void Oculus::Interaction::Input::Controller::__cordl_internal_set_WhenUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenUpdated = value;
}
inline ::Oculus::Interaction::Input::Handedness Oculus::Interaction::Input::Controller::get_Handedness()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Handedness>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Controller::get_IsConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Controller::get_IsPoseValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Controller::get_IsPointerPoseValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::ControllerInput Oculus::Interaction::Input::Controller::get_ControllerInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerInput>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Controller::add_WhenUpdated(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::Controller::remove_WhenUpdated(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* Oculus::Interaction::Input::Controller::get_TrackingToWorldTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Input::Controller::get_Scale()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Controller::IsButtonUsageAnyActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buttonUsage);
}
inline bool Oculus::Interaction::Input::Controller::IsButtonUsageAllActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buttonUsage);
}
inline bool Oculus::Interaction::Input::Controller::TryGetPose(::by_ref<::UnityEngine::Pose>  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline bool Oculus::Interaction::Input::Controller::TryGetPointerPose(::by_ref<::UnityEngine::Pose>  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::Input::Controller::MarkInputDataRequiresUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Controller::Apply(::Oculus::Interaction::Input::ControllerDataAsset*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Controller*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::Controller::InjectAllController(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*  modifyDataFromSource, bool  applyModifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                        {"InjectAllController", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, modifyDataFromSource, applyModifier);
}
inline void Oculus::Interaction::Input::Controller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Controller* Oculus::Interaction::Input::Controller::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Controller*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IController"
constexpr  Oculus::Interaction::Input::Controller::operator ::Oculus::Interaction::Input::IController*() noexcept {
return static_cast<::Oculus::Interaction::Input::IController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IController"
constexpr ::Oculus::Interaction::Input::IController* Oculus::Interaction::Input::Controller::i___Oculus__Interaction__Input__IController() noexcept {
return static_cast<::Oculus::Interaction::Input::IController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Controller::Controller()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Controller___c::*)()>(&::Oculus::Interaction::Input::Controller___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Controller___c.__ctor_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Controller___c::*)()>(&::Oculus::Interaction::Input::Controller___c::__ctor_b__24_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa504b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller___c*>(),
                        {"<.ctor>b__24_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::Controller___c::setStaticF___9(::Oculus::Interaction::Input::Controller___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::Controller___c*, "<>9", ::Oculus::Interaction::Input::Controller___c*>(std::forward<::Oculus::Interaction::Input::Controller___c*>(value));
}
inline ::Oculus::Interaction::Input::Controller___c* Oculus::Interaction::Input::Controller___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::Controller___c*, "<>9", ::Oculus::Interaction::Input::Controller___c*>();
}
inline void Oculus::Interaction::Input::Controller___c::setStaticF___9__24_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__24_0", ::Oculus::Interaction::Input::Controller___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Input::Controller___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__24_0", ::Oculus::Interaction::Input::Controller___c*>();
}
inline void Oculus::Interaction::Input::Controller___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Controller___c::__ctor_b__24_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Controller___c*>(),
                        {"<.ctor>b__24_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Controller___c* Oculus::Interaction::Input::Controller___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Controller___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Controller___c::Controller___c()   {
}
