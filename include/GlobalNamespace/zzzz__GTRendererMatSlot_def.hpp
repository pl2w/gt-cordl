#pragma once
// IWYU pragma private; include "GlobalNamespace/GTRendererMatSlot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTRendererMatSlot)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTRendererMatSlot;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTRendererMatSlot);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTRendererMatSlot, "", "GTRendererMatSlot");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTRendererMatSlot
struct CORDL_TYPE GTRendererMatSlot {
public:
// Declarations
 __declspec(property(get=get_isValid, put=set_isValid)) bool  isValid;

/// @brief Method TryInitialize, addr 0x5694250, size 0x1fc, virtual false, abstract: false, final false
inline bool TryInitialize() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_isValid, addr 0x5694240, size 0x8, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// [CompilerGenerated]
/// @brief Method set_isValid, addr 0x5694248, size 0x8, virtual false, abstract: false, final false
inline void set_isValid(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTRendererMatSlot() ;

// Ctor Parameters [CppParam { name: "_isValid_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderer", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "slot", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTRendererMatSlot(bool  _isValid_k__BackingField, ::UnityW<::UnityEngine::Renderer>  renderer, int32_t  slot) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <isValid>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _isValid_k__BackingField;

/// @brief Field renderer, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  renderer;

/// @brief Field slot, offset: 0x10, size: 0x4, def value: None
 int32_t  slot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTRendererMatSlot, _isValid_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTRendererMatSlot, renderer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTRendererMatSlot, slot) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTRendererMatSlot) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
