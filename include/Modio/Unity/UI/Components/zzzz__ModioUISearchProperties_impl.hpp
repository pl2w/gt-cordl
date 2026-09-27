#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISearchProperties.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIPropertiesBase_2_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUISearchProperties_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchProperties.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*> (::Modio::Unity::UI::Components::ModioUISearchProperties::*)()>(&::Modio::Unity::UI::Components::ModioUISearchProperties::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbbf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchProperties*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchProperties*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchProperties.UpdateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchProperties::*)()>(&::Modio::Unity::UI::Components::ModioUISearchProperties::UpdateProperties)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9fbbf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchProperties*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchProperties*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchProperties::*)()>(&::Modio::Unity::UI::Components::ModioUISearchProperties::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9fbc040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchProperties*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>& Modio::Unity::UI::Components::ModioUISearchProperties::__cordl_internal_get__properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr ::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*> const& Modio::Unity::UI::Components::ModioUISearchProperties::__cordl_internal_get__properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchProperties::__cordl_internal_set__properties(::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____properties = value;
}
inline ::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*> Modio::Unity::UI::Components::ModioUISearchProperties::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchProperties*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchProperties::UpdateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchProperties*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchProperties*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUISearchProperties* Modio::Unity::UI::Components::ModioUISearchProperties::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUISearchProperties*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUISearchProperties::ModioUISearchProperties()   {
}
