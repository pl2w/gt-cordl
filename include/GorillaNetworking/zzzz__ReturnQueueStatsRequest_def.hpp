#pragma once
// IWYU pragma private; include "GorillaNetworking/ReturnQueueStatsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReturnQueueStatsRequest)
// Forward declare root types
namespace GorillaNetworking {
class ReturnQueueStatsRequest;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ReturnQueueStatsRequest*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ReturnQueueStatsRequest*, "GorillaNetworking", "ReturnQueueStatsRequest");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.ReturnQueueStatsRequest
class CORDL_TYPE ReturnQueueStatsRequest : public ::System::Object {
public:
// Declarations
/// @brief Field queueName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_queueName, put=__cordl_internal_set_queueName)) ::StringW  queueName;

static inline ::GorillaNetworking::ReturnQueueStatsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_queueName() const;

constexpr ::StringW& __cordl_internal_get_queueName() ;

constexpr void __cordl_internal_set_queueName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c8c26c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReturnQueueStatsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReturnQueueStatsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReturnQueueStatsRequest(ReturnQueueStatsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReturnQueueStatsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReturnQueueStatsRequest(ReturnQueueStatsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4354};

/// @brief Field queueName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___queueName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ReturnQueueStatsRequest, ___queueName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ReturnQueueStatsRequest) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
