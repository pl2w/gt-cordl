#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyRatingsToggles.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyRatingsToggles_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::OnModUpdate)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9fc7944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles.PositiveToggleValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::*)(bool)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::PositiveToggleValueChanged)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fc7b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*>(),
                        {"PositiveToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles.NegativeToggleValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::*)(bool)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::NegativeToggleValueChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9fc7bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*>(),
                        {"NegativeToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc7c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::__cordl_internal_get__positiveVoteToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positiveVoteToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::__cordl_internal_get__positiveVoteToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positiveVoteToggle;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::__cordl_internal_set__positiveVoteToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positiveVoteToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::__cordl_internal_get__negativeVoteToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negativeVoteToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::__cordl_internal_get__negativeVoteToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negativeVoteToggle;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::__cordl_internal_set__negativeVoteToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____negativeVoteToggle = value;
}
constexpr ::Modio::Mods::Mod*& Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::__cordl_internal_get__mod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr ::Modio::Mods::Mod* const& Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::__cordl_internal_get__mod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::__cordl_internal_set__mod(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mod = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::PositiveToggleValueChanged(bool  arg0)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*>(),
                        {"PositiveToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::NegativeToggleValueChanged(bool  toggleValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*>(),
                        {"NegativeToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggleValue);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles* Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles::ModPropertyRatingsToggles()   {
}
