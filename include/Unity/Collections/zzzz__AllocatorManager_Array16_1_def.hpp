#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_Array16_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AllocatorManager_Array16_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct AllocatorManager_Array16_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::AllocatorManager_Array16_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::AllocatorManager_Array16_1, "Unity.Collections", "AllocatorManager/Array16`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Array16`1<T>
struct CORDL_TYPE AllocatorManager_Array16_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_Array16_1() ;

// Ctor Parameters [CppParam { name: "f0", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f1", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f2", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f3", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f4", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f5", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f6", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f7", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f8", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f9", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f10", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f11", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f12", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f13", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f14", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "f15", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr AllocatorManager_Array16_1(T  f0, T  f1, T  f2, T  f3, T  f4, T  f5, T  f6, T  f7, T  f8, T  f9, T  f10, T  f11, T  f12, T  f13, T  f14, T  f15) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field f0, offset: 0x0, size: 0x8, def value: None
 T  f0;

/// @brief Field f1, offset: 0x8, size: 0x8, def value: None
 T  f1;

/// @brief Field f2, offset: 0x10, size: 0x8, def value: None
 T  f2;

/// @brief Field f3, offset: 0x18, size: 0x8, def value: None
 T  f3;

/// @brief Field f4, offset: 0x20, size: 0x8, def value: None
 T  f4;

/// @brief Field f5, offset: 0x28, size: 0x8, def value: None
 T  f5;

/// @brief Field f6, offset: 0x30, size: 0x8, def value: None
 T  f6;

/// @brief Field f7, offset: 0x38, size: 0x8, def value: None
 T  f7;

/// @brief Field f8, offset: 0x40, size: 0x8, def value: None
 T  f8;

/// @brief Field f9, offset: 0x48, size: 0x8, def value: None
 T  f9;

/// @brief Field f10, offset: 0x50, size: 0x8, def value: None
 T  f10;

/// @brief Field f11, offset: 0x58, size: 0x8, def value: None
 T  f11;

/// @brief Field f12, offset: 0x60, size: 0x8, def value: None
 T  f12;

/// @brief Field f13, offset: 0x68, size: 0x8, def value: None
 T  f13;

/// @brief Field f14, offset: 0x70, size: 0x8, def value: None
 T  f14;

/// @brief Field f15, offset: 0x78, size: 0x8, def value: None
 T  f15;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
