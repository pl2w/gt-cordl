#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_Array256_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_Array16_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AllocatorManager_Array256_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct AllocatorManager_Array256_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::AllocatorManager_Array256_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::AllocatorManager_Array256_1, "Unity.Collections", "AllocatorManager/Array256`1");
// Dependencies Unity.Collections.AllocatorManager::Array16`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Array256`1<T>
struct CORDL_TYPE AllocatorManager_Array256_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_Array256_1() ;

// Ctor Parameters [CppParam { name: "f0", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f1", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f2", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f3", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f4", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f5", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f6", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f7", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f8", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f9", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f10", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f11", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f12", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f13", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f14", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f15", ty: "::GlobalNamespace::AllocatorManager_Array16_1<T>", modifiers: "", def_value: None, comment: None }]
constexpr AllocatorManager_Array256_1(::GlobalNamespace::AllocatorManager_Array16_1<T>  f0, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f1, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f2, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f3, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f4, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f5, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f6, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f7, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f8, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f9, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f10, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f11, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f12, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f13, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f14, ::GlobalNamespace::AllocatorManager_Array16_1<T>  f15) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x800};

/// @brief Field f0, offset: 0x0, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f0;

/// @brief Field f1, offset: 0x80, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f1;

/// @brief Field f2, offset: 0x100, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f2;

/// @brief Field f3, offset: 0x180, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f3;

/// @brief Field f4, offset: 0x200, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f4;

/// @brief Field f5, offset: 0x280, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f5;

/// @brief Field f6, offset: 0x300, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f6;

/// @brief Field f7, offset: 0x380, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f7;

/// @brief Field f8, offset: 0x400, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f8;

/// @brief Field f9, offset: 0x480, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f9;

/// @brief Field f10, offset: 0x500, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f10;

/// @brief Field f11, offset: 0x580, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f11;

/// @brief Field f12, offset: 0x600, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f12;

/// @brief Field f13, offset: 0x680, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f13;

/// @brief Field f14, offset: 0x700, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f14;

/// @brief Field f15, offset: 0x780, size: 0x80, def value: None
 ::GlobalNamespace::AllocatorManager_Array16_1<T>  f15;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
