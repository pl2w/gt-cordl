#pragma once
// IWYU pragma private; include "System/Xml/Schema/NamespaceList_ListType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NamespaceList_ListType)
// Forward declare root types
namespace GlobalNamespace {
struct NamespaceList_ListType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NamespaceList_ListType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NamespaceList_ListType, "System.Xml.Schema", "NamespaceList/ListType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.NamespaceList/ListType
struct CORDL_TYPE NamespaceList_ListType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NamespaceList_ListType_Unwrapped
enum struct __NamespaceList_ListType_Unwrapped : int32_t {
__E_Any = static_cast<int32_t>(0x0),
__E_Other = static_cast<int32_t>(0x1),
__E_Set = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NamespaceList_ListType_Unwrapped () const noexcept {
return static_cast<__NamespaceList_ListType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NamespaceList_ListType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NamespaceList_ListType(int32_t  value__) noexcept;

/// @brief Field Any value: I32(0)
static ::GlobalNamespace::NamespaceList_ListType const Any;

/// @brief Field Other value: I32(1)
static ::GlobalNamespace::NamespaceList_ListType const Other;

/// @brief Field Set value: I32(2)
static ::GlobalNamespace::NamespaceList_ListType const Set;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14425};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NamespaceList_ListType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NamespaceList_ListType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
