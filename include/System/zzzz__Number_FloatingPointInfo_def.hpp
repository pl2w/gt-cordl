#pragma once
// IWYU pragma private; include "System/Number_FloatingPointInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Number_FloatingPointInfo)
// Forward declare root types
namespace GlobalNamespace {
struct Number_FloatingPointInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Number_FloatingPointInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Number_FloatingPointInfo, "System", "Number/FloatingPointInfo");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Number/FloatingPointInfo
struct CORDL_TYPE Number_FloatingPointInfo {
public:
// Declarations
 __declspec(property(get=get_DenormalMantissaBits)) uint16_t  DenormalMantissaBits;

 __declspec(property(get=get_DenormalMantissaMask)) uint64_t  DenormalMantissaMask;

/// @brief Field Double, offset 0xffffffff, size 0x38 
 __declspec(property(get=getStaticF_Double, put=setStaticF_Double)) ::GlobalNamespace::Number_FloatingPointInfo  Double;

 __declspec(property(get=get_ExponentBias)) int32_t  ExponentBias;

 __declspec(property(get=get_ExponentBits)) uint16_t  ExponentBits;

 __declspec(property(get=get_InfinityBits)) uint64_t  InfinityBits;

 __declspec(property(get=get_MaxBinaryExponent)) int32_t  MaxBinaryExponent;

 __declspec(property(get=get_MinBinaryExponent)) int32_t  MinBinaryExponent;

 __declspec(property(get=get_NormalMantissaBits)) uint16_t  NormalMantissaBits;

 __declspec(property(get=get_NormalMantissaMask)) uint64_t  NormalMantissaMask;

 __declspec(property(get=get_OverflowDecimalExponent)) int32_t  OverflowDecimalExponent;

/// @brief Field Single, offset 0xffffffff, size 0x38 
 __declspec(property(get=getStaticF_Single, put=setStaticF_Single)) ::GlobalNamespace::Number_FloatingPointInfo  Single;

 __declspec(property(get=get_ZeroBits)) uint64_t  ZeroBits;

/// @brief Method .ctor, addr 0xb9a7a60, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(uint16_t  denormalMantissaBits, uint16_t  exponentBits, int32_t  maxBinaryExponent, int32_t  exponentBias, uint64_t  infinityBits) ;

static inline ::GlobalNamespace::Number_FloatingPointInfo getStaticF_Double() ;

static inline ::GlobalNamespace::Number_FloatingPointInfo getStaticF_Single() ;

/// [CompilerGenerated]
/// @brief Method get_DenormalMantissaBits, addr 0xb9a7a50, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_DenormalMantissaBits() ;

/// [CompilerGenerated]
/// @brief Method get_DenormalMantissaMask, addr 0xb9a7a20, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_DenormalMantissaMask() ;

/// [CompilerGenerated]
/// @brief Method get_ExponentBias, addr 0xb9a7a38, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ExponentBias() ;

/// [CompilerGenerated]
/// @brief Method get_ExponentBits, addr 0xb9a7a58, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_ExponentBits() ;

/// [CompilerGenerated]
/// @brief Method get_InfinityBits, addr 0xb9a7a10, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_InfinityBits() ;

/// [CompilerGenerated]
/// @brief Method get_MaxBinaryExponent, addr 0xb9a7a30, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxBinaryExponent() ;

/// [CompilerGenerated]
/// @brief Method get_MinBinaryExponent, addr 0xb9a7a28, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MinBinaryExponent() ;

/// [CompilerGenerated]
/// @brief Method get_NormalMantissaBits, addr 0xb9a7a48, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_NormalMantissaBits() ;

/// [CompilerGenerated]
/// @brief Method get_NormalMantissaMask, addr 0xb9a7a18, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_NormalMantissaMask() ;

/// [CompilerGenerated]
/// @brief Method get_OverflowDecimalExponent, addr 0xb9a7a40, size 0x8, virtual false, abstract: false, final false
inline int32_t get_OverflowDecimalExponent() ;

/// [CompilerGenerated]
/// @brief Method get_ZeroBits, addr 0xb9a7a08, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_ZeroBits() ;

static inline void setStaticF_Double(::GlobalNamespace::Number_FloatingPointInfo  value) ;

static inline void setStaticF_Single(::GlobalNamespace::Number_FloatingPointInfo  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Number_FloatingPointInfo() ;

// Ctor Parameters [CppParam { name: "_ZeroBits_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InfinityBits_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_NormalMantissaMask_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DenormalMantissaMask_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MinBinaryExponent_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaxBinaryExponent_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ExponentBias_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_OverflowDecimalExponent_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_NormalMantissaBits_k__BackingField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DenormalMantissaBits_k__BackingField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ExponentBits_k__BackingField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr Number_FloatingPointInfo(uint64_t  _ZeroBits_k__BackingField, uint64_t  _InfinityBits_k__BackingField, uint64_t  _NormalMantissaMask_k__BackingField, uint64_t  _DenormalMantissaMask_k__BackingField, int32_t  _MinBinaryExponent_k__BackingField, int32_t  _MaxBinaryExponent_k__BackingField, int32_t  _ExponentBias_k__BackingField, int32_t  _OverflowDecimalExponent_k__BackingField, uint16_t  _NormalMantissaBits_k__BackingField, uint16_t  _DenormalMantissaBits_k__BackingField, uint16_t  _ExponentBits_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26331};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [CompilerGenerated]
/// @brief Field <ZeroBits>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _ZeroBits_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InfinityBits>k__BackingField, offset: 0x8, size: 0x8, def value: None
 uint64_t  _InfinityBits_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NormalMantissaMask>k__BackingField, offset: 0x10, size: 0x8, def value: None
 uint64_t  _NormalMantissaMask_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DenormalMantissaMask>k__BackingField, offset: 0x18, size: 0x8, def value: None
 uint64_t  _DenormalMantissaMask_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MinBinaryExponent>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  _MinBinaryExponent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxBinaryExponent>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  _MaxBinaryExponent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ExponentBias>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  _ExponentBias_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OverflowDecimalExponent>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  _OverflowDecimalExponent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NormalMantissaBits>k__BackingField, offset: 0x30, size: 0x2, def value: None
 uint16_t  _NormalMantissaBits_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DenormalMantissaBits>k__BackingField, offset: 0x32, size: 0x2, def value: None
 uint16_t  _DenormalMantissaBits_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ExponentBits>k__BackingField, offset: 0x34, size: 0x2, def value: None
 uint16_t  _ExponentBits_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _ZeroBits_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _InfinityBits_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _NormalMantissaMask_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _DenormalMantissaMask_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _MinBinaryExponent_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _MaxBinaryExponent_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _ExponentBias_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _OverflowDecimalExponent_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _NormalMantissaBits_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _DenormalMantissaBits_k__BackingField) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FloatingPointInfo, _ExponentBits_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Number_FloatingPointInfo) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
