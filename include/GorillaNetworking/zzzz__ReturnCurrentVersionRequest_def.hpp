#pragma once
// IWYU pragma private; include "GorillaNetworking/ReturnCurrentVersionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReturnCurrentVersionRequest)
// Forward declare root types
namespace GorillaNetworking {
class ReturnCurrentVersionRequest;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ReturnCurrentVersionRequest*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ReturnCurrentVersionRequest*, "GorillaNetworking", "ReturnCurrentVersionRequest");
// Dependencies System.Nullable`1<T>, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.ReturnCurrentVersionRequest
class CORDL_TYPE ReturnCurrentVersionRequest : public ::System::Object {
public:
// Declarations
/// @brief Field CurrentVersion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CurrentVersion, put=__cordl_internal_set_CurrentVersion)) ::StringW  CurrentVersion;

/// @brief Field UpdatedSynchTest, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_UpdatedSynchTest, put=__cordl_internal_set_UpdatedSynchTest)) ::System::Nullable_1<int32_t>  UpdatedSynchTest;

static inline ::GorillaNetworking::ReturnCurrentVersionRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CurrentVersion() const;

constexpr ::StringW& __cordl_internal_get_CurrentVersion() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_UpdatedSynchTest() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_UpdatedSynchTest() ;

constexpr void __cordl_internal_set_CurrentVersion(::StringW  value) ;

constexpr void __cordl_internal_set_UpdatedSynchTest(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0x5c8c244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReturnCurrentVersionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReturnCurrentVersionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReturnCurrentVersionRequest(ReturnCurrentVersionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReturnCurrentVersionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReturnCurrentVersionRequest(ReturnCurrentVersionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4349};

/// @brief Field CurrentVersion, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___CurrentVersion;

/// @brief Field UpdatedSynchTest, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___UpdatedSynchTest;

/// @brief Size padding 0x20 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ReturnCurrentVersionRequest, ___CurrentVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ReturnCurrentVersionRequest, ___UpdatedSynchTest) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ReturnCurrentVersionRequest) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
