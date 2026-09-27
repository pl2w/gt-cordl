#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomAnimationSelector.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RandomAnimationSelector_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationSelector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomAnimationSelector::*)()>(&::GlobalNamespace::RandomAnimationSelector::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x578f53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationSelector.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomAnimationSelector::*)()>(&::GlobalNamespace::RandomAnimationSelector::OnEnable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x578f5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationSelector.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomAnimationSelector::*)()>(&::GlobalNamespace::RandomAnimationSelector::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x578f640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationSelector.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomAnimationSelector::*)()>(&::GlobalNamespace::RandomAnimationSelector::SliceUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x578f64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomAnimationSelector::*)()>(&::GlobalNamespace::RandomAnimationSelector::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x578f710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationTriggerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationTriggerName;
}
constexpr ::StringW const& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationTriggerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationTriggerName;
}
constexpr void GlobalNamespace::RandomAnimationSelector::__cordl_internal_set_animationTriggerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationTriggerName = value;
}
constexpr int32_t& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationTrigger;
}
constexpr int32_t const& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationTrigger;
}
constexpr void GlobalNamespace::RandomAnimationSelector::__cordl_internal_set_animationTrigger(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationTrigger = value;
}
constexpr ::StringW& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationSelectName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSelectName;
}
constexpr ::StringW const& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationSelectName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSelectName;
}
constexpr void GlobalNamespace::RandomAnimationSelector::__cordl_internal_set_animationSelectName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationSelectName = value;
}
constexpr int32_t& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSelect;
}
constexpr int32_t const& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSelect;
}
constexpr void GlobalNamespace::RandomAnimationSelector::__cordl_internal_set_animationSelect(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationSelect = value;
}
constexpr float_t& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationChancePerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationChancePerSecond;
}
constexpr float_t const& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animationChancePerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationChancePerSecond;
}
constexpr void GlobalNamespace::RandomAnimationSelector::__cordl_internal_set_animationChancePerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationChancePerSecond = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::RandomAnimationSelector::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr float_t& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_lastSliceUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceUpdateTime;
}
constexpr float_t const& GlobalNamespace::RandomAnimationSelector::__cordl_internal_get_lastSliceUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceUpdateTime;
}
constexpr void GlobalNamespace::RandomAnimationSelector::__cordl_internal_set_lastSliceUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSliceUpdateTime = value;
}
inline void GlobalNamespace::RandomAnimationSelector::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomAnimationSelector::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomAnimationSelector::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomAnimationSelector::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomAnimationSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomAnimationSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomAnimationSelector* GlobalNamespace::RandomAnimationSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomAnimationSelector*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::RandomAnimationSelector::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::RandomAnimationSelector::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomAnimationSelector::RandomAnimationSelector()   {
}
