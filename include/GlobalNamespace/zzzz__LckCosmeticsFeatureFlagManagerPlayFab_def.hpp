#pragma once
// IWYU pragma private; include "GlobalNamespace/LckCosmeticsFeatureFlagManagerPlayFab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckCosmeticsFeatureFlagManagerPlayFab)
namespace GlobalNamespace {
struct LckCosmeticsFeatureFlagManagerPlayFab__GetEnabledStateWithRetryAsync_d__7;
}
namespace GlobalNamespace {
class LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0;
}
namespace Liv::Lck {
class ILckCosmeticsFeatureFlagManager;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LckCosmeticsFeatureFlagManagerPlayFab;
}
namespace GlobalNamespace {
class LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab*);
MARK_REF_T(::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab*, "", "LckCosmeticsFeatureFlagManagerPlayFab");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0*, "", "LckCosmeticsFeatureFlagManagerPlayFab/<>c__DisplayClass7_0");
// [Preserve]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckCosmeticsFeatureFlagManagerPlayFab
class CORDL_TYPE LckCosmeticsFeatureFlagManagerPlayFab : public ::System::Object {
public:
// Declarations
using _GetEnabledStateWithRetryAsync_d__7 = ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab__GetEnabledStateWithRetryAsync_d__7;

using __c__DisplayClass7_0 = ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0;

/// @brief Field _initializationTask, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__initializationTask, put=__cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task_1<bool>*  _initializationTask;

/// @brief Field _lock, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::System::Object*  _lock;

/// @brief Convert operator to "::Liv::Lck::ILckCosmeticsFeatureFlagManager"
constexpr operator  ::Liv::Lck::ILckCosmeticsFeatureFlagManager*() noexcept;

/// [AsyncStateMachine(typeof(LckCosmeticsFeatureFlagManagerPlayFab::<GetEnabledStateWithRetryAsync>d__7))]
/// @brief Method GetEnabledStateWithRetryAsync, addr 0x56c8f30, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* GetEnabledStateWithRetryAsync() ;

/// @brief Method IsEnabledAsync, addr 0x56c8e3c, size 0xf4, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<bool>* IsEnabledAsync() ;

/// @brief [Preserve]
static inline ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab* New_ctor() ;

constexpr ::System::Threading::Tasks::Task_1<bool>* const& __cordl_internal_get__initializationTask() const;

constexpr ::System::Threading::Tasks::Task_1<bool>*& __cordl_internal_get__initializationTask() ;

constexpr ::System::Object* const& __cordl_internal_get__lock() const;

constexpr ::System::Object*& __cordl_internal_get__lock() ;

constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task_1<bool>*  value) ;

constexpr void __cordl_internal_set__lock(::System::Object*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x56c8dd0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::ILckCosmeticsFeatureFlagManager"
constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager* i___Liv__Lck__ILckCosmeticsFeatureFlagManager() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsFeatureFlagManagerPlayFab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsFeatureFlagManagerPlayFab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticsFeatureFlagManagerPlayFab(LckCosmeticsFeatureFlagManagerPlayFab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsFeatureFlagManagerPlayFab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticsFeatureFlagManagerPlayFab(LckCosmeticsFeatureFlagManagerPlayFab const& ) = delete;

/// @brief Field MaxRetries offset 0xffffffff size 0x4
static constexpr int32_t  MaxRetries{static_cast<int32_t>(0x2)};

/// @brief Field RetryDelayMilliseconds offset 0xffffffff size 0x4
static constexpr int32_t  RetryDelayMilliseconds{static_cast<int32_t>(0x1388)};

/// @brief Field TitleDataKey offset 0xffffffff size 0x8
static constexpr ::ConstString  TitleDataKey{u"EnableLckCosmetics"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1033};

/// @brief Field _initializationTask, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<bool>*  ____initializationTask;

/// @brief Field _lock, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____lock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab, ____initializationTask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab, ____lock) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckCosmeticsFeatureFlagManagerPlayFab/<>c__DisplayClass7_0
class CORDL_TYPE LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

static inline ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <GetEnabledStateWithRetryAsync>b__0, addr 0x56c9028, size 0x1a0, virtual false, abstract: false, final false
inline void _GetEnabledStateWithRetryAsync_b__0(::StringW  data) ;

/// @brief Method <GetEnabledStateWithRetryAsync>b__1, addr 0x56c91c8, size 0xd0, virtual false, abstract: false, final false
inline void _GetEnabledStateWithRetryAsync_b__1(::PlayFab::PlayFabError*  error) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x56c9020, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0(LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0(LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1031};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
