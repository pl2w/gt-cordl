#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/TabViewManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__TabViewManager_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__TabViewManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager::*)()>(&::Photon::Pun::UtilityScripts::TabViewManager::Start)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa73def0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager.SelectTab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager::*)(::StringW)>(&::Photon::Pun::UtilityScripts::TabViewManager::SelectTab)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa73e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager*>(),
                        {"SelectTab", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager.OnTabSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager::*)(::Photon::Pun::UtilityScripts::TabViewManager_Tab*)>(&::Photon::Pun::UtilityScripts::TabViewManager::OnTabSelected)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa73e1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager*>(),
                        {"OnTabSelected", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager::*)()>(&::Photon::Pun::UtilityScripts::TabViewManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_ToggleGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggleGroup;
}
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_ToggleGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggleGroup;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_ToggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToggleGroup = value;
}
constexpr ::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_Tabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tabs;
}
constexpr ::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager_Tab*> const& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_Tabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tabs;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_Tabs(::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tabs = value;
}
constexpr ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_OnTabChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTabChanged;
}
constexpr ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent* const& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_OnTabChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTabChanged;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_OnTabChanged(::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTabChanged = value;
}
constexpr ::Photon::Pun::UtilityScripts::TabViewManager_Tab*& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_CurrentTab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTab;
}
constexpr ::Photon::Pun::UtilityScripts::TabViewManager_Tab* const& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_CurrentTab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTab;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_CurrentTab(::Photon::Pun::UtilityScripts::TabViewManager_Tab*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentTab = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>,::Photon::Pun::UtilityScripts::TabViewManager_Tab*>*& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_Tab_lut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tab_lut;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>,::Photon::Pun::UtilityScripts::TabViewManager_Tab*>* const& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_Tab_lut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tab_lut;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_Tab_lut(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>,::Photon::Pun::UtilityScripts::TabViewManager_Tab*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tab_lut = value;
}
inline void Photon::Pun::UtilityScripts::TabViewManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::TabViewManager::SelectTab(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager*>(),
                        {"SelectTab", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Photon::Pun::UtilityScripts::TabViewManager::OnTabSelected(::Photon::Pun::UtilityScripts::TabViewManager_Tab*  tab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager*>(),
                        {"OnTabSelected", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tab);
}
inline void Photon::Pun::UtilityScripts::TabViewManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::TabViewManager* Photon::Pun::UtilityScripts::TabViewManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::TabViewManager*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TabViewManager::TabViewManager()   {
}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::*)()>(&::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0._Start_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::*)(bool)>(&::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::_Start_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa73e390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0*>(),
                        {"<Start>b__0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::UtilityScripts::TabViewManager_Tab*& Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::__cordl_internal_get__tab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tab;
}
constexpr ::Photon::Pun::UtilityScripts::TabViewManager_Tab* const& Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::__cordl_internal_get__tab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tab;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::__cordl_internal_set__tab(::Photon::Pun::UtilityScripts::TabViewManager_Tab*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tab = value;
}
constexpr ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager>& Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager> const& Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::__cordl_internal_set___4__this(::UnityW<::Photon::Pun::UtilityScripts::TabViewManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::_Start_b__0(bool  isSelected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0*>(),
                        {"<Start>b__0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSelected);
}
inline ::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0* Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0::TabViewManager___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager_Tab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager_Tab::*)()>(&::Photon::Pun::UtilityScripts::TabViewManager_Tab::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa73e338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::UtilityScripts::TabViewManager_Tab::__cordl_internal_get__cordl_ID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr ::StringW const& Photon::Pun::UtilityScripts::TabViewManager_Tab::__cordl_internal_get__cordl_ID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager_Tab::__cordl_internal_set__cordl_ID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_ID = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Photon::Pun::UtilityScripts::TabViewManager_Tab::__cordl_internal_get_Toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Photon::Pun::UtilityScripts::TabViewManager_Tab::__cordl_internal_get_Toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Toggle;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager_Tab::__cordl_internal_set_Toggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Toggle = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Photon::Pun::UtilityScripts::TabViewManager_Tab::__cordl_internal_get_View()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___View;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Photon::Pun::UtilityScripts::TabViewManager_Tab::__cordl_internal_get_View() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___View;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager_Tab::__cordl_internal_set_View(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___View = value;
}
inline void Photon::Pun::UtilityScripts::TabViewManager_Tab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::TabViewManager_Tab* Photon::Pun::UtilityScripts::TabViewManager_Tab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TabViewManager_Tab::TabViewManager_Tab()   {
}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent::*)()>(&::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa73e2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent* Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent::TabViewManager_TabChangeEvent()   {
}
