#pragma once
// IWYU pragma private; include "GlobalNamespace/WardrobeItemButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "GlobalNamespace/zzzz__WardrobeItemButton_def.hpp"
#include "GlobalNamespace/zzzz__HeadModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WardrobeItemButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeItemButton::*)()>(&::GlobalNamespace::WardrobeItemButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578944c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeItemButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::HeadModel>& GlobalNamespace::WardrobeItemButton::__cordl_internal_get_controlledModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlledModel;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel> const& GlobalNamespace::WardrobeItemButton::__cordl_internal_get_controlledModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlledModel;
}
constexpr void GlobalNamespace::WardrobeItemButton::__cordl_internal_set_controlledModel(::UnityW<::GlobalNamespace::HeadModel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlledModel = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GlobalNamespace::WardrobeItemButton::__cordl_internal_get_currentCosmeticItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GlobalNamespace::WardrobeItemButton::__cordl_internal_get_currentCosmeticItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticItem;
}
constexpr void GlobalNamespace::WardrobeItemButton::__cordl_internal_set_currentCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCosmeticItem = value;
}
inline void GlobalNamespace::WardrobeItemButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeItemButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WardrobeItemButton* GlobalNamespace::WardrobeItemButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WardrobeItemButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WardrobeItemButton::WardrobeItemButton()   {
}
