#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FromOVRControllerDataSource.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__IUsage_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__OVRPointerPoseSelector_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__FromOVRControllerDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataSourceConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOVRCameraRigRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.get_CameraRigRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IOVRCameraRigRef* (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::get_CameraRigRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41c3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"get_CameraRigRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.set_CameraRigRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)(::Oculus::Interaction::Input::IOVRCameraRigRef*)>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::set_CameraRigRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41c3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"set_CameraRigRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.get_ProcessLateUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::get_ProcessLateUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41c3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"get_ProcessLateUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.set_ProcessLateUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)(bool)>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::set_ProcessLateUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41c3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"set_ProcessLateUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa41c3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa41c4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa41c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::OnDisable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa41c6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.HandleInputDataDirtied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)(bool)>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::HandleInputDataDirtied)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa41c7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.get_Config
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerDataSourceConfig* (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::get_Config)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa41c818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"get_Config", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.UpdateConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::UpdateConfig)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa41c498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"UpdateConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::UpdateData)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0xa41c89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.get_DataAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerDataAsset* (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::get_DataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.InjectAllFromOVRControllerDataSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, ::Oculus::Interaction::Input::Handedness, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::InjectAllFromOVRControllerDataSource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa41cd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"InjectAllFromOVRControllerDataSource", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.InjectHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::InjectHandedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41cee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"InjectHandedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource.InjectTrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)(::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::InjectTrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa41ce18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"InjectTrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa41cef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRControllerDataSource._Start_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRControllerDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRControllerDataSource::_Start_b__18_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa41d464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"<Start>b__18_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__cameraRigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__cameraRigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRigRef = value;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__CameraRigRef_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraRigRef_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__CameraRigRef_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraRigRef_k__BackingField;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set__CameraRigRef_k__BackingField(::Oculus::Interaction::Input::IOVRCameraRigRef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraRigRef_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__processLateUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processLateUpdates;
}
constexpr bool const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__processLateUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processLateUpdates;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set__processLateUpdates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processLateUpdates = value;
}
constexpr ::Oculus::Interaction::Input::Handedness& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__handedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr ::Oculus::Interaction::Input::Handedness const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__handedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handedness = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__trackingToWorldTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__trackingToWorldTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingToWorldTransformer = value;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get_TrackingToWorldTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingToWorldTransformer;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get_TrackingToWorldTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingToWorldTransformer;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackingToWorldTransformer = value;
}
constexpr ::Oculus::Interaction::Input::ControllerDataAsset*& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__controllerDataAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerDataAsset;
}
constexpr ::Oculus::Interaction::Input::ControllerDataAsset* const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__controllerDataAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerDataAsset;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set__controllerDataAsset(::Oculus::Interaction::Input::ControllerDataAsset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerDataAsset = value;
}
constexpr ::GlobalNamespace::OVRInput_Controller& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__ovrController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrController;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__ovrController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrController;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set__ovrController(::GlobalNamespace::OVRInput_Controller  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ovrController = value;
}
constexpr ::Oculus::Interaction::Input::ControllerDataSourceConfig*& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Oculus::Interaction::Input::ControllerDataSourceConfig* const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set__config(::Oculus::Interaction::Input::ControllerDataSourceConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr ::Oculus::Interaction::Input::OVRPointerPoseSelector& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__pointerPoseSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerPoseSelector;
}
constexpr ::Oculus::Interaction::Input::OVRPointerPoseSelector const& Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_get__pointerPoseSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerPoseSelector;
}
constexpr void Oculus::Interaction::Input::FromOVRControllerDataSource::__cordl_internal_set__pointerPoseSelector(::Oculus::Interaction::Input::OVRPointerPoseSelector  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerPoseSelector = value;
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::setStaticF_ControllerUsageMappings(::ArrayW<::Oculus::Interaction::Input::IUsage*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::Input::IUsage*>, "ControllerUsageMappings", ::Oculus::Interaction::Input::FromOVRControllerDataSource*>(std::forward<::ArrayW<::Oculus::Interaction::Input::IUsage*>>(value));
}
inline ::ArrayW<::Oculus::Interaction::Input::IUsage*> Oculus::Interaction::Input::FromOVRControllerDataSource::getStaticF_ControllerUsageMappings()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::Input::IUsage*>, "ControllerUsageMappings", ::Oculus::Interaction::Input::FromOVRControllerDataSource*>();
}
inline ::Oculus::Interaction::Input::IOVRCameraRigRef* Oculus::Interaction::Input::FromOVRControllerDataSource::get_CameraRigRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"get_CameraRigRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IOVRCameraRigRef*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"set_CameraRigRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::FromOVRControllerDataSource::get_ProcessLateUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"get_ProcessLateUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::set_ProcessLateUpdates(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"set_ProcessLateUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::HandleInputDataDirtied(bool  isLateUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLateUpdate);
}
inline ::Oculus::Interaction::Input::ControllerDataSourceConfig* Oculus::Interaction::Input::FromOVRControllerDataSource::get_Config()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"get_Config", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerDataSourceConfig*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::UpdateConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"UpdateConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::UpdateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::ControllerDataAsset* Oculus::Interaction::Input::FromOVRControllerDataSource::get_DataAsset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerDataAsset*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::InjectAllFromOVRControllerDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"InjectAllFromOVRControllerDataSource", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, handedness, trackingToWorldTransformer);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::InjectHandedness(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"InjectHandedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handedness);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::InjectTrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"InjectTrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingToWorldTransformer);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRControllerDataSource::_Start_b__18_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRControllerDataSource*>(),
                        {"<Start>b__18_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::FromOVRControllerDataSource* Oculus::Interaction::Input::FromOVRControllerDataSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::FromOVRControllerDataSource*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::FromOVRControllerDataSource::FromOVRControllerDataSource()   {
}
