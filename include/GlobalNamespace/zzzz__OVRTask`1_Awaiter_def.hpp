#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask`1_Awaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRTask`1_Awaiter)
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1_Awaiter;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1_Awaiter);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRTask_1_Awaiter, "", "OVRTask`1/Awaiter");
// [IsReadOnly]
// Dependencies OVRTask`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: true
// CS Name: OVRTask`1/Awaiter<TResult>
struct CORDL_TYPE OVRTask_1_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult GetResult() ;

/// @brief Method System.Runtime.CompilerServices.INotifyCompletion.OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Runtime_CompilerServices_INotifyCompletion_OnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRTask_1<TResult>  task) ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_Awaiter() ;

// Ctor Parameters [CppParam { name: "_task", ty: "::GlobalNamespace::OVRTask_1<TResult>", modifiers: "", def_value: None, comment: None }]
constexpr OVRTask_1_Awaiter(::GlobalNamespace::OVRTask_1<TResult>  _task) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12584};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _task, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1<TResult>  _task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
