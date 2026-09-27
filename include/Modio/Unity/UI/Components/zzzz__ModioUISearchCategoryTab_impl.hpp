#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISearchCategoryTab.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUISearchCategoryTab_def.hpp"
#include "Modio/Unity/UI/Components/Localization/zzzz__ModioUILocalizedText_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearchSettings_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTab.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTab::*)()>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTab::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9fbac80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTab.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTab::*)()>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTab::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9fbad58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTab.OnToggleValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTab::*)(bool)>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTab::OnToggleValueChanged)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9fbad7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"OnToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTab.SetSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTab::*)(::Modio::Unity::UI::Search::ModioUISearchSettings*)>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTab::SetSearch)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9fbaed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"SetSearch", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTab.SetSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTab::*)(bool)>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTab::SetSelected)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9fbb01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"SetSelected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTab::*)()>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTab::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbb11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____search;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____search;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_set__search(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____search = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_set__label(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__labelLocalised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelLocalised;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__labelLocalised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelLocalised;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_set__labelLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____labelLocalised = value;
}
constexpr bool& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__selectOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectOnEnable;
}
constexpr bool const& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__selectOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectOnEnable;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_set__selectOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectOnEnable = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_get__toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTab::__cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggle = value;
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTab::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTab::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTab::OnToggleValueChanged(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"OnToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTab::SetSearch(::Modio::Unity::UI::Search::ModioUISearchSettings*  searchSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"SetSearch", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, searchSettings);
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTab::SetSelected(bool  selected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {"SetSelected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected);
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUISearchCategoryTab* Modio::Unity::UI::Components::ModioUISearchCategoryTab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUISearchCategoryTab*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUISearchCategoryTab::ModioUISearchCategoryTab()   {
}
