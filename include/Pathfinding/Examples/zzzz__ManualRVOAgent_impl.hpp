#pragma once
// IWYU pragma private; include "Pathfinding/Examples/ManualRVOAgent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__ManualRVOAgent_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOController_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::ManualRVOAgent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ManualRVOAgent::*)()>(&::Pathfinding::Examples::ManualRVOAgent::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5efa7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ManualRVOAgent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ManualRVOAgent.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ManualRVOAgent::*)()>(&::Pathfinding::Examples::ManualRVOAgent::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5efa82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ManualRVOAgent*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ManualRVOAgent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ManualRVOAgent::*)()>(&::Pathfinding::Examples::ManualRVOAgent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5efa940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ManualRVOAgent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::RVO::RVOController>& Pathfinding::Examples::ManualRVOAgent::__cordl_internal_get_rvo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rvo;
}
constexpr ::UnityW<::Pathfinding::RVO::RVOController> const& Pathfinding::Examples::ManualRVOAgent::__cordl_internal_get_rvo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rvo;
}
constexpr void Pathfinding::Examples::ManualRVOAgent::__cordl_internal_set_rvo(::UnityW<::Pathfinding::RVO::RVOController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rvo = value;
}
constexpr float_t& Pathfinding::Examples::ManualRVOAgent::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& Pathfinding::Examples::ManualRVOAgent::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void Pathfinding::Examples::ManualRVOAgent::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
inline void Pathfinding::Examples::ManualRVOAgent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ManualRVOAgent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::ManualRVOAgent::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ManualRVOAgent*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::ManualRVOAgent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ManualRVOAgent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::ManualRVOAgent* Pathfinding::Examples::ManualRVOAgent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ManualRVOAgent*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ManualRVOAgent::ManualRVOAgent()   {
}
