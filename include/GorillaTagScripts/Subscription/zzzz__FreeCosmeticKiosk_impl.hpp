#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/FreeCosmeticKiosk.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/Subscription/zzzz__FreeCosmeticKiosk_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaNetworking/zzzz__GorillaServer_def.hpp"
#include "GorillaTagScripts/Subscription/zzzz__FreeCosmeticKiosk_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.get_VimRequirementMet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::get_VimRequirementMet)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bf6524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"get_VimRequirementMet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.get_HasBeenClaimed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::get_HasBeenClaimed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5bf6590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"get_HasBeenClaimed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bf6604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::OnDisable)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5bf669c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.InitializeCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::InitializeCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bf6630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"InitializeCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.OnHandScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::OnHandScan)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5bf6878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"OnHandScan", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.OnSuccessfulRedeem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)(::GorillaNetworking::GorillaServer_ClaimItemResponse*, ::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::OnSuccessfulRedeem)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5bf6ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"OnSuccessfulRedeem", {}, {::i2c::type_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::UpdateState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf6ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"UpdateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)(bool)>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::UpdateState)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5bf6dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"UpdateState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::UpdateState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf6f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.TestTriggerCelebration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::TestTriggerCelebration)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bf6f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"TestTriggerCelebration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.TriggerCelebration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::TriggerCelebration)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5bf6cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"TriggerCelebration", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.ActivateClaimVFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::ActivateClaimVFX)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5bf6f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"ActivateClaimVFX", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk.PlayClaimFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::PlayClaimFX)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bf7148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"PlayClaimFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bf715c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__vimRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vimRequired;
}
constexpr bool const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__vimRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vimRequired;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__vimRequired(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vimRequired = value;
}
constexpr ::StringW& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__playfabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playfabId;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__playfabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playfabId;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__playfabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playfabId = value;
}
constexpr ::StringW& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__toBeClaimedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toBeClaimedText;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__toBeClaimedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toBeClaimedText;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__toBeClaimedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toBeClaimedText = value;
}
constexpr ::StringW& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__alreadyClaimedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alreadyClaimedText;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__alreadyClaimedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alreadyClaimedText;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__alreadyClaimedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alreadyClaimedText = value;
}
constexpr ::StringW& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__unclaimableText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unclaimableText;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__unclaimableText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unclaimableText;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__unclaimableText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unclaimableText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__claimLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__claimLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimLabel;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__claimLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____claimLabel = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__nameLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__nameLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameLabel;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__nameLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nameLabel = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__vimLogo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vimLogo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__vimLogo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vimLogo;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__vimLogo(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vimLogo = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get_OnCosmeticRedeemed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticRedeemed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get_OnCosmeticRedeemed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticRedeemed;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set_OnCosmeticRedeemed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCosmeticRedeemed = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__cosmeticItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__cosmeticItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticItem;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__cosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmeticItem = value;
}
constexpr bool& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline bool GorillaTagScripts::Subscription::FreeCosmeticKiosk::get_VimRequirementMet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"get_VimRequirementMet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::FreeCosmeticKiosk::get_HasBeenClaimed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"get_HasBeenClaimed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::FreeCosmeticKiosk::InitializeCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"InitializeCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::OnHandScan(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"OnHandScan", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::OnSuccessfulRedeem(::GorillaNetworking::GorillaServer_ClaimItemResponse*  response, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"OnSuccessfulRedeem", {}, {::i2c::type_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, player);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"UpdateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::UpdateState(bool  cosmeticGranted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"UpdateState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticGranted);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::UpdateState(::GlobalNamespace::NetPlayer*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::TestTriggerCelebration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"TestTriggerCelebration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::TriggerCelebration(::GlobalNamespace::NetPlayer*  redeemingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"TriggerCelebration", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, redeemingPlayer);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::ActivateClaimVFX(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"ActivateClaimVFX", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::PlayClaimFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {"PlayClaimFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk* GorillaTagScripts::Subscription::FreeCosmeticKiosk::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::FreeCosmeticKiosk*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::FreeCosmeticKiosk::FreeCosmeticKiosk()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::*)(int32_t)>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bf6850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf7310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5bf7314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf7684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bf768c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf76c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>& GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk> const& GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17* GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17::FreeCosmeticKiosk__InitializeCoroutine_d__17()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf6ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0._OnHandScan_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::*)(::GorillaNetworking::GorillaServer_ClaimItemResponse*)>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::_OnHandScan_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bf72f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0*>(),
                        {"<OnHandScan>b__0", {}, {::i2c::type_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>& GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk> const& GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::_OnHandScan_b__0(::GorillaNetworking::GorillaServer_ClaimItemResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0*>(),
                        {"<OnHandScan>b__0", {}, {::i2c::type_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0* GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0::FreeCosmeticKiosk___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::*)()>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf7274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c._OnHandScan_b__18_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::*)(::StringW)>(&::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::_OnHandScan_b__18_1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bf727c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>(),
                        {"<OnHandScan>b__18_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::setStaticF___9(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*  value)  {
::cordl_internals::setStaticField<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*, "<>9", ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>(std::forward<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>(value));
}
inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c* GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*, "<>9", ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>();
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::setStaticF___9__18_1(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__18_1", ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::getStaticF___9__18_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__18_1", ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>();
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::_OnHandScan_b__18_1(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>(),
                        {"<OnHandScan>b__18_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c* GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c::FreeCosmeticKiosk___c()   {
}
