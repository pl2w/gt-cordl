#pragma once
// IWYU pragma private; include "GlobalNamespace/EmitSignalToBiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EmitSignalToBiter_EdibleState_def.hpp"
#include "GlobalNamespace/zzzz__GTSignalEmitter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EmitSignalToBiter)
namespace GlobalNamespace {
class EdibleHoldable;
}
namespace GlobalNamespace {
struct EmitSignalToBiter_EdibleState;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class EmitSignalToBiter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EmitSignalToBiter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EmitSignalToBiter*, "", "EmitSignalToBiter");
// Dependencies EmitSignalToBiter::EdibleState, GTSignalEmitter
namespace GlobalNamespace {
// Is value type: false
// CS Name: EmitSignalToBiter
class CORDL_TYPE EmitSignalToBiter : public ::GlobalNamespace::GTSignalEmitter {
public:
// Declarations
using EdibleState = ::GlobalNamespace::EmitSignalToBiter_EdibleState;

/// @brief Field onEdibleState, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_onEdibleState, put=__cordl_internal_set_onEdibleState)) ::GlobalNamespace::EmitSignalToBiter_EdibleState  onEdibleState;

/// @brief Field targetEdible, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetEdible, put=__cordl_internal_set_targetEdible)) ::UnityW<::GlobalNamespace::EdibleHoldable>  targetEdible;

/// @brief Method Emit, addr 0x5803458, size 0x164, virtual true, abstract: false, final false
inline void Emit() ;

/// @brief Method Emit, addr 0x58035c0, size 0x4, virtual true, abstract: false, final false
inline void Emit(/* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x58035bc, size 0x4, virtual true, abstract: false, final false
inline void Emit(int32_t  targetActor) ;

static inline ::GlobalNamespace::EmitSignalToBiter* New_ctor() ;

constexpr ::GlobalNamespace::EmitSignalToBiter_EdibleState const& __cordl_internal_get_onEdibleState() const;

constexpr ::GlobalNamespace::EmitSignalToBiter_EdibleState& __cordl_internal_get_onEdibleState() ;

constexpr ::UnityW<::GlobalNamespace::EdibleHoldable> const& __cordl_internal_get_targetEdible() const;

constexpr ::UnityW<::GlobalNamespace::EdibleHoldable>& __cordl_internal_get_targetEdible() ;

constexpr void __cordl_internal_set_onEdibleState(::GlobalNamespace::EmitSignalToBiter_EdibleState  value) ;

constexpr void __cordl_internal_set_targetEdible(::UnityW<::GlobalNamespace::EdibleHoldable>  value) ;

/// @brief Method .ctor, addr 0x58035c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmitSignalToBiter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmitSignalToBiter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EmitSignalToBiter(EmitSignalToBiter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmitSignalToBiter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmitSignalToBiter(EmitSignalToBiter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1686};

/// [Space]
/// @brief Field targetEdible, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EdibleHoldable>  ___targetEdible;

/// [Space]
/// [SerializeField]
/// @brief Field onEdibleState, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::EmitSignalToBiter_EdibleState  ___onEdibleState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EmitSignalToBiter, ___targetEdible) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EmitSignalToBiter, ___onEdibleState) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EmitSignalToBiter) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
