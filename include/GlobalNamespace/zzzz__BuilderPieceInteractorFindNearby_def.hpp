#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceInteractorFindNearby.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
CORDL_MODULE_EXPORT(BuilderPieceInteractorFindNearby)
namespace GlobalNamespace {
class BuilderPieceInteractor;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPieceInteractorFindNearby;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPieceInteractorFindNearby*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceInteractorFindNearby*, "", "BuilderPieceInteractorFindNearby");
// Dependencies MonoBehaviourPostTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceInteractorFindNearby
class CORDL_TYPE BuilderPieceInteractorFindNearby : public ::GlobalNamespace::MonoBehaviourPostTick {
public:
// Declarations
/// @brief Field pieceInteractor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceInteractor, put=__cordl_internal_set_pieceInteractor)) ::UnityW<::GlobalNamespace::BuilderPieceInteractor>  pieceInteractor;

/// @brief Method Awake, addr 0x57b3510, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BuilderPieceInteractorFindNearby* New_ctor() ;

/// @brief Method PostTick, addr 0x57b3514, size 0x84, virtual true, abstract: false, final false
inline void PostTick() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor> const& __cordl_internal_get_pieceInteractor() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor>& __cordl_internal_get_pieceInteractor() ;

constexpr void __cordl_internal_set_pieceInteractor(::UnityW<::GlobalNamespace::BuilderPieceInteractor>  value) ;

/// @brief Method .ctor, addr 0x57b3598, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceInteractorFindNearby() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceInteractorFindNearby", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceInteractorFindNearby(BuilderPieceInteractorFindNearby && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceInteractorFindNearby", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceInteractorFindNearby(BuilderPieceInteractorFindNearby const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1566};

/// @brief Field pieceInteractor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPieceInteractor>  ___pieceInteractor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractorFindNearby, ___pieceInteractor) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceInteractorFindNearby) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
