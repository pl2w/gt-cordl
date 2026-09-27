#pragma once
// IWYU pragma private; include "GlobalNamespace/GetRequirementsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__GetAgeGateRequirementsResponse_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetRequirementsResponse)
// Forward declare root types
namespace GlobalNamespace {
class GetRequirementsResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetRequirementsResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetRequirementsResponse*, "", "GetRequirementsResponse");
// Dependencies KID.Model.GetAgeGateRequirementsResponse
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetRequirementsResponse
class CORDL_TYPE GetRequirementsResponse : public ::KID::Model::GetAgeGateRequirementsResponse {
public:
// Declarations
 __declspec(property(get=get_PlatformMinimumAge, put=set_PlatformMinimumAge)) int32_t  PlatformMinimumAge;

/// @brief Field <PlatformMinimumAge>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlatformMinimumAge_k__BackingField, put=__cordl_internal_set__PlatformMinimumAge_k__BackingField)) int32_t  _PlatformMinimumAge_k__BackingField;

static inline ::GlobalNamespace::GetRequirementsResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__PlatformMinimumAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PlatformMinimumAge_k__BackingField() ;

constexpr void __cordl_internal_set__PlatformMinimumAge_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a262c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PlatformMinimumAge, addr 0x5a262b4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlatformMinimumAge() ;

/// [CompilerGenerated]
/// @brief Method set_PlatformMinimumAge, addr 0x5a262bc, size 0x8, virtual false, abstract: false, final false
inline void set_PlatformMinimumAge(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetRequirementsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetRequirementsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetRequirementsResponse(GetRequirementsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetRequirementsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetRequirementsResponse(GetRequirementsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2884};

/// [CompilerGenerated]
/// @brief Field <PlatformMinimumAge>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____PlatformMinimumAge_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetRequirementsResponse, ____PlatformMinimumAge_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetRequirementsResponse) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
