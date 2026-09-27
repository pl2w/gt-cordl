#pragma once
// IWYU pragma private; include "Fusion/ClientTimeTrace.hpp"
#include "Fusion/zzzz__Simulation_TimeFeedback_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ClientTimeTrace_def.hpp"
#include "Fusion/zzzz__Simulation_TimeFeedback_def.hpp"
#include "Fusion/zzzz__TickRate_Resolved_def.hpp"
//  Writing Method size for method: ::Fusion::ClientTimeTrace.get_Folder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::ClientTimeTrace::*)()>(&::Fusion::ClientTimeTrace::get_Folder)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x600a380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"get_Folder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeTrace.get_File
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::ClientTimeTrace::*)()>(&::Fusion::ClientTimeTrace::get_File)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x600a3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"get_File", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeTrace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeTrace::*)(int32_t, ::GlobalNamespace::TickRate_Resolved)>(&::Fusion::ClientTimeTrace::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x600a28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TickRate_Resolved>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeTrace.OnFeedback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeTrace::*)(::GlobalNamespace::Simulation_TimeFeedback)>(&::Fusion::ClientTimeTrace::OnFeedback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6009f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"OnFeedback", {}, {::i2c::type_of<::GlobalNamespace::Simulation_TimeFeedback>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeTrace.OnPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeTrace::*)(int32_t, double_t, double_t)>(&::Fusion::ClientTimeTrace::OnPacket)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6007574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"OnPacket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeTrace.OnFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeTrace::*)(double_t)>(&::Fusion::ClientTimeTrace::OnFrame)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6009ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"OnFrame", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeTrace.WriteHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeTrace::*)(::GlobalNamespace::TickRate_Resolved)>(&::Fusion::ClientTimeTrace::WriteHeaders)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x600a4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"WriteHeaders", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Resolved>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeTrace.WriteLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeTrace::*)()>(&::Fusion::ClientTimeTrace::WriteLine)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x600a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"WriteLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Fusion::ClientTimeTrace::__cordl_internal_get_Timestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr int64_t const& Fusion::ClientTimeTrace::__cordl_internal_get_Timestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_Timestamp(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timestamp = value;
}
constexpr int32_t& Fusion::ClientTimeTrace::__cordl_internal_get_Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr int32_t const& Fusion::ClientTimeTrace::__cordl_internal_get_Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_Player(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Player = value;
}
constexpr int32_t& Fusion::ClientTimeTrace::__cordl_internal_get_Frames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frames;
}
constexpr int32_t const& Fusion::ClientTimeTrace::__cordl_internal_get_Frames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frames;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_Frames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Frames = value;
}
constexpr double_t& Fusion::ClientTimeTrace::__cordl_internal_get_FrameDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameDeltaTime;
}
constexpr double_t const& Fusion::ClientTimeTrace::__cordl_internal_get_FrameDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameDeltaTime;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_FrameDeltaTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FrameDeltaTime = value;
}
constexpr bool& Fusion::ClientTimeTrace::__cordl_internal_get_PacketReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketReceived;
}
constexpr bool const& Fusion::ClientTimeTrace::__cordl_internal_get_PacketReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketReceived;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_PacketReceived(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PacketReceived = value;
}
constexpr int32_t& Fusion::ClientTimeTrace::__cordl_internal_get_PacketNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketNumber;
}
constexpr int32_t const& Fusion::ClientTimeTrace::__cordl_internal_get_PacketNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketNumber;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_PacketNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PacketNumber = value;
}
constexpr int32_t& Fusion::ClientTimeTrace::__cordl_internal_get_Packets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Packets;
}
constexpr int32_t const& Fusion::ClientTimeTrace::__cordl_internal_get_Packets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Packets;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_Packets(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Packets = value;
}
constexpr double_t& Fusion::ClientTimeTrace::__cordl_internal_get_PacketDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketDeltaTime;
}
constexpr double_t const& Fusion::ClientTimeTrace::__cordl_internal_get_PacketDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketDeltaTime;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_PacketDeltaTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PacketDeltaTime = value;
}
constexpr double_t& Fusion::ClientTimeTrace::__cordl_internal_get_RoundTripTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoundTripTime;
}
constexpr double_t const& Fusion::ClientTimeTrace::__cordl_internal_get_RoundTripTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoundTripTime;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_RoundTripTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoundTripTime = value;
}
constexpr ::GlobalNamespace::Simulation_TimeFeedback& Fusion::ClientTimeTrace::__cordl_internal_get_PacketFeedback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketFeedback;
}
constexpr ::GlobalNamespace::Simulation_TimeFeedback const& Fusion::ClientTimeTrace::__cordl_internal_get_PacketFeedback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketFeedback;
}
constexpr void Fusion::ClientTimeTrace::__cordl_internal_set_PacketFeedback(::GlobalNamespace::Simulation_TimeFeedback  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PacketFeedback = value;
}
inline ::StringW Fusion::ClientTimeTrace::get_Folder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"get_Folder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Fusion::ClientTimeTrace::get_File()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"get_File", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::ClientTimeTrace::_ctor(int32_t  player, ::GlobalNamespace::TickRate_Resolved  tickRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TickRate_Resolved>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, tickRate);
}
inline void Fusion::ClientTimeTrace::OnFeedback(::GlobalNamespace::Simulation_TimeFeedback  packetFeedback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"OnFeedback", {}, {::i2c::type_of<::GlobalNamespace::Simulation_TimeFeedback>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packetFeedback);
}
inline void Fusion::ClientTimeTrace::OnPacket(int32_t  packetNumber, double_t  packetDeltaTime, double_t  roundTripTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"OnPacket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packetNumber, packetDeltaTime, roundTripTime);
}
inline void Fusion::ClientTimeTrace::OnFrame(double_t  frameDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"OnFrame", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameDeltaTime);
}
inline void Fusion::ClientTimeTrace::WriteHeaders(::GlobalNamespace::TickRate_Resolved  tickRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"WriteHeaders", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Resolved>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tickRate);
}
inline void Fusion::ClientTimeTrace::WriteLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeTrace*>(),
                        {"WriteLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::ClientTimeTrace* Fusion::ClientTimeTrace::New_ctor(int32_t  player, ::GlobalNamespace::TickRate_Resolved  tickRate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ClientTimeTrace*>(player, tickRate));
}
// Ctor Parameters []
constexpr ::Fusion::ClientTimeTrace::ClientTimeTrace()   {
}
