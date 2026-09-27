#pragma once
// IWYU pragma private; include "System/Numerics/Vector`1_VectorSizeHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector`1_VectorSizeHelper)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Vector_1_VectorSizeHelper;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Vector_1_VectorSizeHelper);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Vector_1_VectorSizeHelper, "System.Numerics", "Vector`1/VectorSizeHelper");
// Dependencies System.Numerics.Vector`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Numerics.Vector`1/VectorSizeHelper<T>
struct CORDL_TYPE Vector_1_VectorSizeHelper {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Vector_1_VectorSizeHelper() ;

// Ctor Parameters [CppParam { name: "_placeholder", ty: "::System::Numerics::Vector_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Vector_1_VectorSizeHelper(::System::Numerics::Vector_1<T>  _placeholder, uint8_t  _byte) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _placeholder, offset: 0x0, size: 0x10, def value: None
 ::System::Numerics::Vector_1<T>  _placeholder;

/// @brief Field _byte, offset: 0x10, size: 0x1, def value: None
 uint8_t  _byte;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
