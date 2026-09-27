#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameDockType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameDock)
namespace GlobalNamespace {
class AbilityHaptic;
}
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GameDockable;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GameDock;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameDock*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameDock*, "", "GameDock");
// Dependencies GameDockType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameDock
class CORDL_TYPE GameDock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field dockHaptic, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dockHaptic, put=__cordl_internal_set_dockHaptic)) ::GlobalNamespace::AbilityHaptic*  dockHaptic;

/// @brief Field dockMarker, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_dockMarker, put=__cordl_internal_set_dockMarker)) ::UnityW<::UnityEngine::Transform>  dockMarker;

/// @brief Field dockRadius, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dockRadius, put=__cordl_internal_set_dockRadius)) float_t  dockRadius;

/// @brief Field dockSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_dockSound, put=__cordl_internal_set_dockSound)) ::GlobalNamespace::AbilitySound*  dockSound;

/// @brief Field dockType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_dockType, put=__cordl_internal_set_dockType)) ::GlobalNamespace::GameDockType  dockType;

/// @brief Field docked, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_docked, put=__cordl_internal_set_docked)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  docked;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field undockSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_undockSound, put=__cordl_internal_set_undockSound)) ::GlobalNamespace::AbilitySound*  undockSound;

/// @brief Method Awake, addr 0x5811918, size 0xec, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanDock, addr 0x5811a08, size 0x98, virtual false, abstract: false, final false
inline bool CanDock(::GlobalNamespace::GameDockable*  dockable) ;

/// @brief Method GetDockedCount, addr 0x5811aa0, size 0x48, virtual false, abstract: false, final false
inline int32_t GetDockedCount() ;

static inline ::GlobalNamespace::GameDock* New_ctor() ;

/// @brief Method OnDock, addr 0x5811ae8, size 0xdc, virtual false, abstract: false, final false
inline void OnDock(::GlobalNamespace::GameEntity*  attachedGameEntity, ::GlobalNamespace::GameEntity*  attachedToGameEntity) ;

/// @brief Method OnEnable, addr 0x5811a04, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUndock, addr 0x5811bc4, size 0x6c, virtual false, abstract: false, final false
inline void OnUndock(::GlobalNamespace::GameEntity*  gameEntity, ::GlobalNamespace::GameEntity*  attachedToGameEntity) ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_dockHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_dockHaptic() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dockMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dockMarker() ;

constexpr float_t const& __cordl_internal_get_dockRadius() const;

constexpr float_t& __cordl_internal_get_dockRadius() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_dockSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_dockSound() ;

constexpr ::GlobalNamespace::GameDockType const& __cordl_internal_get_dockType() const;

constexpr ::GlobalNamespace::GameDockType& __cordl_internal_get_dockType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_docked() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_docked() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_undockSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_undockSound() ;

constexpr void __cordl_internal_set_dockHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_dockMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_dockRadius(float_t  value) ;

constexpr void __cordl_internal_set_dockSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_dockType(::GlobalNamespace::GameDockType  value) ;

constexpr void __cordl_internal_set_docked(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_undockSound(::GlobalNamespace::AbilitySound*  value) ;

/// @brief Method .ctor, addr 0x5811c30, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameDock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameDock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameDock(GameDock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameDock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameDock(GameDock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1726};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field dockType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GameDockType  ___dockType;

/// @brief Field dockRadius, offset: 0x2c, size: 0x4, def value: None
 float_t  ___dockRadius;

/// @brief Field dockSound, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___dockSound;

/// @brief Field undockSound, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___undockSound;

/// @brief Field dockHaptic, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___dockHaptic;

/// @brief Field dockMarker, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___dockMarker;

/// @brief Field docked, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___docked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameDock, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDock, ___dockType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDock, ___dockRadius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDock, ___dockSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDock, ___undockSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDock, ___dockHaptic) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDock, ___dockMarker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDock, ___docked) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameDock) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
