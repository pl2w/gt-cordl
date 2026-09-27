#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayableBoundaryManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableBoundaryManager)
namespace GlobalNamespace {
class PlayableBoundaryTracker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayableBoundaryManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayableBoundaryManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayableBoundaryManager*, "", "PlayableBoundaryManager");
// Dependencies ShaderHashId, UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayableBoundaryManager
class CORDL_TYPE PlayableBoundaryManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _GTGameModes_PlayableBoundary_Cylinders_Centers, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GTGameModes_PlayableBoundary_Cylinders_Centers, put=setStaticF__GTGameModes_PlayableBoundary_Cylinders_Centers)) ::GlobalNamespace::ShaderHashId  _GTGameModes_PlayableBoundary_Cylinders_Centers;

/// @brief Field _GTGameModes_PlayableBoundary_Cylinders_RadiusHeights, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GTGameModes_PlayableBoundary_Cylinders_RadiusHeights, put=setStaticF__GTGameModes_PlayableBoundary_Cylinders_RadiusHeights)) ::GlobalNamespace::ShaderHashId  _GTGameModes_PlayableBoundary_Cylinders_RadiusHeights;

/// @brief Field _GTGameModes_PlayableBoundary_IsEnabled, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GTGameModes_PlayableBoundary_IsEnabled, put=setStaticF__GTGameModes_PlayableBoundary_IsEnabled)) ::GlobalNamespace::ShaderHashId  _GTGameModes_PlayableBoundary_IsEnabled;

/// @brief Field _GTGameModes_PlayableBoundary_NonZeroSmoothRadius, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GTGameModes_PlayableBoundary_NonZeroSmoothRadius, put=setStaticF__GTGameModes_PlayableBoundary_NonZeroSmoothRadius)) ::GlobalNamespace::ShaderHashId  _GTGameModes_PlayableBoundary_NonZeroSmoothRadius;

/// @brief Field _cylinders_centers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cylinders_centers, put=__cordl_internal_set__cylinders_centers)) ::ArrayW<::UnityEngine::Vector4>  _cylinders_centers;

/// @brief Field _cylinders_radiusHeights, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cylinders_radiusHeights, put=__cordl_internal_set__cylinders_radiusHeights)) ::ArrayW<::UnityEngine::Vector4>  _cylinders_radiusHeights;

/// @brief Field _lastFrameUpdated, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastFrameUpdated, put=__cordl_internal_set__lastFrameUpdated)) int32_t  _lastFrameUpdated;

/// @brief Field kHashVec, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_kHashVec, put=setStaticF_kHashVec)) ::UnityEngine::Vector3  kHashVec;

/// @brief Field m_bigCylinderRadius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_bigCylinderRadius, put=__cordl_internal_set_m_bigCylinderRadius)) float_t  m_bigCylinderRadius;

/// @brief Field m_smallCylindersMoveTimeScale, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_smallCylindersMoveTimeScale, put=__cordl_internal_set_m_smallCylindersMoveTimeScale)) double_t  m_smallCylindersMoveTimeScale;

/// @brief Field m_smallCylindersRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_smallCylindersRadius, put=__cordl_internal_set_m_smallCylindersRadius)) float_t  m_smallCylindersRadius;

/// @brief Field m_smoothFactor, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_smoothFactor, put=__cordl_internal_set_m_smoothFactor)) float_t  m_smoothFactor;

/// @brief Field radiusScale, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_radiusScale, put=__cordl_internal_set_radiusScale)) float_t  radiusScale;

/// @brief Field tracked, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tracked, put=__cordl_internal_set_tracked)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*  tracked;

/// @brief Method Awake, addr 0x5636ac4, size 0x74, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetSmoothFactor, addr 0x56371ac, size 0x2c, virtual false, abstract: false, final false
inline float_t GetSmoothFactor() ;

/// @brief Method Hash3, addr 0x5636ebc, size 0xd8, virtual false, abstract: false, final false
static inline ::by_ref<::UnityEngine::Vector3> Hash3(float_t  n) ;

static inline ::GlobalNamespace::PlayableBoundaryManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x5636e6c, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5636e10, size 0x5c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SDFSmoothMerge, addr 0x56371d8, size 0xb4, virtual false, abstract: false, final false
inline float_t SDFSmoothMerge(float_t  signedDist1, float_t  signedDist2, float_t  smoothRadius) ;

/// @brief Method Setup, addr 0x5636b38, size 0x2d8, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateSim, addr 0x5632dbc, size 0x474, virtual false, abstract: false, final false
inline void UpdateSim() ;

