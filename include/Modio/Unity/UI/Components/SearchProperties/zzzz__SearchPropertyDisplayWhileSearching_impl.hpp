#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyDisplayWhileSearching.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyDisplayWhileSearching_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching.OnSearchUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::OnSearchUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fc3e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::*)()>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc3ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::__cordl_internal_get__displayWhileSearching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayWhileSearching;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::__cordl_internal_get__displayWhileSearching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayWhileSearching;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::__cordl_internal_set__displayWhileSearching(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayWhileSearching = value;
}
constexpr ::GlobalNamespace::SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::__cordl_internal_get__additiveLoadBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____additiveLoadBehaviour;
}
constexpr ::GlobalNamespace::SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::__cordl_internal_get__additiveLoadBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____additiveLoadBehaviour;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::__cordl_internal_set__additiveLoadBehaviour(::GlobalNamespace::SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____additiveLoadBehaviour = value;
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching* Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr  Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::operator ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching::SearchPropertyDisplayWhileSearching()   {
}
