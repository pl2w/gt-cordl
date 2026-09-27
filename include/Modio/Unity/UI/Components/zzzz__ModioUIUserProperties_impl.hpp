#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIUserProperties.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIPropertiesBase_2_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIUserProperties_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIUser_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUserProperties.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*> (::Modio::Unity::UI::Components::ModioUIUserProperties::*)()>(&::Modio::Unity::UI::Components::ModioUIUserProperties::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUserProperties*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUserProperties*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUserProperties.UpdateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUserProperties::*)()>(&::Modio::Unity::UI::Components::ModioUIUserProperties::UpdateProperties)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9fbea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUserProperties*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUserProperties*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUserProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUserProperties::*)()>(&::Modio::Unity::UI::Components::ModioUIUserProperties::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9fbeb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUserProperties*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>& Modio::Unity::UI::Components::ModioUIUserProperties::__cordl_internal_get__properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr ::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*> const& Modio::Unity::UI::Components::ModioUIUserProperties::__cordl_internal_get__properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr void Modio::Unity::UI::Components::ModioUIUserProperties::__cordl_internal_set__properties(::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____properties = value;
}
inline ::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*> Modio::Unity::UI::Components::ModioUIUserProperties::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUserProperties*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIUserProperties::UpdateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUserProperties*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIUserProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUserProperties*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUIUserProperties* Modio::Unity::UI::Components::ModioUIUserProperties::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUIUserProperties*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUIUserProperties::ModioUIUserProperties()   {
}
