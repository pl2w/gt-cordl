#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUITokenPurchase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUITokenPurchase_def.hpp"
#include "Modio/Monetization/zzzz__PortalSku_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUITokenPack_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUITokenPurchase__GetCurrencyPacks_d__5_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPurchase.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPurchase::*)()>(&::Modio::Unity::UI::Components::ModioUITokenPurchase::Start)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fbd638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPurchase.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPurchase::*)()>(&::Modio::Unity::UI::Components::ModioUITokenPurchase::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9fbd6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPurchase.OnPluginInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPurchase::*)()>(&::Modio::Unity::UI::Components::ModioUITokenPurchase::OnPluginInitialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fbd754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"OnPluginInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPurchase.GetCurrencyPacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Unity::UI::Components::ModioUITokenPurchase::*)()>(&::Modio::Unity::UI::Components::ModioUITokenPurchase::GetCurrencyPacks)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9fbd768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"GetCurrencyPacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPurchase.ShowTokenPacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPurchase::*)(::ArrayW<::Modio::Monetization::PortalSku>)>(&::Modio::Unity::UI::Components::ModioUITokenPurchase::ShowTokenPacks)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x9fbd840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"ShowTokenPacks", {}, {::i2c::type_of<::ArrayW<::Modio::Monetization::PortalSku>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPurchase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPurchase::*)()>(&::Modio::Unity::UI::Components::ModioUITokenPurchase::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fbdae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>& Modio::Unity::UI::Components::ModioUITokenPurchase::__cordl_internal_get__referencePack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referencePack;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack> const& Modio::Unity::UI::Components::ModioUITokenPurchase::__cordl_internal_get__referencePack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referencePack;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPurchase::__cordl_internal_set__referencePack(::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____referencePack = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>>*& Modio::Unity::UI::Components::ModioUITokenPurchase::__cordl_internal_get__currentPacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPacks;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>>* const& Modio::Unity::UI::Components::ModioUITokenPurchase::__cordl_internal_get__currentPacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPacks;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPurchase::__cordl_internal_set__currentPacks(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPacks = value;
}
inline void Modio::Unity::UI::Components::ModioUITokenPurchase::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUITokenPurchase::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUITokenPurchase::OnPluginInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"OnPluginInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::Unity::UI::Components::ModioUITokenPurchase::GetCurrencyPacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"GetCurrencyPacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUITokenPurchase::ShowTokenPacks(::ArrayW<::Modio::Monetization::PortalSku>  sku)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {"ShowTokenPacks", {}, {::i2c::type_of<::ArrayW<::Modio::Monetization::PortalSku>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sku);
}
inline void Modio::Unity::UI::Components::ModioUITokenPurchase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPurchase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUITokenPurchase* Modio::Unity::UI::Components::ModioUITokenPurchase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUITokenPurchase*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUITokenPurchase::ModioUITokenPurchase()   {
}
