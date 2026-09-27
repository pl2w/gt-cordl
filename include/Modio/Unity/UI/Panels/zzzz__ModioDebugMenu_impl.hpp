#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioDebugMenu.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioDebugMenu_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__ModioUIButton_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__ModioUIToggle_def.hpp"
#include "Modio/Unity/UI/Navigation/zzzz__ModioInputFieldSelectionWrapper_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioDebugMenu___c__DisplayClass13_0_1_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioDebugMenu___c__DisplayClass13_3_1_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioDebugMenu_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9fa62c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu.SetToDefaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu::SetToDefaults)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fa63b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"SetToDefaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu.AddButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu::*)(::StringW, ::System::Action*)>(&::Modio::Unity::UI::Panels::ModioDebugMenu::AddButton)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9fa63d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddButton", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu.AddToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu::*)(::StringW, ::System::Func_1<bool>*, ::System::Action_1<bool>*)>(&::Modio::Unity::UI::Panels::ModioDebugMenu::AddToggle)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9fa657c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddToggle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<bool>*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu.AddLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu::*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioDebugMenu::AddLabel)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9fa680c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddLabel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu.AddTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu::*)(::StringW, ::System::Func_1<::StringW>*, ::System::Action_1<::StringW>*)>(&::Modio::Unity::UI::Panels::ModioDebugMenu::AddTextField)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9fa68f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddTextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu.AddTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu::*)(::StringW, ::System::Func_1<int32_t>*, ::System::Action_1<int32_t>*)>(&::Modio::Unity::UI::Panels::ModioDebugMenu::AddTextField)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9fa6bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddTextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<int32_t>*>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu.AddTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu::*)(::StringW, ::System::Func_1<int64_t>*, ::System::Action_1<int64_t>*)>(&::Modio::Unity::UI::Panels::ModioDebugMenu::AddTextField)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9fa6d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddTextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<int64_t>*>(), ::i2c::type_of<::System::Action_1<int64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu.Nicify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioDebugMenu::Nicify)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fa6e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"Nicify", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa6ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__buttonPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonPrefab;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton> const& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__buttonPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonPrefab;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_set__buttonPrefab(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonPrefab = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__togglePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____togglePrefab;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle> const& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__togglePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____togglePrefab;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_set__togglePrefab(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____togglePrefab = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__textPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textPrefab;
}
constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper> const& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__textPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textPrefab;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_set__textPrefab(::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textPrefab = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__labelPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelPrefab;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__labelPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelPrefab;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_set__labelPrefab(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____labelPrefab = value;
}
constexpr ::System::Action*& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__onSetToDefaults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSetToDefaults;
}
constexpr ::System::Action* const& Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_get__onSetToDefaults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSetToDefaults;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu::__cordl_internal_set__onSetToDefaults(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSetToDefaults = value;
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu::SetToDefaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"SetToDefaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu::AddButton(::StringW  text, ::System::Action*  onClick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddButton", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, onClick);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu::AddToggle(::StringW  text, ::System::Func_1<bool>*  initialValueGetter, ::System::Action_1<bool>*  onToggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddToggle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<bool>*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, initialValueGetter, onToggle);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu::AddLabel(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddLabel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu::AddTextField(::StringW  text, ::System::Func_1<::StringW>*  initialValueGetter, ::System::Action_1<::StringW>*  onSubmitted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddTextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, initialValueGetter, onSubmitted);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu::AddTextField(::StringW  text, ::System::Func_1<int32_t>*  initialValueGetter, ::System::Action_1<int32_t>*  onSubmitted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddTextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<int32_t>*>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, initialValueGetter, onSubmitted);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu::AddTextField(::StringW  text, ::System::Func_1<int64_t>*  initialValueGetter, ::System::Action_1<int64_t>*  onSubmitted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"AddTextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<int64_t>*>(), ::i2c::type_of<::System::Action_1<int64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, initialValueGetter, onSubmitted);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Attribute*>)
inline void Modio::Unity::UI::Panels::ModioDebugMenu::AddAllMethodsOrPropertiesWithAttribute(::System::Func_2<T,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                    {"AddAllMethodsOrPropertiesWithAttribute", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predicate);
}
inline ::StringW Modio::Unity::UI::Panels::ModioDebugMenu::Nicify(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {"Nicify", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioDebugMenu* Modio::Unity::UI::Panels::ModioDebugMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu::ModioDebugMenu()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa6804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0._AddToggle_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::_AddToggle_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9fa7124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0*>(),
                        {"<AddToggle>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0._AddToggle_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::*)(bool)>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::_AddToggle_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9fa7160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0*>(),
                        {"<AddToggle>b__1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::__cordl_internal_get_toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggle;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle> const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::__cordl_internal_get_toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggle;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::__cordl_internal_set_toggle(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggle = value;
}
constexpr ::System::Func_1<bool>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::__cordl_internal_get_initialValueGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialValueGetter;
}
constexpr ::System::Func_1<bool>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::__cordl_internal_get_initialValueGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialValueGetter;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::__cordl_internal_set_initialValueGetter(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialValueGetter = value;
}
constexpr ::System::Action_1<bool>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::__cordl_internal_get_onToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr ::System::Action_1<bool>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::__cordl_internal_get_onToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::__cordl_internal_set_onToggle(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onToggle = value;
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::_AddToggle_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0*>(),
                        {"<AddToggle>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::_AddToggle_b__1(bool  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0*>(),
                        {"<AddToggle>b__1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0* Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass8_0::ModioDebugMenu___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa6574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0._AddButton_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::_AddButton_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fa7104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0*>(),
                        {"<AddButton>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::__cordl_internal_get_onClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClick;
}
constexpr ::System::Action* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::__cordl_internal_get_onClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClick;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::__cordl_internal_set_onClick(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onClick = value;
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::_AddButton_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0*>(),
                        {"<AddButton>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0* Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass7_0::ModioDebugMenu___c__DisplayClass7_0()   {
}
template<typename T>
constexpr ::System::Func_2<::System::Object*,::StringW>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::__cordl_internal_get_func1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___func1;
}
template<typename T>
constexpr ::System::Func_2<::System::Object*,::StringW>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::__cordl_internal_get_func1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___func1;
}
template<typename T>
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::__cordl_internal_set_func1(::System::Func_2<::System::Object*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___func1 = value;
}
template<typename T>
constexpr ::System::Func_2<::StringW,::System::Object*>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::__cordl_internal_get_func2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___func2;
}
template<typename T>
constexpr ::System::Func_2<::StringW,::System::Object*>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::__cordl_internal_get_func2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___func2;
}
template<typename T>
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::__cordl_internal_set_func2(::System::Func_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___func2 = value;
}
template<typename T>
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
template<typename T>
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
template<typename T>
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::__cordl_internal_set_CS$__8__locals1(::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::StringW Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__11(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__11", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
template<typename T>
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>* Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_4_1<T>::ModioDebugMenu___c__DisplayClass13_4_1()   {
}
template<typename T>
constexpr ::System::Reflection::PropertyInfo*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>::__cordl_internal_get_propertyInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyInfo;
}
template<typename T>
constexpr ::System::Reflection::PropertyInfo* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>::__cordl_internal_get_propertyInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyInfo;
}
template<typename T>
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>::__cordl_internal_set_propertyInfo(::System::Reflection::PropertyInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyInfo = value;
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__2(bool  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__2", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>::_AddAllMethodsOrPropertiesWithAttribute_g__HookUpField_9(::System::Func_2<::System::Object*,::StringW>*  func1, ::System::Func_2<::StringW,::System::Object*>*  func2, ::by_ref<::GlobalNamespace::ModioDebugMenu___c__DisplayClass13_0_1<T>>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::ModioDebugMenu___c__DisplayClass13_3_1<T>>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>g__HookUpField|9", {}, {::i2c::type_of<::System::Func_2<::System::Object*,::StringW>*>(), ::i2c::type_of<::System::Func_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ModioDebugMenu___c__DisplayClass13_0_1<T>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ModioDebugMenu___c__DisplayClass13_3_1<T>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, func1, func2, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
template<typename T>
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>* Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_2_1<T>::ModioDebugMenu___c__DisplayClass13_2_1()   {
}
template<typename T>
constexpr ::System::Reflection::MethodInfo*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>::__cordl_internal_get_methodInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodInfo;
}
template<typename T>
constexpr ::System::Reflection::MethodInfo* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>::__cordl_internal_get_methodInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodInfo;
}
template<typename T>
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>::__cordl_internal_set_methodInfo(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___methodInfo = value;
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>* Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass13_1_1<T>::ModioDebugMenu___c__DisplayClass13_1_1()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa6e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0._AddTextField_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::_AddTextField_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9fa7098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0*>(),
                        {"<AddTextField>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0._AddTextField_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::_AddTextField_b__1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fa70d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0*>(),
                        {"<AddTextField>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<int64_t>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::__cordl_internal_get_initialValueGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialValueGetter;
}
constexpr ::System::Func_1<int64_t>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::__cordl_internal_get_initialValueGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialValueGetter;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::__cordl_internal_set_initialValueGetter(::System::Func_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialValueGetter = value;
}
constexpr ::System::Action_1<int64_t>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::__cordl_internal_get_onSubmitted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSubmitted;
}
constexpr ::System::Action_1<int64_t>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::__cordl_internal_get_onSubmitted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSubmitted;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::__cordl_internal_set_onSubmitted(::System::Action_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSubmitted = value;
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::_AddTextField_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0*>(),
                        {"<AddTextField>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::_AddTextField_b__1(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0*>(),
                        {"<AddTextField>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0* Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass12_0::ModioDebugMenu___c__DisplayClass12_0()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa6d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0._AddTextField_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::_AddTextField_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9fa7028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0*>(),
                        {"<AddTextField>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0._AddTextField_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::_AddTextField_b__1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fa7064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0*>(),
                        {"<AddTextField>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<int32_t>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::__cordl_internal_get_initialValueGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialValueGetter;
}
constexpr ::System::Func_1<int32_t>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::__cordl_internal_get_initialValueGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialValueGetter;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::__cordl_internal_set_initialValueGetter(::System::Func_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialValueGetter = value;
}
constexpr ::System::Action_1<int32_t>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::__cordl_internal_get_onSubmitted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSubmitted;
}
constexpr ::System::Action_1<int32_t>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::__cordl_internal_get_onSubmitted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSubmitted;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::__cordl_internal_set_onSubmitted(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSubmitted = value;
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::_AddTextField_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0*>(),
                        {"<AddTextField>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::_AddTextField_b__1(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0*>(),
                        {"<AddTextField>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0* Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass11_0::ModioDebugMenu___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa6bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0._AddTextField_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::*)()>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::_AddTextField_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9fa6ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0*>(),
                        {"<AddTextField>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0._AddTextField_g__OnTextFieldSubmit_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::_AddTextField_g__OnTextFieldSubmit_1)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9fa6f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0*>(),
                        {"<AddTextField>g__OnTextFieldSubmit|1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::__cordl_internal_get_inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::__cordl_internal_get_inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::__cordl_internal_set_inputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputField = value;
}
constexpr ::System::Func_1<::StringW>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::__cordl_internal_get_initialValueGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialValueGetter;
}
constexpr ::System::Func_1<::StringW>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::__cordl_internal_get_initialValueGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialValueGetter;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::__cordl_internal_set_initialValueGetter(::System::Func_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialValueGetter = value;
}
constexpr ::System::Action_1<::StringW>*& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::__cordl_internal_get_onSubmitted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSubmitted;
}
constexpr ::System::Action_1<::StringW>* const& Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::__cordl_internal_get_onSubmitted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSubmitted;
}
constexpr void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::__cordl_internal_set_onSubmitted(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSubmitted = value;
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::_AddTextField_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0*>(),
                        {"<AddTextField>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::_AddTextField_g__OnTextFieldSubmit_1(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0*>(),
                        {"<AddTextField>g__OnTextFieldSubmit|1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0* Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__DisplayClass10_0::ModioDebugMenu___c__DisplayClass10_0()   {
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::setStaticF___9(::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*, "<>9", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(std::forward<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(value));
}
template<typename T>
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*, "<>9", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>();
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::setStaticF___9__13_3(::System::Func_2<::System::Object*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,::StringW>*, "<>9__13_3", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(std::forward<::System::Func_2<::System::Object*,::StringW>*>(value));
}
template<typename T>
inline ::System::Func_2<::System::Object*,::StringW>* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::getStaticF___9__13_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,::StringW>*, "<>9__13_3", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>();
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::setStaticF___9__13_4(::System::Func_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::System::Object*>*, "<>9__13_4", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(std::forward<::System::Func_2<::StringW,::System::Object*>*>(value));
}
template<typename T>
inline ::System::Func_2<::StringW,::System::Object*>* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::getStaticF___9__13_4()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::System::Object*>*, "<>9__13_4", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>();
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::setStaticF___9__13_5(::System::Func_2<::System::Object*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,::StringW>*, "<>9__13_5", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(std::forward<::System::Func_2<::System::Object*,::StringW>*>(value));
}
template<typename T>
inline ::System::Func_2<::System::Object*,::StringW>* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::getStaticF___9__13_5()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,::StringW>*, "<>9__13_5", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>();
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::setStaticF___9__13_6(::System::Func_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::System::Object*>*, "<>9__13_6", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(std::forward<::System::Func_2<::StringW,::System::Object*>*>(value));
}
template<typename T>
inline ::System::Func_2<::StringW,::System::Object*>* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::getStaticF___9__13_6()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::System::Object*>*, "<>9__13_6", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>();
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::setStaticF___9__13_7(::System::Func_2<::System::Object*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,::StringW>*, "<>9__13_7", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(std::forward<::System::Func_2<::System::Object*,::StringW>*>(value));
}
template<typename T>
inline ::System::Func_2<::System::Object*,::StringW>* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::getStaticF___9__13_7()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,::StringW>*, "<>9__13_7", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>();
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::setStaticF___9__13_8(::System::Func_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::System::Object*>*, "<>9__13_8", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(std::forward<::System::Func_2<::StringW,::System::Object*>*>(value));
}
template<typename T>
inline ::System::Func_2<::StringW,::System::Object*>* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::getStaticF___9__13_8()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::System::Object*>*, "<>9__13_8", ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>();
}
template<typename T>
inline void Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::StringW Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__13_3(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__13_3", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, o);
}
template<typename T>
inline ::System::Object* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__13_4(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__13_4", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
template<typename T>
inline ::StringW Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__13_5(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__13_5", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, o);
}
template<typename T>
inline ::System::Object* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__13_6(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__13_6", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
template<typename T>
inline ::StringW Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__13_7(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__13_7", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, o);
}
template<typename T>
inline ::System::Object* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::_AddAllMethodsOrPropertiesWithAttribute_b__13_8(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>(),
                        {"<AddAllMethodsOrPropertiesWithAttribute>b__13_8", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
template<typename T>
inline ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>* Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::Unity::UI::Panels::ModioDebugMenu___c__13_1<T>::ModioDebugMenu___c__13_1()   {
}
