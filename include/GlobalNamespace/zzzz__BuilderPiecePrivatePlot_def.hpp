#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPiecePrivatePlot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderPiecePrivatePlot_PlotState_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPiecePrivatePlot)
namespace GlobalNamespace {
struct BuilderPiecePrivatePlot_PlotState;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class BuilderResourceMeter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPiecePrivatePlot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPiecePrivatePlot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPiecePrivatePlot*, "", "BuilderPiecePrivatePlot");
// Dependencies BuilderPiecePrivatePlot::PlotState, UnityEngine.Bounds, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPiecePrivatePlot
class CORDL_TYPE BuilderPiecePrivatePlot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlotState = ::GlobalNamespace::BuilderPiecePrivatePlot_PlotState;

/// @brief Field attachedPieceCount, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_attachedPieceCount, put=__cordl_internal_set_attachedPieceCount)) int32_t  attachedPieceCount;

/// @brief Field borderMeshes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_borderMeshes, put=__cordl_internal_set_borderMeshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  borderMeshes;

/// @brief Field buildArea, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildArea, put=__cordl_internal_set_buildArea)) ::UnityW<::UnityEngine::BoxCollider>  buildArea;

/// @brief Field buildAreaBounds, offset 0x9c, size 0x18 
 __declspec(property(get=__cordl_internal_get_buildAreaBounds, put=__cordl_internal_set_buildAreaBounds)) ::UnityEngine::Bounds  buildAreaBounds;

/// @brief Field doesLocalPlayerOwnAPlot, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_doesLocalPlayerOwnAPlot, put=__cordl_internal_set_doesLocalPlayerOwnAPlot)) bool  doesLocalPlayerOwnAPlot;

/// @brief Field inBuilderZone, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_inBuilderZone, put=__cordl_internal_set_inBuilderZone)) bool  inBuilderZone;

/// @brief Field initDone, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_initDone, put=__cordl_internal_set_initDone)) bool  initDone;

/// @brief Field isLeftOverPlot, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftOverPlot, put=__cordl_internal_set_isLeftOverPlot)) bool  isLeftOverPlot;

/// @brief Field isRightOverPlot, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRightOverPlot, put=__cordl_internal_set_isRightOverPlot)) bool  isRightOverPlot;

/// @brief Field leftPotentialParent, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftPotentialParent, put=__cordl_internal_set_leftPotentialParent)) ::UnityW<::GlobalNamespace::BuilderPiece>  leftPotentialParent;

/// @brief Field materialProps, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialProps, put=__cordl_internal_set_materialProps)) ::UnityEngine::MaterialPropertyBlock*  materialProps;

/// @brief Field overCapacityColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_overCapacityColor, put=__cordl_internal_set_overCapacityColor)) ::UnityEngine::Color  overCapacityColor;

/// @brief Field owningPlayerActorNumber, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_owningPlayerActorNumber, put=__cordl_internal_set_owningPlayerActorNumber)) int32_t  owningPlayerActorNumber;

/// @brief Field piece, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_piece, put=__cordl_internal_set_piece)) ::UnityW<::GlobalNamespace::BuilderPiece>  piece;

/// @brief Field piecesToCount, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_piecesToCount, put=__cordl_internal_set_piecesToCount)) ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  piecesToCount;

/// @brief Field placementAllowedColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_placementAllowedColor, put=__cordl_internal_set_placementAllowedColor)) ::UnityEngine::Color  placementAllowedColor;

/// @brief Field placementDisallowedColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_placementDisallowedColor, put=__cordl_internal_set_placementDisallowedColor)) ::UnityEngine::Color  placementDisallowedColor;

/// @brief Field plotClaimedFX, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_plotClaimedFX, put=__cordl_internal_set_plotClaimedFX)) ::UnityW<::UnityEngine::GameObject>  plotClaimedFX;

/// @brief Field plotState, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_plotState, put=__cordl_internal_set_plotState)) ::GlobalNamespace::BuilderPiecePrivatePlot_PlotState  plotState;

/// @brief Field privatePlotIndex, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_privatePlotIndex, put=__cordl_internal_set_privatePlotIndex)) int32_t  privatePlotIndex;

