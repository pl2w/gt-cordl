#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncJointBreakTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AsyncJointBreakTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnJointBreakHandler;
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
class AsyncJointBreakTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncJointBreakTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncJointBreakTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncJointBreakTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncJointBreakTrigger
class CORDL_TYPE AsyncJointBreakTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<float_t> {
public:
// Declarations
/// @brief Method GetOnJointBreakAsyncHandler, addr 0xae3bd98, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler* GetOnJointBreakAsyncHandler() ;

/// @brief Method GetOnJointBreakAsyncHandler, addr 0xae3be14, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler* GetOnJointBreakAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreakTrigger* New_ctor() ;

/// @brief Method OnJointBreak, addr 0xae3bd40, size 0x58, virtual false, abstract: false, final false
inline void OnJointBreak(float_t  breakForce) ;

/// @brief Method OnJointBreakAsync, addr 0xae3be98, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnJointBreakAsync() ;

/// @brief Method OnJointBreakAsync, addr 0xae3bf80, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnJointBreakAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3c070, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncJointBreakTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncJointBreakTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncJointBreakTrigger(AsyncJointBreakTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncJointBreakTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncJointBreakTrigger(AsyncJointBreakTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncJointBreakTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
