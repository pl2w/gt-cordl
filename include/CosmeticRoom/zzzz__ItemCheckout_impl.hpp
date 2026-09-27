#pragma once
// IWYU pragma private; include "CosmeticRoom/ItemCheckout.hpp"
#include "GlobalNamespace/zzzz__CheckoutCartButton_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "CosmeticRoom/zzzz__ItemCheckout_def.hpp"
#include "GlobalNamespace/zzzz__CompositeTriggerEvents_def.hpp"
#include "GlobalNamespace/zzzz__HeadModel_def.hpp"
#include "GlobalNamespace/zzzz__PurchaseItemButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::CosmeticRoom::ItemCheckout.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::ItemCheckout::*)()>(&::CosmeticRoom::ItemCheckout::OnEnable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c4e41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::ItemCheckout.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::ItemCheckout::*)()>(&::CosmeticRoom::ItemCheckout::OnDisable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c4e5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::ItemCheckout.InitializeForCustomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::ItemCheckout::*)(::GlobalNamespace::CompositeTriggerEvents*, ::UnityEngine::SceneManagement::Scene, bool)>(&::CosmeticRoom::ItemCheckout::InitializeForCustomMap)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c4e6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"InitializeForCustomMap", {}, {::i2c::type_of<::GlobalNamespace::CompositeTriggerEvents*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::ItemCheckout.RemoveFromCustomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::ItemCheckout::*)(::GlobalNamespace::CompositeTriggerEvents*)>(&::CosmeticRoom::ItemCheckout::RemoveFromCustomMap)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c4e780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"RemoveFromCustomMap", {}, {::i2c::type_of<::GlobalNamespace::CompositeTriggerEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::ItemCheckout.UpdateFromCart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::ItemCheckout::*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, ::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::CosmeticRoom::ItemCheckout::UpdateFromCart)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5c4e810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"UpdateFromCart", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::ItemCheckout.UpdatePurchaseText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::ItemCheckout::*)(::StringW, ::StringW, ::StringW, bool, bool)>(&::CosmeticRoom::ItemCheckout::UpdatePurchaseText)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c4e960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"UpdatePurchaseText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::ItemCheckout.IsFromScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CosmeticRoom::ItemCheckout::*)(::UnityEngine::SceneManagement::Scene)>(&::CosmeticRoom::ItemCheckout::IsFromScene)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c4eb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"IsFromScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::ItemCheckout._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::ItemCheckout::*)()>(&::CosmeticRoom::ItemCheckout::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4eb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CheckoutCartButton>>& CosmeticRoom::ItemCheckout::__cordl_internal_get_checkoutCartButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutCartButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CheckoutCartButton>> const& CosmeticRoom::ItemCheckout::__cordl_internal_get_checkoutCartButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutCartButtons;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_checkoutCartButtons(::ArrayW<::UnityW<::GlobalNamespace::CheckoutCartButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkoutCartButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton>& CosmeticRoom::ItemCheckout::__cordl_internal_get_leftPurchaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPurchaseButton;
}
constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton> const& CosmeticRoom::ItemCheckout::__cordl_internal_get_leftPurchaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPurchaseButton;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_leftPurchaseButton(::UnityW<::GlobalNamespace::PurchaseItemButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftPurchaseButton = value;
}
constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton>& CosmeticRoom::ItemCheckout::__cordl_internal_get_rightPurchaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPurchaseButton;
}
constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton> const& CosmeticRoom::ItemCheckout::__cordl_internal_get_rightPurchaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPurchaseButton;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_rightPurchaseButton(::UnityW<::GlobalNamespace::PurchaseItemButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightPurchaseButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& CosmeticRoom::ItemCheckout::__cordl_internal_get_purchaseText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& CosmeticRoom::ItemCheckout::__cordl_internal_get_purchaseText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseText;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_purchaseText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& CosmeticRoom::ItemCheckout::__cordl_internal_get_purchaseTextTMP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseTextTMP;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& CosmeticRoom::ItemCheckout::__cordl_internal_get_purchaseTextTMP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseTextTMP;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_purchaseTextTMP(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseTextTMP = value;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel>& CosmeticRoom::ItemCheckout::__cordl_internal_get_checkoutHeadModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutHeadModel;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel> const& CosmeticRoom::ItemCheckout::__cordl_internal_get_checkoutHeadModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutHeadModel;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_checkoutHeadModel(::UnityW<::GlobalNamespace::HeadModel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkoutHeadModel = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& CosmeticRoom::ItemCheckout::__cordl_internal_get_checkoutTryOnArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutTryOnArea;
}
constexpr ::UnityW<::UnityEngine::Collider> const& CosmeticRoom::ItemCheckout::__cordl_internal_get_checkoutTryOnArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutTryOnArea;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_checkoutTryOnArea(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkoutTryOnArea = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& CosmeticRoom::ItemCheckout::__cordl_internal_get_checkoutCounterMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutCounterMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& CosmeticRoom::ItemCheckout::__cordl_internal_get_checkoutCounterMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkoutCounterMesh;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_checkoutCounterMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkoutCounterMesh = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& CosmeticRoom::ItemCheckout::__cordl_internal_get_purchaseScreenMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseScreenMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& CosmeticRoom::ItemCheckout::__cordl_internal_get_purchaseScreenMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseScreenMesh;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_purchaseScreenMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseScreenMesh = value;
}
constexpr ::UnityEngine::SceneManagement::Scene& CosmeticRoom::ItemCheckout::__cordl_internal_get_originalScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& CosmeticRoom::ItemCheckout::__cordl_internal_get_originalScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScene;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_originalScene(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalScene = value;
}
constexpr int32_t& CosmeticRoom::ItemCheckout::__cordl_internal_get_iterator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterator;
}
constexpr int32_t const& CosmeticRoom::ItemCheckout::__cordl_internal_get_iterator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterator;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_iterator(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iterator = value;
}
constexpr bool& CosmeticRoom::ItemCheckout::__cordl_internal_get_addOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addOnEnable;
}
constexpr bool const& CosmeticRoom::ItemCheckout::__cordl_internal_get_addOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addOnEnable;
}
constexpr void CosmeticRoom::ItemCheckout::__cordl_internal_set_addOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addOnEnable = value;
}
inline void CosmeticRoom::ItemCheckout::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::ItemCheckout::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::ItemCheckout::InitializeForCustomMap(::GlobalNamespace::CompositeTriggerEvents*  customMapTryOnArea, ::UnityEngine::SceneManagement::Scene  customMapScene, bool  useCustomCounterMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"InitializeForCustomMap", {}, {::i2c::type_of<::GlobalNamespace::CompositeTriggerEvents*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customMapTryOnArea, customMapScene, useCustomCounterMesh);
}
inline void CosmeticRoom::ItemCheckout::RemoveFromCustomMap(::GlobalNamespace::CompositeTriggerEvents*  customMapTryOnArea)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"RemoveFromCustomMap", {}, {::i2c::type_of<::GlobalNamespace::CompositeTriggerEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customMapTryOnArea);
}
inline void CosmeticRoom::ItemCheckout::UpdateFromCart(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  currentCart, ::GlobalNamespace::CosmeticsController_CosmeticItem  itemToBuy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"UpdateFromCart", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentCart, itemToBuy);
}
inline void CosmeticRoom::ItemCheckout::UpdatePurchaseText(::StringW  newText, ::StringW  leftPurchaseButtonText, ::StringW  rightPurchaseButtonText, bool  leftButtonOn, bool  rightButtonOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"UpdatePurchaseText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newText, leftPurchaseButtonText, rightPurchaseButtonText, leftButtonOn, rightButtonOn);
}
inline bool CosmeticRoom::ItemCheckout::IsFromScene(::UnityEngine::SceneManagement::Scene  unloadingScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {"IsFromScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unloadingScene);
}
inline void CosmeticRoom::ItemCheckout::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemCheckout*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CosmeticRoom::ItemCheckout* CosmeticRoom::ItemCheckout::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CosmeticRoom::ItemCheckout*>());
}
// Ctor Parameters []
constexpr ::CosmeticRoom::ItemCheckout::ItemCheckout()   {
}
