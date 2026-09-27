#pragma once
// IWYU pragma private; include "GlobalNamespace/HitChecker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HitChecker)
namespace GlobalNamespace {
class GorillaTriggerColliderHandIndicator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HitChecker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HitChecker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HitChecker*, "", "HitChecker");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HitChecker
class CORDL_TYPE HitChecker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method CheckHandHit, addr 0x5759680, size 0x4c4, virtual false, abstract: false, final false
static inline void CheckHandHit(::by_ref<int32_t>  collidersHitCount, ::UnityEngine::LayerMask  layerMask, float_t  sphereRadius, ::by_ref<::UnityEngine::RaycastHit>  nullHit, ::by_ref<::ArrayW<::UnityEngine::RaycastHit>>  raycastHits, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>  raycastHitList, ::by_ref<::UnityEngine::Vector3>  spherecastSweep, ::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>  handIndicator) ;

/// @brief Method CheckHandIn, addr 0x5759b44, size 0x170, virtual false, abstract: false, final false
static inline bool CheckHandIn(::by_ref<bool>  anyHit, ::by_ref<::ArrayW<::UnityEngine::Collider*>>  colliderHit, float_t  sphereRadius, int32_t  layerMask, ::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>  handIndicator, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>  collidersToBeIn) ;

static inline ::GlobalNamespace::HitChecker* New_ctor() ;

/// @brief Method RayCastHitCompare, addr 0x5759cb4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t RayCastHitCompare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b) ;

/// @brief Method .ctor, addr 0x5759d30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitChecker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitChecker(HitChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitChecker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitChecker(HitChecker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1326};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HitChecker) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
