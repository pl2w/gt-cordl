#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioPanelBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_GainedFocusCause_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.get_HasFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::get_HasFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9faa9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"get_HasFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.set_HasFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)(bool)>(&::Modio::Unity::UI::Panels::ModioPanelBase::set_HasFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9faaa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"set_HasFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.add_OnHasFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)(::System::Action_1<bool>*)>(&::Modio::Unity::UI::Panels::ModioPanelBase::add_OnHasFocusChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9faaa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"add_OnHasFocusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.remove_OnHasFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)(::System::Action_1<bool>*)>(&::Modio::Unity::UI::Panels::ModioPanelBase::remove_OnHasFocusChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9faaabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"remove_OnHasFocusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fa5494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fa3174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9faad8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.OpenPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::OpenPanel)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x9fa2f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"OpenPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.ClosePanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::ClosePanel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fa3ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"ClosePanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.OnGainedFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)(::GlobalNamespace::ModioPanelBase_GainedFocusCause)>(&::Modio::Unity::UI::Panels::ModioPanelBase::OnGainedFocus)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9fa394c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.OnLostFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::OnLostFocus)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9fa428c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.CancelPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::CancelPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fa805c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.DoDefaultSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::DoDefaultSelection)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fa6028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.FocusedPanelLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::FocusedPanelLateUpdate)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9fab214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.SetSelectedGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)(::UnityEngine::GameObject*)>(&::Modio::Unity::UI::Panels::ModioPanelBase::SetSelectedGameObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fab370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.OverrideLastSelectedGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)(::UnityEngine::GameObject*)>(&::Modio::Unity::UI::Panels::ModioPanelBase::OverrideLastSelectedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fab3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"OverrideLastSelectedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.NewSelectionWhileFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)(::UnityEngine::GameObject*)>(&::Modio::Unity::UI::Panels::ModioPanelBase::NewSelectionWhileFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fab3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase.OnSwappedControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)(bool)>(&::Modio::Unity::UI::Panels::ModioPanelBase::OnSwappedControlScheme)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x9fab3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"OnSwappedControlScheme", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioPanelBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa3228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__panelToEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panelToEnable;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__panelToEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panelToEnable;
}
constexpr void Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_set__panelToEnable(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____panelToEnable = value;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable>& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__selectOnOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectOnOpen;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable> const& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__selectOnOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectOnOpen;
}
constexpr void Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_set__selectOnOpen(::UnityW<::UnityEngine::UI::Selectable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectOnOpen = value;
}
constexpr bool& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__startHidden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startHidden;
}
constexpr bool const& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__startHidden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startHidden;
}
constexpr void Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_set__startHidden(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startHidden = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__openOnTopOf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openOnTopOf;
}
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> const& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__openOnTopOf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openOnTopOf;
}
constexpr void Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_set__openOnTopOf(::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openOnTopOf = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__lastSelectedGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSelectedGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__lastSelectedGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSelectedGameObject;
}
constexpr void Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_set__lastSelectedGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSelectedGameObject = value;
}
constexpr bool& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__HasFocus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasFocus_k__BackingField;
}
constexpr bool const& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get__HasFocus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasFocus_k__BackingField;
}
constexpr void Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_set__HasFocus_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasFocus_k__BackingField = value;
}
constexpr ::System::Action_1<bool>*& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get_OnHasFocusChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHasFocusChanged;
}
constexpr ::System::Action_1<bool>* const& Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_get_OnHasFocusChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHasFocusChanged;
}
constexpr void Modio::Unity::UI::Panels::ModioPanelBase::__cordl_internal_set_OnHasFocusChanged(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHasFocusChanged = value;
}
inline bool Modio::Unity::UI::Panels::ModioPanelBase::get_HasFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"get_HasFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::set_HasFocus(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"set_HasFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::add_OnHasFocusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"add_OnHasFocusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::remove_OnHasFocusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"remove_OnHasFocusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::OpenPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"OpenPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::ClosePanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"ClosePanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectionBehaviour);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::OnLostFocus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::CancelPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::DoDefaultSelection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::FocusedPanelLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::SetSelectedGameObject(::UnityEngine::GameObject*  selection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selection);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::OverrideLastSelectedGameObject(::UnityEngine::GameObject*  selection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"OverrideLastSelectedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selection);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::NewSelectionWhileFocused(::UnityEngine::GameObject*  currentSelection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentSelection);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::OnSwappedControlScheme(bool  isController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {"OnSwappedControlScheme", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isController);
}
inline void Modio::Unity::UI::Panels::ModioPanelBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioPanelBase* Modio::Unity::UI::Panels::ModioPanelBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioPanelBase*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioPanelBase::ModioPanelBase()   {
}
