#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapOrientationPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__AccessDoorPlaceholder_def.hpp"
CORDL_MODULE_EXPORT(MapOrientationPoint)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class MapOrientationPoint;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::MapOrientationPoint*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::MapOrientationPoint*, "GT_CustomMapSupportRuntime", "MapOrientationPoint");
// Dependencies GT_CustomMapSupportRuntime.AccessDoorPlaceholder
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.MapOrientationPoint
class CORDL_TYPE MapOrientationPoint : public ::GT_CustomMapSupportRuntime::AccessDoorPlaceholder {
public:
// Declarations
static inline ::GT_CustomMapSupportRuntime::MapOrientationPoint* New_ctor() ;

/// @brief Method .ctor, addr 0x9cb7370, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapOrientationPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapOrientationPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MapOrientationPoint(MapOrientationPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapOrientationPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapOrientationPoint(MapOrientationPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GT_CustomMapSupportRuntime::MapOrientationPoint) == 0x20, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
