#pragma once
// IWYU pragma private; include "GlobalNamespace/GRArmorEnemy.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRArmorEnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRArmorEnemy_GREnemyArmorLevel_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)()>(&::GlobalNamespace::GRArmorEnemy::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x586ff28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.SetHp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)(int32_t)>(&::GlobalNamespace::GRArmorEnemy::SetHp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586ff8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"SetHp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.RefreshArmor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)()>(&::GlobalNamespace::GRArmorEnemy::RefreshArmor)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x586ff94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"RefreshArmor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.SetArmorColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)(::UnityEngine::Color)>(&::GlobalNamespace::GRArmorEnemy::SetArmorColor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x587033c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"SetArmorColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.GetArmorColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::GRArmorEnemy::*)()>(&::GlobalNamespace::GRArmorEnemy::GetArmorColor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5870284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"GetArmorColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.PlayHitFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRArmorEnemy::PlayHitFx)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5870424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlayHitFx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.PlayBlockFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRArmorEnemy::PlayBlockFx)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x587052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlayBlockFx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.PlayDestroyFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRArmorEnemy::PlayDestroyFx)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5870400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlayDestroyFx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.PlayFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GRArmorEnemy::PlayFx)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5870448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlayFx", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.PlaySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)(::UnityEngine::AudioClip*, float_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::GRArmorEnemy::PlaySound)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58704dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlaySound", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy.FragmentArmor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)()>(&::GlobalNamespace::GRArmorEnemy::FragmentArmor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5870550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"FragmentArmor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRArmorEnemy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRArmorEnemy::*)()>(&::GlobalNamespace::GRArmorEnemy::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58706d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_visibleObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_visibleObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleObjects;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_visibleObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleObjects = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fxHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxHit;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fxHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxHit;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_fxHit(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxHit = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_hitSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_hitSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSound;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_hitSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSound = value;
}
constexpr float_t& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_hitSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_hitSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundVolume;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_hitSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fxBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxBlock;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fxBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxBlock;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_fxBlock(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxBlock = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_blockSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_blockSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSound;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_blockSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockSound = value;
}
constexpr float_t& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_blockSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_blockSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSoundVolume;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_blockSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fxDestroy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDestroy;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fxDestroy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDestroy;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_fxDestroy(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxDestroy = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_destroySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroySound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_destroySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroySound;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_destroySound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroySound = value;
}
constexpr float_t& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_destroySoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroySoundVolume;
}
constexpr float_t const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_destroySoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroySoundVolume;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_destroySoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroySoundVolume = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel>*& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_armorStateData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armorStateData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel>* const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_armorStateData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armorStateData;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_armorStateData(::System::Collections::Generic::List_1<::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armorStateData = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_materialSwapRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialSwapRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_materialSwapRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialSwapRenderer;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_materialSwapRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialSwapRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_armorFragmentPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armorFragmentPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_armorFragmentPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armorFragmentPrefab;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_armorFragmentPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armorFragmentPrefab = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fragmentSpawnOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentSpawnOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fragmentSpawnOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentSpawnOffset;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_fragmentSpawnOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentSpawnOffset = value;
}
constexpr int32_t& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_numFragmentsWhenShattered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numFragmentsWhenShattered;
}
constexpr int32_t const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_numFragmentsWhenShattered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numFragmentsWhenShattered;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_numFragmentsWhenShattered(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numFragmentsWhenShattered = value;
}
constexpr float_t& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fragmentLaunchPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentLaunchPitch;
}
constexpr float_t const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_fragmentLaunchPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentLaunchPitch;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_fragmentLaunchPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentLaunchPitch = value;
}
constexpr int32_t& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_hp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr int32_t const& GlobalNamespace::GRArmorEnemy::__cordl_internal_get_hp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr void GlobalNamespace::GRArmorEnemy::__cordl_internal_set_hp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hp = value;
}
inline void GlobalNamespace::GRArmorEnemy::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRArmorEnemy::SetHp(int32_t  hp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"SetHp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hp);
}
inline void GlobalNamespace::GRArmorEnemy::RefreshArmor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"RefreshArmor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRArmorEnemy::SetArmorColor(::UnityEngine::Color  newColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"SetArmorColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newColor);
}
inline ::UnityEngine::Color GlobalNamespace::GRArmorEnemy::GetArmorColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"GetArmorColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::GRArmorEnemy::PlayHitFx(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlayHitFx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void GlobalNamespace::GRArmorEnemy::PlayBlockFx(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlayBlockFx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void GlobalNamespace::GRArmorEnemy::PlayDestroyFx(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlayDestroyFx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void GlobalNamespace::GRArmorEnemy::PlayFx(::UnityEngine::GameObject*  fx, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlayFx", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fx, position);
}
inline void GlobalNamespace::GRArmorEnemy::PlaySound(::UnityEngine::AudioClip*  clip, float_t  volume, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"PlaySound", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, volume, position);
}
inline void GlobalNamespace::GRArmorEnemy::FragmentArmor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {"FragmentArmor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRArmorEnemy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRArmorEnemy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRArmorEnemy* GlobalNamespace::GRArmorEnemy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRArmorEnemy*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRArmorEnemy::GRArmorEnemy()   {
}
