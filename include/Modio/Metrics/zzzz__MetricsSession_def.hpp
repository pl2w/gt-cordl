#pragma once
// IWYU pragma private; include "Modio/Metrics/MetricsSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetricsSession)
namespace Modio::API::SchemaDefinitions {
struct MetricsSessionRequest;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace Modio::Metrics {
class MetricsSession;
}
// Write type traits
MARK_REF_T(::Modio::Metrics::MetricsSession*);
DEFINE_IL2CPP_CLASS(::Modio::Metrics::MetricsSession*, "Modio.Metrics", "MetricsSession");
// Dependencies System.Object
namespace Modio::Metrics {
// Is value type: false
// CS Name: Modio.Metrics.MetricsSession
class CORDL_TYPE MetricsSession : public ::System::Object {
public:
// Declarations
/// @brief Field Active, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Active, put=__cordl_internal_set_Active)) bool  Active;

/// @brief Field HeartbeatCancellationToken, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_HeartbeatCancellationToken, put=__cordl_internal_set_HeartbeatCancellationToken)) ::System::Threading::CancellationTokenSource*  HeartbeatCancellationToken;

/// @brief Field HeartbeatCompletionSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_HeartbeatCompletionSource, put=__cordl_internal_set_HeartbeatCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  HeartbeatCompletionSource;

/// @brief Field SessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::StringW  SessionId;

/// @brief Field SessionOrderId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionOrderId, put=__cordl_internal_set_SessionOrderId)) int64_t  SessionOrderId;

/// @brief Field _ids, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ids, put=__cordl_internal_set__ids)) ::ArrayW<int64_t>  _ids;

/// @brief Method GetSessionHash, addr 0xa040194, size 0x28c, virtual false, abstract: false, final false
inline ::StringW GetSessionHash(bool  includeIds, ::StringW  sessionTs, ::StringW  nonce, ::StringW  secret) ;

static inline ::Modio::Metrics::MetricsSession* New_ctor(::StringW  id, ::ArrayW<int64_t>  mods) ;

/// @brief Method ToRequest, addr 0xa03e4ac, size 0x114, virtual false, abstract: false, final false
inline ::Modio::API::SchemaDefinitions::MetricsSessionRequest ToRequest(bool  includeIds, ::StringW  secret) ;

constexpr bool const& __cordl_internal_get_Active() const;

constexpr bool& __cordl_internal_get_Active() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_HeartbeatCancellationToken() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_HeartbeatCancellationToken() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_HeartbeatCompletionSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_HeartbeatCompletionSource() ;

constexpr ::StringW const& __cordl_internal_get_SessionId() const;

constexpr ::StringW& __cordl_internal_get_SessionId() ;

constexpr int64_t const& __cordl_internal_get_SessionOrderId() const;

constexpr int64_t& __cordl_internal_get_SessionOrderId() ;

constexpr ::ArrayW<int64_t> const& __cordl_internal_get__ids() const;

constexpr ::ArrayW<int64_t>& __cordl_internal_get__ids() ;

constexpr void __cordl_internal_set_Active(bool  value) ;

constexpr void __cordl_internal_set_HeartbeatCancellationToken(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_HeartbeatCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set_SessionId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionOrderId(int64_t  value) ;

constexpr void __cordl_internal_set__ids(::ArrayW<int64_t>  value) ;

/// @brief Method .ctor, addr 0xa0400c8, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  id, ::ArrayW<int64_t>  mods) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsSession() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsSession", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsSession(MetricsSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsSession", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsSession(MetricsSession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17632};

/// @brief Field _ids, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int64_t>  ____ids;

/// @brief Field SessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SessionId;

/// @brief Field SessionOrderId, offset: 0x20, size: 0x8, def value: None
 int64_t  ___SessionOrderId;

/// @brief Field Active, offset: 0x28, size: 0x1, def value: None
 bool  ___Active;

/// @brief Field HeartbeatCancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___HeartbeatCancellationToken;

/// @brief Field HeartbeatCompletionSource, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___HeartbeatCompletionSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Metrics::MetricsSession, ____ids) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Metrics::MetricsSession, ___SessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Metrics::MetricsSession, ___SessionOrderId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Metrics::MetricsSession, ___Active) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Metrics::MetricsSession, ___HeartbeatCancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Metrics::MetricsSession, ___HeartbeatCompletionSource) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Metrics::MetricsSession) == 0x40, "Size mismatch!");

} // namespace end def Modio::Metrics
