#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdate_UpdateStepCount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUpdate_UpdateStepCount)
// Forward declare root types
namespace GlobalNamespace {
struct InputUpdate_UpdateStepCount;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputUpdate_UpdateStepCount);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputUpdate_UpdateStepCount, "UnityEngine.InputSystem.LowLevel", "InputUpdate/UpdateStepCount");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount
struct CORDL_TYPE InputUpdate_UpdateStepCount {
public:
// Declarations
 __declspec(property(get=get_value, put=set_value)) uint32_t  value;

/// @brief Method OnBeforeUpdate, addr 0xaff6000, size 0x18, virtual false, abstract: false, final false
inline void OnBeforeUpdate() ;

/// @brief Method OnUpdate, addr 0xaff60a0, size 0x1c, virtual false, abstract: false, final false
inline void OnUpdate() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_value, addr 0xaff61e4, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_value() ;

/// [CompilerGenerated]
/// @brief Method set_value, addr 0xaff61ec, size 0x8, virtual false, abstract: false, final false
inline void set_value(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputUpdate_UpdateStepCount() ;

// Ctor Parameters [CppParam { name: "m_WasUpdated", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_value_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputUpdate_UpdateStepCount(bool  m_WasUpdated, uint32_t  _value_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13778};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_WasUpdated, offset: 0x0, size: 0x1, def value: None
 bool  m_WasUpdated;

/// [CompilerGenerated]
/// @brief Field <value>k__BackingField, offset: 0x4, size: 0x4, def value: None
 uint32_t  _value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputUpdate_UpdateStepCount, m_WasUpdated) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUpdate_UpdateStepCount, _value_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputUpdate_UpdateStepCount) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
