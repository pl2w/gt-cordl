#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceMonkeIdol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIResource_def.hpp"
CORDL_MODULE_EXPORT(SIResourceMonkeIdol)
namespace GlobalNamespace {
class SIPlayer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SIResourceMonkeIdol;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIResourceMonkeIdol*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceMonkeIdol*, "", "SIResourceMonkeIdol");
// Dependencies SIResource
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIResourceMonkeIdol
class CORDL_TYPE SIResourceMonkeIdol : public ::GlobalNamespace::SIResource {
public:
// Declarations
/// @brief Field depositEnabledParticle, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositEnabledParticle, put=__cordl_internal_set_depositEnabledParticle)) ::UnityW<::UnityEngine::GameObject>  depositEnabledParticle;

/// @brief Method HandleDepositAuth, addr 0x5aed144, size 0x84, virtual true, abstract: false, final false
inline void HandleDepositAuth(::GlobalNamespace::SIPlayer*  depositingPlayer) ;

static inline ::GlobalNamespace::SIResourceMonkeIdol* New_ctor() ;

/// @brief Method OnEnable, addr 0x5aed0bc, size 0x88, virtual true, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_depositEnabledParticle() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_depositEnabledParticle() ;

constexpr void __cordl_internal_set_depositEnabledParticle(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5aed1c8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIResourceMonkeIdol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIResourceMonkeIdol", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIResourceMonkeIdol(SIResourceMonkeIdol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIResourceMonkeIdol", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIResourceMonkeIdol(SIResourceMonkeIdol const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{352};

/// [SerializeField]
/// @brief Field depositEnabledParticle, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___depositEnabledParticle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResourceMonkeIdol, ___depositEnabledParticle) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResourceMonkeIdol) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
