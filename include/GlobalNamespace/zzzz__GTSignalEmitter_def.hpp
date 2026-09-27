#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignalEmitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTSignalID_def.hpp"
#include "GlobalNamespace/zzzz__GTSignal_EmitMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTSignalEmitter)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GTSignalEmitter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTSignalEmitter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSignalEmitter*, "", "GTSignalEmitter");
// Dependencies GTSignal::EmitMode, GTSignalID, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTSignalEmitter
class CORDL_TYPE GTSignalEmitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field emitMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_emitMode, put=__cordl_internal_set_emitMode)) ::GlobalNamespace::GTSignal_EmitMode  emitMode;

/// @brief Field signal, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_signal, put=__cordl_internal_set_signal)) ::GlobalNamespace::GTSignalID  signal;

/// @brief Method Emit, addr 0x594a464, size 0xd0, virtual true, abstract: false, final false
inline void Emit() ;

/// @brief Method Emit, addr 0x594a610, size 0x6c, virtual true, abstract: false, final false
inline void Emit(/* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x594a534, size 0xdc, virtual true, abstract: false, final false
inline void Emit(int32_t  targetActor) ;

static inline ::GlobalNamespace::GTSignalEmitter* New_ctor() ;

constexpr ::GlobalNamespace::GTSignal_EmitMode const& __cordl_internal_get_emitMode() const;

constexpr ::GlobalNamespace::GTSignal_EmitMode& __cordl_internal_get_emitMode() ;

constexpr ::GlobalNamespace::GTSignalID const& __cordl_internal_get_signal() const;

constexpr ::GlobalNamespace::GTSignalID& __cordl_internal_get_signal() ;

constexpr void __cordl_internal_set_emitMode(::GlobalNamespace::GTSignal_EmitMode  value) ;

constexpr void __cordl_internal_set_signal(::GlobalNamespace::GTSignalID  value) ;

/// @brief Method .ctor, addr 0x594a67c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSignalEmitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSignalEmitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSignalEmitter(GTSignalEmitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSignalEmitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSignalEmitter(GTSignalEmitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2289};

/// [Space]
/// @brief Field signal, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTSignalID  ___signal;

/// @brief Field emitMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::GTSignal_EmitMode  ___emitMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTSignalEmitter, ___signal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSignalEmitter, ___emitMode) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTSignalEmitter) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
