#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeManager___c__DisplayClass59_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(VolumeManager___c__DisplayClass59_0)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering {
class VolumeComponent;
}
// Forward declare root types
namespace GlobalNamespace {
struct VolumeManager___c__DisplayClass59_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VolumeManager___c__DisplayClass59_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VolumeManager___c__DisplayClass59_0, "UnityEngine.Rendering", "VolumeManager/<>c__DisplayClass59_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.VolumeManager/<>c__DisplayClass59_0
struct CORDL_TYPE VolumeManager___c__DisplayClass59_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VolumeManager___c__DisplayClass59_0() ;

// Ctor Parameters [CppParam { name: "componentsDefaultStateList", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*", modifiers: "", def_value: None, comment: None }]
constexpr VolumeManager___c__DisplayClass59_0(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*  componentsDefaultStateList) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16784};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field componentsDefaultStateList, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*  componentsDefaultStateList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VolumeManager___c__DisplayClass59_0, componentsDefaultStateList) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VolumeManager___c__DisplayClass59_0) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
