#pragma once
// IWYU pragma private; include "GlobalNamespace/SwipeGesture.hpp"
#include "GlobalNamespace/zzzz__SwipeGesture_Axis_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__SwipeGesture_def.hpp"
#include "GlobalNamespace/zzzz__SwipeGesture_Axis_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SwipeGesture.OnBeginDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwipeGesture::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::SwipeGesture::OnBeginDrag)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa426764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwipeGesture*>(),
                        {"OnBeginDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwipeGesture.OnEndDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwipeGesture::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::SwipeGesture::OnEndDrag)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0xa426864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwipeGesture*>(),
                        {"OnEndDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwipeGesture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwipeGesture::*)()>(&::GlobalNamespace::SwipeGesture::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa426b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwipeGesture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SwipeGesture::__cordl_internal_get_gestureMaxDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gestureMaxDuration;
}
constexpr float_t const& GlobalNamespace::SwipeGesture::__cordl_internal_get_gestureMaxDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gestureMaxDuration;
}
constexpr void GlobalNamespace::SwipeGesture::__cordl_internal_set_gestureMaxDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gestureMaxDuration = value;
}
constexpr float_t& GlobalNamespace::SwipeGesture::__cordl_internal_get_gestureMinDistanceNormalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gestureMinDistanceNormalized;
}
constexpr float_t const& GlobalNamespace::SwipeGesture::__cordl_internal_get_gestureMinDistanceNormalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gestureMinDistanceNormalized;
}
constexpr void GlobalNamespace::SwipeGesture::__cordl_internal_set_gestureMinDistanceNormalized(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gestureMinDistanceNormalized = value;
}
constexpr bool& GlobalNamespace::SwipeGesture::__cordl_internal_get_invertScroll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertScroll;
}
constexpr bool const& GlobalNamespace::SwipeGesture::__cordl_internal_get_invertScroll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertScroll;
}
constexpr void GlobalNamespace::SwipeGesture::__cordl_internal_set_invertScroll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertScroll = value;
}
constexpr ::GlobalNamespace::SwipeGesture_Axis& GlobalNamespace::SwipeGesture::__cordl_internal_get_swipeAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swipeAxis;
}
constexpr ::GlobalNamespace::SwipeGesture_Axis const& GlobalNamespace::SwipeGesture::__cordl_internal_get_swipeAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swipeAxis;
}
constexpr void GlobalNamespace::SwipeGesture::__cordl_internal_set_swipeAxis(::GlobalNamespace::SwipeGesture_Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swipeAxis = value;
}
constexpr float_t& GlobalNamespace::SwipeGesture::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr float_t const& GlobalNamespace::SwipeGesture::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::SwipeGesture::__cordl_internal_set_startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::SwipeGesture::__cordl_internal_get_startLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startLocalPosition;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::SwipeGesture::__cordl_internal_get_startLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startLocalPosition;
}
constexpr void GlobalNamespace::SwipeGesture::__cordl_internal_set_startLocalPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startLocalPosition = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GlobalNamespace::SwipeGesture::__cordl_internal_get_swipeExecuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swipeExecuted;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GlobalNamespace::SwipeGesture::__cordl_internal_get_swipeExecuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swipeExecuted;
}
constexpr void GlobalNamespace::SwipeGesture::__cordl_internal_set_swipeExecuted(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swipeExecuted = value;
}
inline void GlobalNamespace::SwipeGesture::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwipeGesture*>(),
                        {"OnBeginDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::SwipeGesture::OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwipeGesture*>(),
                        {"OnEndDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::SwipeGesture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SwipeGesture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SwipeGesture* GlobalNamespace::SwipeGesture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SwipeGesture*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr  GlobalNamespace::SwipeGesture::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* GlobalNamespace::SwipeGesture::i___UnityEngine__EventSystems__IBeginDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  GlobalNamespace::SwipeGesture::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::SwipeGesture::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr  GlobalNamespace::SwipeGesture::operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* GlobalNamespace::SwipeGesture::i___UnityEngine__EventSystems__IEndDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwipeGesture::SwipeGesture()   {
}
