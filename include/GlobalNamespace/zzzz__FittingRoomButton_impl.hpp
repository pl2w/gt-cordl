#pragma once
// IWYU pragma private; include "GlobalNamespace/FittingRoomButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "GlobalNamespace/zzzz__FittingRoomButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FittingRoomButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FittingRoomButton::*)()>(&::GlobalNamespace::FittingRoomButton::Start)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x574ebd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(),
                    {::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FittingRoomButton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FittingRoomButton::*)()>(&::GlobalNamespace::FittingRoomButton::UpdateColor)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x574ec8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(),
                    {::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FittingRoomButton.ButtonActivationWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FittingRoomButton::*)(bool)>(&::GlobalNamespace::FittingRoomButton::ButtonActivationWithHand)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x574ef24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(),
                    {::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FittingRoomButton.SetItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FittingRoomButton::*)(::GlobalNamespace::CosmeticsController_CosmeticItem, bool)>(&::GlobalNamespace::FittingRoomButton::SetItem)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x574efb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(),
                        {"SetItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FittingRoomButton.ClearItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FittingRoomButton::*)()>(&::GlobalNamespace::FittingRoomButton::ClearItem)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x574f074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(),
                        {"ClearItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FittingRoomButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FittingRoomButton::*)()>(&::GlobalNamespace::FittingRoomButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574f168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GlobalNamespace::FittingRoomButton::__cordl_internal_get_currentCosmeticItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GlobalNamespace::FittingRoomButton::__cordl_internal_get_currentCosmeticItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticItem;
}
constexpr void GlobalNamespace::FittingRoomButton::__cordl_internal_set_currentCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCosmeticItem = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::FittingRoomButton::__cordl_internal_get_currentCosmeticSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::FittingRoomButton::__cordl_internal_get_currentCosmeticSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticSprite;
}
constexpr void GlobalNamespace::FittingRoomButton::__cordl_internal_set_currentCosmeticSprite(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCosmeticSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::FittingRoomButton::__cordl_internal_get_blankSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blankSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::FittingRoomButton::__cordl_internal_get_blankSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blankSprite;
}
constexpr void GlobalNamespace::FittingRoomButton::__cordl_internal_set_blankSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blankSprite = value;
}
constexpr ::StringW& GlobalNamespace::FittingRoomButton::__cordl_internal_get_noCosmeticText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noCosmeticText;
}
constexpr ::StringW const& GlobalNamespace::FittingRoomButton::__cordl_internal_get_noCosmeticText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noCosmeticText;
}
constexpr void GlobalNamespace::FittingRoomButton::__cordl_internal_set_noCosmeticText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noCosmeticText = value;
}
inline void GlobalNamespace::FittingRoomButton::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FittingRoomButton::UpdateColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FittingRoomButton::ButtonActivationWithHand(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::FittingRoomButton::SetItem(::GlobalNamespace::CosmeticsController_CosmeticItem  item, bool  isInTryOnSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(),
                        {"SetItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, isInTryOnSet);
}
inline void GlobalNamespace::FittingRoomButton::ClearItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(),
                        {"ClearItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FittingRoomButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FittingRoomButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FittingRoomButton* GlobalNamespace::FittingRoomButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FittingRoomButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FittingRoomButton::FittingRoomButton()   {
}
