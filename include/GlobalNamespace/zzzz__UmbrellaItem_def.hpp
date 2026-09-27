#pragma once
// IWYU pragma private; include "GlobalNamespace/UmbrellaItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__UmbrellaItem_UmbrellaStates_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UmbrellaItem)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
struct UmbrellaItem_UmbrellaStates;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class UmbrellaItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UmbrellaItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UmbrellaItem*, "", "UmbrellaItem");
// Dependencies TransferrableObject, UmbrellaItem::UmbrellaStates, UnityEngine.GameObject, UnityEngine.ParticleSystem, UnityEngine.Quaternion, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: UmbrellaItem
class CORDL_TYPE UmbrellaItem : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using UmbrellaStates = ::GlobalNamespace::UmbrellaItem_UmbrellaStates;

/// @brief Field SoundIdClose, offset 0x37c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SoundIdClose, put=__cordl_internal_set_SoundIdClose)) int32_t  SoundIdClose;

/// @brief Field SoundIdOpen, offset 0x378, size 0x4 
 __declspec(property(get=__cordl_internal_get_SoundIdOpen, put=__cordl_internal_set_SoundIdOpen)) int32_t  SoundIdOpen;

/// @brief Field endingAngles, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_endingAngles, put=__cordl_internal_set_endingAngles)) ::ArrayW<::UnityEngine::Quaternion>  endingAngles;

/// @brief Field gameObjectsActivatedOnOpen, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjectsActivatedOnOpen, put=__cordl_internal_set_gameObjectsActivatedOnOpen)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjectsActivatedOnOpen;

/// @brief Field lerpValue, offset 0x358, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValue, put=__cordl_internal_set_lerpValue)) float_t  lerpValue;

/// @brief Field particlesEmitOnOpen, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_particlesEmitOnOpen, put=__cordl_internal_set_particlesEmitOnOpen)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  particlesEmitOnOpen;

/// @brief Field previousUmbrellaState, offset 0x380, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousUmbrellaState, put=__cordl_internal_set_previousUmbrellaState)) ::GlobalNamespace::UmbrellaItem_UmbrellaStates  previousUmbrellaState;

/// @brief Field startingAngles, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingAngles, put=__cordl_internal_set_startingAngles)) ::ArrayW<::UnityEngine::Quaternion>  startingAngles;

/// @brief Field umbrellaBones, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_umbrellaBones, put=__cordl_internal_set_umbrellaBones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  umbrellaBones;

/// @brief Field umbrellaRainDestroyTrigger, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_umbrellaRainDestroyTrigger, put=__cordl_internal_set_umbrellaRainDestroyTrigger)) ::UnityW<::UnityEngine::Collider>  umbrellaRainDestroyTrigger;

/// @brief Field umbrellaToCopy, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_umbrellaToCopy, put=__cordl_internal_set_umbrellaToCopy)) ::UnityW<::GlobalNamespace::UmbrellaItem>  umbrellaToCopy;

/// @brief Method CanActivate, addr 0x5773bfc, size 0x8, virtual true, abstract: false, final false
inline bool CanActivate() ;

/// @brief Method CanDeactivate, addr 0x5773c04, size 0x8, virtual true, abstract: false, final false
inline bool CanDeactivate() ;

/// @brief Method GenerateAngles, addr 0x5773ab0, size 0x14c, virtual false, abstract: false, final false
inline void GenerateAngles() ;

/// @brief Method LateUpdateShared, addr 0x5773878, size 0x70, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::UmbrellaItem* New_ctor() ;

/// @brief Method OnActivate, addr 0x57734b0, size 0x204, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDisable, addr 0x57736d8, size 0x94, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57736b4, size 0x24, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRelease, addr 0x577381c, size 0x5c, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnUmbrellaStateChanged, addr 0x57738e8, size 0x108, virtual true, abstract: false, final false
inline void OnUmbrellaStateChanged() ;

/// @brief Method ResetToDefaultState, addr 0x577376c, size 0xb0, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

/// @brief Method Start, addr 0x57734a4, size 0xc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateAngles, addr 0x57739f0, size 0xc0, virtual true, abstract: false, final false
inline void UpdateAngles(::ArrayW<::UnityEngine::Quaternion>  toAngles, float_t  t) ;

constexpr int32_t const& __cordl_internal_get_SoundIdClose() const;

constexpr int32_t& __cordl_internal_get_SoundIdClose() ;

