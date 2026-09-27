#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_ParsingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextReaderImpl_ParsingMode)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextReaderImpl_ParsingMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextReaderImpl_ParsingMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextReaderImpl_ParsingMode, "System.Xml", "XmlTextReaderImpl/ParsingMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextReaderImpl/ParsingMode
struct CORDL_TYPE XmlTextReaderImpl_ParsingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTextReaderImpl_ParsingMode_Unwrapped
enum struct __XmlTextReaderImpl_ParsingMode_Unwrapped : int32_t {
__E_Full = static_cast<int32_t>(0x0),
__E_SkipNode = static_cast<int32_t>(0x1),
__E_SkipContent = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTextReaderImpl_ParsingMode_Unwrapped () const noexcept {
return static_cast<__XmlTextReaderImpl_ParsingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextReaderImpl_ParsingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextReaderImpl_ParsingMode(int32_t  value__) noexcept;

/// @brief Field Full value: I32(0)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingMode const Full;

/// @brief Field SkipContent value: I32(2)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingMode const SkipContent;

/// @brief Field SkipNode value: I32(1)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingMode const SkipNode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextReaderImpl_ParsingMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
