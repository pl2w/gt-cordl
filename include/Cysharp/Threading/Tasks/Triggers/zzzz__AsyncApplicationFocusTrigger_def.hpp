#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncApplicationFocusTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncApplicationFocusTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnApplicationFocusHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncApplicationFocusTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncApplicationFocusTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncApplicationFocusTrigger
class CORDL_TYPE AsyncApplicationFocusTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<bool> {
public:
// Declarations
/// @brief Method GetOnApplicationFocusAsyncHandler, addr 0xae37460, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* GetOnApplicationFocusAsyncHandler() ;

/// @brief Method GetOnApplicationFocusAsyncHandler, addr 0xae374dc, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* GetOnApplicationFocusAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0xae37408, size 0x58, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnApplicationFocusAsync, addr 0xae37560, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> OnApplicationFocusAsync() ;

/// @brief Method OnApplicationFocusAsync, addr 0xae37648, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> OnApplicationFocusAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae37738, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncApplicationFocusTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncApplicationFocusTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncApplicationFocusTrigger(AsyncApplicationFocusTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncApplicationFocusTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncApplicationFocusTrigger(AsyncApplicationFocusTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21941};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncApplicationFocusTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
