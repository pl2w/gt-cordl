#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceScaleHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceScaleHandler)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GorillaTagScripts::Builder {
class BuilderScaleAudioRadius;
}
namespace GorillaTagScripts::Builder {
class BuilderScaleParticles;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPieceScaleHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPieceScaleHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceScaleHandler*, "", "BuilderPieceScaleHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceScaleHandler
class CORDL_TYPE BuilderPieceScaleHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioScalers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioScalers, put=__cordl_internal_set_audioScalers)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleAudioRadius>>*  audioScalers;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field particleScalers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleScalers, put=__cordl_internal_set_particleScalers)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleParticles>>*  particleScalers;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

static inline ::GlobalNamespace::BuilderPieceScaleHandler* New_ctor() ;

/// @brief Method OnPieceActivate, addr 0x57b3a5c, size 0x4, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x57b35b0, size 0x268, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x57b3a60, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x57b3818, size 0x240, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x57b3a58, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleAudioRadius>>* const& __cordl_internal_get_audioScalers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleAudioRadius>>*& __cordl_internal_get_audioScalers() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleParticles>>* const& __cordl_internal_get_particleScalers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleParticles>>*& __cordl_internal_get_particleScalers() ;

constexpr void __cordl_internal_set_audioScalers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleAudioRadius>>*  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_particleScalers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleParticles>>*  value) ;

/// @brief Method .ctor, addr 0x57b3a64, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceScaleHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceScaleHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceScaleHandler(BuilderPieceScaleHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceScaleHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceScaleHandler(BuilderPieceScaleHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1568};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field audioScalers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleAudioRadius>>*  ___audioScalers;

/// [SerializeField]
/// @brief Field particleScalers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleParticles>>*  ___particleScalers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceScaleHandler, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceScaleHandler, ___audioScalers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceScaleHandler, ___particleScalers) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceScaleHandler) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
