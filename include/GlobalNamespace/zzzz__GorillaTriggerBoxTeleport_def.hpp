#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerBoxTeleport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GorillaTriggerBoxTeleport)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTriggerBoxTeleport;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTriggerBoxTeleport*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTriggerBoxTeleport*, "", "GorillaTriggerBoxTeleport");
// Dependencies GorillaTriggerBox, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTriggerBoxTeleport
class CORDL_TYPE GorillaTriggerBoxTeleport : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field cameraOffest, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraOffest, put=__cordl_internal_set_cameraOffest)) ::UnityW<::UnityEngine::GameObject>  cameraOffest;

/// @brief Field teleportLocation, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_teleportLocation, put=__cordl_internal_set_teleportLocation)) ::UnityEngine::Vector3  teleportLocation;

static inline ::GlobalNamespace::GorillaTriggerBoxTeleport* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x579e168, size 0x8c, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cameraOffest() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cameraOffest() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_teleportLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_teleportLocation() ;

constexpr void __cordl_internal_set_cameraOffest(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_teleportLocation(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x579e1f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTriggerBoxTeleport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBoxTeleport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTriggerBoxTeleport(GorillaTriggerBoxTeleport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBoxTeleport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTriggerBoxTeleport(GorillaTriggerBoxTeleport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1514};

/// @brief Field teleportLocation, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___teleportLocation;

/// @brief Field cameraOffest, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___cameraOffest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTriggerBoxTeleport, ___teleportLocation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTriggerBoxTeleport, ___cameraOffest) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTriggerBoxTeleport) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
