#pragma once
// IWYU pragma private; include "GlobalNamespace/TestTeleportDestination.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TestTeleportDestination)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TestTeleportDestination;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TestTeleportDestination*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestTeleportDestination*, "", "TestTeleportDestination");
// [GTStripGameObjectFromBuild("!GT_AUTOMATED_PERF_TEST && !BETA")]
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestTeleportDestination
class CORDL_TYPE TestTeleportDestination : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field teleportTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportTransform, put=__cordl_internal_set_teleportTransform)) ::UnityW<::UnityEngine::GameObject>  teleportTransform;

/// @brief Field zones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::ArrayW<::GlobalNamespace::GTZone>  zones;

static inline ::GlobalNamespace::TestTeleportDestination* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x56bcf38, size 0xe8, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_teleportTransform() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_teleportTransform() ;

constexpr ::ArrayW<::GlobalNamespace::GTZone> const& __cordl_internal_get_zones() const;

constexpr ::ArrayW<::GlobalNamespace::GTZone>& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_teleportTransform(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value) ;

/// @brief Method .ctor, addr 0x56bd020, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestTeleportDestination() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestTeleportDestination", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestTeleportDestination(TestTeleportDestination && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestTeleportDestination", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestTeleportDestination(TestTeleportDestination const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{983};

/// @brief Field zones, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTZone>  ___zones;

/// @brief Field teleportTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___teleportTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestTeleportDestination, ___zones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestTeleportDestination, ___teleportTransform) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TestTeleportDestination) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
