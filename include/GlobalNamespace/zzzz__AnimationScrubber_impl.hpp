#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationScrubber.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimationScrubber_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimationScrubber.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationScrubber::*)()>(&::GlobalNamespace::AnimationScrubber::LateUpdate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5641180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationScrubber*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationScrubber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationScrubber::*)()>(&::GlobalNamespace::AnimationScrubber::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564125c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationScrubber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AnimationScrubber::__cordl_internal_get_scrubberActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrubberActive;
}
constexpr bool const& GlobalNamespace::AnimationScrubber::__cordl_internal_get_scrubberActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrubberActive;
}
constexpr void GlobalNamespace::AnimationScrubber::__cordl_internal_set_scrubberActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrubberActive = value;
}
constexpr float_t& GlobalNamespace::AnimationScrubber::__cordl_internal_get_animationPlaybackTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationPlaybackTime;
}
constexpr float_t const& GlobalNamespace::AnimationScrubber::__cordl_internal_get_animationPlaybackTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationPlaybackTime;
}
constexpr void GlobalNamespace::AnimationScrubber::__cordl_internal_set_animationPlaybackTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationPlaybackTime = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::AnimationScrubber::__cordl_internal_get_targetAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetAnimator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::AnimationScrubber::__cordl_internal_get_targetAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetAnimator;
}
constexpr void GlobalNamespace::AnimationScrubber::__cordl_internal_set_targetAnimator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetAnimator = value;
}
inline void GlobalNamespace::AnimationScrubber::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationScrubber*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimationScrubber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationScrubber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimationScrubber* GlobalNamespace::AnimationScrubber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimationScrubber*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationScrubber::AnimationScrubber()   {
}
