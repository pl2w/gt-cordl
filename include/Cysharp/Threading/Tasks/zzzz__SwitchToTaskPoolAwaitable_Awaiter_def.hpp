#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToTaskPoolAwaitable_Awaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SwitchToTaskPoolAwaitable_Awaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct SwitchToTaskPoolAwaitable_Awaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SwitchToTaskPoolAwaitable_Awaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SwitchToTaskPoolAwaitable_Awaiter, "Cysharp.Threading.Tasks", "SwitchToTaskPoolAwaitable/Awaiter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.SwitchToTaskPoolAwaitable/Awaiter
#pragma pack(push, 0)
struct CORDL_TYPE SwitchToTaskPoolAwaitable_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Field switchToCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_switchToCallback, put=setStaticF_switchToCallback)) ::System::Action_1<::System::Object*>*  switchToCallback;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method Callback, addr 0xadf88cc, size 0x6c, virtual false, abstract: false, final false
static inline void Callback(::System::Object*  state) ;

/// @brief Method GetResult, addr 0xadf85b8, size 0x4, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0xadf85bc, size 0x188, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0xadf8744, size 0x188, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_switchToCallback() ;

/// @brief Method get_IsCompleted, addr 0xadf85b0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

static inline void setStaticF_switchToCallback(::System::Action_1<::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SwitchToTaskPoolAwaitable_Awaiter() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SwitchToTaskPoolAwaitable_Awaiter) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
