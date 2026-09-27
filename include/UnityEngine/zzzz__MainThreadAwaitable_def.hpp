#pragma once
// IWYU pragma private; include "UnityEngine/MainThreadAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainThreadAwaitable)
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct MainThreadAwaitable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MainThreadAwaitable);
DEFINE_IL2CPP_CLASS(::UnityEngine::MainThreadAwaitable, "UnityEngine", "MainThreadAwaitable");
// [ExcludeFromDocs]
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.MainThreadAwaitable
struct CORDL_TYPE MainThreadAwaitable {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method DoOnCompleted, addr 0xb5db7dc, size 0x6c, virtual false, abstract: false, final false
static inline void DoOnCompleted(::System::Object*  continuation) ;

/// @brief Method GetAwaiter, addr 0xb5db6fc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::MainThreadAwaitable GetAwaiter() ;

/// @brief Method GetResult, addr 0xb5db73c, size 0x4, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0xb5db740, size 0x9c, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0xb5d9624, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::SynchronizationContext*  syncContext, int32_t  mainThreadId) ;

/// @brief Method get_IsCompleted, addr 0xb5db708, size 0x34, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr MainThreadAwaitable() ;

// Ctor Parameters [CppParam { name: "_synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_mainThreadId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MainThreadAwaitable(::System::Threading::SynchronizationContext*  _synchronizationContext, int32_t  _mainThreadId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _synchronizationContext, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  _synchronizationContext;

/// @brief Field _mainThreadId, offset: 0x8, size: 0x4, def value: None
 int32_t  _mainThreadId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MainThreadAwaitable, _synchronizationContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::MainThreadAwaitable, _mainThreadId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::MainThreadAwaitable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
