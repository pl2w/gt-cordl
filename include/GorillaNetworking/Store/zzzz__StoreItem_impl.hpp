#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaNetworking/Store/zzzz__StoreItem_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::StoreItem.SerializeItemsAsJSON
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GorillaNetworking::Store::StoreItem*>)>(&::GorillaNetworking::Store::StoreItem::SerializeItemsAsJSON)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5cb2f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreItem*>(),
                        {"SerializeItemsAsJSON", {}, {::i2c::type_of<::ArrayW<::GorillaNetworking::Store::StoreItem*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreItem.ConvertCosmeticItemToSToreItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CosmeticsController_CosmeticItem, ::by_ref<::GorillaNetworking::Store::StoreItem*>)>(&::GorillaNetworking::Store::StoreItem::ConvertCosmeticItemToSToreItem)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cb30cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreItem*>(),
                        {"ConvertCosmeticItemToSToreItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::by_ref<::GorillaNetworking::Store::StoreItem*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreItem::*)()>(&::GorillaNetworking::Store::StoreItem::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5cb31f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::Store::StoreItem::__cordl_internal_get_itemName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_itemName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemName;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_itemName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemName = value;
}
constexpr int32_t& GorillaNetworking::Store::StoreItem::__cordl_internal_get_itemCategory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemCategory;
}
constexpr int32_t const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_itemCategory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemCategory;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_itemCategory(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemCategory = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreItem::__cordl_internal_get_itemPictureResourceString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPictureResourceString;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_itemPictureResourceString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPictureResourceString;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_itemPictureResourceString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemPictureResourceString = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreItem::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreItem::__cordl_internal_get_overrideDisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDisplayName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_overrideDisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDisplayName;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_overrideDisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideDisplayName = value;
}
constexpr ::ArrayW<::StringW>& GorillaNetworking::Store::StoreItem::__cordl_internal_get_bundledItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundledItems;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_bundledItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundledItems;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_bundledItems(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundledItems = value;
}
constexpr bool& GorillaNetworking::Store::StoreItem::__cordl_internal_get_canTryOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canTryOn;
}
constexpr bool const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_canTryOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canTryOn;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_canTryOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canTryOn = value;
}
constexpr bool& GorillaNetworking::Store::StoreItem::__cordl_internal_get_bothHandsHoldable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bothHandsHoldable;
}
constexpr bool const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_bothHandsHoldable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bothHandsHoldable;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_bothHandsHoldable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bothHandsHoldable = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreItem::__cordl_internal_get_AssetBundleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetBundleName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_AssetBundleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetBundleName;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_AssetBundleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AssetBundleName = value;
}
constexpr bool& GorillaNetworking::Store::StoreItem::__cordl_internal_get_bUsesMeshAtlas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bUsesMeshAtlas;
}
constexpr bool const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_bUsesMeshAtlas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bUsesMeshAtlas;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_bUsesMeshAtlas(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bUsesMeshAtlas = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreItem::__cordl_internal_get_MeshAtlasResourceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshAtlasResourceName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_MeshAtlasResourceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshAtlasResourceName;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_MeshAtlasResourceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MeshAtlasResourceName = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreItem::__cordl_internal_get_MeshResourceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshResourceName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_MeshResourceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshResourceName;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_MeshResourceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MeshResourceName = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreItem::__cordl_internal_get_MaterialResrouceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialResrouceName;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_MaterialResrouceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialResrouceName;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_MaterialResrouceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaterialResrouceName = value;
}
constexpr ::UnityEngine::Vector3& GorillaNetworking::Store::StoreItem::__cordl_internal_get_translationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translationOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_translationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translationOffset;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_translationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___translationOffset = value;
}
constexpr ::UnityEngine::Vector3& GorillaNetworking::Store::StoreItem::__cordl_internal_get_rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_rotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GorillaNetworking::Store::StoreItem::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr ::UnityEngine::Vector3 const& GorillaNetworking::Store::StoreItem::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void GorillaNetworking::Store::StoreItem::__cordl_internal_set_scale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
inline void GorillaNetworking::Store::StoreItem::SerializeItemsAsJSON(::ArrayW<::GorillaNetworking::Store::StoreItem*>  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreItem*>(),
                        {"SerializeItemsAsJSON", {}, {::i2c::type_of<::ArrayW<::GorillaNetworking::Store::StoreItem*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, items);
}
inline void GorillaNetworking::Store::StoreItem::ConvertCosmeticItemToSToreItem(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmeticItem, ::by_ref<::GorillaNetworking::Store::StoreItem*>  storeItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreItem*>(),
                        {"ConvertCosmeticItemToSToreItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::by_ref<::GorillaNetworking::Store::StoreItem*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cosmeticItem, storeItem);
}
inline void GorillaNetworking::Store::StoreItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::StoreItem* GorillaNetworking::Store::StoreItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreItem*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreItem::StoreItem()   {
}
