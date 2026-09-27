#pragma once
// IWYU pragma private; include "GlobalNamespace/SIPurchaseTerminal.hpp"
#include "GlobalNamespace/zzzz__SIPurchaseTerminal_PurchaseTerminalState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIPurchaseTerminal_def.hpp"
#include "GlobalNamespace/zzzz__ITouchScreenStation_def.hpp"
#include "GlobalNamespace/zzzz__SIPurchaseTerminal_PurchaseTerminalState_def.hpp"
#include "GlobalNamespace/zzzz__SIScreenRegion_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.get_ScreenRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIScreenRegion> (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::get_ScreenRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ea0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::OnEnable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x59ea100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.DelayedOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::DelayedOnEnable)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x59ea278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"DelayedOnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::OnDisable)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x59ea728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.UpdateCurrentTechPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::UpdateCurrentTechPoints)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59ea82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"UpdateCurrentTechPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.OnUpdateCurrencyBalance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::OnUpdateCurrencyBalance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59ea4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"OnUpdateCurrencyBalance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.AddButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)(::GlobalNamespace::SITouchscreenButton*, bool)>(&::GlobalNamespace::SIPurchaseTerminal::AddButton)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ea8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.TouchscreenButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GlobalNamespace::SIPurchaseTerminal::TouchscreenButtonPressed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59ea8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.TouchscreenToggleButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t, bool)>(&::GlobalNamespace::SIPurchaseTerminal::TouchscreenToggleButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59eabd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.IncreasePurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::IncreasePurchase)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59ea95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"IncreasePurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.DecreasePurcahse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::DecreasePurcahse)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59ea9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"DecreasePurcahse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.UpdatePurchaseAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::UpdatePurchaseAmount)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x59ea5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"UpdatePurchaseAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.SelectPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::SelectPurchase)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59ea950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"SelectPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.ConfirmPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::ConfirmPurchase)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59eaa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"ConfirmPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.ReturnToBaseScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::ReturnToBaseScreen)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59eabcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"ReturnToBaseScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState, bool)>(&::GlobalNamespace::SIPurchaseTerminal::UpdateState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59ea574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.SetScreenVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState, bool)>(&::GlobalNamespace::SIPurchaseTerminal::SetScreenVisibility)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59eabdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"SetScreenVisibility", {}, {::i2c::type_of<::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59eacdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal.ITouchScreenStation_get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::ITouchScreenStation_get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59eacf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal._ConfirmPurchase_b__34_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)()>(&::GlobalNamespace::SIPurchaseTerminal::_ConfirmPurchase_b__34_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59eacf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"<ConfirmPurchase>b__34_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPurchaseTerminal._ConfirmPurchase_b__34_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPurchaseTerminal::*)(::StringW)>(&::GlobalNamespace::SIPurchaseTerminal::_ConfirmPurchase_b__34_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59eada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"<ConfirmPurchase>b__34_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_currentState(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_screenRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRegion;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_screenRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRegion;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenRegion = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PopupBackgroundScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PopupBackgroundScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PopupBackgroundScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PopupBackgroundScreen;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_PopupBackgroundScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PopupBackgroundScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_ConfirmPurchasePopupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfirmPurchasePopupScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_ConfirmPurchasePopupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfirmPurchasePopupScreen;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_ConfirmPurchasePopupScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConfirmPurchasePopupScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseCompletePopupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseCompletePopupScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseCompletePopupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseCompletePopupScreen;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_PurchaseCompletePopupScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseCompletePopupScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PendingPurchasePopupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingPurchasePopupScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PendingPurchasePopupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingPurchasePopupScreen;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_PendingPurchasePopupScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PendingPurchasePopupScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_InsufficientFundsPopupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InsufficientFundsPopupScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_InsufficientFundsPopupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InsufficientFundsPopupScreen;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_InsufficientFundsPopupScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InsufficientFundsPopupScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_UnableToCompletePurchasePopupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnableToCompletePurchasePopupScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_UnableToCompletePurchasePopupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnableToCompletePurchasePopupScreen;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_UnableToCompletePurchasePopupScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnableToCompletePurchasePopupScreen = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseAmountShinyRockCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAmountShinyRockCount;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseAmountShinyRockCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAmountShinyRockCount;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_PurchaseAmountShinyRockCount(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseAmountShinyRockCount = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseAmountTechPointCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAmountTechPointCount;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseAmountTechPointCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAmountTechPointCount;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_PurchaseAmountTechPointCount(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseAmountTechPointCount = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseAmountCurrentShinyRockCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAmountCurrentShinyRockCount;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseAmountCurrentShinyRockCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAmountCurrentShinyRockCount;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_PurchaseAmountCurrentShinyRockCount(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseAmountCurrentShinyRockCount = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseAmountCurrentTechPointsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAmountCurrentTechPointsCount;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchaseAmountCurrentTechPointsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAmountCurrentTechPointsCount;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_PurchaseAmountCurrentTechPointsCount(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseAmountCurrentTechPointsCount = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_ConfirmPurchaseShinyRockCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfirmPurchaseShinyRockCount;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_ConfirmPurchaseShinyRockCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfirmPurchaseShinyRockCount;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_ConfirmPurchaseShinyRockCount(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConfirmPurchaseShinyRockCount = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_ConfirmPurchaseTechPointCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfirmPurchaseTechPointCount;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_ConfirmPurchaseTechPointCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfirmPurchaseTechPointCount;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_ConfirmPurchaseTechPointCount(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConfirmPurchaseTechPointCount = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchasedTechPointCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasedTechPointCount;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_PurchasedTechPointCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasedTechPointCount;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_PurchasedTechPointCount(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchasedTechPointCount = value;
}
constexpr int32_t& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_maxPurchaseSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPurchaseSize;
}
constexpr int32_t const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_maxPurchaseSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPurchaseSize;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_maxPurchaseSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPurchaseSize = value;
}
constexpr int32_t& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_minPurchaseSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPurchaseSize;
}
constexpr int32_t const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_minPurchaseSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPurchaseSize;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_minPurchaseSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minPurchaseSize = value;
}
constexpr int32_t& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_costPerTechPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costPerTechPoint;
}
constexpr int32_t const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_costPerTechPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costPerTechPoint;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_costPerTechPoint(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costPerTechPoint = value;
}
constexpr int32_t& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_purchaseSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseSize;
}
constexpr int32_t const& GlobalNamespace::SIPurchaseTerminal::__cordl_internal_get_purchaseSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseSize;
}
constexpr void GlobalNamespace::SIPurchaseTerminal::__cordl_internal_set_purchaseSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseSize = value;
}
inline ::UnityW<::GlobalNamespace::SIScreenRegion> GlobalNamespace::SIPurchaseTerminal::get_ScreenRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIScreenRegion>>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::DelayedOnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"DelayedOnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::UpdateCurrentTechPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"UpdateCurrentTechPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::OnUpdateCurrencyBalance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"OnUpdateCurrencyBalance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isPopupButton);
}
inline void GlobalNamespace::SIPurchaseTerminal::TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr);
}
inline void GlobalNamespace::SIPurchaseTerminal::TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr, isToggledOn);
}
inline void GlobalNamespace::SIPurchaseTerminal::IncreasePurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"IncreasePurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::DecreasePurcahse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"DecreasePurcahse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::UpdatePurchaseAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"UpdatePurchaseAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::SelectPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"SelectPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::ConfirmPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"ConfirmPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::ReturnToBaseScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"ReturnToBaseScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::UpdateState(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  newState, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, forceUpdate);
}
inline void GlobalNamespace::SIPurchaseTerminal::SetScreenVisibility(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  screenState, bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"SetScreenVisibility", {}, {::i2c::type_of<::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenState, isEnabled);
}
inline void GlobalNamespace::SIPurchaseTerminal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::SIPurchaseTerminal::ITouchScreenStation_get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::_ConfirmPurchase_b__34_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"<ConfirmPurchase>b__34_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIPurchaseTerminal::_ConfirmPurchase_b__34_1(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPurchaseTerminal*>(),
                        {"<ConfirmPurchase>b__34_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::SIPurchaseTerminal* GlobalNamespace::SIPurchaseTerminal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIPurchaseTerminal*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr  GlobalNamespace::SIPurchaseTerminal::operator ::GlobalNamespace::ITouchScreenStation*() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* GlobalNamespace::SIPurchaseTerminal::i___GlobalNamespace__ITouchScreenStation() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIPurchaseTerminal::SIPurchaseTerminal()   {
}
