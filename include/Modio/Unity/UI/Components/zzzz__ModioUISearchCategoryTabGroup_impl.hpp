#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISearchCategoryTabGroup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUISearchCategoryTabGroup_def.hpp"
#include "Modio/Unity/UI/Components/Localization/zzzz__ModioUILocalizedText_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUISearchCategoryTab_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearchCategory_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearchSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup.ClearCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::*)()>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::ClearCategory)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9fbb124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {"ClearCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup.SetCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::*)(::Modio::Unity::UI::Search::ModioUISearchCategory*)>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::SetCategory)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x9fbb164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {"SetCategory", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::*)()>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9fbbaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup.SetTabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*)>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::SetTabs)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x9fbb3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {"SetTabs", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::*)()>(&::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fbbbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__firstTab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstTab;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab> const& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__firstTab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstTab;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_set__firstTab(::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstTab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__disableIfNoCategory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfNoCategory;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__disableIfNoCategory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfNoCategory;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_set__disableIfNoCategory(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableIfNoCategory = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__categoryName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryName;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__categoryName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryName;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_set__categoryName(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____categoryName = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__categoryNameLocalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryNameLocalized;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__categoryNameLocalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryNameLocalized;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_set__categoryNameLocalized(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____categoryNameLocalized = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>>*& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__tabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>>* const& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__tabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabs;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_set__tabs(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tabs = value;
}
constexpr bool& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__hasRunStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRunStart;
}
constexpr bool const& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__hasRunStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRunStart;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_set__hasRunStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasRunStart = value;
}
constexpr int32_t& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__activeTabCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTabCount;
}
constexpr int32_t const& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__activeTabCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTabCount;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_set__activeTabCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeTabCount = value;
}
constexpr int32_t& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__setCategoryOnFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setCategoryOnFrame;
}
constexpr int32_t const& Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_get__setCategoryOnFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setCategoryOnFrame;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::__cordl_internal_set__setCategoryOnFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setCategoryOnFrame = value;
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::ClearCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {"ClearCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::SetCategory(::Modio::Unity::UI::Search::ModioUISearchCategory*  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {"SetCategory", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::SetTabs(::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*  tabSearches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {"SetTabs", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabSearches);
}
inline void Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup* Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup::ModioUISearchCategoryTabGroup()   {
}
