#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsThrottler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_def.hpp"
#include "GorillaNetworking/zzzz__GorillaRigHelper_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsThrottler)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticSlots;
}
namespace GlobalNamespace {
struct CosmeticsThrottler_RigDrawState;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaNetworking {
struct GorillaRigHelper;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GorillaNetworking {
class CosmeticsThrottler;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CosmeticsThrottler*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticsThrottler*, "GorillaNetworking", "CosmeticsThrottler");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticSlots, GorillaNetworking.GorillaRigHelper, UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticsThrottler
class CORDL_TYPE CosmeticsThrottler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RigDrawState = ::GlobalNamespace::CosmeticsThrottler_RigDrawState;

/// @brief Field DrawAllCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DrawAllCount, put=__cordl_internal_set_DrawAllCount)) int32_t  DrawAllCount;

/// @brief Field DrawAllDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_DrawAllDistance, put=__cordl_internal_set_DrawAllDistance)) float_t  DrawAllDistance;

/// @brief Field DrawMaxCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_DrawMaxCount, put=__cordl_internal_set_DrawMaxCount)) int32_t  DrawMaxCount;

/// @brief Field DrawOnPlayerCount, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_DrawOnPlayerCount, put=__cordl_internal_set_DrawOnPlayerCount)) bool  DrawOnPlayerCount;

/// @brief Field MaxDrawDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxDrawDistance, put=__cordl_internal_set_MaxDrawDistance)) float_t  MaxDrawDistance;

/// @brief Field ThrottlePlayerCountThreshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ThrottlePlayerCountThreshold, put=__cordl_internal_set_ThrottlePlayerCountThreshold)) int32_t  ThrottlePlayerCountThreshold;

/// @brief Field ToggleSlots, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToggleSlots, put=__cordl_internal_set_ToggleSlots)) ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticSlots>  ToggleSlots;

/// @brief Field _cosmeticSlots, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__cosmeticSlots, put=__cordl_internal_set__cosmeticSlots)) int32_t  _cosmeticSlots;

/// @brief Field _rigHelpers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigHelpers, put=__cordl_internal_set__rigHelpers)) ::ArrayW<::GorillaNetworking::GorillaRigHelper>  _rigHelpers;

/// @brief Field _update, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__update, put=__cordl_internal_set__update)) float_t  _update;

/// @brief Field lastPlayerCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPlayerCount, put=__cordl_internal_set_lastPlayerCount)) int32_t  lastPlayerCount;

/// @brief Field mainCamera, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCamera, put=__cordl_internal_set_mainCamera)) ::UnityW<::UnityEngine::Camera>  mainCamera;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5c719d4, size 0x2ac, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ContainsSlot, addr 0x5c72530, size 0x64, virtual false, abstract: false, final false
inline bool ContainsSlot(::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method EnableAllRenderers, addr 0x5c71d20, size 0x64, virtual false, abstract: false, final false
inline void EnableAllRenderers() ;

static inline ::GorillaNetworking::CosmeticsThrottler* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c71d8c, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5c71d94, size 0x88, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5c71d84, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5c71e1c, size 0x4a0, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method ToggleRenderersOnRig, addr 0x5c72394, size 0xbc, virtual false, abstract: false, final false
inline void ToggleRenderersOnRig(::GlobalNamespace::VRRig*  rig, bool  toggle) ;

/// @brief Method ToggleRenderersOnRigForSlots, addr 0x5c72450, size 0xe0, virtual false, abstract: false, final false
inline void ToggleRenderersOnRigForSlots(::GlobalNamespace::VRRig*  rig, bool  toggle, bool  includesSlots) ;

/// @brief Method UpdatePlayerCount, addr 0x5c71c80, size 0xa0, virtual false, abstract: false, final false
inline void UpdatePlayerCount() ;

/// @brief Method UpdateRigState, addr 0x5c722bc, size 0xd8, virtual false, abstract: false, final false
inline ::GorillaNetworking::GorillaRigHelper UpdateRigState(::GorillaNetworking::GorillaRigHelper  helper, ::GlobalNamespace::CosmeticsThrottler_RigDrawState  newState) ;

constexpr int32_t const& __cordl_internal_get_DrawAllCount() const;

constexpr int32_t& __cordl_internal_get_DrawAllCount() ;

constexpr float_t const& __cordl_internal_get_DrawAllDistance() const;

constexpr float_t& __cordl_internal_get_DrawAllDistance() ;

constexpr int32_t const& __cordl_internal_get_DrawMaxCount() const;

constexpr int32_t& __cordl_internal_get_DrawMaxCount() ;

constexpr bool const& __cordl_internal_get_DrawOnPlayerCount() const;

constexpr bool& __cordl_internal_get_DrawOnPlayerCount() ;

constexpr float_t const& __cordl_internal_get_MaxDrawDistance() const;

constexpr float_t& __cordl_internal_get_MaxDrawDistance() ;

constexpr int32_t const& __cordl_internal_get_ThrottlePlayerCountThreshold() const;

constexpr int32_t& __cordl_internal_get_ThrottlePlayerCountThreshold() ;

constexpr ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticSlots> const& __cordl_internal_get_ToggleSlots() const;

constexpr ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticSlots>& __cordl_internal_get_ToggleSlots() ;

constexpr int32_t const& __cordl_internal_get__cosmeticSlots() const;

constexpr int32_t& __cordl_internal_get__cosmeticSlots() ;

constexpr ::ArrayW<::GorillaNetworking::GorillaRigHelper> const& __cordl_internal_get__rigHelpers() const;

constexpr ::ArrayW<::GorillaNetworking::GorillaRigHelper>& __cordl_internal_get__rigHelpers() ;

constexpr float_t const& __cordl_internal_get__update() const;

constexpr float_t& __cordl_internal_get__update() ;

constexpr int32_t const& __cordl_internal_get_lastPlayerCount() const;

constexpr int32_t& __cordl_internal_get_lastPlayerCount() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mainCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mainCamera() ;

constexpr void __cordl_internal_set_DrawAllCount(int32_t  value) ;

constexpr void __cordl_internal_set_DrawAllDistance(float_t  value) ;

constexpr void __cordl_internal_set_DrawMaxCount(int32_t  value) ;

constexpr void __cordl_internal_set_DrawOnPlayerCount(bool  value) ;

constexpr void __cordl_internal_set_MaxDrawDistance(float_t  value) ;

constexpr void __cordl_internal_set_ThrottlePlayerCountThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_ToggleSlots(::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticSlots>  value) ;

constexpr void __cordl_internal_set__cosmeticSlots(int32_t  value) ;

constexpr void __cordl_internal_set__rigHelpers(::ArrayW<::GorillaNetworking::GorillaRigHelper>  value) ;

constexpr void __cordl_internal_set__update(float_t  value) ;

constexpr void __cordl_internal_set_lastPlayerCount(int32_t  value) ;

constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x5c72594, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsThrottler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsThrottler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsThrottler(CosmeticsThrottler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsThrottler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsThrottler(CosmeticsThrottler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4315};

/// @brief Field DrawAllDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___DrawAllDistance;

/// @brief Field MaxDrawDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ___MaxDrawDistance;

/// @brief Field DrawOnPlayerCount, offset: 0x28, size: 0x1, def value: None
 bool  ___DrawOnPlayerCount;

/// @brief Field DrawAllCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___DrawAllCount;

/// @brief Field DrawMaxCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___DrawMaxCount;

/// @brief Field ThrottlePlayerCountThreshold, offset: 0x34, size: 0x4, def value: None
 int32_t  ___ThrottlePlayerCountThreshold;

/// @brief Field lastPlayerCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___lastPlayerCount;

/// @brief Field ToggleSlots, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticSlots>  ___ToggleSlots;

/// [SerializeField]
/// @brief Field _rigHelpers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GorillaNetworking::GorillaRigHelper>  ____rigHelpers;

/// @brief Field _cosmeticSlots, offset: 0x50, size: 0x4, def value: None
 int32_t  ____cosmeticSlots;

/// @brief Field _update, offset: 0x54, size: 0x4, def value: None
 float_t  ____update;

/// @brief Field mainCamera, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___mainCamera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ___DrawAllDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ___MaxDrawDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ___DrawOnPlayerCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ___DrawAllCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ___DrawMaxCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ___ThrottlePlayerCountThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ___lastPlayerCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ___ToggleSlots) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ____rigHelpers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ____cosmeticSlots) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ____update) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticsThrottler, ___mainCamera) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticsThrottler) == 0x60, "Size mismatch!");

} // namespace end def GorillaNetworking
