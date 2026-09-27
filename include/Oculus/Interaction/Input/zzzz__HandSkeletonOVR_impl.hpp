#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandSkeletonOVR.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeleton_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeletonOVR_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoneCapsule_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Skeleton2_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeletonOVR_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeleton_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHandSkeletonProvider_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeletonOVR.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandSkeleton* (::Oculus::Interaction::Input::HandSkeletonOVR::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::Input::HandSkeletonOVR::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa41f1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"get_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeletonOVR.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSkeletonOVR::*)()>(&::Oculus::Interaction::Input::HandSkeletonOVR::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa41f22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeletonOVR.CreateSkeletonData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandSkeleton* (*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::Input::HandSkeletonOVR::CreateSkeletonData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa41f3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"CreateSkeletonData", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeletonOVR.ApplyToSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>, ::Oculus::Interaction::Input::HandSkeleton*)>(&::Oculus::Interaction::Input::HandSkeletonOVR::ApplyToSkeleton)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa41f2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"ApplyToSkeleton", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>>(), ::i2c::type_of<::Oculus::Interaction::Input::HandSkeleton*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeletonOVR.GetBoneRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>, int32_t)>(&::Oculus::Interaction::Input::HandSkeletonOVR::GetBoneRadius)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa41e37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"GetBoneRadius", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeletonOVR._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSkeletonOVR::*)()>(&::Oculus::Interaction::Input::HandSkeletonOVR::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa41f49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Oculus::Interaction::Input::HandSkeleton*>& Oculus::Interaction::Input::HandSkeletonOVR::__cordl_internal_get__skeletons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skeletons;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandSkeleton*> const& Oculus::Interaction::Input::HandSkeletonOVR::__cordl_internal_get__skeletons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skeletons;
}
constexpr void Oculus::Interaction::Input::HandSkeletonOVR::__cordl_internal_set__skeletons(::ArrayW<::Oculus::Interaction::Input::HandSkeleton*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skeletons = value;
}
inline ::Oculus::Interaction::Input::HandSkeleton* Oculus::Interaction::Input::HandSkeletonOVR::get_Item(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"get_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandSkeleton*>(this, ___internal_method, handedness);
}
inline void Oculus::Interaction::Input::HandSkeletonOVR::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandSkeleton* Oculus::Interaction::Input::HandSkeletonOVR::CreateSkeletonData(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"CreateSkeletonData", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandSkeleton*>(nullptr, ___internal_method, handedness);
}
inline void Oculus::Interaction::Input::HandSkeletonOVR::ApplyToSkeleton(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>  ovrSkeleton, ::Oculus::Interaction::Input::HandSkeleton*  handSkeleton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"ApplyToSkeleton", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>>(), ::i2c::type_of<::Oculus::Interaction::Input::HandSkeleton*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ovrSkeleton, handSkeleton);
}
inline float_t Oculus::Interaction::Input::HandSkeletonOVR::GetBoneRadius(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>  ovrSkeleton, int32_t  boneIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {"GetBoneRadius", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ovrSkeleton, boneIndex);
}
inline void Oculus::Interaction::Input::HandSkeletonOVR::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandSkeletonOVR* Oculus::Interaction::Input::HandSkeletonOVR::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandSkeletonOVR*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IHandSkeletonProvider"
constexpr  Oculus::Interaction::Input::HandSkeletonOVR::operator ::Oculus::Interaction::Input::IHandSkeletonProvider*() noexcept {
return static_cast<::Oculus::Interaction::Input::IHandSkeletonProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IHandSkeletonProvider"
constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider* Oculus::Interaction::Input::HandSkeletonOVR::i___Oculus__Interaction__Input__IHandSkeletonProvider() noexcept {
return static_cast<::Oculus::Interaction::Input::IHandSkeletonProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandSkeletonOVR::HandSkeletonOVR()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::*)()>(&::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41f494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0._GetBoneRadius_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::*)(::GlobalNamespace::OVRPlugin_BoneCapsule)>(&::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::_GetBoneRadius_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa41f5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0*>(),
                        {"<GetBoneRadius>b__0", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_BoneCapsule>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::__cordl_internal_get_boneIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIndex;
}
constexpr int32_t const& Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::__cordl_internal_get_boneIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIndex;
}
constexpr void Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::__cordl_internal_set_boneIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneIndex = value;
}
inline void Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::_GetBoneRadius_b__0(::GlobalNamespace::OVRPlugin_BoneCapsule  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0*>(),
                        {"<GetBoneRadius>b__0", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_BoneCapsule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0* Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0::HandSkeletonOVR___c__DisplayClass6_0()   {
}
