#pragma once
// IWYU pragma private; include "Photon/Voice/WebRTCAudioProcessor.hpp"
#include "Photon/Voice/zzzz__WebRTCAudioLib_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Photon/Voice/zzzz__WebRTCAudioProcessor_def.hpp"
#include "Photon/Voice/zzzz__FactoryPrimitiveArrayPool_1_def.hpp"
#include "Photon/Voice/zzzz__Framer_1_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__IProcessor_1_def.hpp"
#include "Photon/Voice/zzzz__WebRTCAudioLib_Param_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_AECStreamDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(int32_t)>(&::Photon::Voice::WebRTCAudioProcessor::set_AECStreamDelayMs)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa75449c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AECStreamDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_AEC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(bool)>(&::Photon::Voice::WebRTCAudioProcessor::set_AEC)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7546a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AEC", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_AECHighPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(bool)>(&::Photon::Voice::WebRTCAudioProcessor::set_AECHighPass)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa754cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AECHighPass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_AECMobile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(bool)>(&::Photon::Voice::WebRTCAudioProcessor::set_AECMobile)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa754d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AECMobile", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_HighPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(bool)>(&::Photon::Voice::WebRTCAudioProcessor::set_HighPass)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa754d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_HighPass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_NoiseSuppression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(bool)>(&::Photon::Voice::WebRTCAudioProcessor::set_NoiseSuppression)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa754da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_NoiseSuppression", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_AGC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(bool)>(&::Photon::Voice::WebRTCAudioProcessor::set_AGC)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa754dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AGC", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_AGCCompressionGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(int32_t)>(&::Photon::Voice::WebRTCAudioProcessor::set_AGCCompressionGain)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa754dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AGCCompressionGain", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_AGCTargetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(int32_t)>(&::Photon::Voice::WebRTCAudioProcessor::set_AGCTargetLevel)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa754f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AGCTargetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_AGC2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(bool)>(&::Photon::Voice::WebRTCAudioProcessor::set_AGC2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa75511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AGC2", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_VAD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(bool)>(&::Photon::Voice::WebRTCAudioProcessor::set_VAD)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa755148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_VAD", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(bool)>(&::Photon::Voice::WebRTCAudioProcessor::set_Bypass)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa755174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::WebRTCAudioProcessor::*)()>(&::Photon::Voice::WebRTCAudioProcessor::get_Bypass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa755304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"get_Bypass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(::Photon::Voice::ILogger*, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Photon::Voice::WebRTCAudioProcessor::_ctor)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0xa75530c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.InitReverseStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)()>(&::Photon::Voice::WebRTCAudioProcessor::InitReverseStream)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0xa754700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"InitReverseStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int16_t> (::Photon::Voice::WebRTCAudioProcessor::*)(::ArrayW<int16_t>)>(&::Photon::Voice::WebRTCAudioProcessor::Process)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xa755ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.OnAudioOutFrameFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)(::ArrayW<float_t>)>(&::Photon::Voice::WebRTCAudioProcessor::OnAudioOutFrameFloat)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xa755e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"OnAudioOutFrameFloat", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.ReverseStreamThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)()>(&::Photon::Voice::WebRTCAudioProcessor::ReverseStreamThread)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0xa756470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"ReverseStreamThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.setParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::WebRTCAudioProcessor::*)(::GlobalNamespace::WebRTCAudioLib_Param, int32_t)>(&::Photon::Voice::WebRTCAudioProcessor::setParam)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa7544c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"setParam", {}, {::i2c::type_of<::GlobalNamespace::WebRTCAudioLib_Param>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::WebRTCAudioProcessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::WebRTCAudioProcessor::*)()>(&::Photon::Voice::WebRTCAudioProcessor::Dispose)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xa756b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseStreamDelayMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamDelayMs;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseStreamDelayMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamDelayMs;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_reverseStreamDelayMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseStreamDelayMs = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_aec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aec;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_aec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aec;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_aec(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aec = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_aecHighPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecHighPass;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_aecHighPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecHighPass;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_aecHighPass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aecHighPass = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_aecm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecm;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_aecm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecm;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_aecm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aecm = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_highPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highPass;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_highPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highPass;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_highPass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highPass = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_ns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ns;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_ns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ns;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_ns(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ns = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_agc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agc;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_agc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agc;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_agc(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agc = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_agcCompressionGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agcCompressionGain;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_agcCompressionGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agcCompressionGain;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_agcCompressionGain(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agcCompressionGain = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_agcTargetLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agcTargetLevel;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_agcTargetLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agcTargetLevel;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_agcTargetLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agcTargetLevel = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_agc2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agc2;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_agc2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agc2;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_agc2(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agc2 = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_vad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vad;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_vad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vad;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_vad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vad = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseStreamThreadRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamThreadRunning;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseStreamThreadRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamThreadRunning;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_reverseStreamThreadRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseStreamThreadRunning = value;
}
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<int16_t>>*& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseStreamQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<int16_t>>* const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseStreamQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamQueue;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_reverseStreamQueue(::System::Collections::Generic::Queue_1<::ArrayW<int16_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseStreamQueue = value;
}
constexpr ::System::Threading::AutoResetEvent*& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseStreamQueueReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamQueueReady;
}
constexpr ::System::Threading::AutoResetEvent* const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseStreamQueueReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamQueueReady;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_reverseStreamQueueReady(::System::Threading::AutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseStreamQueueReady = value;
}
constexpr ::Photon::Voice::FactoryPrimitiveArrayPool_1<int16_t>*& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseBufferFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseBufferFactory;
}
constexpr ::Photon::Voice::FactoryPrimitiveArrayPool_1<int16_t>* const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseBufferFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseBufferFactory;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_reverseBufferFactory(::Photon::Voice::FactoryPrimitiveArrayPool_1<int16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseBufferFactory = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypass;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypass;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypass = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_inFrameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inFrameSize;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_inFrameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inFrameSize;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_inFrameSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inFrameSize = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_processFrameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processFrameSize;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_processFrameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processFrameSize;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_processFrameSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processFrameSize = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_samplingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingRate;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_samplingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingRate;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_samplingRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samplingRate = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
constexpr ::System::IntPtr& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_proc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proc;
}
constexpr ::System::IntPtr const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_proc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proc;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_proc(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proc = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
constexpr ::Photon::Voice::Framer_1<float_t>*& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseFramer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseFramer;
}
constexpr ::Photon::Voice::Framer_1<float_t>* const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseFramer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseFramer;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_reverseFramer(::Photon::Voice::Framer_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseFramer = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseSamplingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseSamplingRate;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseSamplingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseSamplingRate;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_reverseSamplingRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseSamplingRate = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseChannels;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_reverseChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseChannels;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_reverseChannels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseChannels = value;
}
constexpr ::Photon::Voice::ILogger*& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr bool& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_aecInited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecInited;
}
constexpr bool const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_aecInited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecInited;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_aecInited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aecInited = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_lastProcessErr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastProcessErr;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_lastProcessErr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastProcessErr;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_lastProcessErr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastProcessErr = value;
}
constexpr int32_t& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_lastProcessReverseErr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastProcessReverseErr;
}
constexpr int32_t const& Photon::Voice::WebRTCAudioProcessor::__cordl_internal_get_lastProcessReverseErr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastProcessReverseErr;
}
constexpr void Photon::Voice::WebRTCAudioProcessor::__cordl_internal_set_lastProcessReverseErr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastProcessReverseErr = value;
}
inline void Photon::Voice::WebRTCAudioProcessor::setStaticF_SupportedSamplingRates(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "SupportedSamplingRates", ::Photon::Voice::WebRTCAudioProcessor*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Photon::Voice::WebRTCAudioProcessor::getStaticF_SupportedSamplingRates()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "SupportedSamplingRates", ::Photon::Voice::WebRTCAudioProcessor*>();
}
inline void Photon::Voice::WebRTCAudioProcessor::set_AECStreamDelayMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AECStreamDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_AEC(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AEC", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_AECHighPass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AECHighPass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_AECMobile(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AECMobile", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_HighPass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_HighPass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_NoiseSuppression(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_NoiseSuppression", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_AGC(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AGC", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_AGCCompressionGain(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AGCCompressionGain", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_AGCTargetLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AGCTargetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_AGC2(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_AGC2", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_VAD(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_VAD", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::WebRTCAudioProcessor::set_Bypass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::WebRTCAudioProcessor::get_Bypass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"get_Bypass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::WebRTCAudioProcessor::_ctor(::Photon::Voice::ILogger*  logger, int32_t  frameSize, int32_t  samplingRate, int32_t  channels, int32_t  reverseSamplingRate, int32_t  reverseChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger, frameSize, samplingRate, channels, reverseSamplingRate, reverseChannels);
}
inline void Photon::Voice::WebRTCAudioProcessor::InitReverseStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"InitReverseStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<int16_t> Photon::Voice::WebRTCAudioProcessor::Process(::ArrayW<int16_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t>>(this, ___internal_method, buf);
}
inline void Photon::Voice::WebRTCAudioProcessor::OnAudioOutFrameFloat(::ArrayW<float_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"OnAudioOutFrameFloat", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Photon::Voice::WebRTCAudioProcessor::ReverseStreamThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"ReverseStreamThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Photon::Voice::WebRTCAudioProcessor::setParam(::GlobalNamespace::WebRTCAudioLib_Param  param, int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"setParam", {}, {::i2c::type_of<::GlobalNamespace::WebRTCAudioLib_Param>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, param, v);
}
inline void Photon::Voice::WebRTCAudioProcessor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::WebRTCAudioProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::WebRTCAudioProcessor* Photon::Voice::WebRTCAudioProcessor::New_ctor(::Photon::Voice::ILogger*  logger, int32_t  frameSize, int32_t  samplingRate, int32_t  channels, int32_t  reverseSamplingRate, int32_t  reverseChannels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::WebRTCAudioProcessor*>(logger, frameSize, samplingRate, channels, reverseSamplingRate, reverseChannels));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr  Photon::Voice::WebRTCAudioProcessor::operator ::Photon::Voice::IProcessor_1<int16_t>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<int16_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr ::Photon::Voice::IProcessor_1<int16_t>* Photon::Voice::WebRTCAudioProcessor::i___Photon__Voice__IProcessor_1_int16_t_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<int16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::WebRTCAudioProcessor::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::WebRTCAudioProcessor::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::WebRTCAudioProcessor::WebRTCAudioProcessor()   {
}
