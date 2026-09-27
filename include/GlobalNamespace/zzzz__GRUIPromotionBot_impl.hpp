#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIPromotionBot.hpp"
#include "GlobalNamespace/zzzz__GRUIPromotionBot_PromotionBotState_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__GRUIPromotionBot_def.hpp"
#include "GlobalNamespace/zzzz__GRUIPromotionBot_PromotionBotState_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__IDCardScanner_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.FormattedUserInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::FormattedUserInfo)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x58d21c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"FormattedUserInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.ActivePlayerEligibleForPromotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::ActivePlayerEligibleForPromotion)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58d2734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"ActivePlayerEligibleForPromotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRUIPromotionBot::Init)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58d280c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::Refresh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d2830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::Tick)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x58d2864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                    {::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.CheckIsActivePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::CheckIsActivePlayer)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58d2f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"CheckIsActivePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.UpPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::UpPressed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58d3064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"UpPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.DownPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::DownPressed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58d30ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"DownPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.YesPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::YesPressed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58d30f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"YesPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.NoPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::NoPressed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58d35d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"NoPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.SwitchState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)(::GlobalNamespace::GRUIPromotionBot_PromotionBotState, bool)>(&::GlobalNamespace::GRUIPromotionBot::SwitchState)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x58d2a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::GRUIPromotionBot_PromotionBotState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.GetPurchaseToCreditCapAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::GetPurchaseToCreditCapAmount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58d3a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"GetPurchaseToCreditCapAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.CelebratePromotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::CelebratePromotion)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x58d3b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"CelebratePromotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.SetMenuText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)(::GlobalNamespace::GRUIPromotionBot_PromotionBotState)>(&::GlobalNamespace::GRUIPromotionBot::SetMenuText)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58d39c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"SetMenuText", {}, {::i2c::type_of<::GlobalNamespace::GRUIPromotionBot_PromotionBotState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.SetScreenVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::SetScreenVisibility)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58d38f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"SetScreenVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.RefreshPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::RefreshPlayerData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58d2834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"RefreshPlayerData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.OnPurchaseCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)(bool)>(&::GlobalNamespace::GRUIPromotionBot::OnPurchaseCallback)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58d3c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnPurchaseCallback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.OnJuiceUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::OnJuiceUpdated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d3da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnJuiceUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.OnGetShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)(::StringW, int32_t)>(&::GlobalNamespace::GRUIPromotionBot::OnGetShiftCredit)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58d3da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnGetShiftCredit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.OnShinyRocksUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::OnShinyRocksUpdated)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58d3e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnShinyRocksUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.OnGetShiftCreditCapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)(::StringW, int32_t, int32_t)>(&::GlobalNamespace::GRUIPromotionBot::OnGetShiftCreditCapData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58d3f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnGetShiftCreditCapData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.AttemptPromotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::AttemptPromotion)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x58d3400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"AttemptPromotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.AttemptPurchaseShiftCreditIncrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::AttemptPurchaseShiftCreditIncrease)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x58d3170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"AttemptPurchaseShiftCreditIncrease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.AttemptPurchaseShiftCreditRefillToMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::AttemptPurchaseShiftCreditRefillToMax)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x58d3624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"AttemptPurchaseShiftCreditRefillToMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.PlayerSwipedID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::PlayerSwipedID)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x58d4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"PlayerSwipedID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.RefreshActivePlayerBadge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::RefreshActivePlayerBadge)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x58d402c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"RefreshActivePlayerBadge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.SetActivePlayerStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)(int32_t, int32_t)>(&::GlobalNamespace::GRUIPromotionBot::SetActivePlayerStateChange)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x58d4310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"SetActivePlayerStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot.GetCurrentPlayerActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::GetCurrentPlayerActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d4ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"GetCurrentPlayerActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIPromotionBot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIPromotionBot::*)()>(&::GlobalNamespace::GRUIPromotionBot::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x58d4ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_startScreenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startScreenText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_startScreenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startScreenText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_startScreenText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startScreenText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_userInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userInfo;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_userInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userInfo;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_userInfo(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userInfo = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_menuText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_menuText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_menuText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menuText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_descriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descriptionText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_descriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descriptionText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_descriptionText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descriptionText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_yesText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yesText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_yesText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yesText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_yesText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yesText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_noText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_noText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_noText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_purchaseSuccessText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseSuccessText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_purchaseSuccessText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseSuccessText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_purchaseSuccessText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseSuccessText = value;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_scanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanner;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_scanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanner;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_scanner(::UnityW<::GlobalNamespace::IDCardScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanner = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_particlesGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particlesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_particlesGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particlesGO;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_particlesGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particlesGO = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_levelUpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelUpSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_levelUpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelUpSound;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_levelUpSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelUpSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_popSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_popSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popSound;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_popSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___popSound = value;
}
constexpr ::StringW& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_defaultText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultText;
}
constexpr ::StringW const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_defaultText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_defaultText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultText = value;
}
constexpr ::StringW& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_promotionTextStr1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionTextStr1;
}
constexpr ::StringW const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_promotionTextStr1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionTextStr1;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_promotionTextStr1(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promotionTextStr1 = value;
}
constexpr ::StringW& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_promotionTextStr2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionTextStr2;
}
constexpr ::StringW const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_promotionTextStr2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionTextStr2;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_promotionTextStr2(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promotionTextStr2 = value;
}
constexpr ::StringW& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_promotionTextStr3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionTextStr3;
}
constexpr ::StringW const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_promotionTextStr3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionTextStr3;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_promotionTextStr3(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promotionTextStr3 = value;
}
constexpr ::StringW& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_inertButtonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inertButtonText;
}
constexpr ::StringW const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_inertButtonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inertButtonText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_inertButtonText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inertButtonText = value;
}
constexpr ::StringW& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_buttonReturnText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonReturnText;
}
constexpr ::StringW const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_buttonReturnText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonReturnText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_buttonReturnText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonReturnText = value;
}
constexpr ::StringW& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_requestPromotionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestPromotionText;
}
constexpr ::StringW const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_requestPromotionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestPromotionText;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_requestPromotionText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestPromotionText = value;
}
constexpr int32_t& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_currentPlayerActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPlayerActorNumber;
}
constexpr int32_t const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_currentPlayerActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPlayerActorNumber;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_currentPlayerActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPlayerActorNumber = value;
}
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_currentState(::GlobalNamespace::GRUIPromotionBot_PromotionBotState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr float_t& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_timeOutTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOutTime;
}
constexpr float_t const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_timeOutTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOutTime;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_timeOutTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOutTime = value;
}
constexpr float_t& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_distanceForAutoLogout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceForAutoLogout;
}
constexpr float_t const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_distanceForAutoLogout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceForAutoLogout;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_distanceForAutoLogout(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceForAutoLogout = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_cachedStringBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedStringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_cachedStringBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedStringBuilder;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_cachedStringBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedStringBuilder = value;
}
constexpr float_t& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_timeLastDistanceCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastDistanceCheck;
}
constexpr float_t const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_timeLastDistanceCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastDistanceCheck;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_timeLastDistanceCheck(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastDistanceCheck = value;
}
constexpr float_t& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_timeBetweenDistanceChecks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenDistanceChecks;
}
constexpr float_t const& GlobalNamespace::GRUIPromotionBot::__cordl_internal_get_timeBetweenDistanceChecks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenDistanceChecks;
}
constexpr void GlobalNamespace::GRUIPromotionBot::__cordl_internal_set_timeBetweenDistanceChecks(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeBetweenDistanceChecks = value;
}
inline void GlobalNamespace::GRUIPromotionBot::setStaticF_EVENT_PROMOTED(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "EVENT_PROMOTED", ::GlobalNamespace::GRUIPromotionBot*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GRUIPromotionBot::getStaticF_EVENT_PROMOTED()  {
return ::cordl_internals::getStaticField<::StringW, "EVENT_PROMOTED", ::GlobalNamespace::GRUIPromotionBot*>();
}
inline ::StringW GlobalNamespace::GRUIPromotionBot::FormattedUserInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"FormattedUserInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::GRUIPromotionBot::ActivePlayerEligibleForPromotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"ActivePlayerEligibleForPromotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::Init(::GlobalNamespace::GhostReactor*  _reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _reactor);
}
inline void GlobalNamespace::GRUIPromotionBot::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRUIPromotionBot::CheckIsActivePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"CheckIsActivePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::UpPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"UpPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::DownPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"DownPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::YesPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"YesPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::NoPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"NoPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::SwitchState(::GlobalNamespace::GRUIPromotionBot_PromotionBotState  newState, bool  fromRPC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::GRUIPromotionBot_PromotionBotState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, fromRPC);
}
inline int32_t GlobalNamespace::GRUIPromotionBot::GetPurchaseToCreditCapAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"GetPurchaseToCreditCapAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::CelebratePromotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"CelebratePromotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::SetMenuText(::GlobalNamespace::GRUIPromotionBot_PromotionBotState  menuState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"SetMenuText", {}, {::i2c::type_of<::GlobalNamespace::GRUIPromotionBot_PromotionBotState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuState);
}
inline void GlobalNamespace::GRUIPromotionBot::SetScreenVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"SetScreenVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::RefreshPlayerData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"RefreshPlayerData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::OnPurchaseCallback(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnPurchaseCallback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::GRUIPromotionBot::OnJuiceUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnJuiceUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::OnGetShiftCredit(::StringW  mothershipId, int32_t  credit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnGetShiftCredit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mothershipId, credit);
}
inline void GlobalNamespace::GRUIPromotionBot::OnShinyRocksUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnShinyRocksUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::OnGetShiftCreditCapData(::StringW  mothershipId, int32_t  creditCap, int32_t  creditCapMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"OnGetShiftCreditCapData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mothershipId, creditCap, creditCapMax);
}
inline void GlobalNamespace::GRUIPromotionBot::AttemptPromotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"AttemptPromotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::AttemptPurchaseShiftCreditIncrease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"AttemptPurchaseShiftCreditIncrease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::AttemptPurchaseShiftCreditRefillToMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"AttemptPurchaseShiftCreditRefillToMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::PlayerSwipedID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"PlayerSwipedID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::RefreshActivePlayerBadge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"RefreshActivePlayerBadge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::SetActivePlayerStateChange(int32_t  actorNumber, int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"SetActivePlayerStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber, state);
}
inline int32_t GlobalNamespace::GRUIPromotionBot::GetCurrentPlayerActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {"GetCurrentPlayerActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIPromotionBot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIPromotionBot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRUIPromotionBot* GlobalNamespace::GRUIPromotionBot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRUIPromotionBot*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRUIPromotionBot::GRUIPromotionBot()   {
}
