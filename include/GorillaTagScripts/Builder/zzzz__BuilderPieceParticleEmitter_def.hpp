#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceParticleEmitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceParticleEmitter)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderPieceParticleEmitter;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderPieceParticleEmitter*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderPieceParticleEmitter*, "GorillaTagScripts.Builder", "BuilderPieceParticleEmitter");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderPieceParticleEmitter
class CORDL_TYPE BuilderPieceParticleEmitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field inBuilderZone, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_inBuilderZone, put=__cordl_internal_set_inBuilderZone)) bool  inBuilderZone;

/// @brief Field isPieceActive, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPieceActive, put=__cordl_internal_set_isPieceActive)) bool  isPieceActive;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field particles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  particles;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

static inline ::GorillaTagScripts::Builder::BuilderPieceParticleEmitter* New_ctor() ;

/// @brief Method OnPieceActivate, addr 0x5c29e58, size 0x18, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c29c64, size 0x100, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c29e70, size 0x8, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c29d64, size 0xf0, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c29e54, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnZoneChanged, addr 0x5c29920, size 0xa4, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method StartParticles, addr 0x5c299c4, size 0x148, virtual false, abstract: false, final false
inline void StartParticles() ;

/// @brief Method StopParticles, addr 0x5c29b0c, size 0x158, virtual false, abstract: false, final false
inline void StopParticles() ;

constexpr bool const& __cordl_internal_get_inBuilderZone() const;

constexpr bool& __cordl_internal_get_inBuilderZone() ;

constexpr bool const& __cordl_internal_get_isPieceActive() const;

constexpr bool& __cordl_internal_get_isPieceActive() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& __cordl_internal_get_particles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& __cordl_internal_get_particles() ;

constexpr void __cordl_internal_set_inBuilderZone(bool  value) ;

constexpr void __cordl_internal_set_isPieceActive(bool  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_particles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value) ;

/// @brief Method .ctor, addr 0x5c29e78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceParticleEmitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceParticleEmitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceParticleEmitter(BuilderPieceParticleEmitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceParticleEmitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceParticleEmitter(BuilderPieceParticleEmitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4158};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field particles, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  ___particles;

/// @brief Field inBuilderZone, offset: 0x30, size: 0x1, def value: None
 bool  ___inBuilderZone;

/// @brief Field isPieceActive, offset: 0x31, size: 0x1, def value: None
 bool  ___isPieceActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceParticleEmitter, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceParticleEmitter, ___particles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceParticleEmitter, ___inBuilderZone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceParticleEmitter, ___isPieceActive) == 0x31, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderPieceParticleEmitter) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
