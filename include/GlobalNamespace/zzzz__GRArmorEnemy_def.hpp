#pragma once
// IWYU pragma private; include "GlobalNamespace/GRArmorEnemy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRArmorEnemy)
namespace GlobalNamespace {
struct GRArmorEnemy_GREnemyArmorLevel;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRArmorEnemy;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRArmorEnemy*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRArmorEnemy*, "", "GRArmorEnemy");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRArmorEnemy
class CORDL_TYPE GRArmorEnemy : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GREnemyArmorLevel = ::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel;

/// @brief Field armorFragmentPrefab, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_armorFragmentPrefab, put=__cordl_internal_set_armorFragmentPrefab)) ::UnityW<::UnityEngine::GameObject>  armorFragmentPrefab;

/// @brief Field armorStateData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_armorStateData, put=__cordl_internal_set_armorStateData)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel>*  armorStateData;

/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field blockSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockSound, put=__cordl_internal_set_blockSound)) ::UnityW<::UnityEngine::AudioClip>  blockSound;

/// @brief Field blockSoundVolume, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockSoundVolume, put=__cordl_internal_set_blockSoundVolume)) float_t  blockSoundVolume;

/// @brief Field destroySound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_destroySound, put=__cordl_internal_set_destroySound)) ::UnityW<::UnityEngine::AudioClip>  destroySound;

/// @brief Field destroySoundVolume, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroySoundVolume, put=__cordl_internal_set_destroySoundVolume)) float_t  destroySoundVolume;

/// @brief Field entity, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field fragmentLaunchPitch, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_fragmentLaunchPitch, put=__cordl_internal_set_fragmentLaunchPitch)) float_t  fragmentLaunchPitch;

/// @brief Field fragmentSpawnOffset, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_fragmentSpawnOffset, put=__cordl_internal_set_fragmentSpawnOffset)) ::UnityEngine::Vector3  fragmentSpawnOffset;

/// @brief Field fxBlock, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxBlock, put=__cordl_internal_set_fxBlock)) ::UnityW<::UnityEngine::GameObject>  fxBlock;

/// @brief Field fxDestroy, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxDestroy, put=__cordl_internal_set_fxDestroy)) ::UnityW<::UnityEngine::GameObject>  fxDestroy;

/// @brief Field fxHit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxHit, put=__cordl_internal_set_fxHit)) ::UnityW<::UnityEngine::GameObject>  fxHit;

/// @brief Field hitSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitSound, put=__cordl_internal_set_hitSound)) ::UnityW<::UnityEngine::AudioClip>  hitSound;

/// @brief Field hitSoundVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitSoundVolume, put=__cordl_internal_set_hitSoundVolume)) float_t  hitSoundVolume;

/// @brief Field hp, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_hp, put=__cordl_internal_set_hp)) int32_t  hp;

/// @brief Field materialSwapRenderer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialSwapRenderer, put=__cordl_internal_set_materialSwapRenderer)) ::UnityW<::UnityEngine::Renderer>  materialSwapRenderer;

/// @brief Field numFragmentsWhenShattered, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_numFragmentsWhenShattered, put=__cordl_internal_set_numFragmentsWhenShattered)) int32_t  numFragmentsWhenShattered;

/// @brief Field renderers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers;

/// @brief Field visibleObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_visibleObjects, put=__cordl_internal_set_visibleObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  visibleObjects;

/// @brief Method Awake, addr 0x586ff28, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FragmentArmor, addr 0x5870550, size 0x188, virtual false, abstract: false, final false
inline void FragmentArmor() ;

/// @brief Method GetArmorColor, addr 0x5870284, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetArmorColor() ;

static inline ::GlobalNamespace::GRArmorEnemy* New_ctor() ;

/// @brief Method PlayBlockFx, addr 0x587052c, size 0x24, virtual false, abstract: false, final false
inline void PlayBlockFx(::UnityEngine::Vector3  position) ;

/// @brief Method PlayDestroyFx, addr 0x5870400, size 0x24, virtual false, abstract: false, final false
inline void PlayDestroyFx(::UnityEngine::Vector3  position) ;

/// @brief Method PlayFx, addr 0x5870448, size 0x94, virtual false, abstract: false, final false
inline void PlayFx(::UnityEngine::GameObject*  fx, ::UnityEngine::Vector3  position) ;

/// @brief Method PlayHitFx, addr 0x5870424, size 0x24, virtual false, abstract: false, final false
inline void PlayHitFx(::UnityEngine::Vector3  position) ;

/// @brief Method PlaySound, addr 0x58704dc, size 0x50, virtual false, abstract: false, final false
inline void PlaySound(::UnityEngine::AudioClip*  clip, float_t  volume, ::UnityEngine::Vector3  position) ;

