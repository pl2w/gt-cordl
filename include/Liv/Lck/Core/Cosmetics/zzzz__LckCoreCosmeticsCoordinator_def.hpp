#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/LckCoreCosmeticsCoordinator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckCoreCosmeticsCoordinator)
namespace GlobalNamespace {
struct LckCoreCosmeticsCoordinator__AnnouncePlayerPresenceForSessionAsync_d__19;
}
namespace GlobalNamespace {
struct LckCoreCosmeticsCoordinator__GetLocalUserCosmeticsAsync_d__17;
}
namespace GlobalNamespace {
struct LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18;
}
namespace GlobalNamespace {
struct LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24;
}
namespace GlobalNamespace {
struct LckCoreCosmeticsCoordinator__RequestLocalUserCosmeticsAsyncDelayed_d__16;
}
namespace Liv::Lck::Core::Cosmetics {
class ILckCosmeticsCoordinator;
}
namespace Liv::Lck::Core::Cosmetics {
struct LckAvailableCosmeticInfo;
}
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator___c;
}
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator___c__DisplayClass18_0;
}
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator___c__DisplayClass19_0;
}
namespace Liv::Lck::Core::Serialization {
class ILckSerializer;
}
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace Liv::Lck::Core {
struct SerializationType;
}
namespace Liv::Lck {
class ILckCosmeticsFeatureFlagManager;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator;
}
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator___c;
}
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator___c__DisplayClass18_0;
}
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*);
MARK_REF_T(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*);
MARK_REF_T(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*);
MARK_REF_T(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*, "Liv.Lck.Core.Cosmetics", "LckCoreCosmeticsCoordinator");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*, "Liv.Lck.Core.Cosmetics", "LckCoreCosmeticsCoordinator/<>c");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*, "Liv.Lck.Core.Cosmetics", "LckCoreCosmeticsCoordinator/<>c__DisplayClass18_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0*, "Liv.Lck.Core.Cosmetics", "LckCoreCosmeticsCoordinator/<>c__DisplayClass19_0");
// [Preserve]
// Dependencies System.Object
namespace Liv::Lck::Core::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator
class CORDL_TYPE LckCoreCosmeticsCoordinator : public ::System::Object {
public:
// Declarations
using _AnnouncePlayerPresenceForSessionAsync_d__19 = ::GlobalNamespace::LckCoreCosmeticsCoordinator__AnnouncePlayerPresenceForSessionAsync_d__19;

using _GetLocalUserCosmeticsAsync_d__17 = ::GlobalNamespace::LckCoreCosmeticsCoordinator__GetLocalUserCosmeticsAsync_d__17;

using _GetUserCosmeticsForSessionAsync_d__18 = ::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18;

using _ReannouncePresenceAfterDelay_d__24 = ::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24;

using _RequestLocalUserCosmeticsAsyncDelayed_d__16 = ::GlobalNamespace::LckCoreCosmeticsCoordinator__RequestLocalUserCosmeticsAsyncDelayed_d__16;

using __c = ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c;

using __c__DisplayClass18_0 = ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0;

using __c__DisplayClass19_0 = ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0;

/// @brief Field OnCosmeticAvailable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCosmeticAvailable, put=__cordl_internal_set_OnCosmeticAvailable)) ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  OnCosmeticAvailable;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  _Instance_k__BackingField;

/// @brief Field _featureFlagManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureFlagManager, put=__cordl_internal_set__featureFlagManager)) ::Liv::Lck::ILckCosmeticsFeatureFlagManager*  _featureFlagManager;

/// @brief Field _lock, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::System::Object*  _lock;

/// @brief Field _playerId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerId, put=__cordl_internal_set__playerId)) ::StringW  _playerId;

/// @brief Field _reannounceCancellationTokenSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__reannounceCancellationTokenSource, put=__cordl_internal_set__reannounceCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _reannounceCancellationTokenSource;

/// @brief Field _requestLocalUserCosmeticsTask, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestLocalUserCosmeticsTask, put=__cordl_internal_set__requestLocalUserCosmeticsTask)) ::System::Threading::Tasks::Task*  _requestLocalUserCosmeticsTask;

/// @brief Field _serializer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__serializer, put=__cordl_internal_set__serializer)) ::Liv::Lck::Core::Serialization::ILckSerializer*  _serializer;

/// @brief Field _sessionId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionId, put=__cordl_internal_set__sessionId)) ::StringW  _sessionId;

/// @brief Convert operator to "::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator"
constexpr operator  ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*() noexcept;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator::<AnnouncePlayerPresenceForSessionAsync>d__19))]
/// @brief Method AnnouncePlayerPresenceForSessionAsync, addr 0x9d02a30, size 0x13c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* AnnouncePlayerPresenceForSessionAsync(::StringW  playerId, ::StringW  sessionId) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator::<GetLocalUserCosmeticsAsync>d__17))]
/// @brief Method GetLocalUserCosmeticsAsync, addr 0x9d027e8, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* GetLocalUserCosmeticsAsync() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator::<GetUserCosmeticsForSessionAsync>d__18))]
/// @brief Method GetUserCosmeticsForSessionAsync, addr 0x9d028f4, size 0x13c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* GetUserCosmeticsForSessionAsync(::System::Collections::Generic::IEnumerable_1<::StringW>*  playerIds, ::StringW  sessionId) ;

