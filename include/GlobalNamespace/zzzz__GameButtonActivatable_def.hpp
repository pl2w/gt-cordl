#pragma once
// IWYU pragma private; include "GlobalNamespace/GameButtonActivatable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameButtonActivatable_InputButton_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameButtonActivatable)
namespace GlobalNamespace {
struct GameButtonActivatable_InputButton;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameActivatable;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class GameButtonActivatable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameButtonActivatable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameButtonActivatable*, "", "GameButtonActivatable");
// Dependencies GameButtonActivatable::InputButton, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameButtonActivatable
class CORDL_TYPE GameButtonActivatable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InputButton = ::GlobalNamespace::GameButtonActivatable_InputButton;

/// @brief Field gameEntity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field inputButton, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputButton, put=__cordl_internal_set_inputButton)) ::GlobalNamespace::GameButtonActivatable_InputButton  inputButton;

/// @brief Convert operator to "::GlobalNamespace::IGameActivatable"
constexpr operator  ::GlobalNamespace::IGameActivatable*() noexcept;

/// @brief Method CheckInput, addr 0x5811560, size 0x2a0, virtual false, abstract: false, final false
inline bool CheckInput(float_t  sensitivity) ;

/// @brief Method CheckInput, addr 0x581142c, size 0x134, virtual false, abstract: false, final false
inline bool CheckInput(::UnityEngine::XR::XRNode  xrNode, float_t  sensitivity) ;

static inline ::GlobalNamespace::GameButtonActivatable* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::GlobalNamespace::GameButtonActivatable_InputButton const& __cordl_internal_get_inputButton() const;

constexpr ::GlobalNamespace::GameButtonActivatable_InputButton& __cordl_internal_get_inputButton() ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_inputButton(::GlobalNamespace::GameButtonActivatable_InputButton  value) ;

/// @brief Method .ctor, addr 0x5811910, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameActivatable"
constexpr ::GlobalNamespace::IGameActivatable* i___GlobalNamespace__IGameActivatable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameButtonActivatable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameButtonActivatable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameButtonActivatable(GameButtonActivatable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameButtonActivatable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameButtonActivatable(GameButtonActivatable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1724};

/// [SerializeField]
/// @brief Field inputButton, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GameButtonActivatable_InputButton  ___inputButton;

/// @brief Field gameEntity, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameButtonActivatable, ___inputButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameButtonActivatable, ___gameEntity) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameButtonActivatable) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
