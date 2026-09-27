#pragma once
// IWYU pragma private; include "Photon/Voice/IEncoderDirectImage.hpp"
#include "Photon/Voice/zzzz__IEncoderDirectImage_def.hpp"
#include "Photon/Voice/zzzz__IEncoderDirect_1_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferNative_def.hpp"
#include "Photon/Voice/zzzz__ImageFormat_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::IEncoderDirectImage.get_ImageFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::ImageFormat (::Photon::Voice::IEncoderDirectImage::*)()>(&::Photon::Voice::IEncoderDirectImage::get_ImageFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IEncoderDirectImage*>(),
                    {::i2c::class_of<::Photon::Voice::IEncoderDirectImage*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Photon::Voice::ImageFormat Photon::Voice::IEncoderDirectImage::get_ImageFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IEncoderDirectImage*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::ImageFormat>(this, ___internal_method);
}
/// @brief Convert operator to "::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>"
constexpr  Photon::Voice::IEncoderDirectImage::operator ::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>*() noexcept {
return static_cast<::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>"
constexpr ::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>* Photon::Voice::IEncoderDirectImage::i___Photon__Voice__IEncoderDirect_1___Photon__Voice__ImageBufferNative__() noexcept {
return static_cast<::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IEncoder"
constexpr  Photon::Voice::IEncoderDirectImage::operator ::Photon::Voice::IEncoder*() noexcept {
return static_cast<::Photon::Voice::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IEncoder"
constexpr ::Photon::Voice::IEncoder* Photon::Voice::IEncoderDirectImage::i___Photon__Voice__IEncoder() noexcept {
return static_cast<::Photon::Voice::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::IEncoderDirectImage::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::IEncoderDirectImage::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
