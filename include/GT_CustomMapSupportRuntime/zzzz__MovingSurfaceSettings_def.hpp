#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MovingSurfaceSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MovingSurfaceSettings)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class MovingSurfaceSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::MovingSurfaceSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::MovingSurfaceSettings*, "GT_CustomMapSupportRuntime", "MovingSurfaceSettings");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.MovingSurfaceSettings
class CORDL_TYPE MovingSurfaceSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field uniqueId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_uniqueId, put=__cordl_internal_set_uniqueId)) int32_t  uniqueId;

static inline ::GT_CustomMapSupportRuntime::MovingSurfaceSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_uniqueId() const;

constexpr int32_t& __cordl_internal_get_uniqueId() ;

constexpr void __cordl_internal_set_uniqueId(int32_t  value) ;

/// @brief Method .ctor, addr 0x9cb7d6c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MovingSurfaceSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MovingSurfaceSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MovingSurfaceSettings(MovingSurfaceSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MovingSurfaceSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MovingSurfaceSettings(MovingSurfaceSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30918};

/// [HideInInspector]
/// [Tooltip("Assign an ID that is unique for each moving surface in your map. should NOT be -1")]
/// @brief Field uniqueId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___uniqueId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::MovingSurfaceSettings, ___uniqueId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::MovingSurfaceSettings) == 0x28, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
