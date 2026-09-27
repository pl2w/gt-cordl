#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpBarrierSFX.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpBarrierSFX_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpBarrierSFX.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpBarrierSFX::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VirtualStumpBarrierSFX::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5a0be0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpBarrierSFX.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpBarrierSFX::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VirtualStumpBarrierSFX::OnTriggerStay)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a0c144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpBarrierSFX.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpBarrierSFX::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VirtualStumpBarrierSFX::OnTriggerExit)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a0c268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpBarrierSFX.PlaySFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpBarrierSFX::*)()>(&::GlobalNamespace::VirtualStumpBarrierSFX::PlaySFX)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a0c028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {"PlaySFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpBarrierSFX._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpBarrierSFX::*)()>(&::GlobalNamespace::VirtualStumpBarrierSFX::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a0c38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VirtualStumpBarrierSFX::__cordl_internal_get_barrierAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___barrierAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VirtualStumpBarrierSFX::__cordl_internal_get_barrierAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___barrierAudioSource;
}
constexpr void GlobalNamespace::VirtualStumpBarrierSFX::__cordl_internal_set_barrierAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___barrierAudioSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::VirtualStumpBarrierSFX::__cordl_internal_get_PassThroughBarrierSoundClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PassThroughBarrierSoundClips;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::VirtualStumpBarrierSFX::__cordl_internal_get_PassThroughBarrierSoundClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PassThroughBarrierSoundClips;
}
constexpr void GlobalNamespace::VirtualStumpBarrierSFX::__cordl_internal_set_PassThroughBarrierSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PassThroughBarrierSoundClips = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,bool>*& GlobalNamespace::VirtualStumpBarrierSFX::__cordl_internal_get_trackedGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedGameObjects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,bool>* const& GlobalNamespace::VirtualStumpBarrierSFX::__cordl_internal_get_trackedGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedGameObjects;
}
constexpr void GlobalNamespace::VirtualStumpBarrierSFX::__cordl_internal_set_trackedGameObjects(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedGameObjects = value;
}
inline void GlobalNamespace::VirtualStumpBarrierSFX::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VirtualStumpBarrierSFX::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VirtualStumpBarrierSFX::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VirtualStumpBarrierSFX::PlaySFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {"PlaySFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpBarrierSFX::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpBarrierSFX*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VirtualStumpBarrierSFX* GlobalNamespace::VirtualStumpBarrierSFX::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VirtualStumpBarrierSFX*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VirtualStumpBarrierSFX::VirtualStumpBarrierSFX()   {
}
