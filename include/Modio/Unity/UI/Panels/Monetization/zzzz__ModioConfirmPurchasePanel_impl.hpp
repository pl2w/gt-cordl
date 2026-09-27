#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Monetization/ModioConfirmPurchasePanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Monetization/zzzz__ModioConfirmPurchasePanel_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMod_def.hpp"
#include "Modio/Unity/UI/Panels/Monetization/zzzz__ModioConfirmPurchasePanel__ConfirmPurchaseFlow_d__5_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::*)()>(&::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fad584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel.OpenPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::OpenPanel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fad5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel.ConfirmPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::*)()>(&::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::ConfirmPurchase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fad618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(),
                        {"ConfirmPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel.ConfirmPurchaseFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::*)()>(&::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::ConfirmPurchaseFlow)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fad61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(),
                        {"ConfirmPurchaseFlow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::*)()>(&::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fad6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::__cordl_internal_get__modioUIMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::__cordl_internal_get__modioUIMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr void Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::__cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modioUIMod = value;
}
constexpr bool& Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::__cordl_internal_get__subscribeOnPurchase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribeOnPurchase;
}
constexpr bool const& Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::__cordl_internal_get__subscribeOnPurchase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribeOnPurchase;
}
constexpr void Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::__cordl_internal_set__subscribeOnPurchase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscribeOnPurchase = value;
}
inline void Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::OpenPanel(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::ConfirmPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(),
                        {"ConfirmPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::ConfirmPurchaseFlow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(),
                        {"ConfirmPurchaseFlow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel* Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel::ModioConfirmPurchasePanel()   {
}
