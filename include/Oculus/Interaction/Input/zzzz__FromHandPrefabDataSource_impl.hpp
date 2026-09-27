#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FromHandPrefabDataSource.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__FromHandPrefabDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHandSkeletonProvider_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::FromHandPrefabDataSource.get_DataAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandDataAsset* (::Oculus::Interaction::Input::FromHandPrefabDataSource::*)()>(&::Oculus::Interaction::Input::FromHandPrefabDataSource::get_DataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50cd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromHandPrefabDataSource.get_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Handedness (::Oculus::Interaction::Input::FromHandPrefabDataSource::*)()>(&::Oculus::Interaction::Input::FromHandPrefabDataSource::get_Handedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50cd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                        {"get_Handedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromHandPrefabDataSource.get_JointTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* (::Oculus::Interaction::Input::FromHandPrefabDataSource::*)()>(&::Oculus::Interaction::Input::FromHandPrefabDataSource::get_JointTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50cd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                        {"get_JointTransforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromHandPrefabDataSource.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromHandPrefabDataSource::*)()>(&::Oculus::Interaction::Input::FromHandPrefabDataSource::Awake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa50cd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromHandPrefabDataSource.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromHandPrefabDataSource::*)()>(&::Oculus::Interaction::Input::FromHandPrefabDataSource::Start)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa50ce5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromHandPrefabDataSource.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromHandPrefabDataSource::*)()>(&::Oculus::Interaction::Input::FromHandPrefabDataSource::UpdateData)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa50cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromHandPrefabDataSource.GetTransformFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Input::FromHandPrefabDataSource::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::FromHandPrefabDataSource::GetTransformFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa50d378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                        {"GetTransformFor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FromHandPrefabDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FromHandPrefabDataSource::*)()>(&::Oculus::Interaction::Input::FromHandPrefabDataSource::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa50d3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandDataAsset*& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__handDataAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handDataAsset;
}
constexpr ::Oculus::Interaction::Input::HandDataAsset* const& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__handDataAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handDataAsset;
}
constexpr void Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_set__handDataAsset(::Oculus::Interaction::Input::HandDataAsset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handDataAsset = value;
}
constexpr ::Oculus::Interaction::Input::Handedness& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__handedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr ::Oculus::Interaction::Input::Handedness const& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__handedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr void Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handedness = value;
}
constexpr bool& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__hidePrefabOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hidePrefabOnStart;
}
constexpr bool const& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__hidePrefabOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hidePrefabOnStart;
}
constexpr void Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_set__hidePrefabOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hidePrefabOnStart = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__jointTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointTransforms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__jointTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointTransforms;
}
constexpr void Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_set__jointTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointTransforms = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__jointTransformsOpenXR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointTransformsOpenXR;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__jointTransformsOpenXR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointTransformsOpenXR;
}
constexpr void Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_set__jointTransformsOpenXR(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointTransformsOpenXR = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__handSkeletonProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handSkeletonProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__handSkeletonProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handSkeletonProvider;
}
constexpr void Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_set__handSkeletonProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handSkeletonProvider = value;
}
constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider*& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get_HandSkeletonProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandSkeletonProvider;
}
constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider* const& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get_HandSkeletonProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandSkeletonProvider;
}
constexpr void Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_set_HandSkeletonProvider(::Oculus::Interaction::Input::IHandSkeletonProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandSkeletonProvider = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__trackingToWorldTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get__trackingToWorldTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr void Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingToWorldTransformer = value;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get_TrackingToWorldTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingToWorldTransformer;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_get_TrackingToWorldTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingToWorldTransformer;
}
constexpr void Oculus::Interaction::Input::FromHandPrefabDataSource::__cordl_internal_set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackingToWorldTransformer = value;
}
inline ::Oculus::Interaction::Input::HandDataAsset* Oculus::Interaction::Input::FromHandPrefabDataSource::get_DataAsset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandDataAsset*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Handedness Oculus::Interaction::Input::FromHandPrefabDataSource::get_Handedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                        {"get_Handedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Handedness>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* Oculus::Interaction::Input::FromHandPrefabDataSource::get_JointTransforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                        {"get_JointTransforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromHandPrefabDataSource::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromHandPrefabDataSource::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::FromHandPrefabDataSource::UpdateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Input::FromHandPrefabDataSource::GetTransformFor(::Oculus::Interaction::Input::HandJointId  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                        {"GetTransformFor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, jointId);
}
inline void Oculus::Interaction::Input::FromHandPrefabDataSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FromHandPrefabDataSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::FromHandPrefabDataSource* Oculus::Interaction::Input::FromHandPrefabDataSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::FromHandPrefabDataSource*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::FromHandPrefabDataSource::FromHandPrefabDataSource()   {
}
