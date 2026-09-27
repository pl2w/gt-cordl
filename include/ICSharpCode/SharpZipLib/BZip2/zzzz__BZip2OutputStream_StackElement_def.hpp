#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/BZip2/BZip2OutputStream_StackElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BZip2OutputStream_StackElement)
// Forward declare root types
namespace GlobalNamespace {
struct BZip2OutputStream_StackElement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BZip2OutputStream_StackElement);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BZip2OutputStream_StackElement, "ICSharpCode.SharpZipLib.BZip2", "BZip2OutputStream/StackElement");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream/StackElement
struct CORDL_TYPE BZip2OutputStream_StackElement {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BZip2OutputStream_StackElement() ;

// Ctor Parameters [CppParam { name: "ll", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hh", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BZip2OutputStream_StackElement(int32_t  ll, int32_t  hh, int32_t  dd) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17447};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field ll, offset: 0x0, size: 0x4, def value: None
 int32_t  ll;

/// @brief Field hh, offset: 0x4, size: 0x4, def value: None
 int32_t  hh;

/// @brief Field dd, offset: 0x8, size: 0x4, def value: None
 int32_t  dd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BZip2OutputStream_StackElement, ll) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BZip2OutputStream_StackElement, hh) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BZip2OutputStream_StackElement, dd) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BZip2OutputStream_StackElement) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
