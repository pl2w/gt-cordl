#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/IUserProperty.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::IUserProperty.OnUserUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::IUserProperty::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::UserProperties::IUserProperty::OnUserUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::UserProperties::IUserProperty::OnUserUpdate(::Modio::Users::UserProfile*  user)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
