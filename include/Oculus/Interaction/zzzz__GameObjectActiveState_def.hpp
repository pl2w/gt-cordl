#pragma once
// IWYU pragma private; include "Oculus/Interaction/GameObjectActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameObjectActiveState)
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Oculus::Interaction {
class GameObjectActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GameObjectActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GameObjectActiveState*, "Oculus.Interaction", "GameObjectActiveState");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.GameObjectActiveState
class CORDL_TYPE GameObjectActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_SourceActiveSelf, put=set_SourceActiveSelf)) bool  SourceActiveSelf;

/// @brief Field _sourceActiveSelf, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__sourceActiveSelf, put=__cordl_internal_set__sourceActiveSelf)) bool  _sourceActiveSelf;

/// @brief Field _sourceGameObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceGameObject, put=__cordl_internal_set__sourceGameObject)) ::UnityW<::UnityEngine::GameObject>  _sourceGameObject;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method InjectAllGameObjectActiveState, addr 0xa4136c0, size 0x8, virtual false, abstract: false, final false
inline void InjectAllGameObjectActiveState(::UnityEngine::GameObject*  sourceGameObject) ;

/// @brief Method InjectSourceGameObject, addr 0xa4136c8, size 0x8, virtual false, abstract: false, final false
inline void InjectSourceGameObject(::UnityEngine::GameObject*  sourceGameObject) ;

static inline ::Oculus::Interaction::GameObjectActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa413688, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__sourceActiveSelf() const;

constexpr bool& __cordl_internal_get__sourceActiveSelf() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__sourceGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__sourceGameObject() ;

constexpr void __cordl_internal_set__sourceActiveSelf(bool  value) ;

constexpr void __cordl_internal_set__sourceGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0xa4136d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa41368c, size 0x34, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_SourceActiveSelf, addr 0xa413678, size 0x8, virtual false, abstract: false, final false
inline bool get_SourceActiveSelf() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Method set_SourceActiveSelf, addr 0xa413680, size 0x8, virtual false, abstract: false, final false
inline void set_SourceActiveSelf(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectActiveState(GameObjectActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectActiveState(GameObjectActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15755};

/// [SerializeField]
/// @brief Field _sourceGameObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____sourceGameObject;

/// [SerializeField]
/// @brief Field _sourceActiveSelf, offset: 0x28, size: 0x1, def value: None
 bool  ____sourceActiveSelf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GameObjectActiveState, ____sourceGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GameObjectActiveState, ____sourceActiveSelf) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GameObjectActiveState) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
