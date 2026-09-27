#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceInteractorPreInteract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderPieceInteractorPreInteract)
namespace GlobalNamespace {
class BuilderPieceInteractor;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPieceInteractorPreInteract;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPieceInteractorPreInteract*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceInteractorPreInteract*, "", "BuilderPieceInteractorPreInteract");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceInteractorPreInteract
class CORDL_TYPE BuilderPieceInteractorPreInteract : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field interactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactor, put=__cordl_internal_set_interactor)) ::UnityW<::GlobalNamespace::BuilderPieceInteractor>  interactor;

/// @brief Method Awake, addr 0x57b35a0, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x57b35a4, size 0x4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::BuilderPieceInteractorPreInteract* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor> const& __cordl_internal_get_interactor() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor>& __cordl_internal_get_interactor() ;

constexpr void __cordl_internal_set_interactor(::UnityW<::GlobalNamespace::BuilderPieceInteractor>  value) ;

/// @brief Method .ctor, addr 0x57b35a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceInteractorPreInteract() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceInteractorPreInteract", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceInteractorPreInteract(BuilderPieceInteractorPreInteract && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceInteractorPreInteract", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceInteractorPreInteract(BuilderPieceInteractorPreInteract const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1567};

/// @brief Field interactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPieceInteractor>  ___interactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractorPreInteract, ___interactor) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceInteractorPreInteract) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
