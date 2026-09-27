#pragma once
// IWYU pragma private; include "GlobalNamespace/BspTestPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BspTestPlayer)
namespace GlobalNamespace {
struct SerializableBSPNode_Axis;
}
namespace GlobalNamespace {
class SerializableBSPTree;
}
namespace GlobalNamespace {
class ZoneDef;
}
namespace GlobalNamespace {
class ZoneGraphBSP;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BspTestPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BspTestPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BspTestPlayer*, "", "BspTestPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BspTestPlayer
class CORDL_TYPE BspTestPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bspSystem, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bspSystem, put=__cordl_internal_set_bspSystem)) ::UnityW<::GlobalNamespace::ZoneGraphBSP>  bspSystem;

/// @brief Field currentZone, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentZone, put=__cordl_internal_set_currentZone)) ::UnityW<::GlobalNamespace::ZoneDef>  currentZone;

/// @brief Field currentZoneName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentZoneName, put=__cordl_internal_set_currentZoneName)) ::StringW  currentZoneName;

/// @brief Field moveSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveSpeed, put=__cordl_internal_set_moveSpeed)) float_t  moveSpeed;

/// @brief Field positionDisplayText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionDisplayText, put=__cordl_internal_set_positionDisplayText)) ::UnityW<::TMPro::TextMeshPro>  positionDisplayText;

/// @brief Field use3DMovement, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_use3DMovement, put=__cordl_internal_set_use3DMovement)) bool  use3DMovement;

/// @brief Field zoneDisplayText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneDisplayText, put=__cordl_internal_set_zoneDisplayText)) ::UnityW<::TMPro::TextMeshPro>  zoneDisplayText;

/// @brief Method CreateUI, addr 0x5b435f8, size 0x554, virtual false, abstract: false, final false
inline void CreateUI() ;

/// @brief Method DrawBSPSplits, addr 0x5b44484, size 0x288, virtual false, abstract: false, final false
inline void DrawBSPSplits() ;

/// @brief Method DrawPlayerPath, addr 0x5b4470c, size 0x478, virtual false, abstract: false, final false
inline void DrawPlayerPath(::GlobalNamespace::SerializableBSPTree*  tree, ::UnityEngine::Vector3  playerPos, int32_t  nodeIndex, ::UnityEngine::Bounds  bounds, int32_t  depth) ;

/// @brief Method DrawSplitPlane, addr 0x5b44be4, size 0x11c, virtual false, abstract: false, final false
inline void DrawSplitPlane(::GlobalNamespace::SerializableBSPNode_Axis  axis, float_t  splitValue, ::UnityEngine::Bounds  bounds) ;

/// @brief Method GetAxisColor, addr 0x5b44b84, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetAxisColor(::GlobalNamespace::SerializableBSPNode_Axis  axis, int32_t  depth) ;

/// @brief Method GetAxisValue, addr 0x5b44d00, size 0x4c, virtual false, abstract: false, final false
inline float_t GetAxisValue(::UnityEngine::Vector3  point, ::GlobalNamespace::SerializableBSPNode_Axis  axis) ;

/// @brief Method HandleMovement, addr 0x5b43b6c, size 0x2ec, virtual false, abstract: false, final false
inline void HandleMovement() ;

static inline ::GlobalNamespace::BspTestPlayer* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5b4421c, size 0x240, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Start, addr 0x5b4350c, size 0xec, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b43b4c, size 0x20, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateUI, addr 0x5b4406c, size 0x1a0, virtual false, abstract: false, final false
inline void UpdateUI() ;

/// @brief Method UpdateZoneInfo, addr 0x5b43e58, size 0x214, virtual false, abstract: false, final false
inline void UpdateZoneInfo() ;

constexpr ::UnityW<::GlobalNamespace::ZoneGraphBSP> const& __cordl_internal_get_bspSystem() const;

constexpr ::UnityW<::GlobalNamespace::ZoneGraphBSP>& __cordl_internal_get_bspSystem() ;

constexpr ::UnityW<::GlobalNamespace::ZoneDef> const& __cordl_internal_get_currentZone() const;

constexpr ::UnityW<::GlobalNamespace::ZoneDef>& __cordl_internal_get_currentZone() ;

constexpr ::StringW const& __cordl_internal_get_currentZoneName() const;

constexpr ::StringW& __cordl_internal_get_currentZoneName() ;

constexpr float_t const& __cordl_internal_get_moveSpeed() const;

constexpr float_t& __cordl_internal_get_moveSpeed() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_positionDisplayText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_positionDisplayText() ;

constexpr bool const& __cordl_internal_get_use3DMovement() const;

constexpr bool& __cordl_internal_get_use3DMovement() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_zoneDisplayText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_zoneDisplayText() ;

constexpr void __cordl_internal_set_bspSystem(::UnityW<::GlobalNamespace::ZoneGraphBSP>  value) ;

constexpr void __cordl_internal_set_currentZone(::UnityW<::GlobalNamespace::ZoneDef>  value) ;

constexpr void __cordl_internal_set_currentZoneName(::StringW  value) ;

constexpr void __cordl_internal_set_moveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_positionDisplayText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_use3DMovement(bool  value) ;

constexpr void __cordl_internal_set_zoneDisplayText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x5b44d4c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BspTestPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BspTestPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BspTestPlayer(BspTestPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BspTestPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BspTestPlayer(BspTestPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3730};

/// [Header("Movement")]
/// [SerializeField]
/// @brief Field moveSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___moveSpeed;

/// [SerializeField]
/// @brief Field use3DMovement, offset: 0x24, size: 0x1, def value: None
 bool  ___use3DMovement;

/// [Header("UI")]
/// [SerializeField]
/// @brief Field zoneDisplayText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___zoneDisplayText;

/// [SerializeField]
/// @brief Field positionDisplayText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___positionDisplayText;

/// [Header("BSP")]
/// [SerializeField]
/// @brief Field bspSystem, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneGraphBSP>  ___bspSystem;

/// @brief Field currentZoneName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___currentZoneName;

/// @brief Field currentZone, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneDef>  ___currentZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BspTestPlayer, ___moveSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BspTestPlayer, ___use3DMovement) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BspTestPlayer, ___zoneDisplayText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BspTestPlayer, ___positionDisplayText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BspTestPlayer, ___bspSystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BspTestPlayer, ___currentZoneName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BspTestPlayer, ___currentZone) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BspTestPlayer) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
