#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskSynchronizationContext_Callback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UniTaskSynchronizationContext_Callback)
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniTaskSynchronizationContext_Callback;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTaskSynchronizationContext_Callback);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTaskSynchronizationContext_Callback, "Cysharp.Threading.Tasks", "UniTaskSynchronizationContext/Callback");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskSynchronizationContext/Callback
struct CORDL_TYPE UniTaskSynchronizationContext_Callback {
public:
// Declarations
/// @brief Method Invoke, addr 0xae299c8, size 0xc4, virtual false, abstract: false, final false
inline void Invoke() ;

/// @brief Method .ctor, addr 0xae29998, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state) ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskSynchronizationContext_Callback() ;

// Ctor Parameters [CppParam { name: "callback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskSynchronizationContext_Callback(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21874};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field callback, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  callback;

/// @brief Field state, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniTaskSynchronizationContext_Callback, callback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskSynchronizationContext_Callback, state) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniTaskSynchronizationContext_Callback) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
