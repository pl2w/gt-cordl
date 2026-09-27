#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent_ButtonsState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEvent_ButtonsState)
namespace GlobalNamespace {
struct PointerEvent_Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct PointerEvent_ButtonsState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointerEvent_ButtonsState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointerEvent_ButtonsState, "UnityEngine.InputForUI", "PointerEvent/ButtonsState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.PointerEvent/ButtonsState
struct CORDL_TYPE PointerEvent_ButtonsState {
public:
// Declarations
/// @brief Method Get, addr 0xb65fbe0, size 0x10, virtual false, abstract: false, final false
inline bool Get(::GlobalNamespace::PointerEvent_Button  button) ;

/// @brief Method Reset, addr 0xb65fbf0, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Set, addr 0xb65fbc4, size 0x1c, virtual false, abstract: false, final false
inline void Set(::GlobalNamespace::PointerEvent_Button  button, bool  pressed) ;

/// @brief Method ToString, addr 0xb65fbf8, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr PointerEvent_ButtonsState() ;

// Ctor Parameters [CppParam { name: "_state", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr PointerEvent_ButtonsState(uint32_t  _state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31876};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field _state, offset: 0x0, size: 0x4, def value: None
 uint32_t  _state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointerEvent_ButtonsState, _state) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointerEvent_ButtonsState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
