#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPortraitEyes.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPortraitEyes_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPortraitEyes.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPortraitEyes::*)()>(&::GlobalNamespace::BuilderPortraitEyes::OnEnable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57b3b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPortraitEyes*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPortraitEyes.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPortraitEyes::*)()>(&::GlobalNamespace::BuilderPortraitEyes::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57b3b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPortraitEyes*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPortraitEyes.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPortraitEyes::*)()>(&::GlobalNamespace::BuilderPortraitEyes::SliceUpdate)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x57b3bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPortraitEyes*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPortraitEyes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPortraitEyes::*)()>(&::GlobalNamespace::BuilderPortraitEyes::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57b3ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPortraitEyes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderPortraitEyes::__cordl_internal_get_eyeCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderPortraitEyes::__cordl_internal_get_eyeCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeCenter;
}
constexpr void GlobalNamespace::BuilderPortraitEyes::__cordl_internal_set_eyeCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeCenter = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderPortraitEyes::__cordl_internal_get_eyes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyes;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderPortraitEyes::__cordl_internal_get_eyes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyes;
}
constexpr void GlobalNamespace::BuilderPortraitEyes::__cordl_internal_set_eyes(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyes = value;
}
constexpr float_t& GlobalNamespace::BuilderPortraitEyes::__cordl_internal_get_moveRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveRadius;
}
constexpr float_t const& GlobalNamespace::BuilderPortraitEyes::__cordl_internal_get_moveRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveRadius;
}
constexpr void GlobalNamespace::BuilderPortraitEyes::__cordl_internal_set_moveRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveRadius = value;
}
constexpr float_t& GlobalNamespace::BuilderPortraitEyes::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& GlobalNamespace::BuilderPortraitEyes::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void GlobalNamespace::BuilderPortraitEyes::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
inline void GlobalNamespace::BuilderPortraitEyes::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPortraitEyes*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPortraitEyes::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPortraitEyes*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPortraitEyes::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPortraitEyes*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPortraitEyes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPortraitEyes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPortraitEyes* GlobalNamespace::BuilderPortraitEyes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPortraitEyes*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::BuilderPortraitEyes::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::BuilderPortraitEyes::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPortraitEyes::BuilderPortraitEyes()   {
}