constexpr int32_t const& __cordl_internal_get_SoundIdOpen() const;

constexpr int32_t& __cordl_internal_get_SoundIdOpen() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get_endingAngles() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get_endingAngles() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjectsActivatedOnOpen() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjectsActivatedOnOpen() ;

constexpr float_t const& __cordl_internal_get_lerpValue() const;

constexpr float_t& __cordl_internal_get_lerpValue() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_particlesEmitOnOpen() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_particlesEmitOnOpen() ;

constexpr ::GlobalNamespace::UmbrellaItem_UmbrellaStates const& __cordl_internal_get_previousUmbrellaState() const;

constexpr ::GlobalNamespace::UmbrellaItem_UmbrellaStates& __cordl_internal_get_previousUmbrellaState() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get_startingAngles() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get_startingAngles() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_umbrellaBones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_umbrellaBones() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_umbrellaRainDestroyTrigger() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_umbrellaRainDestroyTrigger() ;

constexpr ::UnityW<::GlobalNamespace::UmbrellaItem> const& __cordl_internal_get_umbrellaToCopy() const;

constexpr ::UnityW<::GlobalNamespace::UmbrellaItem>& __cordl_internal_get_umbrellaToCopy() ;

constexpr void __cordl_internal_set_SoundIdClose(int32_t  value) ;

constexpr void __cordl_internal_set_SoundIdOpen(int32_t  value) ;

constexpr void __cordl_internal_set_endingAngles(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_gameObjectsActivatedOnOpen(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_lerpValue(float_t  value) ;

constexpr void __cordl_internal_set_particlesEmitOnOpen(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_previousUmbrellaState(::GlobalNamespace::UmbrellaItem_UmbrellaStates  value) ;

constexpr void __cordl_internal_set_startingAngles(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_umbrellaBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_umbrellaRainDestroyTrigger(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_umbrellaToCopy(::UnityW<::GlobalNamespace::UmbrellaItem>  value) ;

/// @brief Method .ctor, addr 0x5773c0c, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UmbrellaItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UmbrellaItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UmbrellaItem(UmbrellaItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UmbrellaItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UmbrellaItem(UmbrellaItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1372};

/// [AssignInCorePrefab]
/// @brief Field umbrellaBones, offset: 0x338, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___umbrellaBones;

/// [AssignInCorePrefab]
/// @brief Field startingAngles, offset: 0x340, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ___startingAngles;

/// [AssignInCorePrefab]
/// @brief Field endingAngles, offset: 0x348, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ___endingAngles;

/// [AssignInCorePrefab]
/// [Tooltip("Assign to use the \'Generate Angles\' button")]
/// @brief Field umbrellaToCopy, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UmbrellaItem>  ___umbrellaToCopy;

/// [AssignInCorePrefab]
/// @brief Field lerpValue, offset: 0x358, size: 0x4, def value: None
 float_t  ___lerpValue;

/// [AssignInCorePrefab]
/// @brief Field umbrellaRainDestroyTrigger, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___umbrellaRainDestroyTrigger;

/// [AssignInCorePrefab]
/// @brief Field gameObjectsActivatedOnOpen, offset: 0x368, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjectsActivatedOnOpen;

/// [AssignInCorePrefab]
/// @brief Field particlesEmitOnOpen, offset: 0x370, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___particlesEmitOnOpen;

/// [GorillaSoundLookup]
/// @brief Field SoundIdOpen, offset: 0x378, size: 0x4, def value: None
 int32_t  ___SoundIdOpen;

/// [GorillaSoundLookup]
/// @brief Field SoundIdClose, offset: 0x37c, size: 0x4, def value: None
 int32_t  ___SoundIdClose;

/// @brief Field previousUmbrellaState, offset: 0x380, size: 0x4, def value: None
 ::GlobalNamespace::UmbrellaItem_UmbrellaStates  ___previousUmbrellaState;

/// @brief Size padding 0x3b8 - 0x388 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___umbrellaBones) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___startingAngles) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___endingAngles) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___umbrellaToCopy) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___lerpValue) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___umbrellaRainDestroyTrigger) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___gameObjectsActivatedOnOpen) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___particlesEmitOnOpen) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___SoundIdOpen) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___SoundIdClose) == 0x37c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmbrellaItem, ___previousUmbrellaState) == 0x380, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UmbrellaItem) == 0x3b8, "Size mismatch!");

} // namespace end def GlobalNamespace
