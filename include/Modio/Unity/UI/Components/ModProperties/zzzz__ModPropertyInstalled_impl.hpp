#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyInstalled.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyInstalled_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::OnModUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9fc6dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc6ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::__cordl_internal_get__notInstalledActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notInstalledActive;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::__cordl_internal_get__notInstalledActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notInstalledActive;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::__cordl_internal_set__notInstalledActive(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notInstalledActive = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::__cordl_internal_get__installedActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____installedActive;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::__cordl_internal_get__installedActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____installedActive;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::__cordl_internal_set__installedActive(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____installedActive = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled* Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled::ModPropertyInstalled()   {
}
