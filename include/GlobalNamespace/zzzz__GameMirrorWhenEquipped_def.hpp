#pragma once
// IWYU pragma private; include "GlobalNamespace/GameMirrorWhenEquipped.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EHandedness_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GameMirrorWhenEquipped)
namespace GlobalNamespace {
class GameEntity;
}
// Forward declare root types
namespace GlobalNamespace {
class GameMirrorWhenEquipped;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameMirrorWhenEquipped*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameMirrorWhenEquipped*, "", "GameMirrorWhenEquipped");
// Dependencies EHandedness, UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameMirrorWhenEquipped
class CORDL_TYPE GameMirrorWhenEquipped : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gameEntity, put=__cordl_internal_set_m_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  m_gameEntity;

/// @brief Field m_handednessToMirror, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_handednessToMirror, put=__cordl_internal_set_m_handednessToMirror)) ::GlobalNamespace::EHandedness  m_handednessToMirror;

/// @brief Field m_shouldOnlyMirrorWhenSnapped, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_shouldOnlyMirrorWhenSnapped, put=__cordl_internal_set_m_shouldOnlyMirrorWhenSnapped)) bool  m_shouldOnlyMirrorWhenSnapped;

/// @brief Field m_xformsToMirror, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_xformsToMirror, put=__cordl_internal_set_m_xformsToMirror)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  m_xformsToMirror;

/// @brief Method Awake, addr 0x5837c7c, size 0x124, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GameMirrorWhenEquipped* New_ctor() ;

/// @brief Method OnDisable, addr 0x5837fd8, size 0x238, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5837da0, size 0x238, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method _HandleGameEntityOnEquipChanged, addr 0x5838210, size 0xf4, virtual false, abstract: false, final false
inline void _HandleGameEntityOnEquipChanged() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_m_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_m_gameEntity() ;

constexpr ::GlobalNamespace::EHandedness const& __cordl_internal_get_m_handednessToMirror() const;

constexpr ::GlobalNamespace::EHandedness& __cordl_internal_get_m_handednessToMirror() ;

constexpr bool const& __cordl_internal_get_m_shouldOnlyMirrorWhenSnapped() const;

constexpr bool& __cordl_internal_get_m_shouldOnlyMirrorWhenSnapped() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_m_xformsToMirror() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_m_xformsToMirror() ;

constexpr void __cordl_internal_set_m_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_m_handednessToMirror(::GlobalNamespace::EHandedness  value) ;

constexpr void __cordl_internal_set_m_shouldOnlyMirrorWhenSnapped(bool  value) ;

constexpr void __cordl_internal_set_m_xformsToMirror(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x5838304, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameMirrorWhenEquipped() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameMirrorWhenEquipped", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameMirrorWhenEquipped(GameMirrorWhenEquipped && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameMirrorWhenEquipped", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameMirrorWhenEquipped(GameMirrorWhenEquipped const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1779};

/// [SerializeField]
/// @brief Field m_gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___m_gameEntity;

/// [SerializeField]
/// @brief Field m_xformsToMirror, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___m_xformsToMirror;

/// [SerializeField]
/// @brief Field m_shouldOnlyMirrorWhenSnapped, offset: 0x30, size: 0x1, def value: None
 bool  ___m_shouldOnlyMirrorWhenSnapped;

/// [Tooltip("Set the X axis scale to -1 if the gadget is attached (held or snapped) to the selected side.")]
/// [SerializeField]
/// @brief Field m_handednessToMirror, offset: 0x31, size: 0x1, def value: None
 ::GlobalNamespace::EHandedness  ___m_handednessToMirror;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameMirrorWhenEquipped, ___m_gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameMirrorWhenEquipped, ___m_xformsToMirror) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameMirrorWhenEquipped, ___m_shouldOnlyMirrorWhenSnapped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameMirrorWhenEquipped, ___m_handednessToMirror) == 0x31, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameMirrorWhenEquipped) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
