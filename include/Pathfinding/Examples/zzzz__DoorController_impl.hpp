#pragma once
// IWYU pragma private; include "Pathfinding/Examples/DoorController.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__DoorController_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::DoorController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::DoorController::*)()>(&::Pathfinding::Examples::DoorController::Start)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5efa4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::DoorController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::DoorController.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::DoorController::*)()>(&::Pathfinding::Examples::DoorController::OnGUI)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5efa700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::DoorController*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::DoorController.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::DoorController::*)(bool)>(&::Pathfinding::Examples::DoorController::SetState)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5efa554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::DoorController*>(),
                        {"SetState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::DoorController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::DoorController::*)()>(&::Pathfinding::Examples::DoorController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5efa7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::DoorController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::Examples::DoorController::__cordl_internal_get_open()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___open;
}
constexpr bool const& Pathfinding::Examples::DoorController::__cordl_internal_get_open() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___open;
}
constexpr void Pathfinding::Examples::DoorController::__cordl_internal_set_open(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___open = value;
}
constexpr int32_t& Pathfinding::Examples::DoorController::__cordl_internal_get_opentag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opentag;
}
constexpr int32_t const& Pathfinding::Examples::DoorController::__cordl_internal_get_opentag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opentag;
}
constexpr void Pathfinding::Examples::DoorController::__cordl_internal_set_opentag(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___opentag = value;
}
constexpr int32_t& Pathfinding::Examples::DoorController::__cordl_internal_get_closedtag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedtag;
}
constexpr int32_t const& Pathfinding::Examples::DoorController::__cordl_internal_get_closedtag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedtag;
}
constexpr void Pathfinding::Examples::DoorController::__cordl_internal_set_closedtag(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedtag = value;
}
constexpr bool& Pathfinding::Examples::DoorController::__cordl_internal_get_updateGraphsWithGUO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateGraphsWithGUO;
}
constexpr bool const& Pathfinding::Examples::DoorController::__cordl_internal_get_updateGraphsWithGUO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateGraphsWithGUO;
}
constexpr void Pathfinding::Examples::DoorController::__cordl_internal_set_updateGraphsWithGUO(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateGraphsWithGUO = value;
}
constexpr float_t& Pathfinding::Examples::DoorController::__cordl_internal_get_yOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yOffset;
}
constexpr float_t const& Pathfinding::Examples::DoorController::__cordl_internal_get_yOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yOffset;
}
constexpr void Pathfinding::Examples::DoorController::__cordl_internal_set_yOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yOffset = value;
}
constexpr ::UnityEngine::Bounds& Pathfinding::Examples::DoorController::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& Pathfinding::Examples::DoorController::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void Pathfinding::Examples::DoorController::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
inline void Pathfinding::Examples::DoorController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::DoorController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::DoorController::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::DoorController*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::DoorController::SetState(bool  open)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::DoorController*>(),
                        {"SetState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, open);
}
inline void Pathfinding::Examples::DoorController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::DoorController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::DoorController* Pathfinding::Examples::DoorController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::DoorController*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::DoorController::DoorController()   {
}
