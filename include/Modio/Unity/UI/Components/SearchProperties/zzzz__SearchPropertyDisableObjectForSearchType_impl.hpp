#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyDisableObjectForSearchType.hpp"
#include "Modio/Unity/UI/Search/zzzz__SpecialSearchType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyDisableObjectForSearchType_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType.OnSearchUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::OnSearchUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9fc39bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::*)()>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc3ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_get__gameObjectsToHide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjectsToHide;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_get__gameObjectsToHide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjectsToHide;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_set__gameObjectsToHide(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameObjectsToHide = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_get__gameObjectsToShow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjectsToShow;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_get__gameObjectsToShow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjectsToShow;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_set__gameObjectsToShow(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameObjectsToShow = value;
}
constexpr bool& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_get__hideOnCustomSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideOnCustomSearch;
}
constexpr bool const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_get__hideOnCustomSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideOnCustomSearch;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_set__hideOnCustomSearch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideOnCustomSearch = value;
}
constexpr ::ArrayW<::Modio::Unity::UI::Search::SpecialSearchType>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_get__hideForSearchTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideForSearchTypes;
}
constexpr ::ArrayW<::Modio::Unity::UI::Search::SpecialSearchType> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_get__hideForSearchTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideForSearchTypes;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::__cordl_internal_set__hideForSearchTypes(::ArrayW<::Modio::Unity::UI::Search::SpecialSearchType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideForSearchTypes = value;
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType* Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr  Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::operator ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType::SearchPropertyDisableObjectForSearchType()   {
}
