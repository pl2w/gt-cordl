#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_Array32768_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_Array4096_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AllocatorManager_Array32768_1)
namespace Unity::Collections {
template<typename T>
class IIndexable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct AllocatorManager_Array32768_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::AllocatorManager_Array32768_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::AllocatorManager_Array32768_1, "Unity.Collections", "AllocatorManager/Array32768`1");
// Dependencies Unity.Collections.AllocatorManager::Array4096`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Array32768`1<T>
struct CORDL_TYPE AllocatorManager_Array32768_1 {
public:
// Declarations
 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
constexpr operator  ::Unity::Collections::IIndexable_1<T>*() ;

/// @brief Method ElementAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<T> ElementAt(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Length() ;

/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
constexpr ::Unity::Collections::IIndexable_1<T>* i___Unity__Collections__IIndexable_1_T_() ;

/// @brief Method set_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Length(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_Array32768_1() ;

// Ctor Parameters [CppParam { name: "f0", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f1", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f2", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f3", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f4", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f5", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f6", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "f7", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: None, comment: None }]
constexpr AllocatorManager_Array32768_1(::GlobalNamespace::AllocatorManager_Array4096_1<T>  f0, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f1, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f2, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f3, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f4, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f5, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f6, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f7) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40000};

/// @brief Field f0, offset: 0x0, size: 0x8000, def value: None
 ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f0;

/// @brief Field f1, offset: 0x8000, size: 0x8000, def value: None
 ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f1;

/// @brief Field f2, offset: 0x10000, size: 0x8000, def value: None
 ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f2;

/// @brief Field f3, offset: 0x18000, size: 0x8000, def value: None
 ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f3;

/// @brief Field f4, offset: 0x20000, size: 0x8000, def value: None
 ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f4;

/// @brief Field f5, offset: 0x28000, size: 0x8000, def value: None
 ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f5;

/// @brief Field f6, offset: 0x30000, size: 0x8000, def value: None
 ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f6;

/// @brief Field f7, offset: 0x38000, size: 0x8000, def value: None
 ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f7;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
