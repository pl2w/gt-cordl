#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/KeyEvent_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyEvent_Type)
// Forward declare root types
namespace GlobalNamespace {
struct KeyEvent_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KeyEvent_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyEvent_Type, "UnityEngine.InputForUI", "KeyEvent/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.KeyEvent/Type
struct CORDL_TYPE KeyEvent_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KeyEvent_Type_Unwrapped
enum struct __KeyEvent_Type_Unwrapped : int32_t {
__E_KeyPressed = static_cast<int32_t>(0x1),
__E_KeyRepeated = static_cast<int32_t>(0x2),
__E_KeyReleased = static_cast<int32_t>(0x3),
__E_State = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyEvent_Type_Unwrapped () const noexcept {
return static_cast<__KeyEvent_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KeyEvent_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr KeyEvent_Type(int32_t  value__) noexcept;

/// @brief Field KeyPressed value: I32(1)
static ::GlobalNamespace::KeyEvent_Type const KeyPressed;

/// @brief Field KeyReleased value: I32(3)
static ::GlobalNamespace::KeyEvent_Type const KeyReleased;

/// @brief Field KeyRepeated value: I32(2)
static ::GlobalNamespace::KeyEvent_Type const KeyRepeated;

/// @brief Field State value: I32(4)
static ::GlobalNamespace::KeyEvent_Type const State;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31866};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyEvent_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KeyEvent_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
