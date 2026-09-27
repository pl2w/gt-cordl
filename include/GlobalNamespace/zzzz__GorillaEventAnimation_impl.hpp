#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEventAnimation.hpp"
#include "UnityEngine/zzzz__AnimationClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaEventAnimation_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaEventAnimation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEventAnimation::*)()>(&::GlobalNamespace::GorillaEventAnimation::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x57f5220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimation*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEventAnimation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEventAnimation::*)()>(&::GlobalNamespace::GorillaEventAnimation::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57f531c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimation*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEventAnimation.PlayClipByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEventAnimation::*)(int32_t, float_t)>(&::GlobalNamespace::GorillaEventAnimation::PlayClipByIndex)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x57f5338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimation*>(),
                        {"PlayClipByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEventAnimation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEventAnimation::*)()>(&::GlobalNamespace::GorillaEventAnimation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f54cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get__animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get__animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animation;
}
constexpr void GlobalNamespace::GorillaEventAnimation::__cordl_internal_set__animation(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animation = value;
}
constexpr float_t& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get_offsetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetTime;
}
constexpr float_t const& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get_offsetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetTime;
}
constexpr void GlobalNamespace::GorillaEventAnimation::__cordl_internal_set_offsetTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetTime = value;
}
constexpr int32_t& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get_animationClipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationClipIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get_animationClipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationClipIndex;
}
constexpr void GlobalNamespace::GorillaEventAnimation::__cordl_internal_set_animationClipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationClipIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get_clips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> const& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get_clips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clips;
}
constexpr void GlobalNamespace::GorillaEventAnimation::__cordl_internal_set_clips(::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clips = value;
}
constexpr int32_t& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get__clipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaEventAnimation::__cordl_internal_get__clipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipIndex;
}
constexpr void GlobalNamespace::GorillaEventAnimation::__cordl_internal_set__clipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipIndex = value;
}
inline void GlobalNamespace::GorillaEventAnimation::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimation*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEventAnimation::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimation*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEventAnimation::PlayClipByIndex(int32_t  index, float_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimation*>(),
                        {"PlayClipByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, startTime);
}
inline void GlobalNamespace::GorillaEventAnimation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaEventAnimation* GlobalNamespace::GorillaEventAnimation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaEventAnimation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaEventAnimation::GorillaEventAnimation()   {
}
