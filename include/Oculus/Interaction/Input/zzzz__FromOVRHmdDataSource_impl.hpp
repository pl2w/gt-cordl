#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FromOVRHmdDataSource.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__FromOVRHmdDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HmdDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HmdDataSourceConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOVRCameraRigRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.get_CameraRigRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IOVRCameraRigRef* (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::get_CameraRigRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41e834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"get_CameraRigRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.set_CameraRigRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)(::Oculus::Interaction::Input::IOVRCameraRigRef*)>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::set_CameraRigRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41e83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"set_CameraRigRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.get_ProcessLateUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::get_ProcessLateUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41e844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"get_ProcessLateUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.set_ProcessLateUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)(bool)>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::set_ProcessLateUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41e84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"set_ProcessLateUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa41e854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa41e8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa41e98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::OnDisable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa41eaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.HandleInputDataDirtied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)(bool)>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::HandleInputDataDirtied)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa41ebd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.get_Config
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HmdDataSourceConfig* (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::get_Config)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa41ebf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"get_Config", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::UpdateData)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa41ec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.get_DataAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HmdDataAsset* (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::get_DataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41efc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.InjectAllFromOVRHmdDataSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HmdDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, bool, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::InjectAllFromOVRHmdDataSource)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa41efd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"InjectAllFromOVRHmdDataSource", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HmdDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.InjectUseOvrManagerEmulatedPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)(bool)>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::InjectUseOvrManagerEmulatedPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41f124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"InjectUseOvrManagerEmulatedPose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource.InjectTrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)(::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::InjectTrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa41f054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"InjectTrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa41f12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHmdDataSource._Start_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHmdDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHmdDataSource::_Start_b__15_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa41f1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"<Start>b__15_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__cameraRigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__cameraRigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr void Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRigRef = value;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__CameraRigRef_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraRigRef_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__CameraRigRef_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraRigRef_k__BackingField;
}
constexpr void Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_set__CameraRigRef_k__BackingField(::Oculus::Interaction::Input::IOVRCameraRigRef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraRigRef_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__processLateUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processLateUpdates;
}
constexpr bool const& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__processLateUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processLateUpdates;
}
constexpr void Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_set__processLateUpdates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processLateUpdates = value;
}
constexpr bool& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__useOvrManagerEmulatedPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useOvrManagerEmulatedPose;
}
constexpr bool const& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__useOvrManagerEmulatedPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useOvrManagerEmulatedPose;
}
constexpr void Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_set__useOvrManagerEmulatedPose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useOvrManagerEmulatedPose = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__trackingToWorldTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__trackingToWorldTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr void Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingToWorldTransformer = value;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get_TrackingToWorldTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingToWorldTransformer;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get_TrackingToWorldTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingToWorldTransformer;
}
constexpr void Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackingToWorldTransformer = value;
}
constexpr ::Oculus::Interaction::Input::HmdDataAsset*& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__hmdDataAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmdDataAsset;
}
constexpr ::Oculus::Interaction::Input::HmdDataAsset* const& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__hmdDataAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmdDataAsset;
}
constexpr void Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_set__hmdDataAsset(::Oculus::Interaction::Input::HmdDataAsset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmdDataAsset = value;
}
constexpr ::Oculus::Interaction::Input::HmdDataSourceConfig*& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Oculus::Interaction::Input::HmdDataSourceConfig* const& Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Oculus::Interaction::Input::FromOVRHmdDataSource::__cordl_internal_set__config(::Oculus::Interaction::Input::HmdDataSourceConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
inline ::Oculus::Interaction::Input::IOVRCameraRigRef* Oculus::Interaction::Input::FromOVRHmdDataSource::get_CameraRigRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"get_CameraRigRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IOVRCameraRigRef*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"set_CameraRigRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IOVRCameraRigRef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::FromOVRHmdDataSource::get_ProcessLateUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"get_ProcessLateUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::set_ProcessLateUpdates(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"set_ProcessLateUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::HandleInputDataDirtied(bool  isLateUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLateUpdate);
}
inline ::Oculus::Interaction::Input::HmdDataSourceConfig* Oculus::Interaction::Input::FromOVRHmdDataSource::get_Config()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"get_Config", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HmdDataSourceConfig*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::UpdateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HmdDataAsset* Oculus::Interaction::Input::FromOVRHmdDataSource::get_DataAsset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HmdDataAsset*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::InjectAllFromOVRHmdDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HmdDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, bool  useOvrManagerEmulatedPose, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"InjectAllFromOVRHmdDataSource", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HmdDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, useOvrManagerEmulatedPose, trackingToWorldTransformer);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::InjectUseOvrManagerEmulatedPose(bool  useOvrManagerEmulatedPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"InjectUseOvrManagerEmulatedPose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useOvrManagerEmulatedPose);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::InjectTrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"InjectTrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingToWorldTransformer);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHmdDataSource::_Start_b__15_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHmdDataSource*>(),
                        {"<Start>b__15_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::FromOVRHmdDataSource* Oculus::Interaction::Input::FromOVRHmdDataSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::FromOVRHmdDataSource*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::FromOVRHmdDataSource::FromOVRHmdDataSource()   {
}
