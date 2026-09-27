#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIMod.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMod_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__IModioUIPropertiesOwner_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.get_Mod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (::Modio::Unity::UI::Components::ModioUIMod::*)()>(&::Modio::Unity::UI::Components::ModioUIMod::get_Mod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fba608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"get_Mod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.set_Mod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModioUIMod::set_Mod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fba610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"set_Mod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)()>(&::Modio::Unity::UI::Components::ModioUIMod::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fba618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.AddUpdatePropertiesListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)(::UnityEngine::Events::UnityAction*)>(&::Modio::Unity::UI::Components::ModioUIMod::AddUpdatePropertiesListener)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fba6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"AddUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.RemoveUpdatePropertiesListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)(::UnityEngine::Events::UnityAction*)>(&::Modio::Unity::UI::Components::ModioUIMod::RemoveUpdatePropertiesListener)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fba6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"RemoveUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.SetMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModioUIMod::SetMod)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9fb9ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"SetMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.OnModUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)()>(&::Modio::Unity::UI::Components::ModioUIMod::OnModUpdated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fba6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnModUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.OnPointerClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Modio::Unity::UI::Components::ModioUIMod::OnPointerClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fba6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnPointerClick", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.OnSubmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::Modio::Unity::UI::Components::ModioUIMod::OnSubmit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fba6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnSubmit", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod.OnDisplayMoreInfoClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)()>(&::Modio::Unity::UI::Components::ModioUIMod::OnDisplayMoreInfoClicked)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fba74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnDisplayMoreInfoClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMod::*)()>(&::Modio::Unity::UI::Components::ModioUIMod::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fba7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_get_onModUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onModUpdate;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_get_onModUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onModUpdate;
}
constexpr void Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_set_onModUpdate(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onModUpdate = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*& Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_get_onClickOrSubmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClickOrSubmit;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>* const& Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_get_onClickOrSubmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClickOrSubmit;
}
constexpr void Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_set_onClickOrSubmit(::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onClickOrSubmit = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*& Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_get_onDisplayMoreInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisplayMoreInfo;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>* const& Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_get_onDisplayMoreInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisplayMoreInfo;
}
constexpr void Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_set_onDisplayMoreInfo(::UnityEngine::Events::UnityEvent_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDisplayMoreInfo = value;
}
constexpr ::Modio::Mods::Mod*& Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_get__Mod_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mod_k__BackingField;
}
constexpr ::Modio::Mods::Mod* const& Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_get__Mod_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mod_k__BackingField;
}
constexpr void Modio::Unity::UI::Components::ModioUIMod::__cordl_internal_set__Mod_k__BackingField(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mod_k__BackingField = value;
}
inline ::Modio::Mods::Mod* Modio::Unity::UI::Components::ModioUIMod::get_Mod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"get_Mod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIMod::set_Mod(::Modio::Mods::Mod*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"set_Mod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::ModioUIMod::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIMod::AddUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"AddUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Modio::Unity::UI::Components::ModioUIMod::RemoveUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"RemoveUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Modio::Unity::UI::Components::ModioUIMod::SetMod(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"SetMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModioUIMod::OnModUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnModUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIMod::OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnPointerClick", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Modio::Unity::UI::Components::ModioUIMod::OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnSubmit", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Modio::Unity::UI::Components::ModioUIMod::OnDisplayMoreInfoClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {"OnDisplayMoreInfoClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIMod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUIMod* Modio::Unity::UI::Components::ModioUIMod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUIMod*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr  Modio::Unity::UI::Components::ModioUIMod::operator ::Modio::Unity::UI::Components::IModioUIPropertiesOwner*() noexcept {
return static_cast<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr ::Modio::Unity::UI::Components::IModioUIPropertiesOwner* Modio::Unity::UI::Components::ModioUIMod::i___Modio__Unity__UI__Components__IModioUIPropertiesOwner() noexcept {
return static_cast<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr  Modio::Unity::UI::Components::ModioUIMod::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* Modio::Unity::UI::Components::ModioUIMod::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Modio::Unity::UI::Components::ModioUIMod::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Modio::Unity::UI::Components::ModioUIMod::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr  Modio::Unity::UI::Components::ModioUIMod::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* Modio::Unity::UI::Components::ModioUIMod::i___UnityEngine__EventSystems__ISubmitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUIMod::ModioUIMod()   {
}
