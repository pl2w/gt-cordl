#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_SoundEffect.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_SoundEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomSystem_SoundEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomSystem_SoundEffect::*)(int32_t, float_t, bool)>(&::GlobalNamespace::RoomSystem_SoundEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad69b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem_SoundEffect>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomSystem_SoundEffect::_ctor(int32_t  soundID, float_t  soundVolume, bool  _stopCurrentAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomSystem_SoundEffect>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, soundID, soundVolume, _stopCurrentAudio);
}
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stopCurrentAudio", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RoomSystem_SoundEffect::RoomSystem_SoundEffect(int32_t  id, float_t  volume, bool  stopCurrentAudio) noexcept  {
this->id = id;
this->volume = volume;
this->stopCurrentAudio = stopCurrentAudio;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomSystem_SoundEffect::RoomSystem_SoundEffect()   {
}
