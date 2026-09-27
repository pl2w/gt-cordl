#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Float3X3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Float3X3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
struct Float3X3;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::Float3X3);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::Float3X3, "Meta.XR.MRUtilityKit", "Float3X3");
// [DefaultMember("Item")]
// Dependencies UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.Float3X3
struct CORDL_TYPE Float3X3 {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

/// @brief Method Multiply, addr 0x9f4efb8, size 0x11c, virtual false, abstract: false, final false
static inline ::Meta::XR::MRUtilityKit::Float3X3 Multiply(::Meta::XR::MRUtilityKit::Float3X3  a, ::Meta::XR::MRUtilityKit::Float3X3  b) ;

/// @brief Method Multiply, addr 0x9f4f37c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Multiply(::Meta::XR::MRUtilityKit::Float3X3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method .ctor, addr 0x9f4ef9c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method .ctor, addr 0x9f4ef78, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  row0, ::UnityEngine::Vector3  row1, ::UnityEngine::Vector3  row2) ;

/// @brief Method get_Item, addr 0x9f4f0d4, size 0x154, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  row, int32_t  column) ;

/// @brief Method set_Item, addr 0x9f4f228, size 0x154, virtual false, abstract: false, final false
inline void set_Item(int32_t  row, int32_t  column, float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Float3X3() ;

// Ctor Parameters [CppParam { name: "Row0", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Row1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Row2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr Float3X3(::UnityEngine::Vector3  Row0, ::UnityEngine::Vector3  Row1, ::UnityEngine::Vector3  Row2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field Row0, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Row0;

/// @brief Field Row1, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  Row1;

/// @brief Field Row2, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  Row2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::Float3X3, Row0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::Float3X3, Row1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::Float3X3, Row2) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::Float3X3) == 0x24, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
