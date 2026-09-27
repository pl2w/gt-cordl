#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FromOVRHandDataSource.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__FromOVRHandDataSource_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_SkeletonPoseData_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataSourceConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHandSkeletonProvider_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOVRCameraRigRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.get_ProcessLateUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::get_ProcessLateUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41d4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"get_ProcessLateUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.set_ProcessLateUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)(bool)>(&::Oculus::Interaction::Input::FromOVRHandDataSource::set_ProcessLateUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41d4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"set_ProcessLateUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.get_DataAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandDataAsset* (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::get_DataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41d4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.get_WristFixupRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::get_WristFixupRotation)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa41d4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"get_WristFixupRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::Awake)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa41d520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::Start)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa41d720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa41d934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::OnDisable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa41da54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.HandleInputDataDirtied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)(bool)>(&::Oculus::Interaction::Input::FromOVRHandDataSource::HandleInputDataDirtied)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa41db7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.get_Config
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandDataSourceConfig* (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::get_Config)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa41db9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"get_Config", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.UpdateConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::UpdateConfig)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa41d62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"UpdateConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::UpdateData)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa41dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.UpdateDataPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)(::GlobalNamespace::OVRSkeleton_SkeletonPoseData)>(&::Oculus::Interaction::Input::FromOVRHandDataSource::UpdateDataPoses)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0xa41deb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"UpdateDataPoses", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.InjectAllFromOVRHandDataSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, ::Oculus::Interaction::Input::Handedness, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*, ::Oculus::Interaction::Input::IHandSkeletonProvider*)>(&::Oculus::Interaction::Input::FromOVRHandDataSource::InjectAllFromOVRHandDataSource)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa41e4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectAllFromOVRHandDataSource", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHandSkeletonProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.InjectHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::Input::FromOVRHandDataSource::InjectHandedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectHandedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.InjectTrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)(::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::Input::FromOVRHandDataSource::InjectTrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa41e564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectTrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.InjectHandSkeletonProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)(::Oculus::Interaction::Input::IHandSkeletonProvider*)>(&::Oculus::Interaction::Input::FromOVRHandDataSource::InjectHandSkeletonProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa41e634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectHandSkeletonProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHandSkeletonProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource.InjectOptionalOVRHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)(::GlobalNamespace::OVRHand*)>(&::Oculus::Interaction::Input::FromOVRHandDataSource::InjectOptionalOVRHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41e70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectOptionalOVRHand", {}, {::i2c::type_of<::GlobalNamespace::OVRHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa41e714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromOVRHandDataSource._Start_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromOVRHandDataSource::*)()>(&::Oculus::Interaction::Input::FromOVRHandDataSource::_Start_b__21_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa41e7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"<Start>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__cameraRigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__cameraRigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRigRef = value;
}
constexpr bool& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__processLateUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processLateUpdates;
}
constexpr bool const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__processLateUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processLateUpdates;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set__processLateUpdates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processLateUpdates = value;
}
constexpr ::Oculus::Interaction::Input::Handedness& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__handedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr ::Oculus::Interaction::Input::Handedness const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__handedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handedness = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand>& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__ovrHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrHand;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__ovrHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrHand;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set__ovrHand(::UnityW<::GlobalNamespace::OVRHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ovrHand = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__trackingToWorldTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__trackingToWorldTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingToWorldTransformer = value;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get_TrackingToWorldTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingToWorldTransformer;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get_TrackingToWorldTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingToWorldTransformer;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackingToWorldTransformer = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__handSkeletonProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handSkeletonProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__handSkeletonProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handSkeletonProvider;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set__handSkeletonProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handSkeletonProvider = value;
}
constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider*& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get_HandSkeletonProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandSkeletonProvider;
}
constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider* const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get_HandSkeletonProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandSkeletonProvider;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set_HandSkeletonProvider(::Oculus::Interaction::Input::IHandSkeletonProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandSkeletonProvider = value;
}
constexpr ::Oculus::Interaction::Input::HandDataAsset*& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__handDataAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handDataAsset;
}
constexpr ::Oculus::Interaction::Input::HandDataAsset* const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__handDataAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handDataAsset;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set__handDataAsset(::Oculus::Interaction::Input::HandDataAsset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handDataAsset = value;
}
constexpr float_t& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__lastHandScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHandScale;
}
constexpr float_t const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__lastHandScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHandScale;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set__lastHandScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHandScale = value;
}
constexpr ::Oculus::Interaction::Input::HandDataSourceConfig*& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Oculus::Interaction::Input::HandDataSourceConfig* const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set__config(::Oculus::Interaction::Input::HandDataSourceConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get_CameraRigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRigRef;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_get_CameraRigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRigRef;
}
constexpr void Oculus::Interaction::Input::FromOVRHandDataSource::__cordl_internal_set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraRigRef = value;
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::setStaticF__WristFixupRotation_k__BackingField(::UnityEngine::Quaternion  value)  {
::cordl_internals::setStaticField<::UnityEngine::Quaternion, "<WristFixupRotation>k__BackingField", ::Oculus::Interaction::Input::FromOVRHandDataSource*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Input::FromOVRHandDataSource::getStaticF__WristFixupRotation_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "<WristFixupRotation>k__BackingField", ::Oculus::Interaction::Input::FromOVRHandDataSource*>();
}
inline bool Oculus::Interaction::Input::FromOVRHandDataSource::get_ProcessLateUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"get_ProcessLateUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::set_ProcessLateUpdates(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"set_ProcessLateUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::HandDataAsset* Oculus::Interaction::Input::FromOVRHandDataSource::get_DataAsset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandDataAsset*>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Input::FromOVRHandDataSource::get_WristFixupRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"get_WristFixupRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::HandleInputDataDirtied(bool  isLateUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLateUpdate);
}
inline ::Oculus::Interaction::Input::HandDataSourceConfig* Oculus::Interaction::Input::FromOVRHandDataSource::get_Config()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"get_Config", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandDataSourceConfig*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::UpdateConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"UpdateConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::UpdateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::UpdateDataPoses(::GlobalNamespace::OVRSkeleton_SkeletonPoseData  poseData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"UpdateDataPoses", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseData);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::InjectAllFromOVRHandDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer, ::Oculus::Interaction::Input::IHandSkeletonProvider*  handSkeletonProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectAllFromOVRHandDataSource", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHandSkeletonProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, handedness, trackingToWorldTransformer, handSkeletonProvider);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::InjectHandedness(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectHandedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handedness);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::InjectTrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectTrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingToWorldTransformer);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::InjectHandSkeletonProvider(::Oculus::Interaction::Input::IHandSkeletonProvider*  handSkeletonProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectHandSkeletonProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHandSkeletonProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handSkeletonProvider);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::InjectOptionalOVRHand(::GlobalNamespace::OVRHand*  ovrHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"InjectOptionalOVRHand", {}, {::i2c::type_of<::GlobalNamespace::OVRHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ovrHand);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromOVRHandDataSource::_Start_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromOVRHandDataSource*>(),
                        {"<Start>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::FromOVRHandDataSource* Oculus::Interaction::Input::FromOVRHandDataSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::FromOVRHandDataSource*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::FromOVRHandDataSource::FromOVRHandDataSource()   {
}