/// @brief Method RefreshArmor, addr 0x586ff94, size 0x2f0, virtual false, abstract: false, final false
inline void RefreshArmor() ;

/// @brief Method SetArmorColor, addr 0x587033c, size 0xc4, virtual false, abstract: false, final false
inline void SetArmorColor(::UnityEngine::Color  newColor) ;

/// @brief Method SetHp, addr 0x586ff8c, size 0x8, virtual false, abstract: false, final false
inline void SetHp(int32_t  hp) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_armorFragmentPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_armorFragmentPrefab() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel>* const& __cordl_internal_get_armorStateData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel>*& __cordl_internal_get_armorStateData() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_blockSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_blockSound() ;

constexpr float_t const& __cordl_internal_get_blockSoundVolume() const;

constexpr float_t& __cordl_internal_get_blockSoundVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_destroySound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_destroySound() ;

constexpr float_t const& __cordl_internal_get_destroySoundVolume() const;

constexpr float_t& __cordl_internal_get_destroySoundVolume() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr float_t const& __cordl_internal_get_fragmentLaunchPitch() const;

constexpr float_t& __cordl_internal_get_fragmentLaunchPitch() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_fragmentSpawnOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_fragmentSpawnOffset() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxBlock() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxBlock() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxDestroy() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxDestroy() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxHit() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxHit() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_hitSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_hitSound() ;

constexpr float_t const& __cordl_internal_get_hitSoundVolume() const;

constexpr float_t& __cordl_internal_get_hitSoundVolume() ;

constexpr int32_t const& __cordl_internal_get_hp() const;

constexpr int32_t& __cordl_internal_get_hp() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_materialSwapRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_materialSwapRenderer() ;

constexpr int32_t const& __cordl_internal_get_numFragmentsWhenShattered() const;

constexpr int32_t& __cordl_internal_get_numFragmentsWhenShattered() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_renderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_renderers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_visibleObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_visibleObjects() ;

constexpr void __cordl_internal_set_armorFragmentPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_armorStateData(::System::Collections::Generic::List_1<::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel>*  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_blockSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_blockSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_destroySound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_destroySoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_fragmentLaunchPitch(float_t  value) ;

constexpr void __cordl_internal_set_fragmentSpawnOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_fxBlock(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fxDestroy(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fxHit(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hitSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_hitSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_hp(int32_t  value) ;

constexpr void __cordl_internal_set_materialSwapRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_numFragmentsWhenShattered(int32_t  value) ;

constexpr void __cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_visibleObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x58706d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRArmorEnemy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRArmorEnemy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRArmorEnemy(GRArmorEnemy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRArmorEnemy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRArmorEnemy(GRArmorEnemy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1879};

/// [SerializeField]
/// @brief Field renderers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___renderers;

/// [SerializeField]
/// @brief Field visibleObjects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___visibleObjects;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field fxHit, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxHit;

/// [SerializeField]
/// @brief Field hitSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___hitSound;

/// [SerializeField]
/// @brief Field hitSoundVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___hitSoundVolume;

/// [SerializeField]
/// @brief Field fxBlock, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxBlock;

/// [SerializeField]
/// @brief Field blockSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___blockSound;

/// [SerializeField]
/// @brief Field blockSoundVolume, offset: 0x60, size: 0x4, def value: None
 float_t  ___blockSoundVolume;

/// [SerializeField]
/// @brief Field fxDestroy, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxDestroy;

/// [SerializeField]
/// @brief Field destroySound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___destroySound;

/// [SerializeField]
/// @brief Field destroySoundVolume, offset: 0x78, size: 0x4, def value: None
 float_t  ___destroySoundVolume;

/// [SerializeField]
/// @brief Field armorStateData, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel>*  ___armorStateData;

/// [SerializeField]
/// @brief Field materialSwapRenderer, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___materialSwapRenderer;

/// @brief Field entity, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field armorFragmentPrefab, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___armorFragmentPrefab;

/// @brief Field fragmentSpawnOffset, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___fragmentSpawnOffset;

/// @brief Field numFragmentsWhenShattered, offset: 0xac, size: 0x4, def value: None
 int32_t  ___numFragmentsWhenShattered;

/// @brief Field fragmentLaunchPitch, offset: 0xb0, size: 0x4, def value: None
 float_t  ___fragmentLaunchPitch;

/// @brief Field hp, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___hp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___renderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___visibleObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___fxHit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___hitSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___hitSoundVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___fxBlock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___blockSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___blockSoundVolume) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___fxDestroy) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___destroySound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___destroySoundVolume) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___armorStateData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___materialSwapRenderer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___entity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___armorFragmentPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___fragmentSpawnOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___numFragmentsWhenShattered) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___fragmentLaunchPitch) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy, ___hp) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRArmorEnemy) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
