#pragma once
// IWYU pragma private; include "GlobalNamespace/NonCosmeticHandItem.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NonCosmeticHandItem_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NonCosmeticHandItem.EnableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NonCosmeticHandItem::*)(bool)>(&::GlobalNamespace::NonCosmeticHandItem::EnableItem)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x570dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticHandItem*>(),
                        {"EnableItem", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NonCosmeticHandItem.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NonCosmeticHandItem::*)()>(&::GlobalNamespace::NonCosmeticHandItem::get_IsEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x570de30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticHandItem*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NonCosmeticHandItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NonCosmeticHandItem::*)()>(&::GlobalNamespace::NonCosmeticHandItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticHandItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& GlobalNamespace::NonCosmeticHandItem::__cordl_internal_get_cosmeticSlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticSlots;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& GlobalNamespace::NonCosmeticHandItem::__cordl_internal_get_cosmeticSlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticSlots;
}
constexpr void GlobalNamespace::NonCosmeticHandItem::__cordl_internal_set_cosmeticSlots(::GlobalNamespace::CosmeticsController_CosmeticSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticSlots = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NonCosmeticHandItem::__cordl_internal_get_itemPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NonCosmeticHandItem::__cordl_internal_get_itemPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPrefab;
}
constexpr void GlobalNamespace::NonCosmeticHandItem::__cordl_internal_set_itemPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemPrefab = value;
}
inline void GlobalNamespace::NonCosmeticHandItem::EnableItem(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticHandItem*>(),
                        {"EnableItem", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline bool GlobalNamespace::NonCosmeticHandItem::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticHandItem*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NonCosmeticHandItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonCosmeticHandItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NonCosmeticHandItem* GlobalNamespace::NonCosmeticHandItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NonCosmeticHandItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NonCosmeticHandItem::NonCosmeticHandItem()   {
}
