#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Pool`1_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Pool`1_Entry)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Pool_1_Entry;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Pool_1_Entry);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Pool_1_Entry, "Meta.XR.MRUtilityKit.SceneDecorator", "Pool`1/Entry");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Pool`1/Entry<T>
struct CORDL_TYPE Pool_1_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Pool_1_Entry() ;

// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "t", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr Pool_1_Entry(bool  active, T  t) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field active, offset: 0x0, size: 0x1, def value: None
 bool  active;

/// @brief Field t, offset: 0x8, size: 0x8, def value: None
 T  t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
