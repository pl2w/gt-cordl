#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/SceneIRCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SceneIRCallbacks)
namespace Meta::XR::Acoustics {
class ProgressCallback;
}
// Forward declare root types
namespace Meta::XR::Acoustics {
struct SceneIRCallbacks;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::SceneIRCallbacks);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::SceneIRCallbacks, "Meta.XR.Acoustics", "SceneIRCallbacks");
// Dependencies System.IntPtr
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.SceneIRCallbacks
struct CORDL_TYPE SceneIRCallbacks {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SceneIRCallbacks() ;

// Ctor Parameters [CppParam { name: "userData", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "progress", ty: "::Meta::XR::Acoustics::ProgressCallback*", modifiers: "", def_value: None, comment: None }]
constexpr SceneIRCallbacks(::System::IntPtr  userData, ::Meta::XR::Acoustics::ProgressCallback*  progress) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29979};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field userData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  userData;

/// @brief Field progress, offset: 0x8, size: 0x8, def value: None
 ::Meta::XR::Acoustics::ProgressCallback*  progress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::SceneIRCallbacks, userData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::SceneIRCallbacks, progress) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::SceneIRCallbacks) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
