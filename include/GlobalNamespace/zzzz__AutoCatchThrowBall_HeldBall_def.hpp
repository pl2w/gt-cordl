#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoCatchThrowBall_HeldBall.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AutoCatchThrowBall_HeldBall)
namespace GlobalNamespace {
class TransferrableObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct AutoCatchThrowBall_HeldBall;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AutoCatchThrowBall_HeldBall);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutoCatchThrowBall_HeldBall, "", "AutoCatchThrowBall/HeldBall");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AutoCatchThrowBall/HeldBall
struct CORDL_TYPE AutoCatchThrowBall_HeldBall {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AutoCatchThrowBall_HeldBall() ;

// Ctor Parameters [CppParam { name: "held", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "catchTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "throwTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "transferrable", ty: "::UnityW<::GlobalNamespace::TransferrableObject>", modifiers: "", def_value: None, comment: None }]
constexpr AutoCatchThrowBall_HeldBall(bool  held, float_t  catchTime, float_t  throwTime, ::UnityW<::GlobalNamespace::TransferrableObject>  transferrable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field held, offset: 0x0, size: 0x1, def value: None
 bool  held;

/// @brief Field catchTime, offset: 0x4, size: 0x4, def value: None
 float_t  catchTime;

/// @brief Field throwTime, offset: 0x8, size: 0x4, def value: None
 float_t  throwTime;

/// @brief Field transferrable, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  transferrable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall_HeldBall, held) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall_HeldBall, catchTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall_HeldBall, throwTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall_HeldBall, transferrable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutoCatchThrowBall_HeldBall) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
