#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnPointerOverTooltip.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnPointerOverTooltip_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnPointerOverTooltip.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnPointerOverTooltip::*)()>(&::Photon::Pun::UtilityScripts::OnPointerOverTooltip::OnDestroy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa73dd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnPointerOverTooltip*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnPointerOverTooltip.UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnPointerOverTooltip::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Photon::Pun::UtilityScripts::OnPointerOverTooltip::UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa73dde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnPointerOverTooltip*>(),
                        {"UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnPointerOverTooltip.UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnPointerOverTooltip::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Photon::Pun::UtilityScripts::OnPointerOverTooltip::UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa73de64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnPointerOverTooltip*>(),
                        {"UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnPointerOverTooltip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnPointerOverTooltip::*)()>(&::Photon::Pun::UtilityScripts::OnPointerOverTooltip::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73dee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnPointerOverTooltip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::OnPointerOverTooltip::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnPointerOverTooltip*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnPointerOverTooltip::UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnPointerOverTooltip*>(),
                        {"UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Photon::Pun::UtilityScripts::OnPointerOverTooltip::UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnPointerOverTooltip*>(),
                        {"UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Photon::Pun::UtilityScripts::OnPointerOverTooltip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnPointerOverTooltip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::OnPointerOverTooltip* Photon::Pun::UtilityScripts::OnPointerOverTooltip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::OnPointerOverTooltip*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  Photon::Pun::UtilityScripts::OnPointerOverTooltip::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* Photon::Pun::UtilityScripts::OnPointerOverTooltip::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Photon::Pun::UtilityScripts::OnPointerOverTooltip::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Photon::Pun::UtilityScripts::OnPointerOverTooltip::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  Photon::Pun::UtilityScripts::OnPointerOverTooltip::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* Photon::Pun::UtilityScripts::OnPointerOverTooltip::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::OnPointerOverTooltip::OnPointerOverTooltip()   {
}
