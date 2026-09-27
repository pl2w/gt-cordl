#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderMovingSnapPiece.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderMovingSnapPiece)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaTagScripts::Builder {
class BuilderMovingPart;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderMovingSnapPiece;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderMovingSnapPiece*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderMovingSnapPiece*, "GorillaTagScripts.Builder", "BuilderMovingSnapPiece");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderMovingSnapPiece
class CORDL_TYPE BuilderMovingSnapPiece : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field MovingParts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MovingParts, put=__cordl_internal_set_MovingParts)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>>*  MovingParts;

/// @brief Field activated, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_activated, put=__cordl_internal_set_activated)) bool  activated;

/// @brief Field currentPauseNode, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentPauseNode, put=__cordl_internal_set_currentPauseNode)) uint8_t  currentPauseNode;

/// @brief Field moving, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_moving, put=__cordl_internal_set_moving)) bool  moving;

/// @brief Field myPiece, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field startMovingFX, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_startMovingFX, put=__cordl_internal_set_startMovingFX)) ::UnityW<::UnityEngine::GameObject>  startMovingFX;

/// @brief Field stopMovingFX, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopMovingFX, put=__cordl_internal_set_stopMovingFX)) ::UnityW<::UnityEngine::GameObject>  stopMovingFX;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Method Awake, addr 0x5c217b8, size 0x224, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FunctionalPieceFixedUpdate, addr 0x5c22c44, size 0x148, virtual true, abstract: false, final true
inline void FunctionalPieceFixedUpdate() ;

/// @brief Method FunctionalPieceUpdate, addr 0x5c22890, size 0x4, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method GetTimeOffset, addr 0x5c219dc, size 0x174, virtual false, abstract: false, final false
inline int32_t GetTimeOffset() ;

/// @brief Method IsStateValid, addr 0x5c22820, size 0x6c, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

static inline ::GorillaTagScripts::Builder::BuilderMovingSnapPiece* New_ctor() ;

/// @brief Method OnPieceActivate, addr 0x5c22270, size 0x434, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c21b50, size 0x4, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c226a4, size 0x17c, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c21b54, size 0x12c, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c21c80, size 0x230, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnStateChanged, addr 0x5c21eb0, size 0x3c0, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c2288c, size 0x4, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method UpdateMaster, addr 0x5c22894, size 0x3b0, virtual false, abstract: false, final false
inline void UpdateMaster() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>>* const& __cordl_internal_get_MovingParts() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>>*& __cordl_internal_get_MovingParts() ;

constexpr bool const& __cordl_internal_get_activated() const;

constexpr bool& __cordl_internal_get_activated() ;

constexpr uint8_t const& __cordl_internal_get_currentPauseNode() const;

constexpr uint8_t& __cordl_internal_get_currentPauseNode() ;

constexpr bool const& __cordl_internal_get_moving() const;

constexpr bool& __cordl_internal_get_moving() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_startMovingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_startMovingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stopMovingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stopMovingFX() ;

constexpr void __cordl_internal_set_MovingParts(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>>*  value) ;

constexpr void __cordl_internal_set_activated(bool  value) ;

constexpr void __cordl_internal_set_currentPauseNode(uint8_t  value) ;

constexpr void __cordl_internal_set_moving(bool  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_startMovingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_stopMovingFX(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5c22d8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* i___GlobalNamespace__IBuilderPieceFunctional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderMovingSnapPiece() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderMovingSnapPiece", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderMovingSnapPiece(BuilderMovingSnapPiece && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderMovingSnapPiece", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderMovingSnapPiece(BuilderMovingSnapPiece const& ) = delete;

/// @brief Field MAX_MOVING_CHILDREN offset 0xffffffff size 0x4
static constexpr int32_t  MAX_MOVING_CHILDREN{static_cast<int32_t>(0x5)};

/// @brief Field MOVING_STATE offset 0xffffffff size 0x1
static constexpr uint8_t  MOVING_STATE{static_cast<uint8_t>(0x0u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4148};

/// @brief Field MovingParts, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>>*  ___MovingParts;

/// @brief Field myPiece, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field startMovingFX, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___startMovingFX;

/// [SerializeField]
/// @brief Field stopMovingFX, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stopMovingFX;

/// @brief Field activated, offset: 0x40, size: 0x1, def value: None
 bool  ___activated;

/// @brief Field moving, offset: 0x41, size: 0x1, def value: None
 bool  ___moving;

/// @brief Field currentPauseNode, offset: 0x42, size: 0x1, def value: None
 uint8_t  ___currentPauseNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingSnapPiece, ___MovingParts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingSnapPiece, ___myPiece) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingSnapPiece, ___startMovingFX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingSnapPiece, ___stopMovingFX) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingSnapPiece, ___activated) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingSnapPiece, ___moving) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingSnapPiece, ___currentPauseNode) == 0x42, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderMovingSnapPiece) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
