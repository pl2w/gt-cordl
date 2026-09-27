#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneAsyncOp_Awaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkSceneAsyncOp_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkSceneAsyncOp_Awaiter)
namespace Fusion {
class Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0;
}
namespace Fusion {
class Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1;
}
namespace Fusion {
struct NetworkSceneAsyncOp;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSceneAsyncOp_Awaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSceneAsyncOp_Awaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSceneAsyncOp_Awaiter, "Fusion", "NetworkSceneAsyncOp/Awaiter");
// Dependencies Fusion.NetworkSceneAsyncOp
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkSceneAsyncOp/Awaiter
struct CORDL_TYPE NetworkSceneAsyncOp_Awaiter {
public:
// Declarations
using __c__DisplayClass5_0 = ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0;

using __c__DisplayClass5_1 = ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x5fddc8c, size 0x90, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0x5fddd1c, size 0x14c, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x5fddc4c, size 0x18, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Fusion::NetworkSceneAsyncOp>  op) ;

/// @brief Method get_IsCompleted, addr 0x5fddc88, size 0x4, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneAsyncOp_Awaiter() ;

// Ctor Parameters [CppParam { name: "_op", ty: "::Fusion::NetworkSceneAsyncOp", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSceneAsyncOp_Awaiter(::Fusion::NetworkSceneAsyncOp  _op) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19280};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _op, offset: 0x0, size: 0x10, def value: None
 ::Fusion::NetworkSceneAsyncOp  _op;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSceneAsyncOp_Awaiter, _op) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSceneAsyncOp_Awaiter) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
