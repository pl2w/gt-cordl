#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Vector2i.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Vector2i)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Vector2i;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Vector2i);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Vector2i, "", "OVRPlugin/Vector2i");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Vector2i
struct CORDL_TYPE OVRPlugin_Vector2i {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Vector2i() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Vector2i(int32_t  x, int32_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12108};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector2i, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector2i, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Vector2i) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
