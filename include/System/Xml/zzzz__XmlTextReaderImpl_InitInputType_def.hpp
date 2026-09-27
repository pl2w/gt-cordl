#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_InitInputType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextReaderImpl_InitInputType)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextReaderImpl_InitInputType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextReaderImpl_InitInputType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextReaderImpl_InitInputType, "System.Xml", "XmlTextReaderImpl/InitInputType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextReaderImpl/InitInputType
struct CORDL_TYPE XmlTextReaderImpl_InitInputType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTextReaderImpl_InitInputType_Unwrapped
enum struct __XmlTextReaderImpl_InitInputType_Unwrapped : int32_t {
__E_UriString = static_cast<int32_t>(0x0),
__E_Stream = static_cast<int32_t>(0x1),
__E_TextReader = static_cast<int32_t>(0x2),
__E_Invalid = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTextReaderImpl_InitInputType_Unwrapped () const noexcept {
return static_cast<__XmlTextReaderImpl_InitInputType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextReaderImpl_InitInputType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextReaderImpl_InitInputType(int32_t  value__) noexcept;

/// @brief Field Invalid value: I32(3)
static ::GlobalNamespace::XmlTextReaderImpl_InitInputType const Invalid;

/// @brief Field Stream value: I32(1)
static ::GlobalNamespace::XmlTextReaderImpl_InitInputType const Stream;

/// @brief Field TextReader value: I32(2)
static ::GlobalNamespace::XmlTextReaderImpl_InitInputType const TextReader;

/// @brief Field UriString value: I32(0)
static ::GlobalNamespace::XmlTextReaderImpl_InitInputType const UriString;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_InitInputType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextReaderImpl_InitInputType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
