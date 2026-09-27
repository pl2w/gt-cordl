#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorClipInfo.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimatorClipInfo.get_clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::UnityEngine::AnimatorClipInfo::*)()>(&::UnityEngine::AnimatorClipInfo::get_clip)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb53f19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorClipInfo>(),
                        {"get_clip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorClipInfo.get_weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AnimatorClipInfo::*)()>(&::UnityEngine::AnimatorClipInfo::get_weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb53f234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorClipInfo>(),
                        {"get_weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorClipInfo.InstanceIDToAnimationClipPPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (*)(::UnityEngine::EntityId)>(&::UnityEngine::AnimatorClipInfo::InstanceIDToAnimationClipPPtr)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb53f1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorClipInfo>(),
                        {"InstanceIDToAnimationClipPPtr", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorClipInfo.InstanceIDToAnimationClipPPtr_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::EntityId>)>(&::UnityEngine::AnimatorClipInfo::InstanceIDToAnimationClipPPtr_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb53f23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorClipInfo>(),
                        {"InstanceIDToAnimationClipPPtr_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::AnimationClip> UnityEngine::AnimatorClipInfo::get_clip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorClipInfo>(),
                        {"get_clip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(*this, ___internal_method);
}
inline float_t UnityEngine::AnimatorClipInfo::get_weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorClipInfo>(),
                        {"get_weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AnimationClip> UnityEngine::AnimatorClipInfo::InstanceIDToAnimationClipPPtr(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorClipInfo>(),
                        {"InstanceIDToAnimationClipPPtr", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(nullptr, ___internal_method, entityId);
}
inline ::System::IntPtr UnityEngine::AnimatorClipInfo::InstanceIDToAnimationClipPPtr_Injected(::by_ref<::UnityEngine::EntityId>  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorClipInfo>(),
                        {"InstanceIDToAnimationClipPPtr_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, entityId);
}
// Ctor Parameters [CppParam { name: "m_ClipInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AnimatorClipInfo::AnimatorClipInfo(int32_t  m_ClipInstanceID, float_t  m_Weight) noexcept  {
this->m_ClipInstanceID = m_ClipInstanceID;
this->m_Weight = m_Weight;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorClipInfo::AnimatorClipInfo()   {
}
