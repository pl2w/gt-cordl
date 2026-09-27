#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIBuyItem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRUIBuyItem_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRUIBuyItem.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIBuyItem::*)(int32_t)>(&::GlobalNamespace::GRUIBuyItem::Setup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58d159c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIBuyItem*>(),
                        {"Setup", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIBuyItem.OnBuyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIBuyItem::*)()>(&::GlobalNamespace::GRUIBuyItem::OnBuyItem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d1660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIBuyItem*>(),
                        {"OnBuyItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIBuyItem.GetSpawnMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GRUIBuyItem::*)()>(&::GlobalNamespace::GRUIBuyItem::GetSpawnMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d1664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIBuyItem*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIBuyItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIBuyItem::*)()>(&::GlobalNamespace::GRUIBuyItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d166c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIBuyItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_buyItemButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buyItemButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_buyItemButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buyItemButton;
}
constexpr void GlobalNamespace::GRUIBuyItem::__cordl_internal_set_buyItemButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buyItemButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_itemInfoLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemInfoLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_itemInfoLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemInfoLabel;
}
constexpr void GlobalNamespace::GRUIBuyItem::__cordl_internal_set_itemInfoLabel(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemInfoLabel = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_spawnMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_spawnMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnMarker;
}
constexpr void GlobalNamespace::GRUIBuyItem::__cordl_internal_set_spawnMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnMarker = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_entityPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_entityPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityPrefab;
}
constexpr void GlobalNamespace::GRUIBuyItem::__cordl_internal_set_entityPrefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityPrefab = value;
}
constexpr int32_t& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_entityTypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeId;
}
constexpr int32_t const& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_entityTypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeId;
}
constexpr void GlobalNamespace::GRUIBuyItem::__cordl_internal_set_entityTypeId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityTypeId = value;
}
constexpr int32_t& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_standId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standId;
}
constexpr int32_t const& GlobalNamespace::GRUIBuyItem::__cordl_internal_get_standId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standId;
}
constexpr void GlobalNamespace::GRUIBuyItem::__cordl_internal_set_standId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standId = value;
}
inline void GlobalNamespace::GRUIBuyItem::Setup(int32_t  standId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIBuyItem*>(),
                        {"Setup", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standId);
}
inline void GlobalNamespace::GRUIBuyItem::OnBuyItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIBuyItem*>(),
                        {"OnBuyItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GRUIBuyItem::GetSpawnMarker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIBuyItem*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIBuyItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIBuyItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRUIBuyItem* GlobalNamespace::GRUIBuyItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRUIBuyItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRUIBuyItem::GRUIBuyItem()   {
}