/// @brief Field resourceMeters, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceMeters, put=__cordl_internal_set_resourceMeters)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*  resourceMeters;

/// @brief Field rightPotentialParent, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightPotentialParent, put=__cordl_internal_set_rightPotentialParent)) ::UnityW<::GlobalNamespace::BuilderPiece>  rightPotentialParent;

/// @brief Field tempResourceCount, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempResourceCount, put=__cordl_internal_set_tempResourceCount)) ::ArrayW<int32_t>  tempResourceCount;

/// @brief Field tmpLabel, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpLabel, put=__cordl_internal_set_tmpLabel)) ::UnityW<::TMPro::TMP_Text>  tmpLabel;

/// @brief Field usedResources, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_usedResources, put=__cordl_internal_set_usedResources)) ::ArrayW<int32_t>  usedResources;

/// @brief Field zoneRenderers, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneRenderers, put=__cordl_internal_set_zoneRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  zoneRenderers;

/// @brief Method AddChainResourcesToCount, addr 0x57d07b8, size 0x2ac, virtual false, abstract: false, final false
inline void AddChainResourcesToCount(::GlobalNamespace::BuilderPiece*  chain, bool  attach) ;

/// @brief Method AddPieceCostToArray, addr 0x57d0a90, size 0x234, virtual false, abstract: false, final false
inline bool AddPieceCostToArray(::GlobalNamespace::BuilderPiece*  addedPiece, ::ArrayW<int32_t>  array) ;

/// @brief Method Awake, addr 0x57cf138, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanPlayerAttachToPlot, addr 0x57c5b68, size 0x58, virtual false, abstract: false, final false
inline bool CanPlayerAttachToPlot(int32_t  actorNumber) ;

/// @brief Method CanPlayerGrabFromPlot, addr 0x57c5ebc, size 0x158, virtual false, abstract: false, final false
inline bool CanPlayerGrabFromPlot(int32_t  actorNumber, ::UnityEngine::Vector3  worldPosition) ;

/// @brief Method ChangeAttachedPieceCount, addr 0x57d0a80, size 0x10, virtual false, abstract: false, final false
inline void ChangeAttachedPieceCount(int32_t  delta) ;

/// @brief Method ClaimPlotForPlayerNumber, addr 0x57d0cc4, size 0x10, virtual false, abstract: false, final false
inline void ClaimPlotForPlayerNumber(int32_t  player) ;

/// @brief Method ClearPlot, addr 0x57d0cdc, size 0x5c, virtual false, abstract: false, final false
inline void ClearPlot() ;

/// @brief Method FreePlot, addr 0x57d0d38, size 0x8, virtual false, abstract: false, final false
inline void FreePlot() ;

/// @brief Method GetOwnerActorNumber, addr 0x57d0cd4, size 0x8, virtual false, abstract: false, final false
inline int32_t GetOwnerActorNumber() ;

/// @brief Method Init, addr 0x57cf13c, size 0x194, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method IsChainUnderCapacity, addr 0x57c5bc0, size 0x1e4, virtual false, abstract: false, final false
inline bool IsChainUnderCapacity(::GlobalNamespace::BuilderPiece*  chain) ;

