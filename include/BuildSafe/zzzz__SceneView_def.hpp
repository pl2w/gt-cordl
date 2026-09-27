#pragma once
// IWYU pragma private; include "BuildSafe/SceneView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SceneView)
namespace System {
class Action;
}
// Forward declare root types
namespace BuildSafe {
class SceneView;
}
// Write type traits
MARK_REF_T(::BuildSafe::SceneView*);
DEFINE_IL2CPP_CLASS(::BuildSafe::SceneView*, "BuildSafe", "SceneView");
// Dependencies System.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.SceneView
class CORDL_TYPE SceneView : public ::System::Object {
public:
// Declarations
/// @brief Method add_duringSceneGui, addr 0x5c4f42c, size 0x4, virtual false, abstract: false, final false
static inline void add_duringSceneGui(::System::Action*  value) ;

/// @brief Method add_duringSceneGuiTick, addr 0x5c4f434, size 0x4, virtual false, abstract: false, final false
static inline void add_duringSceneGuiTick(::System::Action*  value) ;

/// @brief Method remove_duringSceneGui, addr 0x5c4f430, size 0x4, virtual false, abstract: false, final false
static inline void remove_duringSceneGui(::System::Action*  value) ;

/// @brief Method remove_duringSceneGuiTick, addr 0x5c4f438, size 0x4, virtual false, abstract: false, final false
static inline void remove_duringSceneGuiTick(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneView(SceneView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneView(SceneView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4260};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::SceneView) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
