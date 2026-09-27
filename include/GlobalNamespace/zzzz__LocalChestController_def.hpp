#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalChestController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LocalChestController)
namespace GlobalNamespace {
class MazePlayerCollection;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalChestController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalChestController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalChestController*, "", "LocalChestController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalChestController
class CORDL_TYPE LocalChestController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field director, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_director, put=__cordl_internal_set_director)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  director;

/// @brief Field isOpen, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOpen, put=__cordl_internal_set_isOpen)) bool  isOpen;

/// @brief Field playerCollectionVolume, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCollectionVolume, put=__cordl_internal_set_playerCollectionVolume)) ::UnityW<::GlobalNamespace::MazePlayerCollection>  playerCollectionVolume;

static inline ::GlobalNamespace::LocalChestController* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x567bdb0, size 0x198, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_director() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_director() ;

constexpr bool const& __cordl_internal_get_isOpen() const;

constexpr bool& __cordl_internal_get_isOpen() ;

constexpr ::UnityW<::GlobalNamespace::MazePlayerCollection> const& __cordl_internal_get_playerCollectionVolume() const;

constexpr ::UnityW<::GlobalNamespace::MazePlayerCollection>& __cordl_internal_get_playerCollectionVolume() ;

constexpr void __cordl_internal_set_director(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set_isOpen(bool  value) ;

constexpr void __cordl_internal_set_playerCollectionVolume(::UnityW<::GlobalNamespace::MazePlayerCollection>  value) ;

/// @brief Method .ctor, addr 0x567bf48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalChestController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalChestController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalChestController(LocalChestController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalChestController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalChestController(LocalChestController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{862};

/// @brief Field director, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ___director;

/// @brief Field playerCollectionVolume, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MazePlayerCollection>  ___playerCollectionVolume;

/// @brief Field isOpen, offset: 0x30, size: 0x1, def value: None
 bool  ___isOpen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalChestController, ___director) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalChestController, ___playerCollectionVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalChestController, ___isOpen) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalChestController) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
