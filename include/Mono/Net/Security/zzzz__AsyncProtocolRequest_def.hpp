#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncProtocolRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncProtocolRequest)
namespace GlobalNamespace {
struct AsyncProtocolRequest__InnerRead_d__25;
}
namespace GlobalNamespace {
struct AsyncProtocolRequest__ProcessOperation_d__24;
}
namespace GlobalNamespace {
struct AsyncProtocolRequest__StartOperation_d__23;
}
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace Mono::Net::Security {
class AsyncProtocolResult;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncProtocolRequest;
}
// Write type traits
MARK_REF_T(::Mono::Net::Security::AsyncProtocolRequest*);
DEFINE_IL2CPP_CLASS(::Mono::Net::Security::AsyncProtocolRequest*, "Mono.Net.Security", "AsyncProtocolRequest");
// Dependencies System.Object
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.AsyncProtocolRequest
class CORDL_TYPE AsyncProtocolRequest : public ::System::Object {
public:
// Declarations
using _InnerRead_d__25 = ::GlobalNamespace::AsyncProtocolRequest__InnerRead_d__25;

using _ProcessOperation_d__24 = ::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24;

using _StartOperation_d__23 = ::GlobalNamespace::AsyncProtocolRequest__StartOperation_d__23;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Parent)) ::Mono::Net::Security::MobileAuthenticatedStream*  Parent;

/// @brief Field RequestedSize, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_RequestedSize, put=__cordl_internal_set_RequestedSize)) int32_t  RequestedSize;

 __declspec(property(get=get_RunSynchronously)) bool  RunSynchronously;

/// @brief Field Started, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Started, put=__cordl_internal_set_Started)) int32_t  Started;

 __declspec(property(get=get_UserResult, put=set_UserResult)) int32_t  UserResult;

/// @brief Field WriteRequested, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_WriteRequested, put=__cordl_internal_set_WriteRequested)) int32_t  WriteRequested;

/// @brief Field <Parent>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parent_k__BackingField, put=__cordl_internal_set__Parent_k__BackingField)) ::Mono::Net::Security::MobileAuthenticatedStream*  _Parent_k__BackingField;

/// @brief Field <RunSynchronously>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__RunSynchronously_k__BackingField, put=__cordl_internal_set__RunSynchronously_k__BackingField)) bool  _RunSynchronously_k__BackingField;

/// @brief Field <UserResult>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__UserResult_k__BackingField, put=__cordl_internal_set__UserResult_k__BackingField)) int32_t  _UserResult_k__BackingField;

/// @brief Field locker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_locker, put=__cordl_internal_set_locker)) ::System::Object*  locker;

/// @brief Field next_id, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_next_id, put=setStaticF_next_id)) int32_t  next_id;

/// [AsyncStateMachine(typeof(Mono.Net.Security.AsyncProtocolRequest::<InnerRead>d__25))]
/// @brief Method InnerRead, addr 0xa8d4b88, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* InnerRead(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Mono::Net::Security::AsyncProtocolRequest* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, bool  sync) ;

/// [AsyncStateMachine(typeof(Mono.Net.Security.AsyncProtocolRequest::<ProcessOperation>d__24))]
/// @brief Method ProcessOperation, addr 0xa8d4a8c, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ProcessOperation(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method RequestRead, addr 0xa8d488c, size 0xc8, virtual false, abstract: false, final false
inline void RequestRead(int32_t  size) ;

/// @brief Method RequestWrite, addr 0xa8d4954, size 0xc, virtual false, abstract: false, final false
inline void RequestWrite() ;

/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus  status) ;

/// [AsyncStateMachine(typeof(Mono.Net.Security.AsyncProtocolRequest::<StartOperation>d__23))]
/// @brief Method StartOperation, addr 0xa8d4960, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>* StartOperation(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ToString, addr 0xa8d4cb8, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_RequestedSize() const;

constexpr int32_t& __cordl_internal_get_RequestedSize() ;

constexpr int32_t const& __cordl_internal_get_Started() const;

constexpr int32_t& __cordl_internal_get_Started() ;

constexpr int32_t const& __cordl_internal_get_WriteRequested() const;

constexpr int32_t& __cordl_internal_get_WriteRequested() ;

constexpr ::Mono::Net::Security::MobileAuthenticatedStream* const& __cordl_internal_get__Parent_k__BackingField() const;

constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& __cordl_internal_get__Parent_k__BackingField() ;

constexpr bool const& __cordl_internal_get__RunSynchronously_k__BackingField() const;

constexpr bool& __cordl_internal_get__RunSynchronously_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__UserResult_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__UserResult_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get_locker() const;

constexpr ::System::Object*& __cordl_internal_get_locker() ;

constexpr void __cordl_internal_set_RequestedSize(int32_t  value) ;

constexpr void __cordl_internal_set_Started(int32_t  value) ;

constexpr void __cordl_internal_set_WriteRequested(int32_t  value) ;

constexpr void __cordl_internal_set__Parent_k__BackingField(::Mono::Net::Security::MobileAuthenticatedStream*  value) ;

constexpr void __cordl_internal_set__RunSynchronously_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UserResult_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_locker(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa8d47f4, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, bool  sync) ;

static inline int32_t getStaticF_next_id() ;

/// @brief Method get_Name, addr 0xa8d47c0, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Parent, addr 0xa8d47b0, size 0x8, virtual false, abstract: false, final false
inline ::Mono::Net::Security::MobileAuthenticatedStream* get_Parent() ;

/// [CompilerGenerated]
/// @brief Method get_RunSynchronously, addr 0xa8d47b8, size 0x8, virtual false, abstract: false, final false
inline bool get_RunSynchronously() ;

/// [CompilerGenerated]
/// @brief Method get_UserResult, addr 0xa8d47e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_UserResult() ;

static inline void setStaticF_next_id(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_UserResult, addr 0xa8d47ec, size 0x8, virtual false, abstract: false, final false
inline void set_UserResult(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncProtocolRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncProtocolRequest(AsyncProtocolRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncProtocolRequest(AsyncProtocolRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9874};

/// [CompilerGenerated]
/// @brief Field <Parent>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Mono::Net::Security::MobileAuthenticatedStream*  ____Parent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RunSynchronously>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____RunSynchronously_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UserResult>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____UserResult_k__BackingField;

/// @brief Field Started, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Started;

/// @brief Field RequestedSize, offset: 0x24, size: 0x4, def value: None
 int32_t  ___RequestedSize;

/// @brief Field WriteRequested, offset: 0x28, size: 0x4, def value: None
 int32_t  ___WriteRequested;

/// @brief Field locker, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ___locker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ____Parent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ____RunSynchronously_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ____UserResult_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ___Started) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ___RequestedSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ___WriteRequested) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncProtocolRequest, ___locker) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mono::Net::Security::AsyncProtocolRequest) == 0x38, "Size mismatch!");

} // namespace end def Mono::Net::Security
