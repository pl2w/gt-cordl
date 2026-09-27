#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnClickInstantiate.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnClickInstantiate_InstantiateOption_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_InputButton_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnClickInstantiate_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnClickInstantiate_InstantiateOption_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickInstantiate.UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickInstantiate::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Photon::Pun::UtilityScripts::OnClickInstantiate::UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa73a45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickInstantiate*>(),
                        {"UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickInstantiate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnClickInstantiate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73a6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickInstantiate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PointerEventData_InputButton& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_Button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr ::GlobalNamespace::PointerEventData_InputButton const& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_Button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr void Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_set_Button(::GlobalNamespace::PointerEventData_InputButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Button = value;
}
constexpr ::UnityEngine::KeyCode& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_ModifierKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModifierKey;
}
constexpr ::UnityEngine::KeyCode const& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_ModifierKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModifierKey;
}
constexpr void Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_set_ModifierKey(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ModifierKey = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_Prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_Prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prefab;
}
constexpr void Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_set_Prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prefab = value;
}
constexpr ::GlobalNamespace::OnClickInstantiate_InstantiateOption& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_InstantiateType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstantiateType;
}
constexpr ::GlobalNamespace::OnClickInstantiate_InstantiateOption const& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_InstantiateType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstantiateType;
}
constexpr void Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_set_InstantiateType(::GlobalNamespace::OnClickInstantiate_InstantiateOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstantiateType = value;
}
inline void Photon::Pun::UtilityScripts::OnClickInstantiate::UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickInstantiate*>(),
                        {"UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Photon::Pun::UtilityScripts::OnClickInstantiate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickInstantiate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::OnClickInstantiate* Photon::Pun::UtilityScripts::OnClickInstantiate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::OnClickInstantiate*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr  Photon::Pun::UtilityScripts::OnClickInstantiate::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* Photon::Pun::UtilityScripts::OnClickInstantiate::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Photon::Pun::UtilityScripts::OnClickInstantiate::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Photon::Pun::UtilityScripts::OnClickInstantiate::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::OnClickInstantiate::OnClickInstantiate()   {
}