/// @brief Method IsLocationWithinPlotExtents, addr 0x57d0d50, size 0x174, virtual false, abstract: false, final false
inline bool IsLocationWithinPlotExtents(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method IsPlotClaimed, addr 0x57d0d40, size 0x10, virtual false, abstract: false, final false
inline bool IsPlotClaimed() ;

static inline ::GlobalNamespace::BuilderPiecePrivatePlot* New_ctor() ;

/// @brief Method OnAvailableResourceChange, addr 0x57d0ec4, size 0x4, virtual false, abstract: false, final false
inline void OnAvailableResourceChange() ;

/// @brief Method OnDestroy, addr 0x57cff20, size 0x21c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLocalPlayerClaimedPlot, addr 0x57d013c, size 0x8, virtual false, abstract: false, final false
inline void OnLocalPlayerClaimedPlot(bool  claim) ;

/// @brief Method OnPieceAttachedToPlot, addr 0x57d079c, size 0x1c, virtual false, abstract: false, final false
inline void OnPieceAttachedToPlot(::GlobalNamespace::BuilderPiece*  attachPiece) ;

/// @brief Method OnPieceDetachedFromPlot, addr 0x57d0a64, size 0x1c, virtual false, abstract: false, final false
inline void OnPieceDetachedFromPlot(::GlobalNamespace::BuilderPiece*  detachPiece) ;

/// @brief Method OnZoneChanged, addr 0x57cfea8, size 0x78, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method RecountPlotCost, addr 0x57d0770, size 0x2c, virtual false, abstract: false, final false
inline void RecountPlotCost() ;

/// @brief Method SetBorderColor, addr 0x57d1190, size 0x1e8, virtual false, abstract: false, final false
inline void SetBorderColor(::UnityEngine::Color  color) ;

/// @brief Method SetPlotState, addr 0x57cf2d0, size 0x388, virtual false, abstract: false, final false
inline void SetPlotState(::GlobalNamespace::BuilderPiecePrivatePlot_PlotState  newState) ;

/// @brief Method Start, addr 0x57cf658, size 0x5d8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePlot, addr 0x57d0144, size 0x62c, virtual false, abstract: false, final false
inline void UpdatePlot() ;

/// @brief Method UpdateVisuals, addr 0x57cfc30, size 0x278, virtual false, abstract: false, final false
inline void UpdateVisuals() ;

/// @brief Method UpdateVisualsForOwner, addr 0x57d0ec8, size 0x2c8, virtual false, abstract: false, final false
inline void UpdateVisualsForOwner() ;

constexpr int32_t const& __cordl_internal_get_attachedPieceCount() const;

constexpr int32_t& __cordl_internal_get_attachedPieceCount() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get_borderMeshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get_borderMeshes() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_buildArea() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_buildArea() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_buildAreaBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_buildAreaBounds() ;

constexpr bool const& __cordl_internal_get_doesLocalPlayerOwnAPlot() const;

constexpr bool& __cordl_internal_get_doesLocalPlayerOwnAPlot() ;

constexpr bool const& __cordl_internal_get_inBuilderZone() const;

constexpr bool& __cordl_internal_get_inBuilderZone() ;

constexpr bool const& __cordl_internal_get_initDone() const;

constexpr bool& __cordl_internal_get_initDone() ;

constexpr bool const& __cordl_internal_get_isLeftOverPlot() const;

constexpr bool& __cordl_internal_get_isLeftOverPlot() ;

constexpr bool const& __cordl_internal_get_isRightOverPlot() const;

constexpr bool& __cordl_internal_get_isRightOverPlot() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_leftPotentialParent() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_leftPotentialParent() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_materialProps() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_materialProps() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_overCapacityColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_overCapacityColor() ;

constexpr int32_t const& __cordl_internal_get_owningPlayerActorNumber() const;

constexpr int32_t& __cordl_internal_get_owningPlayerActorNumber() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_piece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_piece() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& __cordl_internal_get_piecesToCount() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& __cordl_internal_get_piecesToCount() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_placementAllowedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_placementAllowedColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_placementDisallowedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_placementDisallowedColor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_plotClaimedFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_plotClaimedFX() ;

constexpr ::GlobalNamespace::BuilderPiecePrivatePlot_PlotState const& __cordl_internal_get_plotState() const;

constexpr ::GlobalNamespace::BuilderPiecePrivatePlot_PlotState& __cordl_internal_get_plotState() ;

constexpr int32_t const& __cordl_internal_get_privatePlotIndex() const;

constexpr int32_t& __cordl_internal_get_privatePlotIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>* const& __cordl_internal_get_resourceMeters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*& __cordl_internal_get_resourceMeters() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_rightPotentialParent() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_rightPotentialParent() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tempResourceCount() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tempResourceCount() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_tmpLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_tmpLabel() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_usedResources() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_usedResources() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_zoneRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_zoneRenderers() ;

constexpr void __cordl_internal_set_attachedPieceCount(int32_t  value) ;

constexpr void __cordl_internal_set_borderMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

constexpr void __cordl_internal_set_buildArea(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_buildAreaBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_doesLocalPlayerOwnAPlot(bool  value) ;

constexpr void __cordl_internal_set_inBuilderZone(bool  value) ;

constexpr void __cordl_internal_set_initDone(bool  value) ;

constexpr void __cordl_internal_set_isLeftOverPlot(bool  value) ;

constexpr void __cordl_internal_set_isRightOverPlot(bool  value) ;

constexpr void __cordl_internal_set_leftPotentialParent(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_materialProps(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_overCapacityColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_owningPlayerActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_piecesToCount(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

constexpr void __cordl_internal_set_placementAllowedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_placementDisallowedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_plotClaimedFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_plotState(::GlobalNamespace::BuilderPiecePrivatePlot_PlotState  value) ;

constexpr void __cordl_internal_set_privatePlotIndex(int32_t  value) ;

constexpr void __cordl_internal_set_resourceMeters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*  value) ;

constexpr void __cordl_internal_set_rightPotentialParent(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_tempResourceCount(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_tmpLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_usedResources(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_zoneRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

/// @brief Method .ctor, addr 0x57d1378, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPiecePrivatePlot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPiecePrivatePlot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPiecePrivatePlot(BuilderPiecePrivatePlot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPiecePrivatePlot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPiecePrivatePlot(BuilderPiecePrivatePlot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1611};

/// [SerializeField]
/// @brief Field placementAllowedColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___placementAllowedColor;

/// [SerializeField]
/// @brief Field placementDisallowedColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___placementDisallowedColor;

/// [SerializeField]
/// @brief Field overCapacityColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___overCapacityColor;

/// @brief Field borderMeshes, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  ___borderMeshes;

/// @brief Field buildArea, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___buildArea;

/// [SerializeField]
/// @brief Field tmpLabel, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___tmpLabel;

/// [SerializeField]
/// @brief Field resourceMeters, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*  ___resourceMeters;

/// @brief Field usedResources, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___usedResources;

/// @brief Field tempResourceCount, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tempResourceCount;

/// [SerializeField]
/// @brief Field plotClaimedFX, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___plotClaimedFX;

/// @brief Field leftPotentialParent, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___leftPotentialParent;

/// @brief Field rightPotentialParent, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___rightPotentialParent;

/// @brief Field isLeftOverPlot, offset: 0x98, size: 0x1, def value: None
 bool  ___isLeftOverPlot;

/// @brief Field isRightOverPlot, offset: 0x99, size: 0x1, def value: None
 bool  ___isRightOverPlot;

/// @brief Field buildAreaBounds, offset: 0x9c, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___buildAreaBounds;

/// [HideInInspector]
/// @brief Field piece, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___piece;

/// @brief Field owningPlayerActorNumber, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___owningPlayerActorNumber;

/// @brief Field attachedPieceCount, offset: 0xc4, size: 0x4, def value: None
 int32_t  ___attachedPieceCount;

/// [HideInInspector]
/// @brief Field privatePlotIndex, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___privatePlotIndex;

/// [HideInInspector]
/// @brief Field plotState, offset: 0xcc, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPiecePrivatePlot_PlotState  ___plotState;

/// @brief Field doesLocalPlayerOwnAPlot, offset: 0xd0, size: 0x1, def value: None
 bool  ___doesLocalPlayerOwnAPlot;

/// @brief Field piecesToCount, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  ___piecesToCount;

/// @brief Field initDone, offset: 0xe0, size: 0x1, def value: None
 bool  ___initDone;

/// @brief Field materialProps, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___materialProps;

/// @brief Field zoneRenderers, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___zoneRenderers;

/// @brief Field inBuilderZone, offset: 0xf8, size: 0x1, def value: None
 bool  ___inBuilderZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___placementAllowedColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___placementDisallowedColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___overCapacityColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___borderMeshes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___buildArea) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___tmpLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___resourceMeters) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___usedResources) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___tempResourceCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___plotClaimedFX) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___leftPotentialParent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___rightPotentialParent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___isLeftOverPlot) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___isRightOverPlot) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___buildAreaBounds) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___piece) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___owningPlayerActorNumber) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___attachedPieceCount) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___privatePlotIndex) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___plotState) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___doesLocalPlayerOwnAPlot) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___piecesToCount) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___initDone) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___materialProps) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___zoneRenderers) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiecePrivatePlot, ___inBuilderZone) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPiecePrivatePlot) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
