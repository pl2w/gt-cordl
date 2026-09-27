#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPieceHandHold.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceHandHold)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GorillaLocomotion::Gameplay {
class IGorillaGrabable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderPieceHandHold;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderPieceHandHold*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderPieceHandHold*, "GorillaTagScripts", "BuilderPieceHandHold");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderPieceHandHold
class CORDL_TYPE BuilderPieceHandHold : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field activeGrabbers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeGrabbers, put=__cordl_internal_set_activeGrabbers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  activeGrabbers;

/// @brief Field forceMomentary, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceMomentary, put=__cordl_internal_set_forceMomentary)) bool  forceMomentary;

/// @brief Field initialized, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field isGrabbed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGrabbed, put=__cordl_internal_set_isGrabbed)) bool  isGrabbed;

/// @brief Field myCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCollider, put=__cordl_internal_set_myCollider)) ::UnityW<::UnityEngine::Collider>  myCollider;

/// @brief Field myPiece, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr operator  ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept;

/// @brief Method CanBeGrabbed, addr 0x5b80fa4, size 0x60, virtual true, abstract: false, final false
inline bool CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.get_name, addr 0x5b816f0, size 0x8, virtual true, abstract: false, final true
inline ::StringW GorillaLocomotion_Gameplay_IGorillaGrabable_get_name() ;

/// @brief Method Initialize, addr 0x5b80f18, size 0x6c, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsHandHoldMoving, addr 0x5b80f84, size 0x18, virtual false, abstract: false, final false
inline bool IsHandHoldMoving() ;

/// @brief Method MomentaryGrabOnly, addr 0x5b80f9c, size 0x8, virtual true, abstract: false, final true
inline bool MomentaryGrabOnly() ;

static inline ::GorillaTagScripts::BuilderPieceHandHold* New_ctor() ;

/// @brief Method OnGrabReleased, addr 0x5b811b8, size 0xb0, virtual true, abstract: false, final true
inline void OnGrabReleased(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method OnGrabbed, addr 0x5b81004, size 0x1b4, virtual true, abstract: false, final true
inline void OnGrabbed(::GlobalNamespace::GorillaGrabber*  grabber, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition) ;

/// @brief Method OnPieceActivate, addr 0x5b81448, size 0x9c, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5b8143c, size 0x4, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5b814e4, size 0x178, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5b81440, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5b81444, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method Tick, addr 0x5b81278, size 0x1c4, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>* const& __cordl_internal_get_activeGrabbers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*& __cordl_internal_get_activeGrabbers() ;

constexpr bool const& __cordl_internal_get_forceMomentary() const;

constexpr bool& __cordl_internal_get_forceMomentary() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_isGrabbed() const;

constexpr bool& __cordl_internal_get_isGrabbed() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_myCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_myCollider() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activeGrabbers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  value) ;

constexpr void __cordl_internal_set_forceMomentary(bool  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_isGrabbed(bool  value) ;

constexpr void __cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

/// @brief Method .ctor, addr 0x5b8165c, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5b81268, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5b81270, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceHandHold() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceHandHold", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceHandHold(BuilderPieceHandHold && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceHandHold", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceHandHold(BuilderPieceHandHold const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3919};

/// @brief Field initialized, offset: 0x20, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field myCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___myCollider;

/// [SerializeField]
/// @brief Field forceMomentary, offset: 0x30, size: 0x1, def value: None
 bool  ___forceMomentary;

/// [SerializeField]
/// @brief Field myPiece, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// @brief Field activeGrabbers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  ___activeGrabbers;

/// @brief Field isGrabbed, offset: 0x48, size: 0x1, def value: None
 bool  ___isGrabbed;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x49, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderPieceHandHold, ___initialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceHandHold, ___myCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceHandHold, ___forceMomentary) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceHandHold, ___myPiece) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceHandHold, ___activeGrabbers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceHandHold, ___isGrabbed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceHandHold, ____TickRunning_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderPieceHandHold) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts
