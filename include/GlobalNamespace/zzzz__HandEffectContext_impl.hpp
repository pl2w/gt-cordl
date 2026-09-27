#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HandEffectContext_def.hpp"
#include "GlobalNamespace/zzzz__HandTapOverrides_def.hpp"
#include "GlobalNamespace/zzzz__IFXEffectContextObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_PrefabPoolIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_PrefabPoolIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57479f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_PrefabPoolIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57479f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_Rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5747a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_Speed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5747a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_Color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_Color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5747a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_SoundSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_SoundSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5747a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_SoundSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_Sound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_Sound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5747a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Sound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_Volume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5747a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_Pitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_Pitch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5747a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Pitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.AddFXPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(int32_t)>(&::GlobalNamespace::HandEffectContext::AddFXPrefab)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5747a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"AddFXPrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.RemoveFXPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(int32_t)>(&::GlobalNamespace::HandEffectContext::RemoveFXPrefab)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5747ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"RemoveFXPrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_SeparateUpTapCooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_SeparateUpTapCooldown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5747b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_SeparateUpTapCooldown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.set_SeparateUpTapCooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(bool)>(&::GlobalNamespace::HandEffectContext::set_SeparateUpTapCooldown)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5747b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"set_SeparateUpTapCooldown", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_DownTapOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandTapOverrides* (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_DownTapOverrides)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5747bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_DownTapOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.set_DownTapOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(::GlobalNamespace::HandTapOverrides*)>(&::GlobalNamespace::HandEffectContext::set_DownTapOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5747bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"set_DownTapOverrides", {}, {::i2c::type_of<::GlobalNamespace::HandTapOverrides*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.get_UpTapOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandTapOverrides* (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::get_UpTapOverrides)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5747bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_UpTapOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.set_UpTapOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(::GlobalNamespace::HandTapOverrides*)>(&::GlobalNamespace::HandEffectContext::set_UpTapOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5747bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"set_UpTapOverrides", {}, {::i2c::type_of<::GlobalNamespace::HandTapOverrides*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.add_handTapDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(::System::Action_1<::GlobalNamespace::HandEffectContext*>*)>(&::GlobalNamespace::HandEffectContext::add_handTapDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5747bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"add_handTapDown", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::HandEffectContext*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.remove_handTapDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(::System::Action_1<::GlobalNamespace::HandEffectContext*>*)>(&::GlobalNamespace::HandEffectContext::remove_handTapDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5747ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"remove_handTapDown", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::HandEffectContext*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.add_handTapUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(::System::Action_1<::GlobalNamespace::HandEffectContext*>*)>(&::GlobalNamespace::HandEffectContext::add_handTapUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5747d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"add_handTapUp", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::HandEffectContext*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.remove_handTapUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(::System::Action_1<::GlobalNamespace::HandEffectContext*>*)>(&::GlobalNamespace::HandEffectContext::remove_handTapUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5747e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"remove_handTapUp", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::HandEffectContext*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.OnTriggerActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::OnTriggerActions)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5747eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"OnTriggerActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.OnPlayVisualFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(int32_t, ::UnityEngine::GameObject*)>(&::GlobalNamespace::HandEffectContext::OnPlayVisualFX)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5747ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"OnPlayVisualFX", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext.OnPlaySoundFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)(::UnityEngine::AudioSource*)>(&::GlobalNamespace::HandEffectContext::OnPlaySoundFX)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x574803c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"OnPlaySoundFX", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectContext::*)()>(&::GlobalNamespace::HandEffectContext::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5748040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::HandEffectContext::__cordl_internal_get_prefabHashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabHashes;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::HandEffectContext::__cordl_internal_get_prefabHashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabHashes;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_prefabHashes(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabHashes = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HandEffectContext::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HandEffectContext::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::HandEffectContext::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::HandEffectContext::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr float_t& GlobalNamespace::HandEffectContext::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::HandEffectContext::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::HandEffectContext::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::HandEffectContext::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::HandEffectContext::__cordl_internal_get_handSoundSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSoundSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::HandEffectContext::__cordl_internal_get_handSoundSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSoundSource;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_handSoundSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handSoundSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::HandEffectContext::__cordl_internal_get_soundFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundFX;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::HandEffectContext::__cordl_internal_get_soundFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundFX;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_soundFX(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundFX = value;
}
constexpr float_t& GlobalNamespace::HandEffectContext::__cordl_internal_get_soundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundVolume;
}
constexpr float_t const& GlobalNamespace::HandEffectContext::__cordl_internal_get_soundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundVolume;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_soundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundVolume = value;
}
constexpr float_t& GlobalNamespace::HandEffectContext::__cordl_internal_get_soundPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundPitch;
}
constexpr float_t const& GlobalNamespace::HandEffectContext::__cordl_internal_get_soundPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundPitch;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_soundPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundPitch = value;
}
constexpr int32_t& GlobalNamespace::HandEffectContext::__cordl_internal_get_separateUpTapCooldownCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___separateUpTapCooldownCount;
}
constexpr int32_t const& GlobalNamespace::HandEffectContext::__cordl_internal_get_separateUpTapCooldownCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___separateUpTapCooldownCount;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_separateUpTapCooldownCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___separateUpTapCooldownCount = value;
}
constexpr ::GlobalNamespace::HandTapOverrides*& GlobalNamespace::HandEffectContext::__cordl_internal_get_defaultDownTapOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultDownTapOverrides;
}
constexpr ::GlobalNamespace::HandTapOverrides* const& GlobalNamespace::HandEffectContext::__cordl_internal_get_defaultDownTapOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultDownTapOverrides;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_defaultDownTapOverrides(::GlobalNamespace::HandTapOverrides*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultDownTapOverrides = value;
}
constexpr ::GlobalNamespace::HandTapOverrides*& GlobalNamespace::HandEffectContext::__cordl_internal_get_downTapOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downTapOverrides;
}
constexpr ::GlobalNamespace::HandTapOverrides* const& GlobalNamespace::HandEffectContext::__cordl_internal_get_downTapOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downTapOverrides;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_downTapOverrides(::GlobalNamespace::HandTapOverrides*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downTapOverrides = value;
}
constexpr ::GlobalNamespace::HandTapOverrides*& GlobalNamespace::HandEffectContext::__cordl_internal_get_defaultUpTapOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUpTapOverrides;
}
constexpr ::GlobalNamespace::HandTapOverrides* const& GlobalNamespace::HandEffectContext::__cordl_internal_get_defaultUpTapOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUpTapOverrides;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_defaultUpTapOverrides(::GlobalNamespace::HandTapOverrides*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultUpTapOverrides = value;
}
constexpr ::GlobalNamespace::HandTapOverrides*& GlobalNamespace::HandEffectContext::__cordl_internal_get_upTapOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upTapOverrides;
}
constexpr ::GlobalNamespace::HandTapOverrides* const& GlobalNamespace::HandEffectContext::__cordl_internal_get_upTapOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upTapOverrides;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_upTapOverrides(::GlobalNamespace::HandTapOverrides*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upTapOverrides = value;
}
constexpr ::System::Action_1<::GlobalNamespace::HandEffectContext*>*& GlobalNamespace::HandEffectContext::__cordl_internal_get_handTapDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapDown;
}
constexpr ::System::Action_1<::GlobalNamespace::HandEffectContext*>* const& GlobalNamespace::HandEffectContext::__cordl_internal_get_handTapDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapDown;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_handTapDown(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTapDown = value;
}
constexpr ::System::Action_1<::GlobalNamespace::HandEffectContext*>*& GlobalNamespace::HandEffectContext::__cordl_internal_get_handTapUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapUp;
}
constexpr ::System::Action_1<::GlobalNamespace::HandEffectContext*>* const& GlobalNamespace::HandEffectContext::__cordl_internal_get_handTapUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapUp;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_handTapUp(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTapUp = value;
}
constexpr bool& GlobalNamespace::HandEffectContext::__cordl_internal_get_isDownTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDownTap;
}
constexpr bool const& GlobalNamespace::HandEffectContext::__cordl_internal_get_isDownTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDownTap;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_isDownTap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDownTap = value;
}
constexpr bool& GlobalNamespace::HandEffectContext::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::HandEffectContext::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::HandEffectContext::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::HandEffectContext::get_PrefabPoolIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_PrefabPoolIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::HandEffectContext::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::HandEffectContext::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline float_t GlobalNamespace::HandEffectContext::get_Speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::HandEffectContext::get_Color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::HandEffectContext::get_SoundSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_SoundSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::HandEffectContext::get_Sound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Sound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline float_t GlobalNamespace::HandEffectContext::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::HandEffectContext::get_Pitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_Pitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectContext::AddFXPrefab(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"AddFXPrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void GlobalNamespace::HandEffectContext::RemoveFXPrefab(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"RemoveFXPrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline bool GlobalNamespace::HandEffectContext::get_SeparateUpTapCooldown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_SeparateUpTapCooldown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectContext::set_SeparateUpTapCooldown(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"set_SeparateUpTapCooldown", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HandTapOverrides* GlobalNamespace::HandEffectContext::get_DownTapOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_DownTapOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandTapOverrides*>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectContext::set_DownTapOverrides(::GlobalNamespace::HandTapOverrides*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"set_DownTapOverrides", {}, {::i2c::type_of<::GlobalNamespace::HandTapOverrides*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HandTapOverrides* GlobalNamespace::HandEffectContext::get_UpTapOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"get_UpTapOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandTapOverrides*>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectContext::set_UpTapOverrides(::GlobalNamespace::HandTapOverrides*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"set_UpTapOverrides", {}, {::i2c::type_of<::GlobalNamespace::HandTapOverrides*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HandEffectContext::add_handTapDown(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"add_handTapDown", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::HandEffectContext*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HandEffectContext::remove_handTapDown(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"remove_handTapDown", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::HandEffectContext*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HandEffectContext::add_handTapUp(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"add_handTapUp", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::HandEffectContext*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HandEffectContext::remove_handTapUp(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"remove_handTapUp", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::HandEffectContext*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HandEffectContext::OnTriggerActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"OnTriggerActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectContext::OnPlayVisualFX(int32_t  fxID, ::UnityEngine::GameObject*  fx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"OnPlayVisualFX", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fxID, fx);
}
inline void GlobalNamespace::HandEffectContext::OnPlaySoundFX(::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {"OnPlaySoundFX", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSource);
}
inline void GlobalNamespace::HandEffectContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandEffectContext* GlobalNamespace::HandEffectContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandEffectContext*>());
}
/// @brief Convert operator to "::GlobalNamespace::IFXEffectContextObject"
constexpr  GlobalNamespace::HandEffectContext::operator ::GlobalNamespace::IFXEffectContextObject*() noexcept {
return static_cast<::GlobalNamespace::IFXEffectContextObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFXEffectContextObject"
constexpr ::GlobalNamespace::IFXEffectContextObject* GlobalNamespace::HandEffectContext::i___GlobalNamespace__IFXEffectContextObject() noexcept {
return static_cast<::GlobalNamespace::IFXEffectContextObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandEffectContext::HandEffectContext()   {
}
