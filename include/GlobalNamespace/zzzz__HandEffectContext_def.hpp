#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandEffectContext)
namespace GlobalNamespace {
class HandTapOverrides;
}
namespace GlobalNamespace {
class IFXEffectContextObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HandEffectContext;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandEffectContext*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandEffectContext*, "", "HandEffectContext");
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandEffectContext
class CORDL_TYPE HandEffectContext : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_DownTapOverrides, put=set_DownTapOverrides)) ::GlobalNamespace::HandTapOverrides*  DownTapOverrides;

 __declspec(property(get=get_Pitch)) float_t  Pitch;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_PrefabPoolIds)) ::System::Collections::Generic::List_1<int32_t>*  PrefabPoolIds;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_SeparateUpTapCooldown, put=set_SeparateUpTapCooldown)) bool  SeparateUpTapCooldown;

 __declspec(property(get=get_Sound)) ::UnityW<::UnityEngine::AudioClip>  Sound;

 __declspec(property(get=get_SoundSource)) ::UnityW<::UnityEngine::AudioSource>  SoundSource;

 __declspec(property(get=get_Speed)) float_t  Speed;

 __declspec(property(get=get_UpTapOverrides, put=set_UpTapOverrides)) ::GlobalNamespace::HandTapOverrides*  UpTapOverrides;

 __declspec(property(get=get_Volume)) float_t  Volume;

/// @brief Field color, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field defaultDownTapOverrides, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultDownTapOverrides, put=__cordl_internal_set_defaultDownTapOverrides)) ::GlobalNamespace::HandTapOverrides*  defaultDownTapOverrides;

/// @brief Field defaultUpTapOverrides, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultUpTapOverrides, put=__cordl_internal_set_defaultUpTapOverrides)) ::GlobalNamespace::HandTapOverrides*  defaultUpTapOverrides;

/// @brief Field downTapOverrides, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_downTapOverrides, put=__cordl_internal_set_downTapOverrides)) ::GlobalNamespace::HandTapOverrides*  downTapOverrides;

/// @brief Field handSoundSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_handSoundSource, put=__cordl_internal_set_handSoundSource)) ::UnityW<::UnityEngine::AudioSource>  handSoundSource;

/// @brief Field handTapDown, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTapDown, put=__cordl_internal_set_handTapDown)) ::System::Action_1<::GlobalNamespace::HandEffectContext*>*  handTapDown;

/// @brief Field handTapUp, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTapUp, put=__cordl_internal_set_handTapUp)) ::System::Action_1<::GlobalNamespace::HandEffectContext*>*  handTapUp;

/// @brief Field isDownTap, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDownTap, put=__cordl_internal_set_isDownTap)) bool  isDownTap;

/// @brief Field isLeftHand, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field position, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field prefabHashes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabHashes, put=__cordl_internal_set_prefabHashes)) ::System::Collections::Generic::List_1<int32_t>*  prefabHashes;

/// @brief Field rotation, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field separateUpTapCooldownCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_separateUpTapCooldownCount, put=__cordl_internal_set_separateUpTapCooldownCount)) int32_t  separateUpTapCooldownCount;

/// @brief Field soundFX, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundFX, put=__cordl_internal_set_soundFX)) ::UnityW<::UnityEngine::AudioClip>  soundFX;

/// @brief Field soundPitch, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundPitch, put=__cordl_internal_set_soundPitch)) float_t  soundPitch;

/// @brief Field soundVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundVolume, put=__cordl_internal_set_soundVolume)) float_t  soundVolume;

/// @brief Field speed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field upTapOverrides, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_upTapOverrides, put=__cordl_internal_set_upTapOverrides)) ::GlobalNamespace::HandTapOverrides*  upTapOverrides;

/// @brief Convert operator to "::GlobalNamespace::IFXEffectContextObject"
constexpr operator  ::GlobalNamespace::IFXEffectContextObject*() noexcept;

/// @brief Method AddFXPrefab, addr 0x5747a44, size 0xa4, virtual false, abstract: false, final false
inline void AddFXPrefab(int32_t  hash) ;

static inline ::GlobalNamespace::HandEffectContext* New_ctor() ;

/// @brief Method OnPlaySoundFX, addr 0x574803c, size 0x4, virtual true, abstract: false, final true
inline void OnPlaySoundFX(::UnityEngine::AudioSource*  audioSource) ;

