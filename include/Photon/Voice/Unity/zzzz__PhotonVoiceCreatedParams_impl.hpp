#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/PhotonVoiceCreatedParams.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__PhotonVoiceCreatedParams_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::PhotonVoiceCreatedParams.get_Voice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::LocalVoice* (::Photon::Voice::Unity::PhotonVoiceCreatedParams::*)()>(&::Photon::Voice::Unity::PhotonVoiceCreatedParams::get_Voice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {"get_Voice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::PhotonVoiceCreatedParams.set_Voice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::PhotonVoiceCreatedParams::*)(::Photon::Voice::LocalVoice*)>(&::Photon::Voice::Unity::PhotonVoiceCreatedParams::set_Voice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {"set_Voice", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::PhotonVoiceCreatedParams.get_AudioDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IAudioDesc* (::Photon::Voice::Unity::PhotonVoiceCreatedParams::*)()>(&::Photon::Voice::Unity::PhotonVoiceCreatedParams::get_AudioDesc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {"get_AudioDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::PhotonVoiceCreatedParams.set_AudioDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::PhotonVoiceCreatedParams::*)(::Photon::Voice::IAudioDesc*)>(&::Photon::Voice::Unity::PhotonVoiceCreatedParams::set_AudioDesc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {"set_AudioDesc", {}, {::i2c::type_of<::Photon::Voice::IAudioDesc*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::PhotonVoiceCreatedParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::PhotonVoiceCreatedParams::*)()>(&::Photon::Voice::Unity::PhotonVoiceCreatedParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::LocalVoice*& Photon::Voice::Unity::PhotonVoiceCreatedParams::__cordl_internal_get__Voice_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Voice_k__BackingField;
}
constexpr ::Photon::Voice::LocalVoice* const& Photon::Voice::Unity::PhotonVoiceCreatedParams::__cordl_internal_get__Voice_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Voice_k__BackingField;
}
constexpr void Photon::Voice::Unity::PhotonVoiceCreatedParams::__cordl_internal_set__Voice_k__BackingField(::Photon::Voice::LocalVoice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Voice_k__BackingField = value;
}
constexpr ::Photon::Voice::IAudioDesc*& Photon::Voice::Unity::PhotonVoiceCreatedParams::__cordl_internal_get__AudioDesc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioDesc_k__BackingField;
}
constexpr ::Photon::Voice::IAudioDesc* const& Photon::Voice::Unity::PhotonVoiceCreatedParams::__cordl_internal_get__AudioDesc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioDesc_k__BackingField;
}
constexpr void Photon::Voice::Unity::PhotonVoiceCreatedParams::__cordl_internal_set__AudioDesc_k__BackingField(::Photon::Voice::IAudioDesc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioDesc_k__BackingField = value;
}
inline ::Photon::Voice::LocalVoice* Photon::Voice::Unity::PhotonVoiceCreatedParams::get_Voice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {"get_Voice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoice*>(this, ___internal_method);
}
inline void Photon::Voice::Unity::PhotonVoiceCreatedParams::set_Voice(::Photon::Voice::LocalVoice*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {"set_Voice", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::IAudioDesc* Photon::Voice::Unity::PhotonVoiceCreatedParams::get_AudioDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {"get_AudioDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IAudioDesc*>(this, ___internal_method);
}
inline void Photon::Voice::Unity::PhotonVoiceCreatedParams::set_AudioDesc(::Photon::Voice::IAudioDesc*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {"set_AudioDesc", {}, {::i2c::type_of<::Photon::Voice::IAudioDesc*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::PhotonVoiceCreatedParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::PhotonVoiceCreatedParams* Photon::Voice::Unity::PhotonVoiceCreatedParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::PhotonVoiceCreatedParams::PhotonVoiceCreatedParams()   {
}