/// @brief Method HandleOnCosmeticAvailable, addr 0x9d02b6c, size 0x434, virtual false, abstract: false, final false
inline void HandleOnCosmeticAvailable(::System::IntPtr  serializedCosmeticDataPtr, ::System::UIntPtr  serializedDataLength, ::Liv::Lck::Core::SerializationType  serializationType) ;

/// @brief Method HandlePresenceAnnouncement, addr 0x9d02fa0, size 0xe8, virtual false, abstract: false, final false
inline void HandlePresenceAnnouncement(uint64_t  expirationTimeSeconds) ;

/// @brief Method InitializeLocalCosmeticsAsync, addr 0x9d02618, size 0xf8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* InitializeLocalCosmeticsAsync() ;

/// @brief [Preserve]
static inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator* New_ctor(::Liv::Lck::Core::Serialization::ILckSerializer*  serializer, ::Liv::Lck::ILckCosmeticsFeatureFlagManager*  featureFlagManager) ;

/// [MonoPInvokeCallback(typeof(Liv.Lck.Core.LckCoreCosmeticsNative::get_user_cosmetics_for_session_on_cosmetic_available_delegate))]
/// @brief Method OnCosmeticAvailableStatic, addr 0x9d021ac, size 0xd0, virtual false, abstract: false, final false
static inline void OnCosmeticAvailableStatic(::System::IntPtr  serializedCosmeticDataPtr, ::System::UIntPtr  serializedDataLength, ::Liv::Lck::Core::SerializationType  serializationType) ;

/// [MonoPInvokeCallback(typeof(Liv.Lck.Core.LckCoreCosmeticsNative::announce_player_presence_for_session_on_presence_expiry_received_delegate))]
/// @brief Method OnPresenceAnnouncementExpiryReceivedStatic, addr 0x9d0227c, size 0xb4, virtual false, abstract: false, final false
static inline void OnPresenceAnnouncementExpiryReceivedStatic(uint64_t  timeUntilExpirationSeconds) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator::<ReannouncePresenceAfterDelay>d__24))]
/// @brief Method ReannouncePresenceAfterDelay, addr 0x9d03088, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReannouncePresenceAfterDelay(::System::TimeSpan  reannounceDelay, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator::<RequestLocalUserCosmeticsAsyncDelayed>d__16))]
/// @brief Method RequestLocalUserCosmeticsAsyncDelayed, addr 0x9d02710, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RequestLocalUserCosmeticsAsyncDelayed() ;

constexpr ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>* const& __cordl_internal_get_OnCosmeticAvailable() const;

constexpr ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*& __cordl_internal_get_OnCosmeticAvailable() ;

constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager* const& __cordl_internal_get__featureFlagManager() const;

constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager*& __cordl_internal_get__featureFlagManager() ;

constexpr ::System::Object* const& __cordl_internal_get__lock() const;

constexpr ::System::Object*& __cordl_internal_get__lock() ;

constexpr ::StringW const& __cordl_internal_get__playerId() const;

constexpr ::StringW& __cordl_internal_get__playerId() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__reannounceCancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__reannounceCancellationTokenSource() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__requestLocalUserCosmeticsTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__requestLocalUserCosmeticsTask() ;

constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* const& __cordl_internal_get__serializer() const;

constexpr ::Liv::Lck::Core::Serialization::ILckSerializer*& __cordl_internal_get__serializer() ;

constexpr ::StringW const& __cordl_internal_get__sessionId() const;

constexpr ::StringW& __cordl_internal_get__sessionId() ;

constexpr void __cordl_internal_set_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value) ;

constexpr void __cordl_internal_set__featureFlagManager(::Liv::Lck::ILckCosmeticsFeatureFlagManager*  value) ;

constexpr void __cordl_internal_set__lock(::System::Object*  value) ;

constexpr void __cordl_internal_set__playerId(::StringW  value) ;

constexpr void __cordl_internal_set__reannounceCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__requestLocalUserCosmeticsTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__serializer(::Liv::Lck::Core::Serialization::ILckSerializer*  value) ;

constexpr void __cordl_internal_set__sessionId(::StringW  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d02530, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Core::Serialization::ILckSerializer*  serializer, ::Liv::Lck::ILckCosmeticsFeatureFlagManager*  featureFlagManager) ;

/// [CompilerGenerated]
/// @brief Method add_OnCosmeticAvailable, addr 0x9d023d0, size 0xb0, virtual true, abstract: false, final true
inline void add_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value) ;

static inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator* getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x9d02330, size 0x48, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator* get_Instance() ;

/// @brief Convert to "::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator"
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* i___Liv__Lck__Core__Cosmetics__ILckCosmeticsCoordinator() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnCosmeticAvailable, addr 0x9d02480, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value) ;

static inline void setStaticF__Instance_k__BackingField(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x9d02378, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsCoordinator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsCoordinator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreCosmeticsCoordinator(LckCoreCosmeticsCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsCoordinator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreCosmeticsCoordinator(LckCoreCosmeticsCoordinator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31953};

/// [CompilerGenerated]
/// @brief Field OnCosmeticAvailable, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  ___OnCosmeticAvailable;

/// @brief Field _serializer, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::Core::Serialization::ILckSerializer*  ____serializer;

/// @brief Field _featureFlagManager, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckCosmeticsFeatureFlagManager*  ____featureFlagManager;

/// @brief Field _reannounceCancellationTokenSource, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____reannounceCancellationTokenSource;

/// @brief Field _requestLocalUserCosmeticsTask, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____requestLocalUserCosmeticsTask;

/// @brief Field _lock, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ____lock;

/// @brief Field _playerId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____playerId;

/// @brief Field _sessionId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator, ___OnCosmeticAvailable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator, ____serializer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator, ____featureFlagManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator, ____reannounceCancellationTokenSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator, ____requestLocalUserCosmeticsTask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator, ____lock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator, ____playerId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator, ____sessionId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator) == 0x50, "Size mismatch!");

} // namespace end def Liv::Lck::Core::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Core::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator/<>c__DisplayClass19_0
class CORDL_TYPE LckCoreCosmeticsCoordinator___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field playerId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerId, put=__cordl_internal_set_playerId)) ::StringW  playerId;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <AnnouncePlayerPresenceForSessionAsync>b__0, addr 0x9d03818, size 0x1a4, virtual false, abstract: false, final false
inline ::Liv::Lck::Core::Result_1<bool>* _AnnouncePlayerPresenceForSessionAsync_b__0() ;

constexpr ::StringW const& __cordl_internal_get_playerId() const;

