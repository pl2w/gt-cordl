#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShaderInput)
namespace GlobalNamespace {
struct ShaderInput_LightData;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShaderInput;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::ShaderInput*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ShaderInput*, "UnityEngine.Rendering.Universal", "ShaderInput");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderInput
class CORDL_TYPE ShaderInput : public ::System::Object {
public:
// Declarations
using LightData = ::GlobalNamespace::ShaderInput_LightData;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderInput(ShaderInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderInput(ShaderInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33042};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ShaderInput) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
