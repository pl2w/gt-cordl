#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyUser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyUser_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIUser_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser.OnSearchUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::OnSearchUpdate)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9fc57c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::*)()>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc5920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIUser>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::__cordl_internal_get__user()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____user;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIUser> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::__cordl_internal_get__user() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____user;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::__cordl_internal_set__user(::UnityW<::Modio::Unity::UI::Components::ModioUIUser>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____user = value;
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser* Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr  Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::operator ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser::SearchPropertyUser()   {
}
