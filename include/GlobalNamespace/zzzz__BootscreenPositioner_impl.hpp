#pragma once
// IWYU pragma private; include "GlobalNamespace/BootscreenPositioner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BootscreenPositioner_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BootscreenPositioner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BootscreenPositioner::*)()>(&::GlobalNamespace::BootscreenPositioner::Awake)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55ebb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BootscreenPositioner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootscreenPositioner.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BootscreenPositioner::*)()>(&::GlobalNamespace::BootscreenPositioner::LateUpdate)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x55ebbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BootscreenPositioner*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootscreenPositioner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BootscreenPositioner::*)()>(&::GlobalNamespace::BootscreenPositioner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ebdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BootscreenPositioner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BootscreenPositioner::__cordl_internal_get__pov()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pov;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BootscreenPositioner::__cordl_internal_get__pov() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pov;
}
constexpr void GlobalNamespace::BootscreenPositioner::__cordl_internal_set__pov(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pov = value;
}
constexpr float_t& GlobalNamespace::BootscreenPositioner::__cordl_internal_get__distanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceThreshold;
}
constexpr float_t const& GlobalNamespace::BootscreenPositioner::__cordl_internal_get__distanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceThreshold;
}
constexpr void GlobalNamespace::BootscreenPositioner::__cordl_internal_set__distanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceThreshold = value;
}
constexpr float_t& GlobalNamespace::BootscreenPositioner::__cordl_internal_get__rotationThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationThreshold;
}
constexpr float_t const& GlobalNamespace::BootscreenPositioner::__cordl_internal_get__rotationThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationThreshold;
}
constexpr void GlobalNamespace::BootscreenPositioner::__cordl_internal_set__rotationThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationThreshold = value;
}
inline void GlobalNamespace::BootscreenPositioner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BootscreenPositioner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BootscreenPositioner::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BootscreenPositioner*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BootscreenPositioner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BootscreenPositioner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BootscreenPositioner* GlobalNamespace::BootscreenPositioner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BootscreenPositioner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BootscreenPositioner::BootscreenPositioner()   {
}
