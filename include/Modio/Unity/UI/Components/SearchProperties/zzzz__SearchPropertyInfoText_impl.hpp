#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyInfoText.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyInfoText_def.hpp"
#include "Modio/Unity/UI/Components/Localization/zzzz__ModioUILocalizedText_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText.OnSearchUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::OnSearchUpdate)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x9fc4360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::*)()>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc48fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__searchText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__searchText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchText;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_set__searchText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__disableWhileShowingCustomText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableWhileShowingCustomText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__disableWhileShowingCustomText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableWhileShowingCustomText;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_set__disableWhileShowingCustomText(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableWhileShowingCustomText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__showWhileShowingCustomText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showWhileShowingCustomText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__showWhileShowingCustomText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showWhileShowingCustomText;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_set__showWhileShowingCustomText(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showWhileShowingCustomText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__searchCategoryName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchCategoryName;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__searchCategoryName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchCategoryName;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_set__searchCategoryName(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchCategoryName = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__searchCategoryNameLocalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchCategoryNameLocalized;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__searchCategoryNameLocalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchCategoryNameLocalized;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_set__searchCategoryNameLocalized(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchCategoryNameLocalized = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__searchCategoryIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchCategoryIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_get__searchCategoryIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchCategoryIcon;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::__cordl_internal_set__searchCategoryIcon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchCategoryIcon = value;
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText* Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr  Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::operator ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText::SearchPropertyInfoText()   {
}
