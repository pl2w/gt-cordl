#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRInput_SerializedBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInput_SerializedBinding)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRInput_SerializedBinding;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRInput_SerializedBinding);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRInput_SerializedBinding, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/SerializedBinding");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding
struct CORDL_TYPE OpenXRInput_SerializedBinding {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInput_SerializedBinding() ;

// Ctor Parameters [CppParam { name: "actionId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRInput_SerializedBinding(uint64_t  actionId, ::StringW  path) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field actionId, offset: 0x0, size: 0x8, def value: None
 uint64_t  actionId;

/// @brief Field path, offset: 0x8, size: 0x8, def value: None
 ::StringW  path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRInput_SerializedBinding, actionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRInput_SerializedBinding, path) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRInput_SerializedBinding) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
