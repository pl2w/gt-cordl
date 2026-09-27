#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportArcVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TeleportArcVisual)
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class TeleportArcVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportArcVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportArcVisual*, "Oculus.Interaction.Locomotion", "TeleportArcVisual");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportArcVisual
class CORDL_TYPE TeleportArcVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _arcRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__arcRenderer, put=__cordl_internal_set__arcRenderer)) ::UnityW<::UnityEngine::LineRenderer>  _arcRenderer;

/// @brief Field _interactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactor, put=__cordl_internal_set__interactor)) ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  _interactor;

/// @brief Field _positions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__positions, put=__cordl_internal_set__positions)) ::ArrayW<::UnityEngine::Vector3>  _positions;

/// @brief Field _started, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method HandleInteractorPostProcessed, addr 0xa4cf8ac, size 0x1e8, virtual true, abstract: false, final false
inline void HandleInteractorPostProcessed() ;

/// @brief Method InjectAllTeleportArcVisual, addr 0xa4cfa94, size 0x30, virtual false, abstract: false, final false
inline void InjectAllTeleportArcVisual(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor, ::UnityEngine::LineRenderer*  arcRenderer) ;

/// @brief Method InjectArcRenderer, addr 0xa4cfacc, size 0x8, virtual false, abstract: false, final false
inline void InjectArcRenderer(::UnityEngine::LineRenderer*  arcRenderer) ;

/// @brief Method InjectInteractor, addr 0xa4cfac4, size 0x8, virtual false, abstract: false, final false
inline void InjectInteractor(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor) ;

static inline ::Oculus::Interaction::Locomotion::TeleportArcVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4cf80c, size 0xa0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4cf76c, size 0xa0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4cf740, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__arcRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__arcRenderer() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor> const& __cordl_internal_get__interactor() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>& __cordl_internal_get__interactor() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__positions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__positions() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__arcRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__interactor(::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  value) ;

constexpr void __cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4cfad4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportArcVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportArcVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportArcVisual(TeleportArcVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportArcVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportArcVisual(TeleportArcVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16287};

/// [SerializeField]
/// @brief Field _interactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  ____interactor;

/// [SerializeField]
/// @brief Field _arcRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____arcRenderer;

/// @brief Field _positions, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____positions;

/// @brief Field _started, offset: 0x38, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcVisual, ____interactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcVisual, ____arcRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcVisual, ____positions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcVisual, ____started) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportArcVisual) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
