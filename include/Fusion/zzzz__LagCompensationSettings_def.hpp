#pragma once
// IWYU pragma private; include "Fusion/LagCompensationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LagCompensationSettings)
// Forward declare root types
namespace Fusion {
class LagCompensationSettings;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensationSettings*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensationSettings*, "Fusion", "LagCompensationSettings");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.LagCompensationSettings
class CORDL_TYPE LagCompensationSettings : public ::System::Object {
public:
// Declarations
/// @brief Field CachedStaticCollidersSize, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CachedStaticCollidersSize, put=__cordl_internal_set_CachedStaticCollidersSize)) int32_t  CachedStaticCollidersSize;

/// @brief Field Enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

 __declspec(property(get=get_ExpansionFactor)) float_t  ExpansionFactor;

/// @brief Field HitboxBufferLengthInMs, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_HitboxBufferLengthInMs, put=__cordl_internal_set_HitboxBufferLengthInMs)) int32_t  HitboxBufferLengthInMs;

/// @brief Field HitboxDefaultCapacity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_HitboxDefaultCapacity, put=__cordl_internal_set_HitboxDefaultCapacity)) int32_t  HitboxDefaultCapacity;

 __declspec(property(get=get_Optimize)) bool  Optimize;

static inline ::Fusion::LagCompensationSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_CachedStaticCollidersSize() const;

constexpr int32_t& __cordl_internal_get_CachedStaticCollidersSize() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr int32_t const& __cordl_internal_get_HitboxBufferLengthInMs() const;

constexpr int32_t& __cordl_internal_get_HitboxBufferLengthInMs() ;

constexpr int32_t const& __cordl_internal_get_HitboxDefaultCapacity() const;

constexpr int32_t& __cordl_internal_get_HitboxDefaultCapacity() ;

constexpr void __cordl_internal_set_CachedStaticCollidersSize(int32_t  value) ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

constexpr void __cordl_internal_set_HitboxBufferLengthInMs(int32_t  value) ;

constexpr void __cordl_internal_set_HitboxDefaultCapacity(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f948b4, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ExpansionFactor, addr 0x5f93f08, size 0xc, virtual false, abstract: false, final false
inline float_t get_ExpansionFactor() ;

/// @brief Method get_Optimize, addr 0x5f948ac, size 0x8, virtual false, abstract: false, final false
inline bool get_Optimize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LagCompensationSettings(LagCompensationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LagCompensationSettings(LagCompensationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18961};

/// [InlineHelp]
/// @brief Field Enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___Enabled;

/// [InlineHelp]
/// [Unit((Fusion.Units)3)]
/// [WarnIf("HitboxBufferLengthInMs", 300, "Recommended value exceeded, unless a very high tick rate (100+) is intended.", (Fusion.CompareOperator)5)]
/// [ErrorIf("HitboxBufferLengthInMs", 600, "Recommended value exceeded, unless a very high tick rate (100+) is intended.", (Fusion.CompareOperator)5)]
/// [RangeEx(30, 800, ClampMax = false)]
/// @brief Field HitboxBufferLengthInMs, offset: 0x14, size: 0x4, def value: None
 int32_t  ___HitboxBufferLengthInMs;

/// [FormerlySerializedAs("HitboxCapacity")]
/// [InlineHelp]
/// [Unit((Fusion.Units)18)]
/// [RangeEx(16, 1024, ClampMax = false, UseSlider = false)]
/// @brief Field HitboxDefaultCapacity, offset: 0x18, size: 0x4, def value: None
 int32_t  ___HitboxDefaultCapacity;

/// [Unit((Fusion.Units)18)]
/// [InlineHelp]
/// @brief Field CachedStaticCollidersSize, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___CachedStaticCollidersSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensationSettings, ___Enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensationSettings, ___HitboxBufferLengthInMs) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensationSettings, ___HitboxDefaultCapacity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensationSettings, ___CachedStaticCollidersSize) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensationSettings) == 0x20, "Size mismatch!");

} // namespace end def Fusion
