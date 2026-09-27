#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRColocationSession.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_def.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_Data_def.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.add_ColocationSessionDiscovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(&::GlobalNamespace::OVRColocationSession::add_ColocationSessionDiscovered)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa582118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"add_ColocationSessionDiscovered", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.remove_ColocationSessionDiscovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(&::GlobalNamespace::OVRColocationSession::remove_ColocationSessionDiscovered)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa5821e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"remove_ColocationSessionDiscovered", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StartAdvertisementAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid,::GlobalNamespace::OVRColocationSession_Result>> (*)(::System::ReadOnlySpan_1<uint8_t>)>(&::GlobalNamespace::OVRColocationSession::StartAdvertisementAsync)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa5822b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"StartAdvertisementAsync", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StopAdvertisementAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> (*)()>(&::GlobalNamespace::OVRColocationSession::StopAdvertisementAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa582420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"StopAdvertisementAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StartDiscoveryAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> (*)()>(&::GlobalNamespace::OVRColocationSession::StartDiscoveryAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa5824d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"StartDiscoveryAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StopDiscoveryAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> (*)()>(&::GlobalNamespace::OVRColocationSession::StopDiscoveryAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa582580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"StopDiscoveryAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStartAdvertisementComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result, ::System::Guid)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionStartAdvertisementComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa582630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionStartAdvertisementComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStopAdvertisementComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionStopAdvertisementComplete)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa5826e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionStopAdvertisementComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStartDiscoveryComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionStartDiscoveryComplete)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa582760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionStartDiscoveryComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStopDiscoveryComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionStopDiscoveryComplete)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa5827e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionStopDiscoveryComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionDiscoveryResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::System::Guid, uint32_t, uint8_t*)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryResult)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa582860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionDiscoveryResult", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionAdvertisementComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionAdvertisementComplete)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa58298c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionAdvertisementComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionDiscoveryComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryComplete)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa582a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionDiscoveryComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRColocationSession::*)()>(&::GlobalNamespace::OVRColocationSession::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa582b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRColocationSession::setStaticF_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*, "ColocationSessionDiscovered", ::GlobalNamespace::OVRColocationSession*>(std::forward<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* GlobalNamespace::OVRColocationSession::getStaticF_ColocationSessionDiscovered()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*, "ColocationSessionDiscovered", ::GlobalNamespace::OVRColocationSession*>();
}
inline void GlobalNamespace::OVRColocationSession::add_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"add_ColocationSessionDiscovered", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRColocationSession::remove_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"remove_ColocationSessionDiscovered", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid,::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StartAdvertisementAsync(::System::ReadOnlySpan_1<uint8_t>  colocationSessionData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"StartAdvertisementAsync", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid,::GlobalNamespace::OVRColocationSession_Result>>>(nullptr, ___internal_method, colocationSessionData);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StopAdvertisementAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"StopAdvertisementAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StartDiscoveryAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"StartDiscoveryAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StopDiscoveryAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"StopDiscoveryAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStartAdvertisementComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result, ::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionStartAdvertisementComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, uuid);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStopAdvertisementComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionStopAdvertisementComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStartDiscoveryComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionStartDiscoveryComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStopDiscoveryComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionStopDiscoveryComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryResult(uint64_t  requestId, ::System::Guid  uuid, uint32_t  metaDataCount, uint8_t*  metaDataPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionDiscoveryResult", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, uuid, metaDataCount, metaDataPtr);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionAdvertisementComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionAdvertisementComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {"OnColocationSessionDiscoveryComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRColocationSession* GlobalNamespace::OVRColocationSession::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRColocationSession*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRColocationSession::OVRColocationSession()   {
}
