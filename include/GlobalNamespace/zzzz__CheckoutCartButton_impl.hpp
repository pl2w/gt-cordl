#pragma once
// IWYU pragma private; include "GlobalNamespace/CheckoutCartButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "GlobalNamespace/zzzz__CheckoutCartButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CheckoutCartButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CheckoutCartButton::*)()>(&::GlobalNamespace::CheckoutCartButton::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x574a8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CheckoutCartButton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CheckoutCartButton::*)()>(&::GlobalNamespace::CheckoutCartButton::UpdateColor)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x574a968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CheckoutCartButton.ButtonActivationWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CheckoutCartButton::*)(bool)>(&::GlobalNamespace::CheckoutCartButton::ButtonActivationWithHand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x574ac00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CheckoutCartButton.SetItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CheckoutCartButton::*)(::GlobalNamespace::CosmeticsController_CosmeticItem, bool)>(&::GlobalNamespace::CheckoutCartButton::SetItem)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x574ac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(),
                        {"SetItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CheckoutCartButton.ClearItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CheckoutCartButton::*)()>(&::GlobalNamespace::CheckoutCartButton::ClearItem)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x574ad4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(),
                        {"ClearItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CheckoutCartButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CheckoutCartButton::*)()>(&::GlobalNamespace::CheckoutCartButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574ae2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GlobalNamespace::CheckoutCartButton::__cordl_internal_get_currentCosmeticItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GlobalNamespace::CheckoutCartButton::__cordl_internal_get_currentCosmeticItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticItem;
}
constexpr void GlobalNamespace::CheckoutCartButton::__cordl_internal_set_currentCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCosmeticItem = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::CheckoutCartButton::__cordl_internal_get_currentCosmeticSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::CheckoutCartButton::__cordl_internal_get_currentCosmeticSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticSprite;
}
constexpr void GlobalNamespace::CheckoutCartButton::__cordl_internal_set_currentCosmeticSprite(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCosmeticSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::CheckoutCartButton::__cordl_internal_get_blankSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blankSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::CheckoutCartButton::__cordl_internal_get_blankSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blankSprite;
}
constexpr void GlobalNamespace::CheckoutCartButton::__cordl_internal_set_blankSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blankSprite = value;
}
constexpr ::StringW& GlobalNamespace::CheckoutCartButton::__cordl_internal_get_noCosmeticText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noCosmeticText;
}
constexpr ::StringW const& GlobalNamespace::CheckoutCartButton::__cordl_internal_get_noCosmeticText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noCosmeticText;
}
constexpr void GlobalNamespace::CheckoutCartButton::__cordl_internal_set_noCosmeticText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noCosmeticText = value;
}
inline void GlobalNamespace::CheckoutCartButton::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CheckoutCartButton::UpdateColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CheckoutCartButton::ButtonActivationWithHand(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::CheckoutCartButton::SetItem(::GlobalNamespace::CosmeticsController_CosmeticItem  item, bool  isCurrentItemToBuy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(),
                        {"SetItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, isCurrentItemToBuy);
}
inline void GlobalNamespace::CheckoutCartButton::ClearItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(),
                        {"ClearItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CheckoutCartButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckoutCartButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CheckoutCartButton* GlobalNamespace::CheckoutCartButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CheckoutCartButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CheckoutCartButton::CheckoutCartButton()   {
}
