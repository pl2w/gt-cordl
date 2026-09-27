#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(YieldAwaitable_YieldAwaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class WaitCallback;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct YieldAwaitable_YieldAwaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::YieldAwaitable_YieldAwaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::YieldAwaitable_YieldAwaiter, "System.Runtime.CompilerServices", "YieldAwaitable/YieldAwaiter");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
#pragma pack(push, 0)
struct CORDL_TYPE YieldAwaitable_YieldAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Field s_sendOrPostCallbackRunAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sendOrPostCallbackRunAction, put=setStaticF_s_sendOrPostCallbackRunAction)) ::System::Threading::SendOrPostCallback*  s_sendOrPostCallbackRunAction;

/// @brief Field s_waitCallbackRunAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_waitCallbackRunAction, put=setStaticF_s_waitCallbackRunAction)) ::System::Threading::WaitCallback*  s_waitCallbackRunAction;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0xa1e82bc, size 0x4, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0xa1e7f00, size 0x58, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method QueueContinuation, addr 0xa1e7f58, size 0x2a0, virtual false, abstract: false, final false
static inline void QueueContinuation(::System::Action*  continuation, bool  flowContext) ;

/// @brief Method RunAction, addr 0xa1e8250, size 0x6c, virtual false, abstract: false, final false
static inline void RunAction(::System::Object*  state) ;

/// @brief Method UnsafeOnCompleted, addr 0xa1e81f8, size 0x58, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

static inline ::System::Threading::SendOrPostCallback* getStaticF_s_sendOrPostCallbackRunAction() ;

static inline ::System::Threading::WaitCallback* getStaticF_s_waitCallbackRunAction() ;

/// @brief Method get_IsCompleted, addr 0xa1e7ef8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

static inline void setStaticF_s_sendOrPostCallbackRunAction(::System::Threading::SendOrPostCallback*  value) ;

static inline void setStaticF_s_waitCallbackRunAction(::System::Threading::WaitCallback*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr YieldAwaitable_YieldAwaiter() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::YieldAwaitable_YieldAwaiter) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
