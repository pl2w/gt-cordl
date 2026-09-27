#pragma once
// IWYU pragma private; include "UnityEngine/AudioListener.hpp"
#include "UnityEngine/zzzz__AudioBehaviour_impl.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioListener.GetSpectrumDataHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<float_t>>, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioListener::GetSpectrumDataHelper)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb553b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioListener*>(),
                        {"GetSpectrumDataHelper", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetSpectrumData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioListener::GetSpectrumData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb553ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioListener*>(),
                        {"GetSpectrumData", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioListener::*)()>(&::UnityEngine::AudioListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb553ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetSpectrumDataHelper_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioListener::GetSpectrumDataHelper_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb553c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioListener*>(),
                        {"GetSpectrumDataHelper_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioListener::GetSpectrumDataHelper(::by_ref<::ArrayW<float_t>>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioListener*>(),
                        {"GetSpectrumDataHelper", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samples, channel, window);
}
inline void UnityEngine::AudioListener::GetSpectrumData(::ArrayW<float_t>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioListener*>(),
                        {"GetSpectrumData", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samples, channel, window);
}
inline void UnityEngine::AudioListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AudioListener::GetSpectrumDataHelper_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioListener*>(),
                        {"GetSpectrumDataHelper_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FFTWindow>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samples, channel, window);
}
inline ::UnityEngine::AudioListener* UnityEngine::AudioListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioListener*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioListener::AudioListener()   {
}
