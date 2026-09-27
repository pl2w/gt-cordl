#pragma once
// IWYU pragma private; include "Oculus/Interaction/RayInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointerInteractable_2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RayInteractable)
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class RayInteractor;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace Oculus::Interaction {
class RayInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::RayInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RayInteractable*, "Oculus.Interaction", "RayInteractable");
// Dependencies Oculus.Interaction.PointerInteractable`2<TInteractor, TInteractable>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RayInteractable
class CORDL_TYPE RayInteractable : public ::Oculus::Interaction::PointerInteractable_2<::UnityW<::Oculus::Interaction::RayInteractor>,::UnityW<::Oculus::Interaction::RayInteractable>> {
public:
// Declarations
 __declspec(property(get=get_MovementProvider, put=set_MovementProvider)) ::Oculus::Interaction::IMovementProvider*  MovementProvider;

/// @brief Field SelectSurface, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectSurface, put=__cordl_internal_set_SelectSurface)) ::Oculus::Interaction::Surfaces::ISurface*  SelectSurface;

 __declspec(property(get=get_Surface, put=set_Surface)) ::Oculus::Interaction::Surfaces::ISurface*  Surface;

 __declspec(property(get=get_TiebreakerScore, put=set_TiebreakerScore)) int32_t  TiebreakerScore;

/// @brief Field <MovementProvider>k__BackingField, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__MovementProvider_k__BackingField, put=__cordl_internal_set__MovementProvider_k__BackingField)) ::Oculus::Interaction::IMovementProvider*  _MovementProvider_k__BackingField;

/// @brief Field <Surface>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Surface_k__BackingField, put=__cordl_internal_set__Surface_k__BackingField)) ::Oculus::Interaction::Surfaces::ISurface*  _Surface_k__BackingField;

/// @brief Field _movementProvider, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementProvider, put=__cordl_internal_set__movementProvider)) ::UnityW<::UnityEngine::Object>  _movementProvider;

/// @brief Field _selectSurface, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectSurface, put=__cordl_internal_set__selectSurface)) ::UnityW<::UnityEngine::Object>  _selectSurface;

/// @brief Field _surface, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__surface, put=__cordl_internal_set__surface)) ::UnityW<::UnityEngine::Object>  _surface;

/// @brief Field _tiebreakerScore, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__tiebreakerScore, put=__cordl_internal_set__tiebreakerScore)) int32_t  _tiebreakerScore;

/// @brief Method Awake, addr 0xa45b5f8, size 0xe0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GenerateMovement, addr 0xa45b944, size 0x1e4, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovement* GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  source) ;

/// @brief Method InjectAllRayInteractable, addr 0xa45bb28, size 0x4, virtual false, abstract: false, final false
inline void InjectAllRayInteractable(::Oculus::Interaction::Surfaces::ISurface*  surface) ;

/// @brief Method InjectOptionalMovementProvider, addr 0xa45bcc4, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalMovementProvider(::Oculus::Interaction::IMovementProvider*  provider) ;

/// @brief Method InjectOptionalSelectSurface, addr 0xa45bbf8, size 0xcc, virtual false, abstract: false, final false
inline void InjectOptionalSelectSurface(::Oculus::Interaction::Surfaces::ISurface*  surface) ;

/// @brief Method InjectSurface, addr 0xa45bb2c, size 0xcc, virtual false, abstract: false, final false
inline void InjectSurface(::Oculus::Interaction::Surfaces::ISurface*  surface) ;

static inline ::Oculus::Interaction::RayInteractable* New_ctor() ;

/// @brief Method Raycast, addr 0xa45b858, size 0xec, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, /* [IsReadOnly] */ ::by_ref<float_t>  maxDistance, bool  selectSurface) ;

/// @brief Method Start, addr 0xa45b6d8, size 0x180, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__17_0, addr 0xa45bddc, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__17_0() ;

constexpr ::Oculus::Interaction::Surfaces::ISurface* const& __cordl_internal_get_SelectSurface() const;

constexpr ::Oculus::Interaction::Surfaces::ISurface*& __cordl_internal_get_SelectSurface() ;

constexpr ::Oculus::Interaction::IMovementProvider* const& __cordl_internal_get__MovementProvider_k__BackingField() const;

constexpr ::Oculus::Interaction::IMovementProvider*& __cordl_internal_get__MovementProvider_k__BackingField() ;

constexpr ::Oculus::Interaction::Surfaces::ISurface* const& __cordl_internal_get__Surface_k__BackingField() const;

constexpr ::Oculus::Interaction::Surfaces::ISurface*& __cordl_internal_get__Surface_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__movementProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__movementProvider() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__selectSurface() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__selectSurface() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__surface() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__surface() ;

constexpr int32_t const& __cordl_internal_get__tiebreakerScore() const;

constexpr int32_t& __cordl_internal_get__tiebreakerScore() ;

constexpr void __cordl_internal_set_SelectSurface(::Oculus::Interaction::Surfaces::ISurface*  value) ;

constexpr void __cordl_internal_set__MovementProvider_k__BackingField(::Oculus::Interaction::IMovementProvider*  value) ;

constexpr void __cordl_internal_set__Surface_k__BackingField(::Oculus::Interaction::Surfaces::ISurface*  value) ;

constexpr void __cordl_internal_set__movementProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__selectSurface(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__surface(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__tiebreakerScore(int32_t  value) ;

/// @brief Method .ctor, addr 0xa45bd94, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_MovementProvider, addr 0xa45b5d8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovementProvider* get_MovementProvider() ;

/// [CompilerGenerated]
/// @brief Method get_Surface, addr 0xa45b5c8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Surfaces::ISurface* get_Surface() ;

/// @brief Method get_TiebreakerScore, addr 0xa45b5e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TiebreakerScore() ;

/// [CompilerGenerated]
/// @brief Method set_MovementProvider, addr 0xa45b5e0, size 0x8, virtual false, abstract: false, final false
inline void set_MovementProvider(::Oculus::Interaction::IMovementProvider*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Surface, addr 0xa45b5d0, size 0x8, virtual false, abstract: false, final false
inline void set_Surface(::Oculus::Interaction::Surfaces::ISurface*  value) ;

/// @brief Method set_TiebreakerScore, addr 0xa45b5f0, size 0x8, virtual false, abstract: false, final false
inline void set_TiebreakerScore(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RayInteractable(RayInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayInteractable(RayInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15862};

/// [Tooltip("The mesh used as the interactive surface for the ray.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Surfaces.ISurface), new[] {  })]
/// @brief Field _surface, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____surface;

/// [CompilerGenerated]
/// @brief Field <Surface>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::Oculus::Interaction::Surfaces::ISurface*  ____Surface_k__BackingField;

/// [Tooltip("Defines the boundaries of the raycast. All RayInteractables must be inside this surface for the raycast to reach them.")]
/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.Surfaces.ISurface), new[] {  })]
/// @brief Field _selectSurface, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____selectSurface;

/// @brief Field SelectSurface, offset: 0xe0, size: 0x8, def value: None
 ::Oculus::Interaction::Surfaces::ISurface*  ___SelectSurface;

/// [Tooltip("An IMovementProvider that determines how the interactable moves when selected.")]
/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.IMovementProvider), new[] {  })]
/// @brief Field _movementProvider, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____movementProvider;

/// [CompilerGenerated]
/// @brief Field <MovementProvider>k__BackingField, offset: 0xf0, size: 0x8, def value: None
 ::Oculus::Interaction::IMovementProvider*  ____MovementProvider_k__BackingField;

/// [Tooltip("The score used when comparing two interactables to determine which one should be selected. Each interactable has its own score, and the highest scoring interactable will be selected.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _tiebreakerScore, offset: 0xf8, size: 0x4, def value: None
 int32_t  ____tiebreakerScore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::RayInteractable, ____surface) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractable, ____Surface_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractable, ____selectSurface) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractable, ___SelectSurface) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractable, ____movementProvider) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractable, ____MovementProvider_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractable, ____tiebreakerScore) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::RayInteractable) == 0x100, "Size mismatch!");

} // namespace end def Oculus::Interaction
