#pragma once
// IWYU pragma private; include "Fusion/Instant.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Instant)
// Forward declare root types
namespace Fusion {
struct Instant;
}
// Write type traits
MARK_VAL_T(::Fusion::Instant);
DEFINE_IL2CPP_CLASS(::Fusion::Instant, "Fusion", "Instant");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Instant
struct CORDL_TYPE Instant {
public:
// Declarations
 __declspec(property(get=get_Input, put=set_Input)) double_t  Input;

 __declspec(property(get=get_Local, put=set_Local)) double_t  Local;

 __declspec(property(get=get_Remote, put=set_Remote)) double_t  Remote;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Input, addr 0x600af7c, size 0x8, virtual false, abstract: false, final false
inline double_t get_Input() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Local, addr 0x600af8c, size 0x8, virtual false, abstract: false, final false
inline double_t get_Local() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Remote, addr 0x600af9c, size 0x8, virtual false, abstract: false, final false
inline double_t get_Remote() ;

/// [CompilerGenerated]
/// @brief Method set_Input, addr 0x600af84, size 0x8, virtual false, abstract: false, final false
inline void set_Input(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Local, addr 0x600af94, size 0x8, virtual false, abstract: false, final false
inline void set_Local(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Remote, addr 0x600afa4, size 0x8, virtual false, abstract: false, final false
inline void set_Remote(double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Instant() ;

// Ctor Parameters [CppParam { name: "_Input_k__BackingField", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Local_k__BackingField", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Remote_k__BackingField", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr Instant(double_t  _Input_k__BackingField, double_t  _Local_k__BackingField, double_t  _Remote_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19366};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Input>k__BackingField, offset: 0x0, size: 0x8, def value: None
 double_t  _Input_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Local>k__BackingField, offset: 0x8, size: 0x8, def value: None
 double_t  _Local_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Remote>k__BackingField, offset: 0x10, size: 0x8, def value: None
 double_t  _Remote_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Instant, _Input_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Instant, _Local_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Instant, _Remote_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Instant) == 0x18, "Size mismatch!");

} // namespace end def Fusion
