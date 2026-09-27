#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SizeManager_SizeChangerType_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SizeManager)
namespace GlobalNamespace {
class SizeChanger;
}
namespace GlobalNamespace {
struct SizeManager_SizeChangerType;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SizeManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SizeManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SizeManager*, "", "SizeManager");
// Dependencies SizeManager::SizeChangerType, UnityEngine.LineRenderer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SizeManager
class CORDL_TYPE SizeManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SizeChangerType = ::GlobalNamespace::SizeManager_SizeChangerType;

/// @brief Field buildInitialized, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_buildInitialized, put=__cordl_internal_set_buildInitialized)) bool  buildInitialized;

 __declspec(property(get=get_currentScale)) float_t  currentScale;

 __declspec(property(get=get_currentSizeLayerMaskValue, put=set_currentSizeLayerMaskValue)) int32_t  currentSizeLayerMaskValue;

/// @brief Field initLineScalar, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_initLineScalar, put=__cordl_internal_set_initLineScalar)) ::System::Collections::Generic::List_1<float_t>*  initLineScalar;

/// @brief Field isLarge, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLarge, put=__cordl_internal_set_isLarge)) bool  isLarge;

/// @brief Field isSmall, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSmall, put=__cordl_internal_set_isSmall)) bool  isSmall;

/// @brief Field largeThreshold, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_largeThreshold, put=__cordl_internal_set_largeThreshold)) float_t  largeThreshold;

/// @brief Field lastScale, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastScale, put=__cordl_internal_set_lastScale)) float_t  lastScale;

/// @brief Field lineRenderers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderers, put=__cordl_internal_set_lineRenderers)) ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  lineRenderers;

/// @brief Field magnitudeThreshold, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnitudeThreshold, put=__cordl_internal_set_magnitudeThreshold)) float_t  magnitudeThreshold;

/// @brief Field mainCameraTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCameraTransform, put=__cordl_internal_set_mainCameraTransform)) ::UnityW<::UnityEngine::Transform>  mainCameraTransform;

/// @brief Field myType, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_myType, put=__cordl_internal_set_myType)) ::GlobalNamespace::SizeManager_SizeChangerType  myType;

/// @brief Field rate, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rate, put=__cordl_internal_set_rate)) float_t  rate;

/// @brief Field smallThreshold, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_smallThreshold, put=__cordl_internal_set_smallThreshold)) float_t  smallThreshold;

/// @brief Field targetPlayer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::UnityW<::GorillaLocomotion::GTPlayer>  targetPlayer;

/// @brief Field targetRig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRig, put=__cordl_internal_set_targetRig)) ::UnityW<::GlobalNamespace::VRRig>  targetRig;

/// @brief Field touchingChangers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchingChangers, put=__cordl_internal_set_touchingChangers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChanger>>*  touchingChangers;

/// @brief Method Awake, addr 0x595e1ac, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildInitialize, addr 0x595df44, size 0x268, virtual false, abstract: false, final false
inline void BuildInitialize() ;

/// @brief Method CheckSizeChangeEvents, addr 0x595ebac, size 0xbc, virtual false, abstract: false, final false
inline void CheckSizeChangeEvents(float_t  newSize) ;

/// @brief Method CollectLineRenderers, addr 0x595de10, size 0x134, virtual false, abstract: false, final false
inline void CollectLineRenderers(::UnityEngine::GameObject*  obj) ;

/// @brief Method ControllingChanger, addr 0x595e524, size 0x214, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SizeChanger> ControllingChanger(::UnityEngine::Transform*  t) ;

/// @brief Method InvokeFixedUpdate, addr 0x595e210, size 0x314, virtual false, abstract: false, final false
inline void InvokeFixedUpdate() ;

static inline ::GlobalNamespace::SizeManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x595dacc, size 0x9c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x595dc68, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ScaleFromChanger, addr 0x595e738, size 0x41c, virtual false, abstract: false, final false
inline float_t ScaleFromChanger(::GlobalNamespace::SizeChanger*  sC, ::UnityEngine::Transform*  t, float_t  deltaTime) ;

/// @brief Method SizeOverTime, addr 0x595eb54, size 0x58, virtual false, abstract: false, final false
inline float_t SizeOverTime(float_t  targetSize, float_t  easing, float_t  deltaTime) ;

constexpr bool const& __cordl_internal_get_buildInitialized() const;

constexpr bool& __cordl_internal_get_buildInitialized() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_initLineScalar() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_initLineScalar() ;

constexpr bool const& __cordl_internal_get_isLarge() const;

constexpr bool& __cordl_internal_get_isLarge() ;

constexpr bool const& __cordl_internal_get_isSmall() const;

