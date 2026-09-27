#pragma once
// IWYU pragma private; include "GlobalNamespace/ISpeakerLoudness.hpp"
#include "GlobalNamespace/zzzz__ISpeakerLoudness_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISpeakerLoudness.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ISpeakerLoudness::*)()>(&::GlobalNamespace::ISpeakerLoudness::get_IsSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ISpeakerLoudness*>(),
                    {::i2c::class_of<::GlobalNamespace::ISpeakerLoudness*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISpeakerLoudness.get_Loudness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ISpeakerLoudness::*)()>(&::GlobalNamespace::ISpeakerLoudness::get_Loudness)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ISpeakerLoudness*>(),
                    {::i2c::class_of<::GlobalNamespace::ISpeakerLoudness*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISpeakerLoudness.get_IsMicEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ISpeakerLoudness::*)()>(&::GlobalNamespace::ISpeakerLoudness::get_IsMicEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ISpeakerLoudness*>(),
                    {::i2c::class_of<::GlobalNamespace::ISpeakerLoudness*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ISpeakerLoudness::get_IsSpeaking()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ISpeakerLoudness*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::ISpeakerLoudness::get_Loudness()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ISpeakerLoudness*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::ISpeakerLoudness::get_IsMicEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ISpeakerLoudness*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
