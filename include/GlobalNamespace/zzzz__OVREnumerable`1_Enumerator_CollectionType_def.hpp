#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumerable`1_Enumerator_CollectionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREnumerable`1_Enumerator_CollectionType)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Enumerator_OVREnumerable_1_CollectionType;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType, "", "OVREnumerable`1/Enumerator/CollectionType");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: OVREnumerable`1/Enumerator/CollectionType<T>
struct CORDL_TYPE Enumerator_OVREnumerable_1_CollectionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Enumerator_OVREnumerable_1_CollectionType_Unwrapped
enum struct __Enumerator_OVREnumerable_1_CollectionType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ReadOnlyList = static_cast<int32_t>(0x1),
__E_List = static_cast<int32_t>(0x2),
__E_Set = static_cast<int32_t>(0x3),
__E_Queue = static_cast<int32_t>(0x4),
__E_Enumerable = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Enumerator_OVREnumerable_1_CollectionType_Unwrapped () const noexcept {
return static_cast<__Enumerator_OVREnumerable_1_CollectionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Enumerator_OVREnumerable_1_CollectionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Enumerator_OVREnumerable_1_CollectionType(int32_t  value__) noexcept;

/// @brief Field Enumerable value: I32(5)
static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const Enumerable;

/// @brief Field List value: I32(2)
static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const List;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const None;

/// @brief Field Queue value: I32(4)
static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const Queue;

/// @brief Field ReadOnlyList value: I32(1)
static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const ReadOnlyList;

/// @brief Field Set value: I32(3)
static ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T> const Set;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
