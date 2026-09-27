#pragma once
// IWYU pragma private; include "Fusion/HostMigrationConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HostMigrationConfig)
// Forward declare root types
namespace Fusion {
class HostMigrationConfig;
}
// Write type traits
MARK_REF_T(::Fusion::HostMigrationConfig*);
DEFINE_IL2CPP_CLASS(::Fusion::HostMigrationConfig*, "Fusion", "HostMigrationConfig");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HostMigrationConfig
class CORDL_TYPE HostMigrationConfig : public ::System::Object {
public:
// Declarations
/// @brief Field EnableAutoUpdate, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableAutoUpdate, put=__cordl_internal_set_EnableAutoUpdate)) bool  EnableAutoUpdate;

/// @brief Field UpdateDelay, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateDelay, put=__cordl_internal_set_UpdateDelay)) int32_t  UpdateDelay;

static inline ::Fusion::HostMigrationConfig* New_ctor() ;

constexpr bool const& __cordl_internal_get_EnableAutoUpdate() const;

constexpr bool& __cordl_internal_get_EnableAutoUpdate() ;

constexpr int32_t const& __cordl_internal_get_UpdateDelay() const;

constexpr int32_t& __cordl_internal_get_UpdateDelay() ;

constexpr void __cordl_internal_set_EnableAutoUpdate(bool  value) ;

constexpr void __cordl_internal_set_UpdateDelay(int32_t  value) ;

/// @brief Method .ctor, addr 0x5fd1744, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMigrationConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMigrationConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMigrationConfig(HostMigrationConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMigrationConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMigrationConfig(HostMigrationConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19198};

/// [InlineHelp]
/// @brief Field EnableAutoUpdate, offset: 0x10, size: 0x1, def value: None
 bool  ___EnableAutoUpdate;

/// [InlineHelp]
/// [Unit((Fusion.Units)2)]
/// [RangeEx(10, 60)]
/// @brief Field UpdateDelay, offset: 0x14, size: 0x4, def value: None
 int32_t  ___UpdateDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::HostMigrationConfig, ___EnableAutoUpdate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::HostMigrationConfig, ___UpdateDelay) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Fusion::HostMigrationConfig) == 0x18, "Size mismatch!");

} // namespace end def Fusion
