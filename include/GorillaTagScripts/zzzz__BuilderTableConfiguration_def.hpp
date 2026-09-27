#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTableConfiguration)
// Forward declare root types
namespace GorillaTagScripts {
class BuilderTableConfiguration;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderTableConfiguration*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderTableConfiguration*, "GorillaTagScripts", "BuilderTableConfiguration");
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderTableConfiguration
class CORDL_TYPE BuilderTableConfiguration : public ::System::Object {
public:
// Declarations
/// @brief Field DroppedPieceLimit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_DroppedPieceLimit, put=__cordl_internal_set_DroppedPieceLimit)) int32_t  DroppedPieceLimit;

/// @brief Field PlotResourceLimits, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlotResourceLimits, put=__cordl_internal_set_PlotResourceLimits)) ::ArrayW<int32_t>  PlotResourceLimits;

/// @brief Field TableResourceLimits, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TableResourceLimits, put=__cordl_internal_set_TableResourceLimits)) ::ArrayW<int32_t>  TableResourceLimits;

/// @brief Field updateCountdownDate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateCountdownDate, put=__cordl_internal_set_updateCountdownDate)) ::StringW  updateCountdownDate;

/// @brief Field version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

static inline ::GorillaTagScripts::BuilderTableConfiguration* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_DroppedPieceLimit() const;

constexpr int32_t& __cordl_internal_get_DroppedPieceLimit() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_PlotResourceLimits() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_PlotResourceLimits() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_TableResourceLimits() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_TableResourceLimits() ;

constexpr ::StringW const& __cordl_internal_get_updateCountdownDate() const;

constexpr ::StringW& __cordl_internal_get_updateCountdownDate() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_DroppedPieceLimit(int32_t  value) ;

constexpr void __cordl_internal_set_PlotResourceLimits(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_TableResourceLimits(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_updateCountdownDate(::StringW  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ba940c, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTableConfiguration(BuilderTableConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTableConfiguration(BuilderTableConfiguration const& ) = delete;

/// @brief Field CONFIGURATION_VERSION offset 0xffffffff size 0x4
static constexpr int32_t  CONFIGURATION_VERSION{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3937};

/// @brief Field version, offset: 0x10, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field TableResourceLimits, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___TableResourceLimits;

/// @brief Field PlotResourceLimits, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___PlotResourceLimits;

/// @brief Field DroppedPieceLimit, offset: 0x28, size: 0x4, def value: None
 int32_t  ___DroppedPieceLimit;

/// @brief Field updateCountdownDate, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___updateCountdownDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderTableConfiguration, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableConfiguration, ___TableResourceLimits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableConfiguration, ___PlotResourceLimits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableConfiguration, ___DroppedPieceLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableConfiguration, ___updateCountdownDate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderTableConfiguration) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts
