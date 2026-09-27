#pragma once
// IWYU pragma private; include "Drawing/DrawingData_BuilderDataContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__DrawingData_BuilderData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_BuilderDataContainer)
namespace Drawing {
class DrawingData;
}
namespace GlobalNamespace {
struct BuilderData_DrawingData_BitPackedMeta;
}
namespace GlobalNamespace {
struct DrawingData_BuilderData;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_BuilderDataContainer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_BuilderDataContainer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_BuilderDataContainer, "Drawing", "DrawingData/BuilderDataContainer");
// Dependencies Drawing.DrawingData::BuilderData
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/BuilderDataContainer
struct CORDL_TYPE DrawingData_BuilderDataContainer {
public:
// Declarations
 __declspec(property(get=get_memoryUsage)) int32_t  memoryUsage;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x55ce584, size 0xb8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeCommandBuildersWithJobDependencies, addr 0x55cca14, size 0x110, virtual false, abstract: false, final false
inline void DisposeCommandBuildersWithJobDependencies(::Drawing::DrawingData*  gizmos) ;

/// @brief Method Get, addr 0x55d2168, size 0x120, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::DrawingData_BuilderData> Get(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  meta) ;

/// @brief Method Release, addr 0x55d20ac, size 0x84, virtual false, abstract: false, final false
inline void Release(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  meta) ;

/// @brief Method ReleaseAllUnused, addr 0x55ccc74, size 0xd4, virtual false, abstract: false, final false
inline void ReleaseAllUnused() ;

/// @brief Method Reserve, addr 0x55d1f20, size 0x18c, virtual false, abstract: false, final false
inline ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta Reserve(bool  isBuiltInCommandBuilder) ;

/// @brief Method StillExists, addr 0x55d2130, size 0x38, virtual false, abstract: false, final false
inline bool StillExists(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  meta) ;

/// @brief Method get_memoryUsage, addr 0x55ccd78, size 0x74, virtual false, abstract: false, final false
inline int32_t get_memoryUsage() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_BuilderDataContainer() ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<::GlobalNamespace::DrawingData_BuilderData>", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_BuilderDataContainer(::ArrayW<::GlobalNamespace::DrawingData_BuilderData>  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27743};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field data, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DrawingData_BuilderData>  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_BuilderDataContainer, data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_BuilderDataContainer) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
