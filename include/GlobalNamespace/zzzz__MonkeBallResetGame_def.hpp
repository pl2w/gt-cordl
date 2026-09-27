#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallResetGame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallResetGame)
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallResetGame;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallResetGame*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallResetGame*, "", "MonkeBallResetGame");
// Dependencies MonoBehaviourTick, UnityEngine.Material, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallResetGame
class CORDL_TYPE MonkeBallResetGame : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field _buttonOrigin, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get__buttonOrigin, put=__cordl_internal_set__buttonOrigin)) ::UnityEngine::Vector3  _buttonOrigin;

/// @brief Field _cooldown, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__cooldown, put=__cordl_internal_set__cooldown)) bool  _cooldown;

/// @brief Field _cooldownTimer, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__cooldownTimer, put=__cordl_internal_set__cooldownTimer)) float_t  _cooldownTimer;

/// @brief Field _resetButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetButton, put=__cordl_internal_set__resetButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  _resetButton;

/// @brief Field _resetLabel, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetLabel, put=__cordl_internal_set__resetLabel)) ::UnityW<::TMPro::TextMeshPro>  _resetLabel;

/// @brief Field allowedTeamId, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_allowedTeamId, put=__cordl_internal_set_allowedTeamId)) int32_t  allowedTeamId;

/// @brief Field button, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::UnityEngine::Renderer>  button;

/// @brief Field buttonPressOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_buttonPressOffset, put=__cordl_internal_set_buttonPressOffset)) ::UnityEngine::Vector3  buttonPressOffset;

/// @brief Field neutralMaterial, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_neutralMaterial, put=__cordl_internal_set_neutralMaterial)) ::UnityW<::UnityEngine::Material>  neutralMaterial;

/// @brief Field teamMaterials, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamMaterials, put=__cordl_internal_set_teamMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  teamMaterials;

/// @brief Method Awake, addr 0x57b0810, size 0xfc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MonkeBallResetGame* New_ctor() ;

/// @brief Method OnSelect, addr 0x57b09e0, size 0x50, virtual false, abstract: false, final false
inline void OnSelect() ;

/// @brief Method Tick, addr 0x57b090c, size 0x50, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method ToggleButton, addr 0x57b095c, size 0x84, virtual false, abstract: false, final false
inline void ToggleButton(bool  toggle, int32_t  teamId) ;

/// @brief Method ToggleReset, addr 0x57ae550, size 0x70, virtual false, abstract: false, final false
inline void ToggleReset(bool  toggle, int32_t  teamId, bool  force) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__buttonOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__buttonOrigin() ;

constexpr bool const& __cordl_internal_get__cooldown() const;

constexpr bool& __cordl_internal_get__cooldown() ;

constexpr float_t const& __cordl_internal_get__cooldownTimer() const;

constexpr float_t& __cordl_internal_get__cooldownTimer() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get__resetButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get__resetButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__resetLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__resetLabel() ;

constexpr int32_t const& __cordl_internal_get_allowedTeamId() const;

constexpr int32_t& __cordl_internal_get_allowedTeamId() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_button() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_buttonPressOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_buttonPressOffset() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_neutralMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_neutralMaterial() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_teamMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_teamMaterials() ;

constexpr void __cordl_internal_set__buttonOrigin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__cooldown(bool  value) ;

constexpr void __cordl_internal_set__cooldownTimer(float_t  value) ;

constexpr void __cordl_internal_set__resetButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set__resetLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_allowedTeamId(int32_t  value) ;

constexpr void __cordl_internal_set_button(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_buttonPressOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_neutralMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_teamMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

/// @brief Method .ctor, addr 0x57b0a30, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallResetGame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallResetGame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallResetGame(MonkeBallResetGame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallResetGame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallResetGame(MonkeBallResetGame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1555};

/// [SerializeField]
/// @brief Field _resetButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ____resetButton;

/// @brief Field button, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___button;

/// @brief Field buttonPressOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___buttonPressOffset;

/// @brief Field _buttonOrigin, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____buttonOrigin;

/// [Space]
/// @brief Field teamMaterials, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___teamMaterials;

/// @brief Field neutralMaterial, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___neutralMaterial;

/// @brief Field allowedTeamId, offset: 0x60, size: 0x4, def value: None
 int32_t  ___allowedTeamId;

/// [SerializeField]
/// @brief Field _resetLabel, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____resetLabel;

/// @brief Field _cooldown, offset: 0x70, size: 0x1, def value: None
 bool  ____cooldown;

/// @brief Field _cooldownTimer, offset: 0x74, size: 0x4, def value: None
 float_t  ____cooldownTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ____resetButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ___button) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ___buttonPressOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ____buttonOrigin) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ___teamMaterials) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ___neutralMaterial) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ___allowedTeamId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ____resetLabel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ____cooldown) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallResetGame, ____cooldownTimer) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallResetGame) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
