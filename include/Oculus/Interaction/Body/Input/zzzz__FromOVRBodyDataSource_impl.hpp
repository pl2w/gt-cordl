#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/FromOVRBodyDataSource.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_impl.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__FromOVRBodyDataSource_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointSet_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyDataAsset_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__OVRSkeletonMapping_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOVRCameraRigRef_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource.get_DataAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Body::Input::BodyDataAsset* (::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::*)()>(&::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::get_DataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource.GetJointSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BodyJointSet (*)(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*)>(&::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::GetJointSet)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa422654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                        {"GetJointSet", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::*)()>(&::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa422708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::*)()>(&::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4227bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::*)()>(&::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa42286c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::*)()>(&::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::OnDisable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa42298c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource.HandleInputDataDirtied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::*)(bool)>(&::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::HandleInputDataDirtied)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa422aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::*)()>(&::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::UpdateData)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0xa422ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::*)()>(&::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa422f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__dataProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__dataProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataProvider;
}
constexpr void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_set__dataProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataProvider = value;
}
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get_DataProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataProvider;
}
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* const& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get_DataProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataProvider;
}
constexpr void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_set_DataProvider(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataProvider = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__cameraRigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__cameraRigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRigRef;
}
constexpr void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRigRef = value;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get_CameraRigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRigRef;
}
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get_CameraRigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRigRef;
}
constexpr void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraRigRef = value;
}
constexpr bool& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__processLateUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processLateUpdates;
}
constexpr bool const& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__processLateUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processLateUpdates;
}
constexpr void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_set__processLateUpdates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processLateUpdates = value;
}
constexpr ::Oculus::Interaction::Body::Input::BodyDataAsset*& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__bodyDataAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyDataAsset;
}
constexpr ::Oculus::Interaction::Body::Input::BodyDataAsset* const& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__bodyDataAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyDataAsset;
}
constexpr void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_set__bodyDataAsset(::Oculus::Interaction::Body::Input::BodyDataAsset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyDataAsset = value;
}
constexpr ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__mapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapping;
}
constexpr ::Oculus::Interaction::Body::Input::OVRSkeletonMapping* const& Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_get__mapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapping;
}
constexpr void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::__cordl_internal_set__mapping(::Oculus::Interaction::Body::Input::OVRSkeletonMapping*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapping = value;
}
inline ::Oculus::Interaction::Body::Input::BodyDataAsset* Oculus::Interaction::Body::Input::FromOVRBodyDataSource::get_DataAsset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::BodyDataAsset*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_BodyJointSet Oculus::Interaction::Body::Input::FromOVRBodyDataSource::GetJointSet(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                        {"GetJointSet", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BodyJointSet>(nullptr, ___internal_method, provider);
}
inline void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::HandleInputDataDirtied(bool  isLateUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLateUpdate);
}
inline void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::UpdateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::FromOVRBodyDataSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource* Oculus::Interaction::Body::Input::FromOVRBodyDataSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource::FromOVRBodyDataSource()   {
}
