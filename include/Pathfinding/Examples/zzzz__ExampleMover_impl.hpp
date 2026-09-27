#pragma once
// IWYU pragma private; include "Pathfinding/Examples/ExampleMover.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__ExampleMover_def.hpp"
#include "Pathfinding/Examples/zzzz__RVOExampleAgent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::ExampleMover.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ExampleMover::*)()>(&::Pathfinding::Examples::ExampleMover::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ef669c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ExampleMover*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ExampleMover.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ExampleMover::*)()>(&::Pathfinding::Examples::ExampleMover::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ef66f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ExampleMover*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ExampleMover.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ExampleMover::*)()>(&::Pathfinding::Examples::ExampleMover::LateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ef672c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ExampleMover*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ExampleMover._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ExampleMover::*)()>(&::Pathfinding::Examples::ExampleMover::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef677c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ExampleMover*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::Examples::RVOExampleAgent>& Pathfinding::Examples::ExampleMover::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::Pathfinding::Examples::RVOExampleAgent> const& Pathfinding::Examples::ExampleMover::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void Pathfinding::Examples::ExampleMover::__cordl_internal_set_agent(::UnityW<::Pathfinding::Examples::RVOExampleAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::Examples::ExampleMover::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::Examples::ExampleMover::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Pathfinding::Examples::ExampleMover::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
inline void Pathfinding::Examples::ExampleMover::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ExampleMover*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::ExampleMover::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ExampleMover*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::ExampleMover::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ExampleMover*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::ExampleMover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ExampleMover*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::ExampleMover* Pathfinding::Examples::ExampleMover::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ExampleMover*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ExampleMover::ExampleMover()   {
}