constexpr bool& __cordl_internal_get_isSmall() ;

constexpr float_t const& __cordl_internal_get_largeThreshold() const;

constexpr float_t& __cordl_internal_get_largeThreshold() ;

constexpr float_t const& __cordl_internal_get_lastScale() const;

constexpr float_t& __cordl_internal_get_lastScale() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>> const& __cordl_internal_get_lineRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>& __cordl_internal_get_lineRenderers() ;

constexpr float_t const& __cordl_internal_get_magnitudeThreshold() const;

constexpr float_t& __cordl_internal_get_magnitudeThreshold() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mainCameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mainCameraTransform() ;

constexpr ::GlobalNamespace::SizeManager_SizeChangerType const& __cordl_internal_get_myType() const;

constexpr ::GlobalNamespace::SizeManager_SizeChangerType& __cordl_internal_get_myType() ;

constexpr float_t const& __cordl_internal_get_rate() const;

constexpr float_t& __cordl_internal_get_rate() ;

constexpr float_t const& __cordl_internal_get_smallThreshold() const;

constexpr float_t& __cordl_internal_get_smallThreshold() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_targetPlayer() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_targetPlayer() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetRig() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChanger>>* const& __cordl_internal_get_touchingChangers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChanger>>*& __cordl_internal_get_touchingChangers() ;

constexpr void __cordl_internal_set_buildInitialized(bool  value) ;

constexpr void __cordl_internal_set_initLineScalar(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_isLarge(bool  value) ;

constexpr void __cordl_internal_set_isSmall(bool  value) ;

constexpr void __cordl_internal_set_largeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_lastScale(float_t  value) ;

constexpr void __cordl_internal_set_lineRenderers(::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  value) ;

constexpr void __cordl_internal_set_magnitudeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_mainCameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_myType(::GlobalNamespace::SizeManager_SizeChangerType  value) ;

constexpr void __cordl_internal_set_rate(float_t  value) ;

constexpr void __cordl_internal_set_smallThreshold(float_t  value) ;

constexpr void __cordl_internal_set_targetPlayer(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_touchingChangers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChanger>>*  value) ;

/// @brief Method .ctor, addr 0x595ec68, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentScale, addr 0x595d960, size 0xb4, virtual false, abstract: false, final false
inline float_t get_currentScale() ;

/// @brief Method get_currentSizeLayerMaskValue, addr 0x595da14, size 0xb8, virtual false, abstract: false, final false
inline int32_t get_currentSizeLayerMaskValue() ;

/// @brief Method set_currentSizeLayerMaskValue, addr 0x595d290, size 0xec, virtual false, abstract: false, final false
inline void set_currentSizeLayerMaskValue(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SizeManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SizeManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SizeManager(SizeManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SizeManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SizeManager(SizeManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2351};

/// @brief Field returnToNormalEasing offset 0xffffffff size 0x4
static constexpr float_t  returnToNormalEasing{static_cast<float_t>(0.33f)};

/// @brief Field touchingChangers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChanger>>*  ___touchingChangers;

/// @brief Field lineRenderers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  ___lineRenderers;

/// @brief Field initLineScalar, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___initLineScalar;

/// @brief Field targetRig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetRig;

/// @brief Field targetPlayer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___targetPlayer;

/// @brief Field magnitudeThreshold, offset: 0x48, size: 0x4, def value: None
 float_t  ___magnitudeThreshold;

/// @brief Field rate, offset: 0x4c, size: 0x4, def value: None
 float_t  ___rate;

/// @brief Field mainCameraTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___mainCameraTransform;

/// @brief Field myType, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::SizeManager_SizeChangerType  ___myType;

/// @brief Field lastScale, offset: 0x5c, size: 0x4, def value: None
 float_t  ___lastScale;

/// @brief Field buildInitialized, offset: 0x60, size: 0x1, def value: None
 bool  ___buildInitialized;

/// @brief Field smallThreshold, offset: 0x64, size: 0x4, def value: None
 float_t  ___smallThreshold;

/// @brief Field largeThreshold, offset: 0x68, size: 0x4, def value: None
 float_t  ___largeThreshold;

/// @brief Field isSmall, offset: 0x6c, size: 0x1, def value: None
 bool  ___isSmall;

/// @brief Field isLarge, offset: 0x6d, size: 0x1, def value: None
 bool  ___isLarge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SizeManager, ___touchingChangers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___lineRenderers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___initLineScalar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___targetRig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___targetPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___magnitudeThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___rate) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___mainCameraTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___myType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___lastScale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___buildInitialized) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___smallThreshold) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___largeThreshold) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___isSmall) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeManager, ___isLarge) == 0x6d, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SizeManager) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
