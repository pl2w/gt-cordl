#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsGrabbablesController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsGrabbablesController)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsGrabbablesController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsGrabbablesController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGrabbablesController*, "", "CustomMapsGrabbablesController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGrabbablesController
class CORDL_TYPE CustomMapsGrabbablesController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field isGrabbed, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGrabbed, put=__cordl_internal_set_isGrabbed)) bool  isGrabbed;

/// @brief Field luaAgentID, offset 0x28, size 0x2 
 __declspec(property(get=__cordl_internal_get_luaAgentID, put=__cordl_internal_set_luaAgentID)) int16_t  luaAgentID;

/// @brief Field returnParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnParent, put=__cordl_internal_set_returnParent)) ::UnityW<::UnityEngine::Transform>  returnParent;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method Awake, addr 0x59c6918, size 0x160, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetGrabbingActor, addr 0x59c7084, size 0x28, virtual false, abstract: false, final false
inline int32_t GetGrabbingActor() ;

static inline ::GlobalNamespace::CustomMapsGrabbablesController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59c6a78, size 0x15c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x59c70ac, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x59c6bd4, size 0x4b0, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x59c70b0, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method OnGrabbed, addr 0x59c70b4, size 0xc, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnReleased, addr 0x59c70c0, size 0x94, virtual false, abstract: false, final false
inline void OnReleased() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr bool const& __cordl_internal_get_isGrabbed() const;

constexpr bool& __cordl_internal_get_isGrabbed() ;

constexpr int16_t const& __cordl_internal_get_luaAgentID() const;

constexpr int16_t& __cordl_internal_get_luaAgentID() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_returnParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_returnParent() ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_isGrabbed(bool  value) ;

constexpr void __cordl_internal_set_luaAgentID(int16_t  value) ;

constexpr void __cordl_internal_set_returnParent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x59c7154, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGrabbablesController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGrabbablesController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGrabbablesController(CustomMapsGrabbablesController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGrabbablesController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGrabbablesController(CustomMapsGrabbablesController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2681};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field luaAgentID, offset: 0x28, size: 0x2, def value: None
 int16_t  ___luaAgentID;

/// @brief Field isGrabbed, offset: 0x2a, size: 0x1, def value: None
 bool  ___isGrabbed;

/// @brief Field returnParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___returnParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsGrabbablesController, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGrabbablesController, ___luaAgentID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGrabbablesController, ___isGrabbed) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGrabbablesController, ___returnParent) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsGrabbablesController) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
