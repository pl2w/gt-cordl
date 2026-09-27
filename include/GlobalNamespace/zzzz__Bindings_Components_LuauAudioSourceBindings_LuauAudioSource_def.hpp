#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_Components_LuauAudioSourceBindings_LuauAudioSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings_Components_LuauAudioSourceBindings_LuauAudioSource)
// Forward declare root types
namespace GlobalNamespace {
struct LuauAudioSourceBindings_Components_Bindings_LuauAudioSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LuauAudioSourceBindings_Components_Bindings_LuauAudioSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LuauAudioSourceBindings_Components_Bindings_LuauAudioSource, "", "Bindings/Components/LuauAudioSourceBindings/LuauAudioSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/Components/LuauAudioSourceBindings/LuauAudioSource
struct CORDL_TYPE LuauAudioSourceBindings_Components_Bindings_LuauAudioSource {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LuauAudioSourceBindings_Components_Bindings_LuauAudioSource() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LuauAudioSourceBindings_Components_Bindings_LuauAudioSource(int32_t  x) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3178};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LuauAudioSourceBindings_Components_Bindings_LuauAudioSource, x) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LuauAudioSourceBindings_Components_Bindings_LuauAudioSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