constexpr ::StringW& __cordl_internal_get_playerId() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set_playerId(::StringW  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d03810, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsCoordinator___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsCoordinator___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreCosmeticsCoordinator___c__DisplayClass19_0(LckCoreCosmeticsCoordinator___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsCoordinator___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreCosmeticsCoordinator___c__DisplayClass19_0(LckCoreCosmeticsCoordinator___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31947};

/// @brief Field playerId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___playerId;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0, ___playerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Core::Cosmetics
// [CompilerGenerated]
// Dependencies System.IntPtr, System.Object
namespace Liv::Lck::Core::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator/<>c__DisplayClass18_0
class CORDL_TYPE LckCoreCosmeticsCoordinator___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field playerIdUtf8StringPtrs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerIdUtf8StringPtrs, put=__cordl_internal_set_playerIdUtf8StringPtrs)) ::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*  playerIdUtf8StringPtrs;

/// @brief Field playerIdsArrayPointer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerIdsArrayPointer, put=__cordl_internal_set_playerIdsArrayPointer)) ::System::IntPtr  playerIdsArrayPointer;

/// @brief Field sessionId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <GetUserCosmeticsForSessionAsync>b__0, addr 0x9d03400, size 0x410, virtual false, abstract: false, final false
inline ::Liv::Lck::Core::Result_1<bool>* _GetUserCosmeticsForSessionAsync_b__0() ;

constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>* const& __cordl_internal_get_playerIdUtf8StringPtrs() const;

constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*& __cordl_internal_get_playerIdUtf8StringPtrs() ;

constexpr ::System::IntPtr const& __cordl_internal_get_playerIdsArrayPointer() const;

constexpr ::System::IntPtr& __cordl_internal_get_playerIdsArrayPointer() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set_playerIdUtf8StringPtrs(::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set_playerIdsArrayPointer(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d033f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsCoordinator___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsCoordinator___c__DisplayClass18_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreCosmeticsCoordinator___c__DisplayClass18_0(LckCoreCosmeticsCoordinator___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsCoordinator___c__DisplayClass18_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreCosmeticsCoordinator___c__DisplayClass18_0(LckCoreCosmeticsCoordinator___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31946};

/// @brief Field sessionId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field playerIdsArrayPointer, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___playerIdsArrayPointer;

/// @brief Field playerIdUtf8StringPtrs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*  ___playerIdUtf8StringPtrs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0, ___sessionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0, ___playerIdsArrayPointer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0, ___playerIdUtf8StringPtrs) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Core::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Core::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator/<>c
class CORDL_TYPE LckCoreCosmeticsCoordinator___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Func_1<::Liv::Lck::Core::Result_1<bool>*>*  __9__17_0;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::System::Func_3<::StringW,::StringW,::StringW>*  __9__21_0;

static inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c* New_ctor() ;

/// @brief Method <GetLocalUserCosmeticsAsync>b__17_0, addr 0x9d031f4, size 0x1a8, virtual false, abstract: false, final false
inline ::Liv::Lck::Core::Result_1<bool>* _GetLocalUserCosmeticsAsync_b__17_0() ;

/// @brief Method <HandleOnCosmeticAvailable>b__21_0, addr 0x9d0339c, size 0x5c, virtual false, abstract: false, final false
inline ::StringW _HandleOnCosmeticAvailable_b__21_0(::StringW  current, ::StringW  playerId) ;

/// @brief Method .ctor, addr 0x9d031ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c* getStaticF___9() ;

static inline ::System::Func_1<::Liv::Lck::Core::Result_1<bool>*>* getStaticF___9__17_0() ;

static inline ::System::Func_3<::StringW,::StringW,::StringW>* getStaticF___9__21_0() ;

static inline void setStaticF___9(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*  value) ;

static inline void setStaticF___9__17_0(::System::Func_1<::Liv::Lck::Core::Result_1<bool>*>*  value) ;

static inline void setStaticF___9__21_0(::System::Func_3<::StringW,::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsCoordinator___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsCoordinator___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreCosmeticsCoordinator___c(LckCoreCosmeticsCoordinator___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsCoordinator___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreCosmeticsCoordinator___c(LckCoreCosmeticsCoordinator___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31945};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core::Cosmetics