/// @brief Method OnPlayVisualFX, addr 0x5747ee8, size 0x154, virtual true, abstract: false, final true
inline void OnPlayVisualFX(int32_t  fxID, ::UnityEngine::GameObject*  fx) ;

/// @brief Method OnTriggerActions, addr 0x5747eb8, size 0x30, virtual true, abstract: false, final true
inline void OnTriggerActions() ;

/// @brief Method RemoveFXPrefab, addr 0x5747ae8, size 0x98, virtual false, abstract: false, final false
inline void RemoveFXPrefab(int32_t  hash) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::GlobalNamespace::HandTapOverrides* const& __cordl_internal_get_defaultDownTapOverrides() const;

constexpr ::GlobalNamespace::HandTapOverrides*& __cordl_internal_get_defaultDownTapOverrides() ;

constexpr ::GlobalNamespace::HandTapOverrides* const& __cordl_internal_get_defaultUpTapOverrides() const;

constexpr ::GlobalNamespace::HandTapOverrides*& __cordl_internal_get_defaultUpTapOverrides() ;

constexpr ::GlobalNamespace::HandTapOverrides* const& __cordl_internal_get_downTapOverrides() const;

constexpr ::GlobalNamespace::HandTapOverrides*& __cordl_internal_get_downTapOverrides() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_handSoundSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_handSoundSource() ;

constexpr ::System::Action_1<::GlobalNamespace::HandEffectContext*>* const& __cordl_internal_get_handTapDown() const;

constexpr ::System::Action_1<::GlobalNamespace::HandEffectContext*>*& __cordl_internal_get_handTapDown() ;

constexpr ::System::Action_1<::GlobalNamespace::HandEffectContext*>* const& __cordl_internal_get_handTapUp() const;

constexpr ::System::Action_1<::GlobalNamespace::HandEffectContext*>*& __cordl_internal_get_handTapUp() ;

constexpr bool const& __cordl_internal_get_isDownTap() const;

constexpr bool& __cordl_internal_get_isDownTap() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_prefabHashes() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_prefabHashes() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr int32_t const& __cordl_internal_get_separateUpTapCooldownCount() const;

constexpr int32_t& __cordl_internal_get_separateUpTapCooldownCount() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_soundFX() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_soundFX() ;

constexpr float_t const& __cordl_internal_get_soundPitch() const;

constexpr float_t& __cordl_internal_get_soundPitch() ;

constexpr float_t const& __cordl_internal_get_soundVolume() const;

constexpr float_t& __cordl_internal_get_soundVolume() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::GlobalNamespace::HandTapOverrides* const& __cordl_internal_get_upTapOverrides() const;

constexpr ::GlobalNamespace::HandTapOverrides*& __cordl_internal_get_upTapOverrides() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_defaultDownTapOverrides(::GlobalNamespace::HandTapOverrides*  value) ;

constexpr void __cordl_internal_set_defaultUpTapOverrides(::GlobalNamespace::HandTapOverrides*  value) ;

constexpr void __cordl_internal_set_downTapOverrides(::GlobalNamespace::HandTapOverrides*  value) ;

constexpr void __cordl_internal_set_handSoundSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_handTapDown(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value) ;

constexpr void __cordl_internal_set_handTapUp(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value) ;

