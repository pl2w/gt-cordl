#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticWardrobeProximityDetector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticWardrobeProximityDetector)
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class SphereCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticWardrobeProximityDetector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticWardrobeProximityDetector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticWardrobeProximityDetector*, "", "CosmeticWardrobeProximityDetector");
// [RequireComponent(typeof(UnityEngine.SphereCollider))]
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticWardrobeProximityDetector
class CORDL_TYPE CosmeticWardrobeProximityDetector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field overlapColliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overlapColliders, put=setStaticF_overlapColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapColliders;

/// @brief Field rigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rigs, put=setStaticF_rigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigs;

/// @brief Field wardrobeNearbyCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_wardrobeNearbyCollider, put=__cordl_internal_set_wardrobeNearbyCollider)) ::UnityW<::UnityEngine::SphereCollider>  wardrobeNearbyCollider;

/// @brief Field wardrobeNearbyDetection, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wardrobeNearbyDetection, put=setStaticF_wardrobeNearbyDetection)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SphereCollider>>*  wardrobeNearbyDetection;

/// @brief Method IsUserNearWardrobe, addr 0x5786cdc, size 0x444, virtual false, abstract: false, final false
static inline bool IsUserNearWardrobe(int32_t  actorNr) ;

static inline ::GlobalNamespace::CosmeticWardrobeProximityDetector* New_ctor() ;

/// @brief Method OnDisable, addr 0x5786c14, size 0xc8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5786afc, size 0x118, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_wardrobeNearbyCollider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_wardrobeNearbyCollider() ;

constexpr void __cordl_internal_set_wardrobeNearbyCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

/// @brief Method .ctor, addr 0x5787120, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF_overlapColliders() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_rigs() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SphereCollider>>* getStaticF_wardrobeNearbyDetection() ;

static inline void setStaticF_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

static inline void setStaticF_rigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

static inline void setStaticF_wardrobeNearbyDetection(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SphereCollider>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticWardrobeProximityDetector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticWardrobeProximityDetector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticWardrobeProximityDetector(CosmeticWardrobeProximityDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticWardrobeProximityDetector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticWardrobeProximityDetector(CosmeticWardrobeProximityDetector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1414};

/// [SerializeField]
/// @brief Field wardrobeNearbyCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___wardrobeNearbyCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticWardrobeProximityDetector, ___wardrobeNearbyCollider) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticWardrobeProximityDetector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
