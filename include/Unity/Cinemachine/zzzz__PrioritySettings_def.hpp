#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PrioritySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrioritySettings)
// Forward declare root types
namespace Unity::Cinemachine {
struct PrioritySettings;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::PrioritySettings);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PrioritySettings, "Unity.Cinemachine", "PrioritySettings");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.PrioritySettings
struct CORDL_TYPE PrioritySettings {
public:
// Declarations
 __declspec(property(get=get_Value, put=set_Value)) int32_t  Value;

/// [IsReadOnly]
/// @brief Method get_Value, addr 0xaeb46dc, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Value() ;

/// @brief Method op_Implicit, addr 0xaeb9cc8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::PrioritySettings op_Implicit___Unity__Cinemachine__PrioritySettings(int32_t  priority) ;

/// @brief Method op_Implicit, addr 0xaeb9cb8, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::Unity::Cinemachine::PrioritySettings  prioritySettings) ;

/// @brief Method set_Value, addr 0xaeb37e8, size 0x10, virtual false, abstract: false, final false
inline void set_Value(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PrioritySettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PrioritySettings(bool  Enabled, int32_t  m_Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [Tooltip("Enable this to expose the Priority field")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("Priority to use.  0 is default.  Camera with highest priority is prioritized.")]
/// [SerializeField]
/// @brief Field m_Value, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PrioritySettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PrioritySettings, m_Value) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PrioritySettings) == 0x8, "Size mismatch!");

} // namespace end def Unity::Cinemachine
