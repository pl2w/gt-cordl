#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUITokenPack.hpp"
#include "Modio/Monetization/zzzz__PortalSku_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUITokenPack_def.hpp"
#include "Modio/Monetization/zzzz__PortalSku_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUITokenPack_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPack.SetPack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPack::*)(::Modio::Monetization::PortalSku)>(&::Modio::Unity::UI::Components::ModioUITokenPack::SetPack)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9fbcfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack*>(),
                        {"SetPack", {}, {::i2c::type_of<::Modio::Monetization::PortalSku>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPack.OnPressedPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPack::*)()>(&::Modio::Unity::UI::Components::ModioUITokenPack::OnPressedPurchase)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x9fbd290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack*>(),
                        {"OnPressedPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPack.GetImageForValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::Modio::Unity::UI::Components::ModioUITokenPack::*)(int32_t)>(&::Modio::Unity::UI::Components::ModioUITokenPack::GetImageForValue)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9fbd148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack*>(),
                        {"GetImageForValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPack._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPack::*)()>(&::Modio::Unity::UI::Components::ModioUITokenPack::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbd4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__amount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amount;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__amount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amount;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_set__amount(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amount = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__price()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____price;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__price() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____price;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_set__price(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____price = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_set__name(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____icon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____icon;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____icon = value;
}
constexpr ::Modio::Monetization::PortalSku& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__tokenPack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokenPack;
}
constexpr ::Modio::Monetization::PortalSku const& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__tokenPack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokenPack;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_set__tokenPack(::Modio::Monetization::PortalSku  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tokenPack = value;
}
constexpr ::ArrayW<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*>& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__valuesToImages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valuesToImages;
}
constexpr ::ArrayW<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*> const& Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_get__valuesToImages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valuesToImages;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPack::__cordl_internal_set__valuesToImages(::ArrayW<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valuesToImages = value;
}
inline void Modio::Unity::UI::Components::ModioUITokenPack::SetPack(::Modio::Monetization::PortalSku  sku)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack*>(),
                        {"SetPack", {}, {::i2c::type_of<::Modio::Monetization::PortalSku>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sku);
}
inline void Modio::Unity::UI::Components::ModioUITokenPack::OnPressedPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack*>(),
                        {"OnPressedPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> Modio::Unity::UI::Components::ModioUITokenPack::GetImageForValue(int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack*>(),
                        {"GetImageForValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method, amount);
}
inline void Modio::Unity::UI::Components::ModioUITokenPack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUITokenPack* Modio::Unity::UI::Components::ModioUITokenPack::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUITokenPack*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUITokenPack::ModioUITokenPack()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPack___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPack___c::*)()>(&::Modio::Unity::UI::Components::ModioUITokenPack___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbd558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPack___c._OnPressedPurchase_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPack___c::*)(::Modio::Error*)>(&::Modio::Unity::UI::Components::ModioUITokenPack___c::_OnPressedPurchase_b__7_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9fbd560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack___c*>(),
                        {"<OnPressedPurchase>b__7_0", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::ModioUITokenPack___c::setStaticF___9(::Modio::Unity::UI::Components::ModioUITokenPack___c*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::UI::Components::ModioUITokenPack___c*, "<>9", ::Modio::Unity::UI::Components::ModioUITokenPack___c*>(std::forward<::Modio::Unity::UI::Components::ModioUITokenPack___c*>(value));
}
inline ::Modio::Unity::UI::Components::ModioUITokenPack___c* Modio::Unity::UI::Components::ModioUITokenPack___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Unity::UI::Components::ModioUITokenPack___c*, "<>9", ::Modio::Unity::UI::Components::ModioUITokenPack___c*>();
}
inline void Modio::Unity::UI::Components::ModioUITokenPack___c::setStaticF___9__7_0(::System::Action_1<::Modio::Error*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Modio::Error*>*, "<>9__7_0", ::Modio::Unity::UI::Components::ModioUITokenPack___c*>(std::forward<::System::Action_1<::Modio::Error*>*>(value));
}
inline ::System::Action_1<::Modio::Error*>* Modio::Unity::UI::Components::ModioUITokenPack___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Modio::Error*>*, "<>9__7_0", ::Modio::Unity::UI::Components::ModioUITokenPack___c*>();
}
inline void Modio::Unity::UI::Components::ModioUITokenPack___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUITokenPack___c::_OnPressedPurchase_b__7_0(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack___c*>(),
                        {"<OnPressedPurchase>b__7_0", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::Modio::Unity::UI::Components::ModioUITokenPack___c* Modio::Unity::UI::Components::ModioUITokenPack___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUITokenPack___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUITokenPack___c::ModioUITokenPack___c()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::*)()>(&::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbd4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr int32_t const& Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::__cordl_internal_set_value(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::__cordl_internal_get_image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::__cordl_internal_get_image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr void Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::__cordl_internal_set_image(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___image = value;
}
inline void Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap* Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap::ModioUITokenPack_ValueImageMap()   {
}
