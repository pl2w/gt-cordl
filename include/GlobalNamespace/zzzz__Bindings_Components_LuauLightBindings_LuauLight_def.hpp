#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_Components_LuauLightBindings_LuauLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings_Components_LuauLightBindings_LuauLight)
// Forward declare root types
namespace GlobalNamespace {
struct LuauLightBindings_Components_Bindings_LuauLight;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LuauLightBindings_Components_Bindings_LuauLight);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LuauLightBindings_Components_Bindings_LuauLight, "", "Bindings/Components/LuauLightBindings/LuauLight");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/Components/LuauLightBindings/LuauLight
struct CORDL_TYPE LuauLightBindings_Components_Bindings_LuauLight {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LuauLightBindings_Components_Bindings_LuauLight() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LuauLightBindings_Components_Bindings_LuauLight(int32_t  x) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LuauLightBindings_Components_Bindings_LuauLight, x) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LuauLightBindings_Components_Bindings_LuauLight) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
