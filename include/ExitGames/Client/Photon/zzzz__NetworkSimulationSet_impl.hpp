#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NetworkSimulationSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__NetworkSimulationSet_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_IsSimulationEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::get_IsSimulationEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6baadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_IsSimulationEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_IsSimulationEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(bool)>(&::ExitGames::Client::Photon::NetworkSimulationSet::set_IsSimulationEnabled)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0xa6baae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_IsSimulationEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_OutgoingLag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_OutgoingLag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_OutgoingLag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(&::ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_OutgoingLag", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_OutgoingJitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingJitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_OutgoingJitter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_OutgoingJitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(&::ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingJitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_OutgoingJitter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_OutgoingLossPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLossPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_OutgoingLossPercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_OutgoingLossPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(&::ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLossPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_OutgoingLossPercentage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_IncomingLag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_IncomingLag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_IncomingLag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(&::ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_IncomingLag", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_IncomingJitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingJitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_IncomingJitter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_IncomingJitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(&::ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingJitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_IncomingJitter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_IncomingLossPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLossPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_IncomingLossPercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_IncomingLossPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(&::ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLossPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_IncomingLossPercentage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_LostPackagesOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_LostPackagesOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_LostPackagesOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(&::ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_LostPackagesOut", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_LostPackagesIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_LostPackagesIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_LostPackagesIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(&::ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6c5bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_LostPackagesIn", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::ToString)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xa6c5be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&::ExitGames::Client::Photon::NetworkSimulationSet::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa6c5e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_isSimulationEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSimulationEnabled;
}
constexpr bool const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_isSimulationEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSimulationEnabled;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_isSimulationEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSimulationEnabled = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingLag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingLag;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingLag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingLag;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_outgoingLag(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingLag = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingJitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingJitter;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingJitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingJitter;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_outgoingJitter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingJitter = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingLossPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingLossPercentage;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingLossPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingLossPercentage;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_outgoingLossPercentage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingLossPercentage = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingLag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingLag;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingLag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingLag;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_incomingLag(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingLag = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingJitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingJitter;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingJitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingJitter;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_incomingJitter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingJitter = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingLossPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingLossPercentage;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingLossPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingLossPercentage;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_incomingLossPercentage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingLossPercentage = value;
}
constexpr ::ExitGames::Client::Photon::PeerBase*& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_peerBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerBase;
}
constexpr ::ExitGames::Client::Photon::PeerBase* const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_peerBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peerBase;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peerBase = value;
}
constexpr ::System::Threading::Thread*& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_netSimThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSimThread;
}
constexpr ::System::Threading::Thread* const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_netSimThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSimThread;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_netSimThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netSimThread = value;
}
constexpr ::System::Threading::ManualResetEvent*& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_NetSimManualResetEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetSimManualResetEvent;
}
constexpr ::System::Threading::ManualResetEvent* const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_NetSimManualResetEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetSimManualResetEvent;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_NetSimManualResetEvent(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetSimManualResetEvent = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get__LostPackagesOut_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LostPackagesOut_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get__LostPackagesOut_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LostPackagesOut_k__BackingField;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set__LostPackagesOut_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LostPackagesOut_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get__LostPackagesIn_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LostPackagesIn_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get__LostPackagesIn_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LostPackagesIn_k__BackingField;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set__LostPackagesIn_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LostPackagesIn_k__BackingField = value;
}
inline bool ExitGames::Client::Photon::NetworkSimulationSet::get_IsSimulationEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_IsSimulationEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_IsSimulationEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_IsSimulationEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_OutgoingLag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLag(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_OutgoingLag", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingJitter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_OutgoingJitter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingJitter(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_OutgoingJitter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLossPercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_OutgoingLossPercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLossPercentage(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_OutgoingLossPercentage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_IncomingLag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLag(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_IncomingLag", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingJitter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_IncomingJitter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingJitter(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_IncomingJitter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLossPercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_IncomingLossPercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLossPercentage(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_IncomingLossPercentage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_LostPackagesOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesOut(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_LostPackagesOut", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"get_LostPackagesIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesIn(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {"set_LostPackagesIn", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::NetworkSimulationSet::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NetworkSimulationSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::NetworkSimulationSet* ExitGames::Client::Photon::NetworkSimulationSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::NetworkSimulationSet*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::NetworkSimulationSet::NetworkSimulationSet()   {
}
