#pragma once
// IWYU pragma private; include "Photon/Voice/IDecoder.hpp"
#include "Photon/Voice/zzzz__IDecoder_def.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::IDecoder.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::IDecoder::*)(::Photon::Voice::VoiceInfo)>(&::Photon::Voice::IDecoder::Open)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IDecoder*>(),
                    {::i2c::class_of<::Photon::Voice::IDecoder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IDecoder.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::IDecoder::*)()>(&::Photon::Voice::IDecoder::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IDecoder*>(),
                    {::i2c::class_of<::Photon::Voice::IDecoder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IDecoder.Input
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::IDecoder::*)(::by_ref<::Photon::Voice::FrameBuffer>)>(&::Photon::Voice::IDecoder::Input)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IDecoder*>(),
                    {::i2c::class_of<::Photon::Voice::IDecoder*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::IDecoder::Open(::Photon::Voice::VoiceInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IDecoder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::StringW Photon::Voice::IDecoder::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IDecoder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::IDecoder::Input(::by_ref<::Photon::Voice::FrameBuffer>  buf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IDecoder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::IDecoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::IDecoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
