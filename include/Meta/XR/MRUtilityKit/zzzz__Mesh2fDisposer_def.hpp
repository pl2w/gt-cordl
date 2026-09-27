#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Mesh2fDisposer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukMesh2f_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Mesh2fDisposer)
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukMesh2f;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
struct Mesh2fDisposer;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::Mesh2fDisposer);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::Mesh2fDisposer, "Meta.XR.MRUtilityKit", "Mesh2fDisposer");
// Dependencies Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukMesh2f
namespace Meta::XR::MRUtilityKit {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.Mesh2fDisposer
struct CORDL_TYPE Mesh2fDisposer {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x9f4c158, size 0x64, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x9f4c14c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f  mesh) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Mesh2fDisposer() ;

// Ctor Parameters [CppParam { name: "Mesh", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f", modifiers: "", def_value: None, comment: None }]
constexpr Mesh2fDisposer(::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f  Mesh) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25907};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Mesh, offset: 0x0, size: 0x20, def value: None
 ::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f  Mesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::Mesh2fDisposer, Mesh) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::Mesh2fDisposer) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
