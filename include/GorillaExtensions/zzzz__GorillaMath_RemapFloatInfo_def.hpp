#pragma once
// IWYU pragma private; include "GorillaExtensions/GorillaMath_RemapFloatInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaMath_RemapFloatInfo)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaMath_RemapFloatInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaMath_RemapFloatInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaMath_RemapFloatInfo, "GorillaExtensions", "GorillaMath/RemapFloatInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaExtensions.GorillaMath/RemapFloatInfo
struct CORDL_TYPE GorillaMath_RemapFloatInfo {
public:
// Declarations
/// @brief Method IsValid, addr 0x5cf8064, size 0x2c, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method OnValidate, addr 0x5cf8020, size 0x44, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Remap, addr 0x5cf8090, size 0x28, virtual false, abstract: false, final false
inline float_t Remap(float_t  value) ;

/// @brief Method .ctor, addr 0x5cf8014, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  fromMin, float_t  toMin, float_t  fromMax, float_t  toMax) ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaMath_RemapFloatInfo() ;

// Ctor Parameters [CppParam { name: "fromMin", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "toMin", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fromMax", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "toMax", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaMath_RemapFloatInfo(float_t  fromMin, float_t  toMin, float_t  fromMax, float_t  toMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4564};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field fromMin, offset: 0x0, size: 0x4, def value: None
 float_t  fromMin;

/// @brief Field toMin, offset: 0x4, size: 0x4, def value: None
 float_t  toMin;

/// @brief Field fromMax, offset: 0x8, size: 0x4, def value: None
 float_t  fromMax;

/// @brief Field toMax, offset: 0xc, size: 0x4, def value: None
 float_t  toMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaMath_RemapFloatInfo, fromMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMath_RemapFloatInfo, toMin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMath_RemapFloatInfo, fromMax) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMath_RemapFloatInfo, toMax) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaMath_RemapFloatInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
