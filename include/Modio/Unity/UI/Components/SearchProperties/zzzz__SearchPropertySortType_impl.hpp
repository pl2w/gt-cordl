#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertySortType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertySortType_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType.OnSearchUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::OnSearchUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9fc5190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::*)()>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc52b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::__cordl_internal_get__searchText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::__cordl_internal_get__searchText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchText;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::__cordl_internal_set__searchText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchText = value;
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType* Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr  Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::operator ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType::SearchPropertySortType()   {
}
