#pragma once
// IWYU pragma private; include "GorillaNetworking/FeatureFlagListData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__FeatureFlagData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FeatureFlagListData)
// Forward declare root types
namespace GorillaNetworking {
class FeatureFlagListData;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::FeatureFlagListData*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::FeatureFlagListData*, "GorillaNetworking", "FeatureFlagListData");
// Dependencies GorillaNetworking.FeatureFlagData, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.FeatureFlagListData
class CORDL_TYPE FeatureFlagListData : public ::System::Object {
public:
// Declarations
/// @brief Field flags, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) ::ArrayW<::GorillaNetworking::FeatureFlagData*>  flags;

static inline ::GorillaNetworking::FeatureFlagListData* New_ctor() ;

constexpr ::ArrayW<::GorillaNetworking::FeatureFlagData*> const& __cordl_internal_get_flags() const;

constexpr ::ArrayW<::GorillaNetworking::FeatureFlagData*>& __cordl_internal_get_flags() ;

constexpr void __cordl_internal_set_flags(::ArrayW<::GorillaNetworking::FeatureFlagData*>  value) ;

/// @brief Method .ctor, addr 0x5c90448, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagListData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagListData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureFlagListData(FeatureFlagListData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagListData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureFlagListData(FeatureFlagListData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4365};

/// @brief Field flags, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GorillaNetworking::FeatureFlagData*>  ___flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::FeatureFlagListData, ___flags) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::FeatureFlagListData) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
