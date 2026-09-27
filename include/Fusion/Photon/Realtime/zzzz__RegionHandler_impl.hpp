#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/RegionHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__MonoBehaviourEmpty_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionPinger_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Region_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.get_EnabledRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>* (::Fusion::Photon::Realtime::RegionHandler::*)()>(&::Fusion::Photon::Realtime::RegionHandler::get_EnabledRegions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_EnabledRegions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.set_EnabledRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*)>(&::Fusion::Photon::Realtime::RegionHandler::set_EnabledRegions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5ff88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"set_EnabledRegions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.get_BestRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Region* (::Fusion::Photon::Realtime::RegionHandler::*)()>(&::Fusion::Photon::Realtime::RegionHandler::get_BestRegion)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5f5ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_BestRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.get_SummaryToCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::RegionHandler::*)()>(&::Fusion::Photon::Realtime::RegionHandler::get_SummaryToCache)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5f6028c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_SummaryToCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.GetResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::RegionHandler::*)()>(&::Fusion::Photon::Realtime::RegionHandler::GetResults)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5f60434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"GetResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.SetRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler::*)(::ExitGames::Client::Photon::OperationResponse*, ::Fusion::Photon::Realtime::LoadBalancingClient*)>(&::Fusion::Photon::Realtime::RegionHandler::SetRegions)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5f6070c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"SetRegions", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>(), ::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.get_IsPinging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionHandler::*)()>(&::Fusion::Photon::Realtime::RegionHandler::get_IsPinging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f60a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_IsPinging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.set_IsPinging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler::*)(bool)>(&::Fusion::Photon::Realtime::RegionHandler::set_IsPinging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f60a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"set_IsPinging", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.get_Aborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionHandler::*)()>(&::Fusion::Photon::Realtime::RegionHandler::get_Aborted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f60a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_Aborted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.set_Aborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler::*)(bool)>(&::Fusion::Photon::Realtime::RegionHandler::set_Aborted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f60a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"set_Aborted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler::*)(uint16_t)>(&::Fusion::Photon::Realtime::RegionHandler::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f60aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.PingMinimumOfRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionHandler::*)(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*, ::StringW)>(&::Fusion::Photon::Realtime::RegionHandler::PingMinimumOfRegions)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x5f60b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"PingMinimumOfRegions", {}, {::i2c::type_of<::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler::*)()>(&::Fusion::Photon::Realtime::RegionHandler::Abort)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5f61834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"Abort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.OnPreferredRegionPinged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler::*)(::Fusion::Photon::Realtime::Region*)>(&::Fusion::Photon::Realtime::RegionHandler::OnPreferredRegionPinged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f61ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"OnPreferredRegionPinged", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.PingEnabledRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionHandler::*)()>(&::Fusion::Photon::Realtime::RegionHandler::PingEnabledRegions)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5f61154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"PingEnabledRegions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler.OnRegionDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler::*)(::Fusion::Photon::Realtime::Region*)>(&::Fusion::Photon::Realtime::RegionHandler::OnRegionDone)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5f61b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"OnRegionDone", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get__EnabledRegions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnabledRegions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>* const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get__EnabledRegions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnabledRegions_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set__EnabledRegions_k__BackingField(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnabledRegions_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_availableRegionCodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableRegionCodes;
}
constexpr ::StringW const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_availableRegionCodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableRegionCodes;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_availableRegionCodes(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableRegionCodes = value;
}
constexpr ::Fusion::Photon::Realtime::Region*& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_bestRegionCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRegionCache;
}
constexpr ::Fusion::Photon::Realtime::Region* const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_bestRegionCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRegionCache;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_bestRegionCache(::Fusion::Photon::Realtime::Region*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestRegionCache = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>*& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_pingerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingerList;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>* const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_pingerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingerList;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_pingerList(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingerList = value;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_onCompleteCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleteCall;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_onCompleteCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleteCall;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_onCompleteCall(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCompleteCall = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_previousPing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPing;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_previousPing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPing;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_previousPing(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousPing = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_previousSummaryProvided()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSummaryProvided;
}
constexpr ::StringW const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_previousSummaryProvided() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSummaryProvided;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_previousSummaryProvided(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousSummaryProvided = value;
}
constexpr float_t& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_rePingFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rePingFactor;
}
constexpr float_t const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_rePingFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rePingFactor;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_rePingFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rePingFactor = value;
}
constexpr float_t& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_pingSimilarityFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingSimilarityFactor;
}
constexpr float_t const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_pingSimilarityFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingSimilarityFactor;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_pingSimilarityFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingSimilarityFactor = value;
}
constexpr int32_t& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_BestRegionSummaryPingLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BestRegionSummaryPingLimit;
}
constexpr int32_t const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_BestRegionSummaryPingLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BestRegionSummaryPingLimit;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_BestRegionSummaryPingLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BestRegionSummaryPingLimit = value;
}
constexpr bool& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get__IsPinging_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPinging_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get__IsPinging_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPinging_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set__IsPinging_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPinging_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get__Aborted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Aborted_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get__Aborted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Aborted_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set__Aborted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Aborted_k__BackingField = value;
}
constexpr ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_emptyMonoBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyMonoBehavior;
}
constexpr ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty> const& Fusion::Photon::Realtime::RegionHandler::__cordl_internal_get_emptyMonoBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyMonoBehavior;
}
constexpr void Fusion::Photon::Realtime::RegionHandler::__cordl_internal_set_emptyMonoBehavior(::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyMonoBehavior = value;
}
inline void Fusion::Photon::Realtime::RegionHandler::setStaticF_PingImplementation(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "PingImplementation", ::Fusion::Photon::Realtime::RegionHandler*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* Fusion::Photon::Realtime::RegionHandler::getStaticF_PingImplementation()  {
return ::cordl_internals::getStaticField<::System::Type*, "PingImplementation", ::Fusion::Photon::Realtime::RegionHandler*>();
}
inline void Fusion::Photon::Realtime::RegionHandler::setStaticF_PortToPingOverride(uint16_t  value)  {
::cordl_internals::setStaticField<uint16_t, "PortToPingOverride", ::Fusion::Photon::Realtime::RegionHandler*>(std::forward<uint16_t>(value));
}
inline uint16_t Fusion::Photon::Realtime::RegionHandler::getStaticF_PortToPingOverride()  {
return ::cordl_internals::getStaticField<uint16_t, "PortToPingOverride", ::Fusion::Photon::Realtime::RegionHandler*>();
}
inline ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>* Fusion::Photon::Realtime::RegionHandler::get_EnabledRegions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_EnabledRegions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionHandler::set_EnabledRegions(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"set_EnabledRegions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Photon::Realtime::Region* Fusion::Photon::Realtime::RegionHandler::get_BestRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_BestRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Region*>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::RegionHandler::get_SummaryToCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_SummaryToCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::RegionHandler::GetResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"GetResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionHandler::SetRegions(::ExitGames::Client::Photon::OperationResponse*  opGetRegions, ::Fusion::Photon::Realtime::LoadBalancingClient*  loadBalancingClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"SetRegions", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>(), ::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, opGetRegions, loadBalancingClient);
}
inline bool Fusion::Photon::Realtime::RegionHandler::get_IsPinging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_IsPinging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionHandler::set_IsPinging(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"set_IsPinging", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::RegionHandler::get_Aborted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"get_Aborted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionHandler::set_Aborted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"set_Aborted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::RegionHandler::_ctor(uint16_t  masterServerPortOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, masterServerPortOverride);
}
inline bool Fusion::Photon::Realtime::RegionHandler::PingMinimumOfRegions(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  onCompleteCallback, ::StringW  previousSummary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"PingMinimumOfRegions", {}, {::i2c::type_of<::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, onCompleteCallback, previousSummary);
}
inline void Fusion::Photon::Realtime::RegionHandler::Abort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"Abort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionHandler::OnPreferredRegionPinged(::Fusion::Photon::Realtime::Region*  preferredRegion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"OnPreferredRegionPinged", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preferredRegion);
}
inline bool Fusion::Photon::Realtime::RegionHandler::PingEnabledRegions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"PingEnabledRegions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::RegionHandler::OnRegionDone(::Fusion::Photon::Realtime::Region*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler*>(),
                        {"OnRegionDone", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, region);
}
inline ::Fusion::Photon::Realtime::RegionHandler* Fusion::Photon::Realtime::RegionHandler::New_ctor(uint16_t  masterServerPortOverride)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::RegionHandler*>(masterServerPortOverride));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::RegionHandler::RegionHandler()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::*)()>(&::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0._PingMinimumOfRegions_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::*)(::Fusion::Photon::Realtime::Region*)>(&::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::_PingMinimumOfRegions_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f61e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0*>(),
                        {"<PingMinimumOfRegions>b__0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::__cordl_internal_get_prevBestRegionCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevBestRegionCode;
}
constexpr ::StringW const& Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::__cordl_internal_get_prevBestRegionCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevBestRegionCode;
}
constexpr void Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::__cordl_internal_set_prevBestRegionCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevBestRegionCode = value;
}
inline void Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::_PingMinimumOfRegions_b__0(::Fusion::Photon::Realtime::Region*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0*>(),
                        {"<PingMinimumOfRegions>b__0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, r);
}
inline ::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0* Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::RegionHandler___c__DisplayClass31_0::RegionHandler___c__DisplayClass31_0()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RegionHandler___c::*)()>(&::Fusion::Photon::Realtime::RegionHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f61e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::RegionHandler___c._get_BestRegion_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::RegionHandler___c::*)(::Fusion::Photon::Realtime::Region*, ::Fusion::Photon::Realtime::Region*)>(&::Fusion::Photon::Realtime::RegionHandler___c::_get_BestRegion_b__8_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f61e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler___c*>(),
                        {"<get_BestRegion>b__8_0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>(), ::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::RegionHandler___c::setStaticF___9(::Fusion::Photon::Realtime::RegionHandler___c*  value)  {
::cordl_internals::setStaticField<::Fusion::Photon::Realtime::RegionHandler___c*, "<>9", ::Fusion::Photon::Realtime::RegionHandler___c*>(std::forward<::Fusion::Photon::Realtime::RegionHandler___c*>(value));
}
inline ::Fusion::Photon::Realtime::RegionHandler___c* Fusion::Photon::Realtime::RegionHandler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::Photon::Realtime::RegionHandler___c*, "<>9", ::Fusion::Photon::Realtime::RegionHandler___c*>();
}
inline void Fusion::Photon::Realtime::RegionHandler___c::setStaticF___9__8_0(::System::Comparison_1<::Fusion::Photon::Realtime::Region*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::Fusion::Photon::Realtime::Region*>*, "<>9__8_0", ::Fusion::Photon::Realtime::RegionHandler___c*>(std::forward<::System::Comparison_1<::Fusion::Photon::Realtime::Region*>*>(value));
}
inline ::System::Comparison_1<::Fusion::Photon::Realtime::Region*>* Fusion::Photon::Realtime::RegionHandler___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::Fusion::Photon::Realtime::Region*>*, "<>9__8_0", ::Fusion::Photon::Realtime::RegionHandler___c*>();
}
inline void Fusion::Photon::Realtime::RegionHandler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Fusion::Photon::Realtime::RegionHandler___c::_get_BestRegion_b__8_0(::Fusion::Photon::Realtime::Region*  a, ::Fusion::Photon::Realtime::Region*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RegionHandler___c*>(),
                        {"<get_BestRegion>b__8_0", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Region*>(), ::i2c::type_of<::Fusion::Photon::Realtime::Region*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::Fusion::Photon::Realtime::RegionHandler___c* Fusion::Photon::Realtime::RegionHandler___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::RegionHandler___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::RegionHandler___c::RegionHandler___c()   {
}
