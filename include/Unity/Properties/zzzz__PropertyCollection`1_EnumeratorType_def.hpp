#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyCollection`1_EnumeratorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyCollection`1_EnumeratorType)
// Forward declare root types
namespace GlobalNamespace {
template<typename TContainer>
struct PropertyCollection_1_EnumeratorType;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::PropertyCollection_1_EnumeratorType);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::PropertyCollection_1_EnumeratorType, "Unity.Properties", "PropertyCollection`1/EnumeratorType");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.PropertyCollection`1/EnumeratorType<TContainer>
struct CORDL_TYPE PropertyCollection_1_EnumeratorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PropertyCollection_1_EnumeratorType_Unwrapped
enum struct __PropertyCollection_1_EnumeratorType_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_Enumerable = static_cast<int32_t>(0x1),
__E_List = static_cast<int32_t>(0x2),
__E_IndexedCollectionPropertyBag = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PropertyCollection_1_EnumeratorType_Unwrapped () const noexcept {
return static_cast<__PropertyCollection_1_EnumeratorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PropertyCollection_1_EnumeratorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PropertyCollection_1_EnumeratorType(int32_t  value__) noexcept;

/// @brief Field Empty value: I32(0)
static ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer> const Empty;

/// @brief Field Enumerable value: I32(1)
static ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer> const Enumerable;

/// @brief Field IndexedCollectionPropertyBag value: I32(3)
static ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer> const IndexedCollectionPropertyBag;

/// @brief Field List value: I32(2)
static ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer> const List;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29483};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
