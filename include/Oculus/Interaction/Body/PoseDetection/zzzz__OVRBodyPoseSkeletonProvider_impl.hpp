#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/OVRBodyPoseSkeletonProvider.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointSet_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__OVRBodyPoseSkeletonProvider_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_SkeletonPoseData_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_SkeletonType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__OVRSkeletonMapping_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__IBodyPose_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::*)()>(&::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4220e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::*)()>(&::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::Start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa42214c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider.OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonPoseData (::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::*)()>(&::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa422238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                        {"OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider.GetSkeletonType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::*)()>(&::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::GetSkeletonType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa422588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                        {"GetSkeletonType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::*)()>(&::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4225a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider.OVRSkeleton_IOVRSkeletonDataProvider_get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::*)()>(&::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa422644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                        {"OVRSkeleton.IOVRSkeletonDataProvider.get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__bodyPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyPose;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__bodyPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyPose;
}
constexpr void Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_set__bodyPose(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyPose = value;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get_BodyPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BodyPose;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get_BodyPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BodyPose;
}
constexpr void Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_set_BodyPose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BodyPose = value;
}
constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__bodyJointSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyJointSet;
}
constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet const& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__bodyJointSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyJointSet;
}
constexpr void Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_set__bodyJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyJointSet = value;
}
constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__boneRotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneRotations;
}
constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> const& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__boneRotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneRotations;
}
constexpr void Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_set__boneRotations(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boneRotations = value;
}
constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__boneTranslations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneTranslations;
}
constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> const& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__boneTranslations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneTranslations;
}
constexpr void Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_set__boneTranslations(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boneTranslations = value;
}
constexpr ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__mapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapping;
}
constexpr ::Oculus::Interaction::Body::Input::OVRSkeletonMapping* const& Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_get__mapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapping;
}
constexpr void Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::__cordl_internal_set__mapping(::Oculus::Interaction::Body::Input::OVRSkeletonMapping*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapping = value;
}
inline void Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                        {"OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonType Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::GetSkeletonType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                        {"GetSkeletonType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                        {"OVRSkeleton.IOVRSkeletonDataProvider.get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::_OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData_g__EnsureLength_9_0(::ArrayW<T>  array, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>(),
                    {"<OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData>g__EnsureLength|9_0", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, length);
}
inline ::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider* Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr  Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::operator ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*() noexcept {
return static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::i___GlobalNamespace__OVRSkeleton_IOVRSkeletonDataProvider() noexcept {
return static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider::OVRBodyPoseSkeletonProvider()   {
}
