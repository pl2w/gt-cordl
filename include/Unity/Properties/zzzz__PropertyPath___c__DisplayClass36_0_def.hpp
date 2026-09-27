#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyPath___c__DisplayClass36_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyPath___c__DisplayClass36_0)
// Forward declare root types
namespace GlobalNamespace {
struct PropertyPath___c__DisplayClass36_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PropertyPath___c__DisplayClass36_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropertyPath___c__DisplayClass36_0, "Unity.Properties", "PropertyPath/<>c__DisplayClass36_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Properties.PropertyPath/<>c__DisplayClass36_0
struct CORDL_TYPE PropertyPath___c__DisplayClass36_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertyPath___c__DisplayClass36_0() ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PropertyPath___c__DisplayClass36_0(int32_t  index, int32_t  length, ::StringW  path, int32_t  state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29444};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 int32_t  index;

/// @brief Field length, offset: 0x4, size: 0x4, def value: None
 int32_t  length;

/// @brief Field path, offset: 0x8, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 int32_t  state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropertyPath___c__DisplayClass36_0, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyPath___c__DisplayClass36_0, length) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyPath___c__DisplayClass36_0, path) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyPath___c__DisplayClass36_0, state) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropertyPath___c__DisplayClass36_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
