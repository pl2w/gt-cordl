#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaCollectionPreprocessor_Compositor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaCollectionPreprocessor_Compositor)
// Forward declare root types
namespace GlobalNamespace {
struct SchemaCollectionPreprocessor_Compositor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SchemaCollectionPreprocessor_Compositor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SchemaCollectionPreprocessor_Compositor, "System.Xml.Schema", "SchemaCollectionPreprocessor/Compositor");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.SchemaCollectionPreprocessor/Compositor
struct CORDL_TYPE SchemaCollectionPreprocessor_Compositor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SchemaCollectionPreprocessor_Compositor_Unwrapped
enum struct __SchemaCollectionPreprocessor_Compositor_Unwrapped : int32_t {
__E_Root = static_cast<int32_t>(0x0),
__E_Include = static_cast<int32_t>(0x1),
__E_Import = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SchemaCollectionPreprocessor_Compositor_Unwrapped () const noexcept {
return static_cast<__SchemaCollectionPreprocessor_Compositor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SchemaCollectionPreprocessor_Compositor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SchemaCollectionPreprocessor_Compositor(int32_t  value__) noexcept;

/// @brief Field Import value: I32(2)
static ::GlobalNamespace::SchemaCollectionPreprocessor_Compositor const Import;

/// @brief Field Include value: I32(1)
static ::GlobalNamespace::SchemaCollectionPreprocessor_Compositor const Include;

/// @brief Field Root value: I32(0)
static ::GlobalNamespace::SchemaCollectionPreprocessor_Compositor const Root;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14436};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SchemaCollectionPreprocessor_Compositor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SchemaCollectionPreprocessor_Compositor) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
