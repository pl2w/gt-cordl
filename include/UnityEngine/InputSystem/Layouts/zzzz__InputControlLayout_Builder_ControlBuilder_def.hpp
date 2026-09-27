#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Builder_ControlBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlLayout_Builder_ControlBuilder)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::Layouts {
class ControlBuilder_Builder_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_Builder;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
// Forward declare root types
namespace GlobalNamespace {
struct Builder_InputControlLayout_ControlBuilder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Builder_InputControlLayout_ControlBuilder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Builder_InputControlLayout_ControlBuilder, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Builder/ControlBuilder
struct CORDL_TYPE Builder_InputControlLayout_ControlBuilder {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c;

/// @brief Method AsArrayOfControlsWithSize, addr 0xb0057ac, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder AsArrayOfControlsWithSize(int32_t  arraySize) ;

/// @brief Method DontReset, addr 0xb005110, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder DontReset(bool  value) ;

/// @brief Method IsNoisy, addr 0xb0050b0, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder IsNoisy(bool  value) ;

/// @brief Method IsSynthetic, addr 0xb005050, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder IsSynthetic(bool  value) ;

/// @brief Method UsingStateFrom, addr 0xb005740, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder UsingStateFrom(::StringW  path) ;

/// @brief Method WithBitOffset, addr 0xb005008, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithBitOffset(uint32_t  bit) ;

/// @brief Method WithByteOffset, addr 0xb004fc0, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithByteOffset(uint32_t  offset) ;

/// @brief Method WithDefaultState, addr 0xb0056f8, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method WithDisplayName, addr 0xb004e08, size 0x4c, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithDisplayName(::StringW  displayName) ;

/// @brief Method WithFormat, addr 0xb004f8c, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithFormat(::StringW  format) ;

/// @brief Method WithFormat, addr 0xb004f44, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithFormat(::UnityEngine::InputSystem::Utilities::FourCC  format) ;

/// @brief Method WithLayout, addr 0xb004e54, size 0xf0, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithLayout(::StringW  layout) ;

/// @brief Method WithParameters, addr 0xb00555c, size 0xc0, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithParameters(::StringW  parameters) ;

/// @brief Method WithProcessors, addr 0xb00561c, size 0xdc, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithProcessors(::StringW  processors) ;

/// @brief Method WithRange, addr 0xb0051b8, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithRange(float_t  minValue, float_t  maxValue) ;

/// @brief Method WithSizeInBits, addr 0xb005170, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithSizeInBits(uint32_t  sizeInBits) ;

/// @brief Method WithUsages, addr 0xb005558, size 0x4, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithUsages(/* [ParamArray] */ ::ArrayW<::StringW>  usages) ;

/// @brief Method WithUsages, addr 0xb005254, size 0x1d8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithUsages(/* [ParamArray] */ ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  usages) ;

/// @brief Method WithUsages, addr 0xb00542c, size 0x12c, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder WithUsages(::System::Collections::Generic::IEnumerable_1<::StringW>*  usages) ;

// Ctor Parameters []
// @brief default ctor
constexpr Builder_InputControlLayout_ControlBuilder() ;

// Ctor Parameters [CppParam { name: "builder", ty: "::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Builder_InputControlLayout_ControlBuilder(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*  builder, int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13823};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field builder, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*  builder;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Builder_InputControlLayout_ControlBuilder, builder) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Builder_InputControlLayout_ControlBuilder, index) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Builder_InputControlLayout_ControlBuilder) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
