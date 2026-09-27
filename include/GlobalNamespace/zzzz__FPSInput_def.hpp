#pragma once
// IWYU pragma private; include "GlobalNamespace/FPSInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FPSInput)
namespace GlobalNamespace {
struct FpsKey;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class FPSInput;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FPSInput*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FPSInput*, "", "FPSInput");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FPSInput
class CORDL_TYPE FPSInput : public ::System::Object {
public:
// Declarations
/// @brief Method GetControl, addr 0x5adf9fc, size 0x118, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Controls::ButtonControl* GetControl(::GlobalNamespace::FpsKey  key) ;

/// @brief Method IsPressed, addr 0x5adf9dc, size 0x20, virtual false, abstract: false, final false
static inline bool IsPressed(::GlobalNamespace::FpsKey  key) ;

/// @brief Method SetMouseCaptured, addr 0x5adf9d0, size 0xc, virtual false, abstract: false, final false
static inline void SetMouseCaptured(bool  captured) ;

/// @brief Method ToInputSystemKey, addr 0x5adfe64, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Key ToInputSystemKey(::GlobalNamespace::FpsKey  key) ;

/// @brief Method Value, addr 0x5adfb54, size 0x20, virtual false, abstract: false, final false
static inline float_t Value(::GlobalNamespace::FpsKey  key) ;

/// @brief Method WasPressedThisFrame, addr 0x5adfb14, size 0x20, virtual false, abstract: false, final false
static inline bool WasPressedThisFrame(::GlobalNamespace::FpsKey  key) ;

/// @brief Method WasReleasedThisFrame, addr 0x5adfb34, size 0x20, virtual false, abstract: false, final false
static inline bool WasReleasedThisFrame(::GlobalNamespace::FpsKey  key) ;

/// @brief Method get_IsMouseCaptured, addr 0x5adf9b4, size 0x1c, virtual false, abstract: false, final false
static inline bool get_IsMouseCaptured() ;

/// @brief Method get_LeftButton, addr 0x5adfb74, size 0x60, virtual false, abstract: false, final false
static inline bool get_LeftButton() ;

/// @brief Method get_LeftButtonDown, addr 0x5adfbd4, size 0x60, virtual false, abstract: false, final false
static inline bool get_LeftButtonDown() ;

/// @brief Method get_MouseDelta, addr 0x5adfcf4, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_MouseDelta() ;

/// @brief Method get_MousePosition, addr 0x5adfdac, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_MousePosition() ;

/// @brief Method get_RightButton, addr 0x5adfc34, size 0x60, virtual false, abstract: false, final false
static inline bool get_RightButton() ;

/// @brief Method get_RightButtonDown, addr 0x5adfc94, size 0x60, virtual false, abstract: false, final false
static inline bool get_RightButtonDown() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FPSInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FPSInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FPSInput(FPSInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FPSInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FPSInput(FPSInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3441};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FPSInput) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
