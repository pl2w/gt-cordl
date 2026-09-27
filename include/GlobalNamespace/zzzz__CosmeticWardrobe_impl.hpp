#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticWardrobe.hpp"
#include "GlobalNamespace/zzzz__CosmeticButton_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticCategory_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticWardrobe_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticButton_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCategoryButton_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticWardrobe__RepressButton_d__26_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticWardrobe__RepressUniqueButton_d__28_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticWardrobe_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__HeadModel_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.get_UseTemporarySet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticWardrobe::*)()>(&::GlobalNamespace::CosmeticWardrobe::get_UseTemporarySet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5783660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"get_UseTemporarySet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.set_UseTemporarySet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(bool)>(&::GlobalNamespace::CosmeticWardrobe::set_UseTemporarySet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5783668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"set_UseTemporarySet", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)()>(&::GlobalNamespace::CosmeticWardrobe::Start)> {
  constexpr static std::size_t size = 0x95c;
  constexpr static std::size_t addrs = 0x5783754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)()>(&::GlobalNamespace::CosmeticWardrobe::OnDestroy)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x57841a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.HandlePressedNextSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::CosmeticWardrobe::HandlePressedNextSelection)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x578490c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedNextSelection", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.HandlePressedPrevSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::CosmeticWardrobe::HandlePressedPrevSelection)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5784a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedPrevSelection", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.RepressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::GlobalNamespace::GorillaPressableButton*, bool, ::StringW)>(&::GlobalNamespace::CosmeticWardrobe::RepressButton)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5784b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"RepressButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.HandlePressedSelectCosmeticButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::CosmeticWardrobe::HandlePressedSelectCosmeticButton)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5784c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedSelectCosmeticButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.RepressUniqueButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::GlobalNamespace::GorillaPressableButton*, bool, ::StringW)>(&::GlobalNamespace::CosmeticWardrobe::RepressUniqueButton)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5785000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"RepressUniqueButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.HandlePressedSelectCosmeticButtonUnique
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::CosmeticWardrobe::HandlePressedSelectCosmeticButtonUnique)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x57850f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedSelectCosmeticButtonUnique", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.HandleChangeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::CosmeticWardrobe::HandleChangeCategory)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x578550c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandleChangeCategory", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.HandleCosmeticsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)()>(&::GlobalNamespace::CosmeticWardrobe::HandleCosmeticsUpdated)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5783684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandleCosmeticsUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.HandleLocalColorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::UnityEngine::Color)>(&::GlobalNamespace::CosmeticWardrobe::HandleLocalColorChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57840b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandleLocalColorChanged", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.HandlePressedPrevOutfitButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::CosmeticWardrobe::HandlePressedPrevOutfitButton)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5786334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedPrevOutfitButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.HandlePressedNextOutfitButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::CosmeticWardrobe::HandlePressedNextOutfitButton)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57863a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedNextOutfitButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.UpdateCosmeticDisplays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)()>(&::GlobalNamespace::CosmeticWardrobe::UpdateCosmeticDisplays)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5785e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"UpdateCosmeticDisplays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.UpdateCategoryButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)()>(&::GlobalNamespace::CosmeticWardrobe::UpdateCategoryButtons)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5785bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"UpdateCategoryButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.UpdateOutfitButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)()>(&::GlobalNamespace::CosmeticWardrobe::UpdateOutfitButtons)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x57861e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"UpdateOutfitButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe.WardrobeButtonsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticWardrobe::*)()>(&::GlobalNamespace::CosmeticWardrobe::WardrobeButtonsInitialized)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5786414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"WardrobeButtonsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe::*)()>(&::GlobalNamespace::CosmeticWardrobe::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57864dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_cosmeticCollectionDisplays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticCollectionDisplays;
}
constexpr ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*> const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_cosmeticCollectionDisplays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticCollectionDisplays;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_cosmeticCollectionDisplays(::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticCollectionDisplays = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticButton>>& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_uniqueCosmeticButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueCosmeticButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticButton>> const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_uniqueCosmeticButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueCosmeticButtons;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_uniqueCosmeticButtons(::ArrayW<::UnityW<::GlobalNamespace::CosmeticButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniqueCosmeticButtons = value;
}
constexpr ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_cosmeticCategoryButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticCategoryButtons;
}
constexpr ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*> const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_cosmeticCategoryButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticCategoryButtons;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_cosmeticCategoryButtons(::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticCategoryButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel>& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_currentEquippedDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEquippedDisplay;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel> const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_currentEquippedDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEquippedDisplay;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_currentEquippedDisplay(::UnityW<::GlobalNamespace::HeadModel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentEquippedDisplay = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_nextSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSelection;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_nextSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSelection;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_nextSelection(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSelection = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_prevSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevSelection;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_prevSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevSelection;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_prevSelection(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevSelection = value;
}
constexpr bool& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_m_useTemporarySet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useTemporarySet;
}
constexpr bool const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_m_useTemporarySet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useTemporarySet;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_m_useTemporarySet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_useTemporarySet = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticButton>& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_previousOutfit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousOutfit;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticButton> const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_previousOutfit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousOutfit;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_previousOutfit(::UnityW<::GlobalNamespace::CosmeticButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousOutfit = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticButton>& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_nextOutfit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextOutfit;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticButton> const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_nextOutfit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextOutfit;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_nextOutfit(::UnityW<::GlobalNamespace::CosmeticButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextOutfit = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_outfitText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_outfitText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitText;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_outfitText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outfitText = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_startingHeadSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingHeadSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticWardrobe::__cordl_internal_get_startingHeadSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingHeadSize;
}
constexpr void GlobalNamespace::CosmeticWardrobe::__cordl_internal_set_startingHeadSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingHeadSize = value;
}
inline void GlobalNamespace::CosmeticWardrobe::setStaticF_selectedCategoryIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "selectedCategoryIndex", ::GlobalNamespace::CosmeticWardrobe*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CosmeticWardrobe::getStaticF_selectedCategoryIndex()  {
return ::cordl_internals::getStaticField<int32_t, "selectedCategoryIndex", ::GlobalNamespace::CosmeticWardrobe*>();
}
inline void GlobalNamespace::CosmeticWardrobe::setStaticF_selectedCategory(::GlobalNamespace::CosmeticsController_CosmeticCategory  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CosmeticsController_CosmeticCategory, "selectedCategory", ::GlobalNamespace::CosmeticWardrobe*>(std::forward<::GlobalNamespace::CosmeticsController_CosmeticCategory>(value));
}
inline ::GlobalNamespace::CosmeticsController_CosmeticCategory GlobalNamespace::CosmeticWardrobe::getStaticF_selectedCategory()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CosmeticsController_CosmeticCategory, "selectedCategory", ::GlobalNamespace::CosmeticWardrobe*>();
}
inline void GlobalNamespace::CosmeticWardrobe::setStaticF_startingDisplayIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "startingDisplayIndex", ::GlobalNamespace::CosmeticWardrobe*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CosmeticWardrobe::getStaticF_startingDisplayIndex()  {
return ::cordl_internals::getStaticField<int32_t, "startingDisplayIndex", ::GlobalNamespace::CosmeticWardrobe*>();
}
inline void GlobalNamespace::CosmeticWardrobe::setStaticF_selectedOutfitIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "selectedOutfitIndex", ::GlobalNamespace::CosmeticWardrobe*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CosmeticWardrobe::getStaticF_selectedOutfitIndex()  {
return ::cordl_internals::getStaticField<int32_t, "selectedOutfitIndex", ::GlobalNamespace::CosmeticWardrobe*>();
}
inline void GlobalNamespace::CosmeticWardrobe::setStaticF_OnWardrobeUpdateCategories(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnWardrobeUpdateCategories", ::GlobalNamespace::CosmeticWardrobe*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::CosmeticWardrobe::getStaticF_OnWardrobeUpdateCategories()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnWardrobeUpdateCategories", ::GlobalNamespace::CosmeticWardrobe*>();
}
inline void GlobalNamespace::CosmeticWardrobe::setStaticF_OnWardrobeUpdateDisplays(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnWardrobeUpdateDisplays", ::GlobalNamespace::CosmeticWardrobe*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::CosmeticWardrobe::getStaticF_OnWardrobeUpdateDisplays()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnWardrobeUpdateDisplays", ::GlobalNamespace::CosmeticWardrobe*>();
}
inline bool GlobalNamespace::CosmeticWardrobe::get_UseTemporarySet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"get_UseTemporarySet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticWardrobe::set_UseTemporarySet(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"set_UseTemporarySet", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CosmeticWardrobe::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticWardrobe::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticWardrobe::HandlePressedNextSelection(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedNextSelection", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft);
}
inline void GlobalNamespace::CosmeticWardrobe::HandlePressedPrevSelection(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedPrevSelection", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft);
}
inline void GlobalNamespace::CosmeticWardrobe::RepressButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft, ::StringW  itemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"RepressButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft, itemName);
}
inline void GlobalNamespace::CosmeticWardrobe::HandlePressedSelectCosmeticButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedSelectCosmeticButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft);
}
inline void GlobalNamespace::CosmeticWardrobe::RepressUniqueButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft, ::StringW  itemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"RepressUniqueButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft, itemName);
}
inline void GlobalNamespace::CosmeticWardrobe::HandlePressedSelectCosmeticButtonUnique(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedSelectCosmeticButtonUnique", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft);
}
inline void GlobalNamespace::CosmeticWardrobe::HandleChangeCategory(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandleChangeCategory", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft);
}
inline void GlobalNamespace::CosmeticWardrobe::HandleCosmeticsUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandleCosmeticsUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticWardrobe::HandleLocalColorChanged(::UnityEngine::Color  newColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandleLocalColorChanged", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newColor);
}
inline void GlobalNamespace::CosmeticWardrobe::HandlePressedPrevOutfitButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedPrevOutfitButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft);
}
inline void GlobalNamespace::CosmeticWardrobe::HandlePressedNextOutfitButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"HandlePressedNextOutfitButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft);
}
inline void GlobalNamespace::CosmeticWardrobe::UpdateCosmeticDisplays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"UpdateCosmeticDisplays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticWardrobe::UpdateCategoryButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"UpdateCategoryButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticWardrobe::UpdateOutfitButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"UpdateOutfitButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticWardrobe::WardrobeButtonsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {"WardrobeButtonsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticWardrobe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticWardrobe* GlobalNamespace::CosmeticWardrobe::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticWardrobe*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticWardrobe::CosmeticWardrobe()   {
}
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::*)()>(&::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x578654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CosmeticCategoryButton>& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticCategoryButton> const& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_set_button(::UnityW<::GlobalNamespace::CosmeticCategoryButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticCategory& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_category()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticCategory const& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_category() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_set_category(::GlobalNamespace::CosmeticsController_CosmeticCategory  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___category = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_slot1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot1;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_slot1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot1;
}
constexpr void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_set_slot1(::GlobalNamespace::CosmeticsController_CosmeticSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slot1 = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_slot2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot2;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_slot2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot2;
}
constexpr void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_set_slot2(::GlobalNamespace::CosmeticsController_CosmeticSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slot2 = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_slot1RemovedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot1RemovedItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_slot1RemovedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot1RemovedItem;
}
constexpr void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_set_slot1RemovedItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slot1RemovedItem = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_slot2RemovedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot2RemovedItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_get_slot2RemovedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slot2RemovedItem;
}
constexpr void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::__cordl_internal_set_slot2RemovedItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slot2RemovedItem = value;
}
inline void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory* GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory::CosmeticWardrobe_CosmeticWardrobeCategory()   {
}
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::*)()>(&::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5786544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::HeadModel>& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::__cordl_internal_get_displayHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayHead;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel> const& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::__cordl_internal_get_displayHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayHead;
}
constexpr void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::__cordl_internal_set_displayHead(::UnityW<::GlobalNamespace::HeadModel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayHead = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticButton>& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::__cordl_internal_get_selectButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectButton;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticButton> const& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::__cordl_internal_get_selectButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectButton;
}
constexpr void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::__cordl_internal_set_selectButton(::UnityW<::GlobalNamespace::CosmeticButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectButton = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::__cordl_internal_get_currentCosmeticItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::__cordl_internal_get_currentCosmeticItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCosmeticItem;
}
constexpr void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::__cordl_internal_set_currentCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCosmeticItem = value;
}
inline void GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection* GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection::CosmeticWardrobe_CosmeticWardrobeSelection()   {
}
