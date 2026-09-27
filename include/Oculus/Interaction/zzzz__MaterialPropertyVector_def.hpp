#pragma once
// IWYU pragma private; include "Oculus/Interaction/MaterialPropertyVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MaterialPropertyVector)
// Forward declare root types
namespace Oculus::Interaction {
struct MaterialPropertyVector;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::MaterialPropertyVector);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MaterialPropertyVector, "Oculus.Interaction", "MaterialPropertyVector");
// Dependencies UnityEngine.Vector4
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.MaterialPropertyVector
struct CORDL_TYPE MaterialPropertyVector {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyVector() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }]
constexpr MaterialPropertyVector(::StringW  name, ::UnityEngine::Vector4  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15933};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field value, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Vector4  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MaterialPropertyVector, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MaterialPropertyVector, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MaterialPropertyVector) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction
