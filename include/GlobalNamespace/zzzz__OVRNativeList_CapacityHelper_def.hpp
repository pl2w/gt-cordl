#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNativeList_CapacityHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNativeList_CapacityHelper)
namespace GlobalNamespace {
template<typename T>
struct OVRNativeList_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRNativeList_CapacityHelper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRNativeList_CapacityHelper);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRNativeList_CapacityHelper, "", "OVRNativeList/CapacityHelper");
// [IsReadOnly]
// Dependencies System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRNativeList/CapacityHelper
struct CORDL_TYPE OVRNativeList_CapacityHelper {
public:
// Declarations
/// @brief Method AllocateEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::OVRNativeList_1<T> AllocateEmpty(::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0xa66b25c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Nullable_1<int32_t>  count) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRNativeList_CapacityHelper() ;

// Ctor Parameters [CppParam { name: "_count", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr OVRNativeList_CapacityHelper(::System::Nullable_1<int32_t>  _count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12674};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _count, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  _count;

/// @brief Size padding 0x8 - 0x10 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRNativeList_CapacityHelper, _count) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRNativeList_CapacityHelper) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
