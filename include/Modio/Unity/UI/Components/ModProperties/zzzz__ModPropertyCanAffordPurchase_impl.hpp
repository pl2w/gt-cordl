#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyCanAffordPurchase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyCanAffordPurchase_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::OnModUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9fc5bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc5ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::__cordl_internal_get__activateWhenCanAfford()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateWhenCanAfford;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::__cordl_internal_get__activateWhenCanAfford() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateWhenCanAfford;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::__cordl_internal_set__activateWhenCanAfford(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateWhenCanAfford = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::__cordl_internal_get__activateWhenCanNotAfford()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateWhenCanNotAfford;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::__cordl_internal_get__activateWhenCanNotAfford() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateWhenCanNotAfford;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::__cordl_internal_set__activateWhenCanNotAfford(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateWhenCanNotAfford = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase* Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase::ModPropertyCanAffordPurchase()   {
}
