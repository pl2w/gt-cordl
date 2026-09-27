#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioOutCapture.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Voice/Unity/zzzz__AudioOutCapture_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::AudioOutCapture.add_OnAudioFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioOutCapture::*)(::System::Action_2<::ArrayW<float_t>,int32_t>*)>(&::Photon::Voice::Unity::AudioOutCapture::add_OnAudioFrame)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa75a7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioOutCapture*>(),
                        {"add_OnAudioFrame", {}, {::i2c::type_of<::System::Action_2<::ArrayW<float_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioOutCapture.remove_OnAudioFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioOutCapture::*)(::System::Action_2<::ArrayW<float_t>,int32_t>*)>(&::Photon::Voice::Unity::AudioOutCapture::remove_OnAudioFrame)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa75a888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioOutCapture*>(),
                        {"remove_OnAudioFrame", {}, {::i2c::type_of<::System::Action_2<::ArrayW<float_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioOutCapture.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioOutCapture::*)(::ArrayW<float_t>, int32_t)>(&::Photon::Voice::Unity::AudioOutCapture::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa75a938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioOutCapture*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioOutCapture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioOutCapture::*)()>(&::Photon::Voice::Unity::AudioOutCapture::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioOutCapture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::ArrayW<float_t>,int32_t>*& Photon::Voice::Unity::AudioOutCapture::__cordl_internal_get_OnAudioFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioFrame;
}
constexpr ::System::Action_2<::ArrayW<float_t>,int32_t>* const& Photon::Voice::Unity::AudioOutCapture::__cordl_internal_get_OnAudioFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioFrame;
}
constexpr void Photon::Voice::Unity::AudioOutCapture::__cordl_internal_set_OnAudioFrame(::System::Action_2<::ArrayW<float_t>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAudioFrame = value;
}
inline void Photon::Voice::Unity::AudioOutCapture::add_OnAudioFrame(::System::Action_2<::ArrayW<float_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioOutCapture*>(),
                        {"add_OnAudioFrame", {}, {::i2c::type_of<::System::Action_2<::ArrayW<float_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::AudioOutCapture::remove_OnAudioFrame(::System::Action_2<::ArrayW<float_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioOutCapture*>(),
                        {"remove_OnAudioFrame", {}, {::i2c::type_of<::System::Action_2<::ArrayW<float_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::AudioOutCapture::OnAudioFilterRead(::ArrayW<float_t>  frame, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioOutCapture*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, channels);
}
inline void Photon::Voice::Unity::AudioOutCapture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioOutCapture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::AudioOutCapture* Photon::Voice::Unity::AudioOutCapture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::AudioOutCapture*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::AudioOutCapture::AudioOutCapture()   {
}
