#pragma once
// IWYU pragma private; include "GorillaNetworking/ReturnVstumpMapStatsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReturnVstumpMapStatsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaNetworking {
class ReturnVstumpMapStatsRequest;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ReturnVstumpMapStatsRequest*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ReturnVstumpMapStatsRequest*, "GorillaNetworking", "ReturnVstumpMapStatsRequest");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.ReturnVstumpMapStatsRequest
class CORDL_TYPE ReturnVstumpMapStatsRequest : public ::System::Object {
public:
// Declarations
/// @brief Field mapIds, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapIds, put=__cordl_internal_set_mapIds)) ::System::Collections::Generic::List_1<::StringW>*  mapIds;

static inline ::GorillaNetworking::ReturnVstumpMapStatsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_mapIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_mapIds() ;

constexpr void __cordl_internal_set_mapIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5c8c274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReturnVstumpMapStatsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReturnVstumpMapStatsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReturnVstumpMapStatsRequest(ReturnVstumpMapStatsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReturnVstumpMapStatsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReturnVstumpMapStatsRequest(ReturnVstumpMapStatsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4355};

/// @brief Field mapIds, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___mapIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ReturnVstumpMapStatsRequest, ___mapIds) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ReturnVstumpMapStatsRequest) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
