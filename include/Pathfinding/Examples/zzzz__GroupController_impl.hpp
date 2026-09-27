#pragma once
// IWYU pragma private; include "Pathfinding/Examples/GroupController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Pathfinding/Examples/zzzz__GroupController_def.hpp"
#include "Pathfinding/Examples/zzzz__RVOExampleAgent_def.hpp"
#include "Pathfinding/RVO/zzzz__Simulator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::GroupController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::GroupController::*)()>(&::Pathfinding::Examples::GroupController::Start)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5eeda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::GroupController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::GroupController::*)()>(&::Pathfinding::Examples::GroupController::Update)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5eedb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::GroupController.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::GroupController::*)()>(&::Pathfinding::Examples::GroupController::OnGUI)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5eee0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::GroupController.Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::GroupController::*)()>(&::Pathfinding::Examples::GroupController::Order)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5eede18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"Order", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::GroupController.Select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::GroupController::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::Examples::GroupController::Select)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5eee25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"Select", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::GroupController.GetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Pathfinding::Examples::GroupController::*)(float_t)>(&::Pathfinding::Examples::GroupController::GetColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5eee4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"GetColor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::GroupController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::GroupController::*)()>(&::Pathfinding::Examples::GroupController::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5eee508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GUIStyle*& Pathfinding::Examples::GroupController::__cordl_internal_get_selectionBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionBox;
}
constexpr ::UnityEngine::GUIStyle* const& Pathfinding::Examples::GroupController::__cordl_internal_get_selectionBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionBox;
}
constexpr void Pathfinding::Examples::GroupController::__cordl_internal_set_selectionBox(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectionBox = value;
}
constexpr bool& Pathfinding::Examples::GroupController::__cordl_internal_get_adjustCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustCamera;
}
constexpr bool const& Pathfinding::Examples::GroupController::__cordl_internal_get_adjustCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustCamera;
}
constexpr void Pathfinding::Examples::GroupController::__cordl_internal_set_adjustCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adjustCamera = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::Examples::GroupController::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::Examples::GroupController::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void Pathfinding::Examples::GroupController::__cordl_internal_set_start(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::Examples::GroupController::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::Examples::GroupController::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void Pathfinding::Examples::GroupController::__cordl_internal_set_end(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr bool& Pathfinding::Examples::GroupController::__cordl_internal_get_wasDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasDown;
}
constexpr bool const& Pathfinding::Examples::GroupController::__cordl_internal_get_wasDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasDown;
}
constexpr void Pathfinding::Examples::GroupController::__cordl_internal_set_wasDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasDown = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::Examples::RVOExampleAgent>>*& Pathfinding::Examples::GroupController::__cordl_internal_get_selection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selection;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::Examples::RVOExampleAgent>>* const& Pathfinding::Examples::GroupController::__cordl_internal_get_selection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selection;
}
constexpr void Pathfinding::Examples::GroupController::__cordl_internal_set_selection(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::Examples::RVOExampleAgent>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selection = value;
}
constexpr ::Pathfinding::RVO::Simulator*& Pathfinding::Examples::GroupController::__cordl_internal_get_sim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sim;
}
constexpr ::Pathfinding::RVO::Simulator* const& Pathfinding::Examples::GroupController::__cordl_internal_get_sim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sim;
}
constexpr void Pathfinding::Examples::GroupController::__cordl_internal_set_sim(::Pathfinding::RVO::Simulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sim = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Pathfinding::Examples::GroupController::__cordl_internal_get_cam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Pathfinding::Examples::GroupController::__cordl_internal_get_cam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr void Pathfinding::Examples::GroupController::__cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cam = value;
}
inline void Pathfinding::Examples::GroupController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::GroupController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::GroupController::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::GroupController::Order()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"Order", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::GroupController::Select(::UnityEngine::Vector2  _start, ::UnityEngine::Vector2  _end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"Select", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _start, _end);
}
inline ::UnityEngine::Color Pathfinding::Examples::GroupController::GetColor(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {"GetColor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, angle);
}
inline void Pathfinding::Examples::GroupController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::GroupController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::GroupController* Pathfinding::Examples::GroupController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::GroupController*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::GroupController::GroupController()   {
}
