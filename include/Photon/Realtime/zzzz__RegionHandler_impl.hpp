#pragma once
// IWYU pragma private; include "Photon/Realtime/RegionHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Photon/Realtime/zzzz__RegionPinger_def.hpp"
#include "Photon/Realtime/zzzz__Region_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.get_EnabledRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::get_EnabledRegions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70b414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"get_EnabledRegions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.set_EnabledRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionHandler::*)(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*)>(&::Photon::Realtime::RegionHandler::set_EnabledRegions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70b41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"set_EnabledRegions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.get_BestRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Region* (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::get_BestRegion)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa705d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"get_BestRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.get_SummaryToCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::get_SummaryToCache)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa705c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"get_SummaryToCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.GetResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::GetResults)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa70b424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"GetResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.SetRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionHandler::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Photon::Realtime::RegionHandler::SetRegions)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xa7022d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"SetRegions", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.get_IsPinging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::get_IsPinging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"get_IsPinging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.set_IsPinging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionHandler::*)(bool)>(&::Photon::Realtime::RegionHandler::set_IsPinging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"set_IsPinging", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionHandler::*)(uint16_t)>(&::Photon::Realtime::RegionHandler::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa702220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.PingMinimumOfRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RegionHandler::*)(::System::Action_1<::Photon::Realtime::RegionHandler*>*, ::StringW)>(&::Photon::Realtime::RegionHandler::PingMinimumOfRegions)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa702790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"PingMinimumOfRegions", {}, {::i2c::type_of<::System::Action_1<::Photon::Realtime::RegionHandler*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.OnPreferredRegionPinged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionHandler::*)(::Photon::Realtime::Region*)>(&::Photon::Realtime::RegionHandler::OnPreferredRegionPinged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa70ba44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"OnPreferredRegionPinged", {}, {::i2c::type_of<::Photon::Realtime::Region*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.PingEnabledRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::PingEnabledRegions)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xa70b6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"PingEnabledRegions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.OnRegionDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionHandler::*)(::Photon::Realtime::Region*)>(&::Photon::Realtime::RegionHandler::OnRegionDone)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa70baa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"OnRegionDone", {}, {::i2c::type_of<::Photon::Realtime::Region*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*& Photon::Realtime::RegionHandler::__cordl_internal_get__EnabledRegions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnabledRegions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* const& Photon::Realtime::RegionHandler::__cordl_internal_get__EnabledRegions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnabledRegions_k__BackingField;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set__EnabledRegions_k__BackingField(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnabledRegions_k__BackingField = value;
}
constexpr ::StringW& Photon::Realtime::RegionHandler::__cordl_internal_get_availableRegionCodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableRegionCodes;
}
constexpr ::StringW const& Photon::Realtime::RegionHandler::__cordl_internal_get_availableRegionCodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableRegionCodes;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_availableRegionCodes(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableRegionCodes = value;
}
constexpr ::Photon::Realtime::Region*& Photon::Realtime::RegionHandler::__cordl_internal_get_bestRegionCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRegionCache;
}
constexpr ::Photon::Realtime::Region* const& Photon::Realtime::RegionHandler::__cordl_internal_get_bestRegionCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestRegionCache;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_bestRegionCache(::Photon::Realtime::Region*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestRegionCache = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*& Photon::Realtime::RegionHandler::__cordl_internal_get_pingerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingerList;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>* const& Photon::Realtime::RegionHandler::__cordl_internal_get_pingerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingerList;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_pingerList(::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingerList = value;
}
constexpr ::System::Action_1<::Photon::Realtime::RegionHandler*>*& Photon::Realtime::RegionHandler::__cordl_internal_get_onCompleteCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleteCall;
}
constexpr ::System::Action_1<::Photon::Realtime::RegionHandler*>* const& Photon::Realtime::RegionHandler::__cordl_internal_get_onCompleteCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleteCall;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_onCompleteCall(::System::Action_1<::Photon::Realtime::RegionHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCompleteCall = value;
}
constexpr int32_t& Photon::Realtime::RegionHandler::__cordl_internal_get_previousPing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPing;
}
constexpr int32_t const& Photon::Realtime::RegionHandler::__cordl_internal_get_previousPing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPing;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_previousPing(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousPing = value;
}
constexpr bool& Photon::Realtime::RegionHandler::__cordl_internal_get__IsPinging_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPinging_k__BackingField;
}
constexpr bool const& Photon::Realtime::RegionHandler::__cordl_internal_get__IsPinging_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPinging_k__BackingField;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set__IsPinging_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPinging_k__BackingField = value;
}
constexpr ::StringW& Photon::Realtime::RegionHandler::__cordl_internal_get_previousSummaryProvided()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSummaryProvided;
}
constexpr ::StringW const& Photon::Realtime::RegionHandler::__cordl_internal_get_previousSummaryProvided() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSummaryProvided;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_previousSummaryProvided(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousSummaryProvided = value;
}
inline void Photon::Realtime::RegionHandler::setStaticF_PingImplementation(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "PingImplementation", ::Photon::Realtime::RegionHandler*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* Photon::Realtime::RegionHandler::getStaticF_PingImplementation()  {
return ::cordl_internals::getStaticField<::System::Type*, "PingImplementation", ::Photon::Realtime::RegionHandler*>();
}
inline void Photon::Realtime::RegionHandler::setStaticF_PortToPingOverride(uint16_t  value)  {
::cordl_internals::setStaticField<uint16_t, "PortToPingOverride", ::Photon::Realtime::RegionHandler*>(std::forward<uint16_t>(value));
}
inline uint16_t Photon::Realtime::RegionHandler::getStaticF_PortToPingOverride()  {
return ::cordl_internals::getStaticField<uint16_t, "PortToPingOverride", ::Photon::Realtime::RegionHandler*>();
}
inline ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* Photon::Realtime::RegionHandler::get_EnabledRegions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"get_EnabledRegions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*>(this, ___internal_method);
}
inline void Photon::Realtime::RegionHandler::set_EnabledRegions(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"set_EnabledRegions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Realtime::Region* Photon::Realtime::RegionHandler::get_BestRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"get_BestRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Region*>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::RegionHandler::get_SummaryToCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"get_SummaryToCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::RegionHandler::GetResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"GetResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Realtime::RegionHandler::SetRegions(::ExitGames::Client::Photon::OperationResponse*  opGetRegions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"SetRegions", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, opGetRegions);
}
inline bool Photon::Realtime::RegionHandler::get_IsPinging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"get_IsPinging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::RegionHandler::set_IsPinging(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"set_IsPinging", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Realtime::RegionHandler::_ctor(uint16_t  masterServerPortOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, masterServerPortOverride);
}
inline bool Photon::Realtime::RegionHandler::PingMinimumOfRegions(::System::Action_1<::Photon::Realtime::RegionHandler*>*  onCompleteCallback, ::StringW  previousSummary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"PingMinimumOfRegions", {}, {::i2c::type_of<::System::Action_1<::Photon::Realtime::RegionHandler*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, onCompleteCallback, previousSummary);
}
inline void Photon::Realtime::RegionHandler::OnPreferredRegionPinged(::Photon::Realtime::Region*  preferredRegion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"OnPreferredRegionPinged", {}, {::i2c::type_of<::Photon::Realtime::Region*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preferredRegion);
}
inline bool Photon::Realtime::RegionHandler::PingEnabledRegions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"PingEnabledRegions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::RegionHandler::OnRegionDone(::Photon::Realtime::Region*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler*>(),
                        {"OnRegionDone", {}, {::i2c::type_of<::Photon::Realtime::Region*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, region);
}
inline ::Photon::Realtime::RegionHandler* Photon::Realtime::RegionHandler::New_ctor(uint16_t  masterServerPortOverride)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::RegionHandler*>(masterServerPortOverride));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::RegionHandler::RegionHandler()   {
}
//  Writing Method size for method: ::Photon::Realtime::RegionHandler___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionHandler___c__DisplayClass23_0::*)()>(&::Photon::Realtime::RegionHandler___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70bda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler___c__DisplayClass23_0._PingMinimumOfRegions_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::RegionHandler___c__DisplayClass23_0::*)(::Photon::Realtime::Region*)>(&::Photon::Realtime::RegionHandler___c__DisplayClass23_0::_PingMinimumOfRegions_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa70bdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler___c__DisplayClass23_0*>(),
                        {"<PingMinimumOfRegions>b__0", {}, {::i2c::type_of<::Photon::Realtime::Region*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::RegionHandler___c__DisplayClass23_0::__cordl_internal_get_prevBestRegionCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevBestRegionCode;
}
constexpr ::StringW const& Photon::Realtime::RegionHandler___c__DisplayClass23_0::__cordl_internal_get_prevBestRegionCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevBestRegionCode;
}
constexpr void Photon::Realtime::RegionHandler___c__DisplayClass23_0::__cordl_internal_set_prevBestRegionCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevBestRegionCode = value;
}
inline void Photon::Realtime::RegionHandler___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Realtime::RegionHandler___c__DisplayClass23_0::_PingMinimumOfRegions_b__0(::Photon::Realtime::Region*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler___c__DisplayClass23_0*>(),
                        {"<PingMinimumOfRegions>b__0", {}, {::i2c::type_of<::Photon::Realtime::Region*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, r);
}
inline ::Photon::Realtime::RegionHandler___c__DisplayClass23_0* Photon::Realtime::RegionHandler___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::RegionHandler___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::RegionHandler___c__DisplayClass23_0::RegionHandler___c__DisplayClass23_0()   {
}
//  Writing Method size for method: ::Photon::Realtime::RegionHandler___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::RegionHandler___c::*)()>(&::Photon::Realtime::RegionHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70bd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler___c._get_BestRegion_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Realtime::RegionHandler___c::*)(::Photon::Realtime::Region*, ::Photon::Realtime::Region*)>(&::Photon::Realtime::RegionHandler___c::_get_BestRegion_b__8_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa70bd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler___c*>(),
                        {"<get_BestRegion>b__8_0", {}, {::i2c::type_of<::Photon::Realtime::Region*>(), ::i2c::type_of<::Photon::Realtime::Region*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Realtime::RegionHandler___c::setStaticF___9(::Photon::Realtime::RegionHandler___c*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RegionHandler___c*, "<>9", ::Photon::Realtime::RegionHandler___c*>(std::forward<::Photon::Realtime::RegionHandler___c*>(value));
}
inline ::Photon::Realtime::RegionHandler___c* Photon::Realtime::RegionHandler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RegionHandler___c*, "<>9", ::Photon::Realtime::RegionHandler___c*>();
}
inline void Photon::Realtime::RegionHandler___c::setStaticF___9__8_0(::System::Comparison_1<::Photon::Realtime::Region*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::Photon::Realtime::Region*>*, "<>9__8_0", ::Photon::Realtime::RegionHandler___c*>(std::forward<::System::Comparison_1<::Photon::Realtime::Region*>*>(value));
}
inline ::System::Comparison_1<::Photon::Realtime::Region*>* Photon::Realtime::RegionHandler___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::Photon::Realtime::Region*>*, "<>9__8_0", ::Photon::Realtime::RegionHandler___c*>();
}
inline void Photon::Realtime::RegionHandler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Photon::Realtime::RegionHandler___c::_get_BestRegion_b__8_0(::Photon::Realtime::Region*  a, ::Photon::Realtime::Region*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::RegionHandler___c*>(),
                        {"<get_BestRegion>b__8_0", {}, {::i2c::type_of<::Photon::Realtime::Region*>(), ::i2c::type_of<::Photon::Realtime::Region*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::Photon::Realtime::RegionHandler___c* Photon::Realtime::RegionHandler___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::RegionHandler___c*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::RegionHandler___c::RegionHandler___c()   {
}
