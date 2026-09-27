#pragma once
// IWYU pragma private; include "GlobalNamespace/GeodeAtm.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GeodeAtm_def.hpp"
#include "GlobalNamespace/zzzz__GeodeAtm_GeodePurchaseSize_def.hpp"
#include "GlobalNamespace/zzzz__GeodeAtm__StartPurchase_d__38_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetInventoryResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipRefreshIAPResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm.GetMetaSku
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GeodeAtm::*)(::GlobalNamespace::GeodeAtm_GeodePurchaseSize)>(&::GlobalNamespace::GeodeAtm::GetMetaSku)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x577ed34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"GetMetaSku", {}, {::i2c::type_of<::GlobalNamespace::GeodeAtm_GeodePurchaseSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm.GetLocalizedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::GlobalNamespace::GeodeAtm::GetLocalizedText)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x577ed74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"GetLocalizedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm.UpdateStatusText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)(::StringW)>(&::GlobalNamespace::GeodeAtm::UpdateStatusText)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x577ee64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"UpdateStatusText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm.OnMetaPurchaseComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*)>(&::GlobalNamespace::GeodeAtm::OnMetaPurchaseComplete)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x577f0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"OnMetaPurchaseComplete", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm.StartPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::GeodeAtm::*)(::GlobalNamespace::GeodeAtm_GeodePurchaseSize)>(&::GlobalNamespace::GeodeAtm::StartPurchase)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x577f4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"StartPurchase", {}, {::i2c::type_of<::GlobalNamespace::GeodeAtm_GeodePurchaseSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm.SmallPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)()>(&::GlobalNamespace::GeodeAtm::SmallPurchase)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x577f56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"SmallPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm.MediumPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)()>(&::GlobalNamespace::GeodeAtm::MediumPurchase)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x577f584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"MediumPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm.LargePurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)()>(&::GlobalNamespace::GeodeAtm::LargePurchase)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x577f59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"LargePurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm.RefreshGeodeBalance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)()>(&::GlobalNamespace::GeodeAtm::RefreshGeodeBalance)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x577f37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"RefreshGeodeBalance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)()>(&::GlobalNamespace::GeodeAtm::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x577f5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm._OnMetaPurchaseComplete_b__37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)(::GlobalNamespace::MothershipRefreshIAPResponse*)>(&::GlobalNamespace::GeodeAtm::_OnMetaPurchaseComplete_b__37_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x577f5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"<OnMetaPurchaseComplete>b__37_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipRefreshIAPResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm._OnMetaPurchaseComplete_b__37_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::GeodeAtm::_OnMetaPurchaseComplete_b__37_1)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x577f60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"<OnMetaPurchaseComplete>b__37_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm._RefreshGeodeBalance_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)(::GlobalNamespace::MothershipGetInventoryResponse*)>(&::GlobalNamespace::GeodeAtm::_RefreshGeodeBalance_b__43_0)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x577f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"<RefreshGeodeBalance>b__43_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetInventoryResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtm._RefreshGeodeBalance_b__43_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtm::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::GeodeAtm::_RefreshGeodeBalance_b__43_1)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x577fc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"<RefreshGeodeBalance>b__43_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshPro>>*& GlobalNamespace::GeodeAtm::__cordl_internal_get_StatusTexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusTexts;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshPro>>* const& GlobalNamespace::GeodeAtm::__cordl_internal_get_StatusTexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusTexts;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_StatusTexts(::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshPro>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusTexts = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipGeodeOfferDisplayIdLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipGeodeOfferDisplayIdLive;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipGeodeOfferDisplayIdLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipGeodeOfferDisplayIdLive;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipGeodeOfferDisplayIdLive(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipGeodeOfferDisplayIdLive = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipGeodeOfferDisplayIdDev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipGeodeOfferDisplayIdDev;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipGeodeOfferDisplayIdDev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipGeodeOfferDisplayIdDev;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipGeodeOfferDisplayIdDev(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipGeodeOfferDisplayIdDev = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_QuestSmallSku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestSmallSku;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_QuestSmallSku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestSmallSku;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_QuestSmallSku(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QuestSmallSku = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_RiftSmallSku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RiftSmallSku;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_RiftSmallSku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RiftSmallSku;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_RiftSmallSku(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RiftSmallSku = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamSmallGeodeOfferIdLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamSmallGeodeOfferIdLive;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamSmallGeodeOfferIdLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamSmallGeodeOfferIdLive;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipSteamSmallGeodeOfferIdLive(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipSteamSmallGeodeOfferIdLive = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamSmallGeodeOfferIdDev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamSmallGeodeOfferIdDev;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamSmallGeodeOfferIdDev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamSmallGeodeOfferIdDev;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipSteamSmallGeodeOfferIdDev(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipSteamSmallGeodeOfferIdDev = value;
}
constexpr int32_t& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSmallSteamGeodeOfferDisplayIndexLive;
}
constexpr int32_t const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSmallSteamGeodeOfferDisplayIndexLive;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipSmallSteamGeodeOfferDisplayIndexLive(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipSmallSteamGeodeOfferDisplayIndexLive = value;
}
constexpr int32_t& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexDev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSmallSteamGeodeOfferDisplayIndexDev;
}
constexpr int32_t const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexDev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSmallSteamGeodeOfferDisplayIndexDev;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipSmallSteamGeodeOfferDisplayIndexDev(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipSmallSteamGeodeOfferDisplayIndexDev = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_QuestMediumSku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestMediumSku;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_QuestMediumSku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestMediumSku;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_QuestMediumSku(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QuestMediumSku = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_RiftMediumSku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RiftMediumSku;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_RiftMediumSku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RiftMediumSku;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_RiftMediumSku(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RiftMediumSku = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamMediumGeodeOfferIdLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamMediumGeodeOfferIdLive;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamMediumGeodeOfferIdLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamMediumGeodeOfferIdLive;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipSteamMediumGeodeOfferIdLive(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipSteamMediumGeodeOfferIdLive = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamMediumGeodeOfferIdDev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamMediumGeodeOfferIdDev;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamMediumGeodeOfferIdDev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamMediumGeodeOfferIdDev;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipSteamMediumGeodeOfferIdDev(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipSteamMediumGeodeOfferIdDev = value;
}
constexpr int32_t& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipMediumSteamGeodeOfferDisplayIndexLive;
}
constexpr int32_t const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipMediumSteamGeodeOfferDisplayIndexLive;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipMediumSteamGeodeOfferDisplayIndexLive(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipMediumSteamGeodeOfferDisplayIndexLive = value;
}
constexpr int32_t& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexDev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipMediumSteamGeodeOfferDisplayIndexDev;
}
constexpr int32_t const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexDev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipMediumSteamGeodeOfferDisplayIndexDev;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipMediumSteamGeodeOfferDisplayIndexDev(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipMediumSteamGeodeOfferDisplayIndexDev = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_QuestLargeSku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestLargeSku;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_QuestLargeSku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestLargeSku;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_QuestLargeSku(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QuestLargeSku = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_RiftLargeSku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RiftLargeSku;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_RiftLargeSku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RiftLargeSku;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_RiftLargeSku(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RiftLargeSku = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamLargeGeodeOfferIdLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamLargeGeodeOfferIdLive;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamLargeGeodeOfferIdLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamLargeGeodeOfferIdLive;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipSteamLargeGeodeOfferIdLive(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipSteamLargeGeodeOfferIdLive = value;
}
constexpr ::StringW& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamLargeGeodeOfferIdDev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamLargeGeodeOfferIdDev;
}
constexpr ::StringW const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipSteamLargeGeodeOfferIdDev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipSteamLargeGeodeOfferIdDev;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipSteamLargeGeodeOfferIdDev(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipSteamLargeGeodeOfferIdDev = value;
}
constexpr int32_t& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipLargeSteamGeodeOfferDisplayIndexLive;
}
constexpr int32_t const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipLargeSteamGeodeOfferDisplayIndexLive;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipLargeSteamGeodeOfferDisplayIndexLive(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipLargeSteamGeodeOfferDisplayIndexLive = value;
}
constexpr int32_t& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexDev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipLargeSteamGeodeOfferDisplayIndexDev;
}
constexpr int32_t const& GlobalNamespace::GeodeAtm::__cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexDev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipLargeSteamGeodeOfferDisplayIndexDev;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_MothershipLargeSteamGeodeOfferDisplayIndexDev(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipLargeSteamGeodeOfferDisplayIndexDev = value;
}
constexpr bool& GlobalNamespace::GeodeAtm::__cordl_internal_get_purchaseInFlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseInFlight;
}
constexpr bool const& GlobalNamespace::GeodeAtm::__cordl_internal_get_purchaseInFlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseInFlight;
}
constexpr void GlobalNamespace::GeodeAtm::__cordl_internal_set_purchaseInFlight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseInFlight = value;
}
inline void GlobalNamespace::GeodeAtm::setStaticF_ProcessingGeodePurchase(bool  value)  {
::cordl_internals::setStaticField<bool, "ProcessingGeodePurchase", ::GlobalNamespace::GeodeAtm*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GeodeAtm::getStaticF_ProcessingGeodePurchase()  {
return ::cordl_internals::getStaticField<bool, "ProcessingGeodePurchase", ::GlobalNamespace::GeodeAtm*>();
}
inline void GlobalNamespace::GeodeAtm::setStaticF_fetchedGeodes(bool  value)  {
::cordl_internals::setStaticField<bool, "fetchedGeodes", ::GlobalNamespace::GeodeAtm*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GeodeAtm::getStaticF_fetchedGeodes()  {
return ::cordl_internals::getStaticField<bool, "fetchedGeodes", ::GlobalNamespace::GeodeAtm*>();
}
inline void GlobalNamespace::GeodeAtm::setStaticF_geodes(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "geodes", ::GlobalNamespace::GeodeAtm*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GeodeAtm::getStaticF_geodes()  {
return ::cordl_internals::getStaticField<int32_t, "geodes", ::GlobalNamespace::GeodeAtm*>();
}
inline ::StringW GlobalNamespace::GeodeAtm::GetMetaSku(::GlobalNamespace::GeodeAtm_GeodePurchaseSize  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"GetMetaSku", {}, {::i2c::type_of<::GlobalNamespace::GeodeAtm_GeodePurchaseSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, size);
}
inline ::StringW GlobalNamespace::GeodeAtm::GetLocalizedText(::StringW  key, ::StringW  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"GetLocalizedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key, fallback);
}
inline void GlobalNamespace::GeodeAtm::UpdateStatusText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"UpdateStatusText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::GeodeAtm::OnMetaPurchaseComplete(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"OnMetaPurchaseComplete", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::GeodeAtm::StartPurchase(::GlobalNamespace::GeodeAtm_GeodePurchaseSize  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"StartPurchase", {}, {::i2c::type_of<::GlobalNamespace::GeodeAtm_GeodePurchaseSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, size);
}
inline void GlobalNamespace::GeodeAtm::SmallPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"SmallPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeAtm::MediumPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"MediumPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeAtm::LargePurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"LargePurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeAtm::RefreshGeodeBalance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"RefreshGeodeBalance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeAtm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeAtm::_OnMetaPurchaseComplete_b__37_0(::GlobalNamespace::MothershipRefreshIAPResponse*  Result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"<OnMetaPurchaseComplete>b__37_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipRefreshIAPResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Result);
}
inline void GlobalNamespace::GeodeAtm::_OnMetaPurchaseComplete_b__37_1(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"<OnMetaPurchaseComplete>b__37_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Error, StatusCode);
}
inline void GlobalNamespace::GeodeAtm::_RefreshGeodeBalance_b__43_0(::GlobalNamespace::MothershipGetInventoryResponse*  Result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"<RefreshGeodeBalance>b__43_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetInventoryResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Result);
}
inline void GlobalNamespace::GeodeAtm::_RefreshGeodeBalance_b__43_1(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtm*>(),
                        {"<RefreshGeodeBalance>b__43_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Error, StatusCode);
}
inline ::GlobalNamespace::GeodeAtm* GlobalNamespace::GeodeAtm::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GeodeAtm*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GeodeAtm::GeodeAtm()   {
}
