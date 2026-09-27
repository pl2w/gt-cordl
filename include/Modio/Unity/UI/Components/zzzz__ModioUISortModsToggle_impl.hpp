#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISortModsToggle.hpp"
#include "Modio/Mods/zzzz__SortModsBy_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUISortModsToggle_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISortModsToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISortModsToggle::*)()>(&::Modio::Unity::UI::Components::ModioUISortModsToggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbc100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISortModsToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Mods::SortModsBy& Modio::Unity::UI::Components::ModioUISortModsToggle::__cordl_internal_get_SortModsBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SortModsBy;
}
constexpr ::Modio::Mods::SortModsBy const& Modio::Unity::UI::Components::ModioUISortModsToggle::__cordl_internal_get_SortModsBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SortModsBy;
}
constexpr void Modio::Unity::UI::Components::ModioUISortModsToggle::__cordl_internal_set_SortModsBy(::Modio::Mods::SortModsBy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SortModsBy = value;
}
inline void Modio::Unity::UI::Components::ModioUISortModsToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISortModsToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUISortModsToggle* Modio::Unity::UI::Components::ModioUISortModsToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUISortModsToggle*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUISortModsToggle::ModioUISortModsToggle()   {
}
