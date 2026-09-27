#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckToggleHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/UI/zzzz__LckToggleHelper_def.hpp"
#include "Liv/Lck/UI/zzzz__LckToggle_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Liv::Lck::UI::LckToggleHelper.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggleHelper::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckToggleHelper::OnPointerEnter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d532a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggleHelper.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggleHelper::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckToggleHelper::OnPointerDown)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d532c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggleHelper.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggleHelper::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckToggleHelper::OnPointerUp)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d532e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggleHelper.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggleHelper::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckToggleHelper::OnPointerExit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d53330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckToggleHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckToggleHelper::*)()>(&::Liv::Lck::UI::LckToggleHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d53350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& Liv::Lck::UI::LckToggleHelper::__cordl_internal_get__lckToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckToggle;
}
constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& Liv::Lck::UI::LckToggleHelper::__cordl_internal_get__lckToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckToggle;
}
constexpr void Liv::Lck::UI::LckToggleHelper::__cordl_internal_set__lckToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Liv::Lck::UI::LckToggleHelper::__cordl_internal_get__toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Liv::Lck::UI::LckToggleHelper::__cordl_internal_get__toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr void Liv::Lck::UI::LckToggleHelper::__cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggle = value;
}
inline void Liv::Lck::UI::LckToggleHelper::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckToggleHelper::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckToggleHelper::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckToggleHelper::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckToggleHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckToggleHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::UI::LckToggleHelper* Liv::Lck::UI::LckToggleHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckToggleHelper*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  Liv::Lck::UI::LckToggleHelper::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* Liv::Lck::UI::LckToggleHelper::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Liv::Lck::UI::LckToggleHelper::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Liv::Lck::UI::LckToggleHelper::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  Liv::Lck::UI::LckToggleHelper::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* Liv::Lck::UI::LckToggleHelper::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  Liv::Lck::UI::LckToggleHelper::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* Liv::Lck::UI::LckToggleHelper::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  Liv::Lck::UI::LckToggleHelper::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* Liv::Lck::UI::LckToggleHelper::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckToggleHelper::LckToggleHelper()   {
}
