#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIModProperties.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIPropertiesBase_2_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIModProperties_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMod_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIModProperties.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*> (::Modio::Unity::UI::Components::ModioUIModProperties::*)()>(&::Modio::Unity::UI::Components::ModioUIModProperties::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fba7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIModProperties*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIModProperties*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIModProperties.UpdateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIModProperties::*)()>(&::Modio::Unity::UI::Components::ModioUIModProperties::UpdateProperties)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9fba7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIModProperties*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIModProperties*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIModProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIModProperties::*)()>(&::Modio::Unity::UI::Components::ModioUIModProperties::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9fba8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIModProperties*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*>& Modio::Unity::UI::Components::ModioUIModProperties::__cordl_internal_get__properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr ::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*> const& Modio::Unity::UI::Components::ModioUIModProperties::__cordl_internal_get__properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr void Modio::Unity::UI::Components::ModioUIModProperties::__cordl_internal_set__properties(::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____properties = value;
}
inline ::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*> Modio::Unity::UI::Components::ModioUIModProperties::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIModProperties*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*>>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIModProperties::UpdateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUIModProperties*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIModProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIModProperties*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUIModProperties* Modio::Unity::UI::Components::ModioUIModProperties::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUIModProperties*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUIModProperties::ModioUIModProperties()   {
}
