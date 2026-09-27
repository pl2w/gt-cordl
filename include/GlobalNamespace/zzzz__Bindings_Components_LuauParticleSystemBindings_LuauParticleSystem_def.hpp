#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_Components_LuauParticleSystemBindings_LuauParticleSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings_Components_LuauParticleSystemBindings_LuauParticleSystem)
// Forward declare root types
namespace GlobalNamespace {
struct LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem, "", "Bindings/Components/LuauParticleSystemBindings/LuauParticleSystem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/Components/LuauParticleSystemBindings/LuauParticleSystem
struct CORDL_TYPE LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem(int32_t  x) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3176};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem, x) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
