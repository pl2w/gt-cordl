#pragma once
// IWYU pragma private; include "Liv/Lck/CameraTrackDescriptor.hpp"
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_impl.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_def.hpp"
//  Writing Method size for method: ::Liv::Lck::CameraTrackDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::CameraTrackDescriptor::*)(::Liv::Lck::CameraResolutionDescriptor, uint32_t, uint32_t, uint32_t)>(&::Liv::Lck::CameraTrackDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cebafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::CameraTrackDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::CameraTrackDescriptor::_ctor(::Liv::Lck::CameraResolutionDescriptor  cameraResolutionDescriptor, uint32_t  bitrate, uint32_t  framerate, uint32_t  audioBitrate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::CameraTrackDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cameraResolutionDescriptor, bitrate, framerate, audioBitrate);
}
// Ctor Parameters [CppParam { name: "CameraResolutionDescriptor", ty: "::Liv::Lck::CameraResolutionDescriptor", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Bitrate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Framerate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AudioBitrate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::CameraTrackDescriptor::CameraTrackDescriptor(::Liv::Lck::CameraResolutionDescriptor  CameraResolutionDescriptor, uint32_t  Bitrate, uint32_t  Framerate, uint32_t  AudioBitrate) noexcept  {
this->CameraResolutionDescriptor = CameraResolutionDescriptor;
this->Bitrate = Bitrate;
this->Framerate = Framerate;
this->AudioBitrate = AudioBitrate;
}
// Ctor Parameters []
constexpr ::Liv::Lck::CameraTrackDescriptor::CameraTrackDescriptor()   {
}
