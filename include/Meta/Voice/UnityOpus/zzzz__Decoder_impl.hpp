#pragma once
// IWYU pragma private; include "Meta/Voice/UnityOpus/Decoder.hpp"
#include "Meta/Voice/UnityOpus/zzzz__NumChannels_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/UnityOpus/zzzz__Decoder_def.hpp"
#include "Meta/Voice/UnityOpus/zzzz__NumChannels_def.hpp"
#include "Meta/Voice/UnityOpus/zzzz__SamplingFrequency_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Meta::Voice::UnityOpus::Decoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::UnityOpus::Decoder::*)(::Meta::Voice::UnityOpus::SamplingFrequency, ::Meta::Voice::UnityOpus::NumChannels)>(&::Meta::Voice::UnityOpus::Decoder::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e1554c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::Meta::Voice::UnityOpus::NumChannels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::UnityOpus::Decoder.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::UnityOpus::Decoder::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<float_t>, int32_t)>(&::Meta::Voice::UnityOpus::Decoder::Decode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e1571c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::UnityOpus::Decoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::UnityOpus::Decoder::*)(bool)>(&::Meta::Voice::UnityOpus::Decoder::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e158f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(),
                    {::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::UnityOpus::Decoder.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::UnityOpus::Decoder::*)()>(&::Meta::Voice::UnityOpus::Decoder::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e159a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(),
                    {::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::UnityOpus::Decoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::UnityOpus::Decoder::*)()>(&::Meta::Voice::UnityOpus::Decoder::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e15a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Meta::Voice::UnityOpus::Decoder::__cordl_internal_get_decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
constexpr ::System::IntPtr const& Meta::Voice::UnityOpus::Decoder::__cordl_internal_get_decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
constexpr void Meta::Voice::UnityOpus::Decoder::__cordl_internal_set_decoder(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decoder = value;
}
constexpr ::Meta::Voice::UnityOpus::NumChannels& Meta::Voice::UnityOpus::Decoder::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr ::Meta::Voice::UnityOpus::NumChannels const& Meta::Voice::UnityOpus::Decoder::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr void Meta::Voice::UnityOpus::Decoder::__cordl_internal_set_channels(::Meta::Voice::UnityOpus::NumChannels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::UnityOpus::Decoder::__cordl_internal_get_softclipMem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___softclipMem;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::UnityOpus::Decoder::__cordl_internal_get_softclipMem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___softclipMem;
}
constexpr void Meta::Voice::UnityOpus::Decoder::__cordl_internal_set_softclipMem(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___softclipMem = value;
}
constexpr bool& Meta::Voice::UnityOpus::Decoder::__cordl_internal_get_disposedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposedValue;
}
constexpr bool const& Meta::Voice::UnityOpus::Decoder::__cordl_internal_get_disposedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposedValue;
}
constexpr void Meta::Voice::UnityOpus::Decoder::__cordl_internal_set_disposedValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposedValue = value;
}
inline void Meta::Voice::UnityOpus::Decoder::_ctor(::Meta::Voice::UnityOpus::SamplingFrequency  samplingFrequency, ::Meta::Voice::UnityOpus::NumChannels  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::Meta::Voice::UnityOpus::NumChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingFrequency, channels);
}
inline int32_t Meta::Voice::UnityOpus::Decoder::Decode(::ArrayW<uint8_t>  data, int32_t  dataLength, ::ArrayW<float_t>  pcm, int32_t  decodeFec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, dataLength, pcm, decodeFec);
}
inline void Meta::Voice::UnityOpus::Decoder::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Meta::Voice::UnityOpus::Decoder::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::UnityOpus::Decoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Decoder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::UnityOpus::Decoder* Meta::Voice::UnityOpus::Decoder::New_ctor(::Meta::Voice::UnityOpus::SamplingFrequency  samplingFrequency, ::Meta::Voice::UnityOpus::NumChannels  channels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::UnityOpus::Decoder*>(samplingFrequency, channels));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::Voice::UnityOpus::Decoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::Voice::UnityOpus::Decoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::UnityOpus::Decoder::Decoder()   {
}
