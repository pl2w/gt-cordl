#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyDisplayResults.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyDisplayResults_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIGroup_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults.OnSearchUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::OnSearchUpdate)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x9fc3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::*)()>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc3e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIGroup>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_get__modGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modGroup;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIGroup> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_get__modGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modGroup;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_set__modGroup(::UnityW<::Modio::Unity::UI::Components::ModioUIGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modGroup = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_get__displayWhenNoResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayWhenNoResults;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_get__displayWhenNoResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayWhenNoResults;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_set__displayWhenNoResults(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayWhenNoResults = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_get__displayWhenOffline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayWhenOffline;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_get__displayWhenOffline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayWhenOffline;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_set__displayWhenOffline(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayWhenOffline = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_get__errorHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorHandler;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>* const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_get__errorHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorHandler;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::__cordl_internal_set__errorHandler(::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorHandler = value;
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults* Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr  Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::operator ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults::SearchPropertyDisplayResults()   {
}