constexpr void __cordl_internal_set_isDownTap(bool  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_prefabHashes(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_separateUpTapCooldownCount(int32_t  value) ;

constexpr void __cordl_internal_set_soundFX(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_soundPitch(float_t  value) ;

constexpr void __cordl_internal_set_soundVolume(float_t  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_upTapOverrides(::GlobalNamespace::HandTapOverrides*  value) ;

/// @brief Method .ctor, addr 0x5748040, size 0x168, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_handTapDown, addr 0x5747bf8, size 0xb0, virtual false, abstract: false, final false
inline void add_handTapDown(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_handTapUp, addr 0x5747d58, size 0xb0, virtual false, abstract: false, final false
inline void add_handTapUp(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value) ;

/// @brief Method get_Color, addr 0x5747a18, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_DownTapOverrides, addr 0x5747bb8, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandTapOverrides* get_DownTapOverrides() ;

/// @brief Method get_Pitch, addr 0x5747a3c, size 0x8, virtual true, abstract: false, final true
inline float_t get_Pitch() ;

/// @brief Method get_Position, addr 0x57479f8, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_PrefabPoolIds, addr 0x57479f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<int32_t>* get_PrefabPoolIds() ;

/// @brief Method get_Rotation, addr 0x5747a04, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_SeparateUpTapCooldown, addr 0x5747b80, size 0x10, virtual false, abstract: false, final false
inline bool get_SeparateUpTapCooldown() ;

/// @brief Method get_Sound, addr 0x5747a2c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::AudioClip> get_Sound() ;

/// @brief Method get_SoundSource, addr 0x5747a24, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::AudioSource> get_SoundSource() ;

/// @brief Method get_Speed, addr 0x5747a10, size 0x8, virtual false, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Method get_UpTapOverrides, addr 0x5747bd8, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandTapOverrides* get_UpTapOverrides() ;

/// @brief Method get_Volume, addr 0x5747a34, size 0x8, virtual true, abstract: false, final true
inline float_t get_Volume() ;

/// @brief Convert to "::GlobalNamespace::IFXEffectContextObject"
constexpr ::GlobalNamespace::IFXEffectContextObject* i___GlobalNamespace__IFXEffectContextObject() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_handTapDown, addr 0x5747ca8, size 0xb0, virtual false, abstract: false, final false
inline void remove_handTapDown(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_handTapUp, addr 0x5747e08, size 0xb0, virtual false, abstract: false, final false
inline void remove_handTapUp(::System::Action_1<::GlobalNamespace::HandEffectContext*>*  value) ;

/// @brief Method set_DownTapOverrides, addr 0x5747bd0, size 0x8, virtual false, abstract: false, final false
inline void set_DownTapOverrides(::GlobalNamespace::HandTapOverrides*  value) ;

/// @brief Method set_SeparateUpTapCooldown, addr 0x5747b90, size 0x28, virtual false, abstract: false, final false
inline void set_SeparateUpTapCooldown(bool  value) ;

/// @brief Method set_UpTapOverrides, addr 0x5747bf0, size 0x8, virtual false, abstract: false, final false
inline void set_UpTapOverrides(::GlobalNamespace::HandTapOverrides*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandEffectContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandEffectContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandEffectContext(HandEffectContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandEffectContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandEffectContext(HandEffectContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1278};

/// @brief Field prefabHashes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___prefabHashes;

/// @brief Field position, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field rotation, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

/// @brief Field speed, offset: 0x34, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field color, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// [SerializeField]
/// @brief Field handSoundSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___handSoundSource;

/// @brief Field soundFX, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___soundFX;

/// @brief Field soundVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ___soundVolume;

/// @brief Field soundPitch, offset: 0x5c, size: 0x4, def value: None
 float_t  ___soundPitch;

/// @brief Field separateUpTapCooldownCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ___separateUpTapCooldownCount;

/// [SerializeField]
/// @brief Field defaultDownTapOverrides, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::HandTapOverrides*  ___defaultDownTapOverrides;

/// @brief Field downTapOverrides, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::HandTapOverrides*  ___downTapOverrides;

/// [SerializeField]
/// @brief Field defaultUpTapOverrides, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::HandTapOverrides*  ___defaultUpTapOverrides;

/// @brief Field upTapOverrides, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::HandTapOverrides*  ___upTapOverrides;

/// [CompilerGenerated]
/// @brief Field handTapDown, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::HandEffectContext*>*  ___handTapDown;

/// [CompilerGenerated]
/// @brief Field handTapUp, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::HandEffectContext*>*  ___handTapUp;

/// @brief Field isDownTap, offset: 0x98, size: 0x1, def value: None
 bool  ___isDownTap;

/// @brief Field isLeftHand, offset: 0x99, size: 0x1, def value: None
 bool  ___isLeftHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___prefabHashes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___rotation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___speed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___color) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___handSoundSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___soundFX) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___soundVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___soundPitch) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___separateUpTapCooldownCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___defaultDownTapOverrides) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___downTapOverrides) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___defaultUpTapOverrides) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___upTapOverrides) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___handTapDown) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___handTapUp) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___isDownTap) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectContext, ___isLeftHand) == 0x99, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandEffectContext) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
