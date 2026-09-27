#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/ProjectPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProjectPath)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class ProjectPath;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProjectPath*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProjectPath*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "ProjectPath");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.ProjectPath
class CORDL_TYPE ProjectPath : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProjectPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProjectPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProjectPath(ProjectPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProjectPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProjectPath(ProjectPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11211};

/// @brief Field k_XRInteractionSettingsFolder offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInteractionSettingsFolder{u"Assets/XRI/Settings"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProjectPath) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
