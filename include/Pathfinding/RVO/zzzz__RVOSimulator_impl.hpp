#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOSimulator.hpp"
#include "Pathfinding/RVO/zzzz__MovementPlane_impl.hpp"
#include "Pathfinding/zzzz__ThreadCount_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "Pathfinding/RVO/zzzz__RVOSimulator_def.hpp"
#include "Pathfinding/RVO/zzzz__Simulator_def.hpp"
//  Writing Method size for method: ::Pathfinding::RVO::RVOSimulator.get_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Pathfinding::RVO::RVOSimulator> (*)()>(&::Pathfinding::RVO::RVOSimulator::get_active)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5eeb04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"get_active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOSimulator.set_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::RVO::RVOSimulator*)>(&::Pathfinding::RVO::RVOSimulator::set_active)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5eeb094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"set_active", {}, {::i2c::type_of<::Pathfinding::RVO::RVOSimulator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOSimulator.GetSimulator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::Simulator* (::Pathfinding::RVO::RVOSimulator::*)()>(&::Pathfinding::RVO::RVOSimulator::GetSimulator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ee8188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"GetSimulator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOSimulator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOSimulator::*)()>(&::Pathfinding::RVO::RVOSimulator::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5eeb0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOSimulator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOSimulator::*)()>(&::Pathfinding::RVO::RVOSimulator::Awake)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5eeb144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                    {::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOSimulator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOSimulator::*)()>(&::Pathfinding::RVO::RVOSimulator::Update)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5eeb2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOSimulator.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOSimulator::*)()>(&::Pathfinding::RVO::RVOSimulator::OnDestroy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5eeb364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOSimulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOSimulator::*)()>(&::Pathfinding::RVO::RVOSimulator::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5eeb3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_desiredSimulationFPS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredSimulationFPS;
}
constexpr int32_t const& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_desiredSimulationFPS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredSimulationFPS;
}
constexpr void Pathfinding::RVO::RVOSimulator::__cordl_internal_set_desiredSimulationFPS(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredSimulationFPS = value;
}
constexpr ::Pathfinding::ThreadCount& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_workerThreads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workerThreads;
}
constexpr ::Pathfinding::ThreadCount const& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_workerThreads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workerThreads;
}
constexpr void Pathfinding::RVO::RVOSimulator::__cordl_internal_set_workerThreads(::Pathfinding::ThreadCount  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workerThreads = value;
}
constexpr bool& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_doubleBuffering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doubleBuffering;
}
constexpr bool const& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_doubleBuffering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doubleBuffering;
}
constexpr void Pathfinding::RVO::RVOSimulator::__cordl_internal_set_doubleBuffering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doubleBuffering = value;
}
constexpr float_t& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_symmetryBreakingBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symmetryBreakingBias;
}
constexpr float_t const& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_symmetryBreakingBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symmetryBreakingBias;
}
constexpr void Pathfinding::RVO::RVOSimulator::__cordl_internal_set_symmetryBreakingBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___symmetryBreakingBias = value;
}
constexpr ::Pathfinding::RVO::MovementPlane& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_movementPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementPlane;
}
constexpr ::Pathfinding::RVO::MovementPlane const& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_movementPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementPlane;
}
constexpr void Pathfinding::RVO::RVOSimulator::__cordl_internal_set_movementPlane(::Pathfinding::RVO::MovementPlane  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementPlane = value;
}
constexpr bool& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_drawObstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawObstacles;
}
constexpr bool const& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_drawObstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawObstacles;
}
constexpr void Pathfinding::RVO::RVOSimulator::__cordl_internal_set_drawObstacles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawObstacles = value;
}
constexpr ::Pathfinding::RVO::Simulator*& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_simulator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulator;
}
constexpr ::Pathfinding::RVO::Simulator* const& Pathfinding::RVO::RVOSimulator::__cordl_internal_get_simulator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulator;
}
constexpr void Pathfinding::RVO::RVOSimulator::__cordl_internal_set_simulator(::Pathfinding::RVO::Simulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulator = value;
}
inline void Pathfinding::RVO::RVOSimulator::setStaticF__active_k__BackingField(::UnityW<::Pathfinding::RVO::RVOSimulator>  value)  {
::cordl_internals::setStaticField<::UnityW<::Pathfinding::RVO::RVOSimulator>, "<active>k__BackingField", ::Pathfinding::RVO::RVOSimulator*>(std::forward<::UnityW<::Pathfinding::RVO::RVOSimulator>>(value));
}
inline ::UnityW<::Pathfinding::RVO::RVOSimulator> Pathfinding::RVO::RVOSimulator::getStaticF__active_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Pathfinding::RVO::RVOSimulator>, "<active>k__BackingField", ::Pathfinding::RVO::RVOSimulator*>();
}
inline ::UnityW<::Pathfinding::RVO::RVOSimulator> Pathfinding::RVO::RVOSimulator::get_active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"get_active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Pathfinding::RVO::RVOSimulator>>(nullptr, ___internal_method);
}
inline void Pathfinding::RVO::RVOSimulator::set_active(::Pathfinding::RVO::RVOSimulator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"set_active", {}, {::i2c::type_of<::Pathfinding::RVO::RVOSimulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Pathfinding::RVO::Simulator* Pathfinding::RVO::RVOSimulator::GetSimulator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"GetSimulator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::Simulator*>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOSimulator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOSimulator::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOSimulator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOSimulator::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOSimulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOSimulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RVO::RVOSimulator* Pathfinding::RVO::RVOSimulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::RVOSimulator*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::RVOSimulator::RVOSimulator()   {
}
