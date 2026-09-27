#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRKiosk.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRKiosk_PurchaseState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRKiosk_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRKiosk_ButtonSide_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRKiosk_PurchaseState_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRKiosk__Start_d__16_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRKiosk_def.hpp"
#include "PlayFab/ClientModels/zzzz__PurchaseItemResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IntVariable_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__StringVariable_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)()>(&::GorillaTagScripts::GhostReactor::GRKiosk::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c19ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.ProcessPurchaseItemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GRKiosk_PurchaseState>*)>(&::GorillaTagScripts::GhostReactor::GRKiosk::ProcessPurchaseItemState)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c19d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"ProcessPurchaseItemState", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::GRKiosk_PurchaseState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.PlayerOwnsItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::GRKiosk::*)()>(&::GorillaTagScripts::GhostReactor::GRKiosk::PlayerOwnsItem)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c1a714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"PlayerOwnsItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.OnGetCurrency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)()>(&::GorillaTagScripts::GhostReactor::GRKiosk::OnGetCurrency)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c1a7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"OnGetCurrency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.ResetButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)()>(&::GorillaTagScripts::GhostReactor::GRKiosk::ResetButtons)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c19ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"ResetButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.SetAvailableForPurchaseDisplays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>)>(&::GorillaTagScripts::GhostReactor::GRKiosk::SetAvailableForPurchaseDisplays)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5c19fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"SetAvailableForPurchaseDisplays", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.SetCheckoutConfirmationDisplays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>)>(&::GorillaTagScripts::GhostReactor::GRKiosk::SetCheckoutConfirmationDisplays)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5c1a220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"SetCheckoutConfirmationDisplays", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.ConfirmCheckout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>)>(&::GorillaTagScripts::GhostReactor::GRKiosk::ConfirmCheckout)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c1a388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"ConfirmCheckout", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.PurchaseItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)()>(&::GorillaTagScripts::GhostReactor::GRKiosk::PurchaseItem)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c1a7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"PurchaseItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.MatchesCosmeticForPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::GRKiosk::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GorillaTagScripts::GhostReactor::GRKiosk::MatchesCosmeticForPurchase)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c1a9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"MatchesCosmeticForPurchase", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.OnLeftPurchaseButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GorillaTagScripts::GhostReactor::GRKiosk::OnLeftPurchaseButtonPressed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c1aa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"OnLeftPurchaseButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.OnRightPurchaseButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GorillaTagScripts::GhostReactor::GRKiosk::OnRightPurchaseButtonPressed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c1aa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"OnRightPurchaseButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk.FormattedPurchaseText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)()>(&::GorillaTagScripts::GhostReactor::GRKiosk::FormattedPurchaseText)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5c1a404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"FormattedPurchaseText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)()>(&::GorillaTagScripts::GhostReactor::GRKiosk::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1aafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk._PurchaseItem_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk::*)(::PlayFab::ClientModels::PurchaseItemResult*)>(&::GorillaTagScripts::GhostReactor::GRKiosk::_PurchaseItem_b__24_0)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c1ab04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"<PurchaseItem>b__24_0", {}, {::i2c::type_of<::PlayFab::ClientModels::PurchaseItemResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get_CosmeticNameForPurchase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticNameForPurchase;
}
constexpr ::StringW const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get_CosmeticNameForPurchase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticNameForPurchase;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set_CosmeticNameForPurchase(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CosmeticNameForPurchase = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get_LeftPurchaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftPurchaseButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get_LeftPurchaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftPurchaseButton;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set_LeftPurchaseButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeftPurchaseButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get_RightPurchaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RightPurchaseButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get_RightPurchaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RightPurchaseButton;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set_RightPurchaseButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RightPurchaseButton = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get_PurchaseText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get_PurchaseText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseText;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set_PurchaseText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseText = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__cosmeticForPurchase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticForPurchase;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__cosmeticForPurchase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticForPurchase;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__cosmeticForPurchase(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmeticForPurchase = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseAudioClip;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__purchaseAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____purchaseAudioClip = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseParticles;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__purchaseParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____purchaseParticles = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseTextLoc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseTextLoc;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseTextLoc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseTextLoc;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__purchaseTextLoc(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____purchaseTextLoc = value;
}
constexpr ::UnityEngine::Localization::LocalizedString*& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseTextLocStr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseTextLocStr;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseTextLocStr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseTextLocStr;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__purchaseTextLocStr(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____purchaseTextLocStr = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__itemNameVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemNameVar;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable* const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__itemNameVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemNameVar;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__itemNameVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____itemNameVar = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__itemCostVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemCostVar;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__itemCostVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemCostVar;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__itemCostVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____itemCostVar = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__currencyBalanceVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currencyBalanceVar;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__currencyBalanceVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currencyBalanceVar;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__currencyBalanceVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currencyBalanceVar = value;
}
constexpr ::GlobalNamespace::GRKiosk_PurchaseState& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseState;
}
constexpr ::GlobalNamespace::GRKiosk_PurchaseState const& GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_get__purchaseState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseState;
}
constexpr void GorillaTagScripts::GhostReactor::GRKiosk::__cordl_internal_set__purchaseState(::GlobalNamespace::GRKiosk_PurchaseState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____purchaseState = value;
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::ProcessPurchaseItemState(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>  button, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GRKiosk_PurchaseState>*  recentStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"ProcessPurchaseItemState", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::GRKiosk_PurchaseState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, recentStates);
}
inline bool GorillaTagScripts::GhostReactor::GRKiosk::PlayerOwnsItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"PlayerOwnsItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::OnGetCurrency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"OnGetCurrency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::ResetButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"ResetButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::SetAvailableForPurchaseDisplays(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"SetAvailableForPurchaseDisplays", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::SetCheckoutConfirmationDisplays(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"SetCheckoutConfirmationDisplays", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::ConfirmCheckout(::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"ConfirmCheckout", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::GRKiosk_ButtonSide>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::PurchaseItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"PurchaseItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::GhostReactor::GRKiosk::MatchesCosmeticForPurchase(::GlobalNamespace::CosmeticsController_CosmeticItem  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"MatchesCosmeticForPurchase", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::OnLeftPurchaseButtonPressed(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"OnLeftPurchaseButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::OnRightPurchaseButtonPressed(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"OnRightPurchaseButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::FormattedPurchaseText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"FormattedPurchaseText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk::_PurchaseItem_b__24_0(::PlayFab::ClientModels::PurchaseItemResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk*>(),
                        {"<PurchaseItem>b__24_0", {}, {::i2c::type_of<::PlayFab::ClientModels::PurchaseItemResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaTagScripts::GhostReactor::GRKiosk* GorillaTagScripts::GhostReactor::GRKiosk::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::GRKiosk*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GRKiosk::GRKiosk()   {
}
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk___c::*)()>(&::GorillaTagScripts::GhostReactor::GRKiosk___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1aca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRKiosk___c._PurchaseItem_b__24_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRKiosk___c::*)(::PlayFab::PlayFabError*)>(&::GorillaTagScripts::GhostReactor::GRKiosk___c::_PurchaseItem_b__24_1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c1acac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk___c*>(),
                        {"<PurchaseItem>b__24_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::GhostReactor::GRKiosk___c::setStaticF___9(::GorillaTagScripts::GhostReactor::GRKiosk___c*  value)  {
::cordl_internals::setStaticField<::GorillaTagScripts::GhostReactor::GRKiosk___c*, "<>9", ::GorillaTagScripts::GhostReactor::GRKiosk___c*>(std::forward<::GorillaTagScripts::GhostReactor::GRKiosk___c*>(value));
}
inline ::GorillaTagScripts::GhostReactor::GRKiosk___c* GorillaTagScripts::GhostReactor::GRKiosk___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTagScripts::GhostReactor::GRKiosk___c*, "<>9", ::GorillaTagScripts::GhostReactor::GRKiosk___c*>();
}
inline void GorillaTagScripts::GhostReactor::GRKiosk___c::setStaticF___9__24_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__24_1", ::GorillaTagScripts::GhostReactor::GRKiosk___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaTagScripts::GhostReactor::GRKiosk___c::getStaticF___9__24_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__24_1", ::GorillaTagScripts::GhostReactor::GRKiosk___c*>();
}
inline void GorillaTagScripts::GhostReactor::GRKiosk___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::GRKiosk___c::_PurchaseItem_b__24_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRKiosk___c*>(),
                        {"<PurchaseItem>b__24_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaTagScripts::GhostReactor::GRKiosk___c* GorillaTagScripts::GhostReactor::GRKiosk___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::GRKiosk___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GRKiosk___c::GRKiosk___c()   {
}
