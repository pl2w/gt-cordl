#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticStand.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticStand_def.hpp"
#include "GlobalNamespace/zzzz__HeadModel_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticStand.InitializeCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticStand::*)()>(&::GlobalNamespace::CosmeticStand::InitializeCosmetic)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x574c4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticStand*>(),
                        {"InitializeCosmetic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticStand.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticStand::*)()>(&::GlobalNamespace::CosmeticStand::ButtonActivation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x574c6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticStand*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticStand*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticStand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticStand::*)()>(&::GlobalNamespace::CosmeticStand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574c758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticStand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticStand._InitializeCosmetic_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticStand::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GlobalNamespace::CosmeticStand::_InitializeCosmetic_b__6_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x574c760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticStand*>(),
                        {"<InitializeCosmetic>b__6_0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GlobalNamespace::CosmeticStand::__cordl_internal_get_thisCosmeticItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisCosmeticItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GlobalNamespace::CosmeticStand::__cordl_internal_get_thisCosmeticItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisCosmeticItem;
}
constexpr void GlobalNamespace::CosmeticStand::__cordl_internal_set_thisCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisCosmeticItem = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticStand::__cordl_internal_get_thisCosmeticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisCosmeticName;
}
constexpr ::StringW const& GlobalNamespace::CosmeticStand::__cordl_internal_get_thisCosmeticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisCosmeticName;
}
constexpr void GlobalNamespace::CosmeticStand::__cordl_internal_set_thisCosmeticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisCosmeticName = value;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel>& GlobalNamespace::CosmeticStand::__cordl_internal_get_thisHeadModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisHeadModel;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel> const& GlobalNamespace::CosmeticStand::__cordl_internal_get_thisHeadModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisHeadModel;
}
constexpr void GlobalNamespace::CosmeticStand::__cordl_internal_set_thisHeadModel(::UnityW<::GlobalNamespace::HeadModel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisHeadModel = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::CosmeticStand::__cordl_internal_get_slotPriceText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotPriceText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::CosmeticStand::__cordl_internal_get_slotPriceText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotPriceText;
}
constexpr void GlobalNamespace::CosmeticStand::__cordl_internal_set_slotPriceText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotPriceText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::CosmeticStand::__cordl_internal_get_addToCartText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addToCartText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::CosmeticStand::__cordl_internal_get_addToCartText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addToCartText;
}
constexpr void GlobalNamespace::CosmeticStand::__cordl_internal_set_addToCartText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addToCartText = value;
}
constexpr bool& GlobalNamespace::CosmeticStand::__cordl_internal_get_skipMe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipMe;
}
constexpr bool const& GlobalNamespace::CosmeticStand::__cordl_internal_get_skipMe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipMe;
}
constexpr void GlobalNamespace::CosmeticStand::__cordl_internal_set_skipMe(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipMe = value;
}
inline void GlobalNamespace::CosmeticStand::InitializeCosmetic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticStand*>(),
                        {"InitializeCosmetic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticStand::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticStand*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticStand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticStand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticStand::_InitializeCosmetic_b__6_0(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticStand*>(),
                        {"<InitializeCosmetic>b__6_0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::CosmeticStand* GlobalNamespace::CosmeticStand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticStand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticStand::CosmeticStand()   {
}
