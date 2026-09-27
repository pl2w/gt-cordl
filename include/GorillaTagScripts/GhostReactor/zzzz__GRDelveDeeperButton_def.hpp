#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRDelveDeeperButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRDelveDeeperButton)
namespace GlobalNamespace {
class GhostReactorShiftManager;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class BoxCollider;
}
// Forward declare root types
namespace GorillaTagScripts::GhostReactor {
class GRDelveDeeperButton;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRDelveDeeperButton*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRDelveDeeperButton*, "GorillaTagScripts.GhostReactor", "GRDelveDeeperButton");
// [RequireComponent(typeof(GorillaPressableButton))]
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRDelveDeeperButton
class CORDL_TYPE GRDelveDeeperButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _button, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  _button;

/// @brief Field _drillCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__drillCollider, put=__cordl_internal_set__drillCollider)) ::UnityW<::UnityEngine::BoxCollider>  _drillCollider;

/// @brief Field _numGorillasInDrill, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__numGorillasInDrill, put=__cordl_internal_set__numGorillasInDrill)) int32_t  _numGorillasInDrill;

/// @brief Field _overlapBoxResults, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlapBoxResults, put=__cordl_internal_set__overlapBoxResults)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _overlapBoxResults;

/// @brief Field _shiftManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__shiftManager, put=__cordl_internal_set__shiftManager)) ::UnityW<::GlobalNamespace::GhostReactorShiftManager>  _shiftManager;

/// @brief Field _text, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro>  _text;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5c192ec, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CountMonkes, addr 0x5c192f0, size 0x260, virtual false, abstract: false, final false
inline void CountMonkes() ;

/// @brief Method DelveDeeper, addr 0x5c197bc, size 0x18, virtual false, abstract: false, final false
inline void DelveDeeper() ;

static inline ::GorillaTagScripts::GhostReactor::GRDelveDeeperButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c19798, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5c19550, size 0x84, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5c195d4, size 0xf4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5c197a4, size 0x18, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateButton, addr 0x5c196c8, size 0xd0, virtual false, abstract: false, final false
inline void UpdateButton() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get__button() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get__drillCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get__drillCollider() ;

constexpr int32_t const& __cordl_internal_get__numGorillasInDrill() const;

constexpr int32_t& __cordl_internal_get__numGorillasInDrill() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__overlapBoxResults() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__overlapBoxResults() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager> const& __cordl_internal_get__shiftManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager>& __cordl_internal_get__shiftManager() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__button(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set__drillCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set__numGorillasInDrill(int32_t  value) ;

constexpr void __cordl_internal_set__overlapBoxResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__shiftManager(::UnityW<::GlobalNamespace::GhostReactorShiftManager>  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x5c197d4, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDelveDeeperButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDelveDeeperButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDelveDeeperButton(GRDelveDeeperButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDelveDeeperButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDelveDeeperButton(GRDelveDeeperButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4123};

/// [SerializeField]
/// @brief Field _drillCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ____drillCollider;

/// [SerializeField]
/// @brief Field _shiftManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorShiftManager>  ____shiftManager;

/// [SerializeField]
/// @brief Field _text, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____text;

/// @brief Field _button, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ____button;

/// @brief Field _numGorillasInDrill, offset: 0x40, size: 0x4, def value: None
 int32_t  ____numGorillasInDrill;

/// @brief Field _overlapBoxResults, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____overlapBoxResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRDelveDeeperButton, ____drillCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRDelveDeeperButton, ____shiftManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRDelveDeeperButton, ____text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRDelveDeeperButton, ____button) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRDelveDeeperButton, ____numGorillasInDrill) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRDelveDeeperButton, ____overlapBoxResults) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRDelveDeeperButton) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
