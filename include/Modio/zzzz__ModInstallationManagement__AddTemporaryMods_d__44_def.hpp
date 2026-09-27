#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement__AddTemporaryMods_d__44.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModInstallationManagement__AddTemporaryMods_d__44)
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModInstallationManagement__AddTemporaryMods_d__44;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44, "Modio", "ModInstallationManagement/<AddTemporaryMods>d__44");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.ModInstallationManagement/<AddTemporaryMods>d__44
struct CORDL_TYPE ModInstallationManagement__AddTemporaryMods_d__44 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa012440, size 0x804, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa012ca8, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement__AddTemporaryMods_d__44() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lifeTimeDaysOverride", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "tempMods", ty: "::System::Collections::Generic::List_1<::Modio::Mods::ModId>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lifeTimeDays_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }]
constexpr ModInstallationManagement__AddTemporaryMods_d__44(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, int32_t  lifeTimeDaysOverride, ::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  tempMods, int32_t  _lifeTimeDays_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field lifeTimeDaysOverride, offset: 0x20, size: 0x4, def value: None
 int32_t  lifeTimeDaysOverride;

/// @brief Field tempMods, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  tempMods;

/// @brief Field <lifeTimeDays>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  _lifeTimeDays_5__2;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44, lifeTimeDaysOverride) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44, tempMods) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44, _lifeTimeDays_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
