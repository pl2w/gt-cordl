#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCameraClipPlaneOverrideTrigger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaCameraClipPlaneOverrideTrigger_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::*)()>(&::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x579d334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::*)()>(&::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x579d358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::*)()>(&::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579d378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::__cordl_internal_get_mainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::__cordl_internal_get_mainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr void GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::__cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCamera = value;
}
constexpr float_t& GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::__cordl_internal_get_clipPlaneFarDistanceOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipPlaneFarDistanceOverride;
}
constexpr float_t const& GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::__cordl_internal_get_clipPlaneFarDistanceOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipPlaneFarDistanceOverride;
}
constexpr void GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::__cordl_internal_set_clipPlaneFarDistanceOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipPlaneFarDistanceOverride = value;
}
inline void GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger* GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger::GorillaCameraClipPlaneOverrideTrigger()   {
}
