#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/ButtonInsideScrollList.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__ButtonInsideScrollList_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ButtonInsideScrollList.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ButtonInsideScrollList::*)()>(&::Photon::Pun::UtilityScripts::ButtonInsideScrollList::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa73d850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ButtonInsideScrollList*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ButtonInsideScrollList.UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ButtonInsideScrollList::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Photon::Pun::UtilityScripts::ButtonInsideScrollList::UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa73d8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ButtonInsideScrollList*>(),
                        {"UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ButtonInsideScrollList.UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ButtonInsideScrollList::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Photon::Pun::UtilityScripts::ButtonInsideScrollList::UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa73d948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ButtonInsideScrollList*>(),
                        {"UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ButtonInsideScrollList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ButtonInsideScrollList::*)()>(&::Photon::Pun::UtilityScripts::ButtonInsideScrollList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73d9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ButtonInsideScrollList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& Photon::Pun::UtilityScripts::ButtonInsideScrollList::__cordl_internal_get_scrollRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollRect;
}
constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& Photon::Pun::UtilityScripts::ButtonInsideScrollList::__cordl_internal_get_scrollRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollRect;
}
constexpr void Photon::Pun::UtilityScripts::ButtonInsideScrollList::__cordl_internal_set_scrollRect(::UnityW<::UnityEngine::UI::ScrollRect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollRect = value;
}
inline void Photon::Pun::UtilityScripts::ButtonInsideScrollList::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ButtonInsideScrollList*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::ButtonInsideScrollList::UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ButtonInsideScrollList*>(),
                        {"UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Photon::Pun::UtilityScripts::ButtonInsideScrollList::UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ButtonInsideScrollList*>(),
                        {"UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Photon::Pun::UtilityScripts::ButtonInsideScrollList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ButtonInsideScrollList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::ButtonInsideScrollList* Photon::Pun::UtilityScripts::ButtonInsideScrollList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::ButtonInsideScrollList*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  Photon::Pun::UtilityScripts::ButtonInsideScrollList::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* Photon::Pun::UtilityScripts::ButtonInsideScrollList::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Photon::Pun::UtilityScripts::ButtonInsideScrollList::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Photon::Pun::UtilityScripts::ButtonInsideScrollList::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  Photon::Pun::UtilityScripts::ButtonInsideScrollList::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* Photon::Pun::UtilityScripts::ButtonInsideScrollList::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::ButtonInsideScrollList::ButtonInsideScrollList()   {
}
