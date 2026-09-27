#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyTotalResults.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyTotalResults_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults.OnSearchUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::OnSearchUpdate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9fc52c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::*)()>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fc5358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::__cordl_internal_get__foundResultsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundResultsText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::__cordl_internal_get__foundResultsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundResultsText;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::__cordl_internal_set__foundResultsText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____foundResultsText = value;
}
constexpr ::StringW& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::__cordl_internal_get__foundResultsString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundResultsString;
}
constexpr ::StringW const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::__cordl_internal_get__foundResultsString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundResultsString;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::__cordl_internal_set__foundResultsString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____foundResultsString = value;
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults* Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr  Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::operator ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults::SearchPropertyTotalResults()   {
}
