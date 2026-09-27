#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_Awaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Awaitable_Awaiter)
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Awaitable;
}
// Forward declare root types
namespace GlobalNamespace {
struct Awaitable_Awaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Awaitable_Awaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Awaitable_Awaiter, "UnityEngine", "Awaitable/Awaiter");
// [ExcludeFromDocs]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Awaitable/Awaiter
struct CORDL_TYPE Awaitable_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0xb5db324, size 0x14, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0xb5db2fc, size 0x14, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0xb5db2f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Awaitable*  awaited) ;

/// @brief Method get_IsCompleted, addr 0xb5db310, size 0x14, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr Awaitable_Awaiter() ;

// Ctor Parameters [CppParam { name: "_awaited", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: None, comment: None }]
constexpr Awaitable_Awaiter(::UnityEngine::Awaitable*  _awaited) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15049};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _awaited, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Awaitable*  _awaited;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Awaitable_Awaiter, _awaited) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Awaitable_Awaiter) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
