#pragma once
// IWYU pragma private; include "GlobalNamespace/SnowballGrabZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SnowballGrabZone)
namespace GlobalNamespace {
class InteractionPoint;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SnowballGrabZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SnowballGrabZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnowballGrabZone*, "", "SnowballGrabZone");
// Dependencies HoldableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SnowballGrabZone
class CORDL_TYPE SnowballGrabZone : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Field materialIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialIndex, put=__cordl_internal_set_materialIndex)) int32_t  materialIndex;

/// @brief Method DropItemCleanup, addr 0x5e02eb4, size 0x4, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

static inline ::GlobalNamespace::SnowballGrabZone* New_ctor() ;

/// @brief Method OnGrab, addr 0x5e02eb8, size 0x14c, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5e02eb0, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

constexpr int32_t const& __cordl_internal_get_materialIndex() const;

constexpr int32_t& __cordl_internal_get_materialIndex() ;

constexpr void __cordl_internal_set_materialIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e03004, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnowballGrabZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnowballGrabZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnowballGrabZone(SnowballGrabZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnowballGrabZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnowballGrabZone(SnowballGrabZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{519};

/// [GorillaSoundLookup]
/// @brief Field materialIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___materialIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnowballGrabZone, ___materialIndex) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnowballGrabZone) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
