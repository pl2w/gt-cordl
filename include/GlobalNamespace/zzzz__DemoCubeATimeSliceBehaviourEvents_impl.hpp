#pragma once
// IWYU pragma private; include "GlobalNamespace/DemoCubeATimeSliceBehaviourEvents.hpp"
#include "PerformanceSystems/zzzz__TimeSliceLodBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DemoCubeATimeSliceBehaviourEvents_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::*)()>(&::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ae0064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::*)(float_t)>(&::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::SliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ae00c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                    {::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents.OnLod0Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::*)()>(&::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::OnLod0Enter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ae00cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {"OnLod0Enter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents.OnLod1Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::*)()>(&::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::OnLod1Enter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ae010c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {"OnLod1Enter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents.OnLodExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::*)()>(&::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::OnLodExit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ae014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {"OnLodExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::*)()>(&::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ae0170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_get__iterationsOfExpensiveOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterationsOfExpensiveOp;
}
constexpr int32_t const& GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_get__iterationsOfExpensiveOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterationsOfExpensiveOp;
}
constexpr void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_set__iterationsOfExpensiveOp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iterationsOfExpensiveOp = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_get__red()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____red;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_get__red() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____red;
}
constexpr void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_set__red(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____red = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_get__green()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____green;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_get__green() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____green;
}
constexpr void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_set__green(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____green = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
inline void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::SliceUpdate(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::OnLod0Enter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {"OnLod0Enter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::OnLod1Enter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {"OnLod1Enter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::OnLodExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {"OnLodExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents* GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents::DemoCubeATimeSliceBehaviourEvents()   {
}
