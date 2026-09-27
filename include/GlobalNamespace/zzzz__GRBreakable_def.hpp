#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBreakable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRBreakable)
namespace GlobalNamespace {
class GRBreakableItemSpawnConfig;
}
namespace GlobalNamespace {
struct GRBreakable_BreakableState;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
class IGameHittable;
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
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRBreakable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBreakable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBreakable*, "", "GRBreakable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBreakable
class CORDL_TYPE GRBreakable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BreakableState = ::GlobalNamespace::GRBreakable_BreakableState;

 __declspec(property(get=get_BrokenLocal)) bool  BrokenLocal;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field breakSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_breakSound, put=__cordl_internal_set_breakSound)) ::UnityW<::UnityEngine::AudioClip>  breakSound;

/// @brief Field breakSoundVolume, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_breakSoundVolume, put=__cordl_internal_set_breakSoundVolume)) float_t  breakSoundVolume;

/// @brief Field breakableCollider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_breakableCollider, put=__cordl_internal_set_breakableCollider)) ::UnityW<::UnityEngine::Collider>  breakableCollider;

/// @brief Field brokenLocal, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_brokenLocal, put=__cordl_internal_set_brokenLocal)) bool  brokenLocal;

/// @brief Field disableWhenBroken, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableWhenBroken, put=__cordl_internal_set_disableWhenBroken)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  disableWhenBroken;

/// @brief Field enableWhenBroken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableWhenBroken, put=__cordl_internal_set_enableWhenBroken)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  enableWhenBroken;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field holdsRandomItem, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_holdsRandomItem, put=__cordl_internal_set_holdsRandomItem)) bool  holdsRandomItem;

/// @brief Field itemSpawnLocation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemSpawnLocation, put=__cordl_internal_set_itemSpawnLocation)) ::UnityW<::UnityEngine::Transform>  itemSpawnLocation;

/// @brief Field itemSpawnProbability, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemSpawnProbability, put=__cordl_internal_set_itemSpawnProbability)) ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  itemSpawnProbability;

/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr operator  ::GlobalNamespace::IGameHittable*() noexcept;

/// @brief Method BreakLocal, addr 0x5873e30, size 0x290, virtual false, abstract: false, final false
inline void BreakLocal() ;

/// @brief Method IsHitValid, addr 0x5874208, size 0x20, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

static inline ::GlobalNamespace::GRBreakable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5873d48, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5873cb8, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityStateChanged, addr 0x5873e18, size 0x18, virtual false, abstract: false, final false
inline void OnEntityStateChanged(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnHit, addr 0x5874228, size 0xfc, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method RestoreLocal, addr 0x58740c0, size 0x148, virtual false, abstract: false, final false
inline void RestoreLocal() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_breakSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_breakSound() ;

constexpr float_t const& __cordl_internal_get_breakSoundVolume() const;

constexpr float_t& __cordl_internal_get_breakSoundVolume() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_breakableCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_breakableCollider() ;

constexpr bool const& __cordl_internal_get_brokenLocal() const;

constexpr bool& __cordl_internal_get_brokenLocal() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_disableWhenBroken() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_disableWhenBroken() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_enableWhenBroken() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_enableWhenBroken() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr bool const& __cordl_internal_get_holdsRandomItem() const;

constexpr bool& __cordl_internal_get_holdsRandomItem() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_itemSpawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_itemSpawnLocation() ;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& __cordl_internal_get_itemSpawnProbability() const;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& __cordl_internal_get_itemSpawnProbability() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_breakSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_breakSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_breakableCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_brokenLocal(bool  value) ;

constexpr void __cordl_internal_set_disableWhenBroken(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_enableWhenBroken(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_holdsRandomItem(bool  value) ;

constexpr void __cordl_internal_set_itemSpawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_itemSpawnProbability(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value) ;

/// @brief Method .ctor, addr 0x5874324, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BrokenLocal, addr 0x5873cb0, size 0x8, virtual false, abstract: false, final false
inline bool get_BrokenLocal() ;

/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* i___GlobalNamespace__IGameHittable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBreakable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBreakable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBreakable(GRBreakable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBreakable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBreakable(GRBreakable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1895};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field enableWhenBroken, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___enableWhenBroken;

/// @brief Field disableWhenBroken, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___disableWhenBroken;

/// @brief Field breakableCollider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___breakableCollider;

/// @brief Field holdsRandomItem, offset: 0x40, size: 0x1, def value: None
 bool  ___holdsRandomItem;

/// @brief Field itemSpawnLocation, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___itemSpawnLocation;

/// @brief Field itemSpawnProbability, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  ___itemSpawnProbability;

/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field breakSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___breakSound;

/// @brief Field breakSoundVolume, offset: 0x68, size: 0x4, def value: None
 float_t  ___breakSoundVolume;

/// @brief Field brokenLocal, offset: 0x6c, size: 0x1, def value: None
 bool  ___brokenLocal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBreakable, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___enableWhenBroken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___disableWhenBroken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___breakableCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___holdsRandomItem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___itemSpawnLocation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___itemSpawnProbability) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___breakSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___breakSoundVolume) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakable, ___brokenLocal) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBreakable) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
