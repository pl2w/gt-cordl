#pragma once
// IWYU pragma private; include "GlobalNamespace/ResettableUseCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResettableUseCounter)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ResettableUseCounter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ResettableUseCounter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ResettableUseCounter, "", "ResettableUseCounter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ResettableUseCounter
struct CORDL_TYPE ResettableUseCounter {
public:
// Declarations
 __declspec(property(get=get_IsReady)) bool  IsReady;

/// @brief Method Reset, addr 0x59d9ab8, size 0x34, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method TryUse, addr 0x59d99f8, size 0xc0, virtual false, abstract: false, final false
inline bool TryUse() ;

/// @brief Method .ctor, addr 0x59d99d4, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxRegularUses, int32_t  maxSuperchargeUses, ::System::Action_1<bool>*  onReadyChanged) ;

/// @brief Method get_IsReady, addr 0x59d99e8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsReady() ;

// Ctor Parameters []
// @brief default ctor
constexpr ResettableUseCounter() ;

// Ctor Parameters [CppParam { name: "usesRemaining", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxRegularUses", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxSuperchargeUses", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "onReadyChanged", ty: "::System::Action_1<bool>*", modifiers: "", def_value: None, comment: None }]
constexpr ResettableUseCounter(int32_t  usesRemaining, int32_t  maxRegularUses, int32_t  maxSuperchargeUses, ::System::Action_1<bool>*  onReadyChanged) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{312};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field usesRemaining, offset: 0x0, size: 0x4, def value: None
 int32_t  usesRemaining;

/// @brief Field maxRegularUses, offset: 0x4, size: 0x4, def value: None
 int32_t  maxRegularUses;

/// @brief Field maxSuperchargeUses, offset: 0x8, size: 0x4, def value: None
 int32_t  maxSuperchargeUses;

/// @brief Field onReadyChanged, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<bool>*  onReadyChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResettableUseCounter, usesRemaining) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResettableUseCounter, maxRegularUses) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResettableUseCounter, maxSuperchargeUses) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResettableUseCounter, onReadyChanged) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ResettableUseCounter) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
