#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/TextButtonTransition.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__TextButtonTransition_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TextButtonTransition.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TextButtonTransition::*)()>(&::Photon::Pun::UtilityScripts::TextButtonTransition::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa73e3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TextButtonTransition.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TextButtonTransition::*)()>(&::Photon::Pun::UtilityScripts::TextButtonTransition::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa73e404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TextButtonTransition.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TextButtonTransition::*)()>(&::Photon::Pun::UtilityScripts::TextButtonTransition::OnDisable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa73e430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TextButtonTransition.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TextButtonTransition::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Photon::Pun::UtilityScripts::TextButtonTransition::OnPointerEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa73e45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TextButtonTransition.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TextButtonTransition::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Photon::Pun::UtilityScripts::TextButtonTransition::OnPointerExit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa73e50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TextButtonTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TextButtonTransition::*)()>(&::Photon::Pun::UtilityScripts::TextButtonTransition::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa73e5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_set__text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable>& Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_get_Selectable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Selectable;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable> const& Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_get_Selectable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Selectable;
}
constexpr void Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_set_Selectable(::UnityW<::UnityEngine::UI::Selectable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Selectable = value;
}
constexpr ::UnityEngine::Color& Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_get_NormalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalColor;
}
constexpr ::UnityEngine::Color const& Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_get_NormalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalColor;
}
constexpr void Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_set_NormalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NormalColor = value;
}
constexpr ::UnityEngine::Color& Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_get_HoverColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HoverColor;
}
constexpr ::UnityEngine::Color const& Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_get_HoverColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HoverColor;
}
constexpr void Photon::Pun::UtilityScripts::TextButtonTransition::__cordl_internal_set_HoverColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HoverColor = value;
}
inline void Photon::Pun::UtilityScripts::TextButtonTransition::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::TextButtonTransition::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::TextButtonTransition::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::TextButtonTransition::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Photon::Pun::UtilityScripts::TextButtonTransition::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Photon::Pun::UtilityScripts::TextButtonTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TextButtonTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::TextButtonTransition* Photon::Pun::UtilityScripts::TextButtonTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::TextButtonTransition*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  Photon::Pun::UtilityScripts::TextButtonTransition::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* Photon::Pun::UtilityScripts::TextButtonTransition::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Photon::Pun::UtilityScripts::TextButtonTransition::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Photon::Pun::UtilityScripts::TextButtonTransition::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  Photon::Pun::UtilityScripts::TextButtonTransition::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* Photon::Pun::UtilityScripts::TextButtonTransition::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TextButtonTransition::TextButtonTransition()   {
}