/// @brief Method _GetSignedDistanceToBoundary, addr 0x5636fd8, size 0x1d4, virtual false, abstract: false, final false
inline float_t _GetSignedDistanceToBoundary(::Unity::Mathematics::float3  tracked_center, float_t  tracked_radius) ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get__cylinders_centers() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get__cylinders_centers() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get__cylinders_radiusHeights() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get__cylinders_radiusHeights() ;

constexpr int32_t const& __cordl_internal_get__lastFrameUpdated() const;

constexpr int32_t& __cordl_internal_get__lastFrameUpdated() ;

constexpr float_t const& __cordl_internal_get_m_bigCylinderRadius() const;

constexpr float_t& __cordl_internal_get_m_bigCylinderRadius() ;

constexpr double_t const& __cordl_internal_get_m_smallCylindersMoveTimeScale() const;

constexpr double_t& __cordl_internal_get_m_smallCylindersMoveTimeScale() ;

constexpr float_t const& __cordl_internal_get_m_smallCylindersRadius() const;

constexpr float_t& __cordl_internal_get_m_smallCylindersRadius() ;

constexpr float_t const& __cordl_internal_get_m_smoothFactor() const;

constexpr float_t& __cordl_internal_get_m_smoothFactor() ;

constexpr float_t const& __cordl_internal_get_radiusScale() const;

constexpr float_t& __cordl_internal_get_radiusScale() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>* const& __cordl_internal_get_tracked() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*& __cordl_internal_get_tracked() ;

constexpr void __cordl_internal_set__cylinders_centers(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set__cylinders_radiusHeights(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set__lastFrameUpdated(int32_t  value) ;

constexpr void __cordl_internal_set_m_bigCylinderRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_smallCylindersMoveTimeScale(double_t  value) ;

constexpr void __cordl_internal_set_m_smallCylindersRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_smoothFactor(float_t  value) ;

constexpr void __cordl_internal_set_radiusScale(float_t  value) ;

constexpr void __cordl_internal_set_tracked(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*  value) ;

/// @brief Method .ctor, addr 0x563728c, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GTGameModes_PlayableBoundary_Cylinders_Centers() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GTGameModes_PlayableBoundary_Cylinders_RadiusHeights() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GTGameModes_PlayableBoundary_IsEnabled() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GTGameModes_PlayableBoundary_NonZeroSmoothRadius() ;

static inline ::UnityEngine::Vector3 getStaticF_kHashVec() ;

/// @brief Method get_ShouldRender, addr 0x56369ec, size 0x68, virtual false, abstract: false, final false
static inline bool get_ShouldRender() ;

static inline void setStaticF__GTGameModes_PlayableBoundary_Cylinders_Centers(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GTGameModes_PlayableBoundary_Cylinders_RadiusHeights(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GTGameModes_PlayableBoundary_IsEnabled(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GTGameModes_PlayableBoundary_NonZeroSmoothRadius(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF_kHashVec(::UnityEngine::Vector3  value) ;

/// @brief Method set_ShouldRender, addr 0x5636a54, size 0x70, virtual false, abstract: false, final false
static inline void set_ShouldRender(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableBoundaryManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableBoundaryManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableBoundaryManager(PlayableBoundaryManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableBoundaryManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableBoundaryManager(PlayableBoundaryManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{628};

/// @brief Field _k_cylinders_count offset 0xffffffff size 0x4
static constexpr int32_t  _k_cylinders_count{static_cast<int32_t>(0x8)};

/// @brief Field tracked, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*  ___tracked;

/// [Space]
/// [Range(0, 128)]
/// @brief Field m_bigCylinderRadius, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_bigCylinderRadius;

/// @brief Field m_smoothFactor, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_smoothFactor;

/// @brief Field m_smallCylindersRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_smallCylindersRadius;

/// [SerializeField]
/// @brief Field m_smallCylindersMoveTimeScale, offset: 0x38, size: 0x8, def value: None
 double_t  ___m_smallCylindersMoveTimeScale;

/// [Space]
/// @brief Field _cylinders_centers, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ____cylinders_centers;

/// @brief Field _cylinders_radiusHeights, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ____cylinders_radiusHeights;

/// @brief Field radiusScale, offset: 0x50, size: 0x4, def value: None
 float_t  ___radiusScale;

/// @brief Field _lastFrameUpdated, offset: 0x54, size: 0x4, def value: None
 int32_t  ____lastFrameUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayableBoundaryManager, ___tracked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryManager, ___m_bigCylinderRadius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryManager, ___m_smoothFactor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryManager, ___m_smallCylindersRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryManager, ___m_smallCylindersMoveTimeScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryManager, ____cylinders_centers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryManager, ____cylinders_radiusHeights) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryManager, ___radiusScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryManager, ____lastFrameUpdated) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayableBoundaryManager) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
