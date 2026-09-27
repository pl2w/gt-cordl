#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/GrabbableEntity.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapEntity_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GrabbableEntity_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::GrabbableEntity.GetPackedCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GT_CustomMapSupportRuntime::GrabbableEntity::*)()>(&::GT_CustomMapSupportRuntime::GrabbableEntity::GetPackedCreateData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cb6c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GT_CustomMapSupportRuntime::GrabbableEntity*>(),
                    {::i2c::class_of<::GT_CustomMapSupportRuntime::GrabbableEntity*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::GrabbableEntity.UnpackCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<uint8_t>, ::by_ref<int16_t>)>(&::GT_CustomMapSupportRuntime::GrabbableEntity::UnpackCreateData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cb6c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GrabbableEntity*>(),
                        {"UnpackCreateData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::GrabbableEntity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::GrabbableEntity::*)()>(&::GT_CustomMapSupportRuntime::GrabbableEntity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb6ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GrabbableEntity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_catchSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_catchSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSound;
}
constexpr void GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_set_catchSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchSound = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_catchSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSoundVolume;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_catchSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSoundVolume;
}
constexpr void GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_set_catchSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_throwSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_throwSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr void GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_set_throwSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSound = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_throwSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSoundVolume;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_get_throwSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSoundVolume;
}
constexpr void GT_CustomMapSupportRuntime::GrabbableEntity::__cordl_internal_set_throwSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSoundVolume = value;
}
inline int64_t GT_CustomMapSupportRuntime::GrabbableEntity::GetPackedCreateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GT_CustomMapSupportRuntime::GrabbableEntity*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::GrabbableEntity::UnpackCreateData(int64_t  data, ::by_ref<uint8_t>  entityTypeID, ::by_ref<int16_t>  luaAgentID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GrabbableEntity*>(),
                        {"UnpackCreateData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, entityTypeID, luaAgentID);
}
inline void GT_CustomMapSupportRuntime::GrabbableEntity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GrabbableEntity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::GrabbableEntity* GT_CustomMapSupportRuntime::GrabbableEntity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::GrabbableEntity*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::GrabbableEntity::GrabbableEntity()   {
}
