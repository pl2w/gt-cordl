#pragma once
// IWYU pragma private; include "Pathfinding/Seeker_ModifierPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Seeker_ModifierPass)
// Forward declare root types
namespace GlobalNamespace {
struct Seeker_ModifierPass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Seeker_ModifierPass);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Seeker_ModifierPass, "Pathfinding", "Seeker/ModifierPass");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Seeker/ModifierPass
struct CORDL_TYPE Seeker_ModifierPass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Seeker_ModifierPass_Unwrapped
enum struct __Seeker_ModifierPass_Unwrapped : int32_t {
__E_PreProcess = static_cast<int32_t>(0x0),
__E_PostProcess = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Seeker_ModifierPass_Unwrapped () const noexcept {
return static_cast<__Seeker_ModifierPass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Seeker_ModifierPass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Seeker_ModifierPass(int32_t  value__) noexcept;

/// @brief Field PostProcess value: I32(2)
static ::GlobalNamespace::Seeker_ModifierPass const PostProcess;

/// @brief Field PreProcess value: I32(0)
static ::GlobalNamespace::Seeker_ModifierPass const PreProcess;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Seeker_ModifierPass, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Seeker_ModifierPass) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
