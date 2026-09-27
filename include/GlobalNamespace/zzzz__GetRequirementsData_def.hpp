#pragma once
// IWYU pragma private; include "GlobalNamespace/GetRequirementsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GetRequirementsData)
namespace GlobalNamespace {
class GetRequirementsResponse;
}
// Forward declare root types
namespace GlobalNamespace {
class GetRequirementsData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetRequirementsData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetRequirementsData*, "", "GetRequirementsData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetRequirementsData
class CORDL_TYPE GetRequirementsData : public ::System::Object {
public:
// Declarations
/// @brief Field AgeGateRequirements, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AgeGateRequirements, put=__cordl_internal_set_AgeGateRequirements)) ::GlobalNamespace::GetRequirementsResponse*  AgeGateRequirements;

static inline ::GlobalNamespace::GetRequirementsData* New_ctor() ;

constexpr ::GlobalNamespace::GetRequirementsResponse* const& __cordl_internal_get_AgeGateRequirements() const;

constexpr ::GlobalNamespace::GetRequirementsResponse*& __cordl_internal_get_AgeGateRequirements() ;

constexpr void __cordl_internal_set_AgeGateRequirements(::GlobalNamespace::GetRequirementsResponse*  value) ;

/// @brief Method .ctor, addr 0x5a260cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetRequirementsData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetRequirementsData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetRequirementsData(GetRequirementsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetRequirementsData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetRequirementsData(GetRequirementsData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2863};

/// @brief Field AgeGateRequirements, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::GetRequirementsResponse*  ___AgeGateRequirements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetRequirementsData, ___AgeGateRequirements) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetRequirementsData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
