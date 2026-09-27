#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/BaseAudioSystem_2.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipSettings_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/Voice/Audio/zzzz__BaseAudioSystem_2_def.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipSettings_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipStream_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioPlayer_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioSystem_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr void Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr ::Meta::Voice::Audio::AudioClipSettings& Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::__cordl_internal_get__clipSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipSettings;
}
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr ::Meta::Voice::Audio::AudioClipSettings const& Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::__cordl_internal_get__clipSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipSettings;
}
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr void Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::__cordl_internal_set__clipSettings(::Meta::Voice::Audio::AudioClipSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipSettings = value;
}
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr ::Meta::WitAi::ObjectPool_1<TAudioClipStream>*& Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr ::Meta::WitAi::ObjectPool_1<TAudioClipStream>* const& Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr void Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::__cordl_internal_set__pool(::Meta::WitAi::ObjectPool_1<TAudioClipStream>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline ::Meta::Voice::Audio::AudioClipSettings Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::get_ClipSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(),
                        {"get_ClipSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::AudioClipSettings>(this, ___internal_method);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline void Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::set_ClipSettings(::Meta::Voice::Audio::AudioClipSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(),
                        {"set_ClipSettings", {}, {::i2c::type_of<::Meta::Voice::Audio::AudioClipSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline void Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::GeneratePool()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline TAudioClipStream Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::GenerateClip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<TAudioClipStream>(this, ___internal_method);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline void Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline void Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::PreloadClipStreams(int32_t  total)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, total);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline ::Meta::Voice::Audio::IAudioClipStream* Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::GetAudioClipStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioClipStream*>(this, ___internal_method);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline void Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::UnloadAudioClipStream(::Meta::Voice::Audio::IAudioClipStream*  clipStream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipStream);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline ::Meta::Voice::Audio::IAudioPlayer* Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::GetAudioPlayer(::UnityEngine::GameObject*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioPlayer*>(this, ___internal_method, root);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline void Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAudioClipStream,typename TAudioPlayer>
inline ::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>* Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>*>());
}
/// @brief Convert operator to "::Meta::Voice::Audio::IAudioSystem"
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr  Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::operator ::Meta::Voice::Audio::IAudioSystem*() noexcept {
return static_cast<::Meta::Voice::Audio::IAudioSystem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Audio::IAudioSystem"
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr ::Meta::Voice::Audio::IAudioSystem* Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::i___Meta__Voice__Audio__IAudioSystem() noexcept {
return static_cast<::Meta::Voice::Audio::IAudioSystem*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TAudioClipStream,typename TAudioPlayer>
constexpr ::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>::BaseAudioSystem_2()   {
}
