#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyEnableOnLogin.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyEnableOnLogin_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin.OnUserUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::OnUserUpdate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9fc061c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc0730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::__cordl_internal_get__activeWhenLoggedOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeWhenLoggedOut;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::__cordl_internal_get__activeWhenLoggedOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeWhenLoggedOut;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::__cordl_internal_set__activeWhenLoggedOut(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeWhenLoggedOut = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::__cordl_internal_get__activeWhenLoggedIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeWhenLoggedIn;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::__cordl_internal_get__activeWhenLoggedIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeWhenLoggedIn;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::__cordl_internal_set__activeWhenLoggedIn(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeWhenLoggedIn = value;
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::OnUserUpdate(::Modio::Users::UserProfile*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin* Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr  Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::operator ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin::UserPropertyEnableOnLogin()   {
}
