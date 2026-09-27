#pragma once
// IWYU pragma private; include "Fusion/NetworkSpawnOp_Awaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkSpawnOp_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkSpawnOp_Awaiter)
namespace Fusion {
class Awaiter_NetworkSpawnOp___c__DisplayClass5_0;
}
namespace Fusion {
class Awaiter_NetworkSpawnOp___c__DisplayClass5_1;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct NetworkSpawnOp;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSpawnOp_Awaiter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSpawnOp_Awaiter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSpawnOp_Awaiter, "Fusion", "NetworkSpawnOp/Awaiter");
// Dependencies Fusion.NetworkSpawnOp
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkSpawnOp/Awaiter
struct CORDL_TYPE NetworkSpawnOp_Awaiter {
public:
// Declarations
using __c__DisplayClass5_0 = ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_0;

using __c__DisplayClass5_1 = ::Fusion::Awaiter_NetworkSpawnOp___c__DisplayClass5_1;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x5fd9fe8, size 0x214, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> GetResult() ;

/// @brief Method OnCompleted, addr 0x5fda1fc, size 0x1c8, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x5fd9dec, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Fusion::NetworkSpawnOp>  op) ;

/// @brief Method get_IsCompleted, addr 0x5fd9f48, size 0xa0, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSpawnOp_Awaiter() ;

// Ctor Parameters [CppParam { name: "_op", ty: "::Fusion::NetworkSpawnOp", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSpawnOp_Awaiter(::Fusion::NetworkSpawnOp  _op) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19257};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _op, offset: 0x0, size: 0x18, def value: None
 ::Fusion::NetworkSpawnOp  _op;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSpawnOp_Awaiter, _op) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSpawnOp_Awaiter) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
