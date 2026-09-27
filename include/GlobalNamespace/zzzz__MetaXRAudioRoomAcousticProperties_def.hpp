#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioRoomAcousticProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MetaXRAudioRoomAcousticProperties_MaterialPreset_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAudioRoomAcousticProperties)
namespace GlobalNamespace {
struct MetaXRAudioRoomAcousticProperties_MaterialPreset;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAudioRoomAcousticProperties;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAudioRoomAcousticProperties*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioRoomAcousticProperties*, "", "MetaXRAudioRoomAcousticProperties");
// Dependencies MetaXRAudioRoomAcousticProperties::MaterialPreset, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioRoomAcousticProperties
class CORDL_TYPE MetaXRAudioRoomAcousticProperties : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MaterialPreset = ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset;

/// @brief Field backMaterial, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_backMaterial, put=__cordl_internal_set_backMaterial)) ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  backMaterial;

/// @brief Field ceilingMaterial, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ceilingMaterial, put=__cordl_internal_set_ceilingMaterial)) ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  ceilingMaterial;

/// @brief Field clutterFactor, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_clutterFactor, put=__cordl_internal_set_clutterFactor)) float_t  clutterFactor;

/// @brief Field clutterFactorBands, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_clutterFactorBands, put=__cordl_internal_set_clutterFactorBands)) ::ArrayW<float_t>  clutterFactorBands;

/// @brief Field depth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_depth, put=__cordl_internal_set_depth)) float_t  depth;

/// @brief Field floorMaterial, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_floorMaterial, put=__cordl_internal_set_floorMaterial)) ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  floorMaterial;

/// @brief Field frontMaterial, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_frontMaterial, put=__cordl_internal_set_frontMaterial)) ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  frontMaterial;

/// @brief Field height, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field leftMaterial, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftMaterial, put=__cordl_internal_set_leftMaterial)) ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  leftMaterial;

/// @brief Field lockPositionToListener, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_lockPositionToListener, put=__cordl_internal_set_lockPositionToListener)) bool  lockPositionToListener;

/// @brief Field rightMaterial, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightMaterial, put=__cordl_internal_set_rightMaterial)) ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  rightMaterial;

/// @brief Field wallMaterials, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_wallMaterials, put=__cordl_internal_set_wallMaterials)) ::ArrayW<float_t>  wallMaterials;

/// @brief Field width, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) float_t  width;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method CheckSceneHasRoom, addr 0x9ebd1dc, size 0x194, virtual false, abstract: false, final false
static inline void CheckSceneHasRoom() ;

static inline ::GlobalNamespace::MetaXRAudioRoomAcousticProperties* New_ctor() ;

/// @brief Method SetWallMaterialPreset, addr 0x9ebd594, size 0x4f8, virtual false, abstract: false, final false
inline void SetWallMaterialPreset(int32_t  wallIndex, ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  materialPreset) ;

/// @brief Method SetWallMaterialProperties, addr 0x9ebda8c, size 0x74, virtual false, abstract: false, final false
inline void SetWallMaterialProperties(int32_t  wallIndex, float_t  band0, float_t  band1, float_t  band2, float_t  band3) ;

/// @brief Method Update, addr 0x9ebd370, size 0x224, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& __cordl_internal_get_backMaterial() const;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& __cordl_internal_get_backMaterial() ;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& __cordl_internal_get_ceilingMaterial() const;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& __cordl_internal_get_ceilingMaterial() ;

constexpr float_t const& __cordl_internal_get_clutterFactor() const;

constexpr float_t& __cordl_internal_get_clutterFactor() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_clutterFactorBands() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_clutterFactorBands() ;

constexpr float_t const& __cordl_internal_get_depth() const;

constexpr float_t& __cordl_internal_get_depth() ;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& __cordl_internal_get_floorMaterial() const;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& __cordl_internal_get_floorMaterial() ;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& __cordl_internal_get_frontMaterial() const;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& __cordl_internal_get_frontMaterial() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& __cordl_internal_get_leftMaterial() const;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& __cordl_internal_get_leftMaterial() ;

constexpr bool const& __cordl_internal_get_lockPositionToListener() const;

constexpr bool& __cordl_internal_get_lockPositionToListener() ;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& __cordl_internal_get_rightMaterial() const;

constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& __cordl_internal_get_rightMaterial() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_wallMaterials() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_wallMaterials() ;

constexpr float_t const& __cordl_internal_get_width() const;

constexpr float_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_backMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value) ;

constexpr void __cordl_internal_set_ceilingMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value) ;

constexpr void __cordl_internal_set_clutterFactor(float_t  value) ;

constexpr void __cordl_internal_set_clutterFactorBands(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_depth(float_t  value) ;

constexpr void __cordl_internal_set_floorMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value) ;

constexpr void __cordl_internal_set_frontMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_leftMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value) ;

constexpr void __cordl_internal_set_lockPositionToListener(bool  value) ;

constexpr void __cordl_internal_set_rightMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value) ;

constexpr void __cordl_internal_set_wallMaterials(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_width(float_t  value) ;

/// @brief Method .ctor, addr 0x9ebdb00, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioRoomAcousticProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioRoomAcousticProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioRoomAcousticProperties(MetaXRAudioRoomAcousticProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioRoomAcousticProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioRoomAcousticProperties(MetaXRAudioRoomAcousticProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29952};

/// @brief Field kAudioBandCount offset 0xffffffff size 0x4
static constexpr int32_t  kAudioBandCount{static_cast<int32_t>(0x4)};

/// [Tooltip("Center the room model on the listener. When disabled, center the room model on the GameObject this script is attached to.")]
/// @brief Field lockPositionToListener, offset: 0x20, size: 0x1, def value: None
 bool  ___lockPositionToListener;

/// [Tooltip("Width of the room model in meters")]
/// @brief Field width, offset: 0x24, size: 0x4, def value: None
 float_t  ___width;

/// [Tooltip("Height of the room model in meters")]
/// @brief Field height, offset: 0x28, size: 0x4, def value: None
 float_t  ___height;

/// [Tooltip("Depth of the room model in meters")]
/// @brief Field depth, offset: 0x2c, size: 0x4, def value: None
 float_t  ___depth;

/// [Tooltip("Material of the left wall of the room model")]
/// @brief Field leftMaterial, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  ___leftMaterial;

/// [Tooltip("Material of the right wall of the room model")]
/// @brief Field rightMaterial, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  ___rightMaterial;

/// [Tooltip("Material of the ceiling of the room model")]
/// @brief Field ceilingMaterial, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  ___ceilingMaterial;

/// [Tooltip("Material of the floor of the room model")]
/// @brief Field floorMaterial, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  ___floorMaterial;

/// [Tooltip("Material of the front wall of the room model")]
/// @brief Field frontMaterial, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  ___frontMaterial;

/// [Tooltip("Material of the back wall of the room model")]
/// @brief Field backMaterial, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  ___backMaterial;

/// [Tooltip("Diffuses the reflections and reverberation to simulate objects inside the room. Zero represents a completely empty room.")]
/// [Range(0, 1)]
/// @brief Field clutterFactor, offset: 0x48, size: 0x4, def value: None
 float_t  ___clutterFactor;

/// @brief Field clutterFactorBands, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ___clutterFactorBands;

/// @brief Field wallMaterials, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<float_t>  ___wallMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___lockPositionToListener) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___width) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___height) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___depth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___leftMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___rightMaterial) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___ceilingMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___floorMaterial) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___frontMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___backMaterial) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___clutterFactor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___clutterFactorBands) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties, ___wallMaterials) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioRoomAcousticProperties) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
