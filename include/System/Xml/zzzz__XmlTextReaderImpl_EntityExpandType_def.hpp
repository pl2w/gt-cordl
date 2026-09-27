#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_EntityExpandType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextReaderImpl_EntityExpandType)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextReaderImpl_EntityExpandType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextReaderImpl_EntityExpandType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextReaderImpl_EntityExpandType, "System.Xml", "XmlTextReaderImpl/EntityExpandType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextReaderImpl/EntityExpandType
struct CORDL_TYPE XmlTextReaderImpl_EntityExpandType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTextReaderImpl_EntityExpandType_Unwrapped
enum struct __XmlTextReaderImpl_EntityExpandType_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_OnlyGeneral = static_cast<int32_t>(0x1),
__E_OnlyCharacter = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTextReaderImpl_EntityExpandType_Unwrapped () const noexcept {
return static_cast<__XmlTextReaderImpl_EntityExpandType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextReaderImpl_EntityExpandType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextReaderImpl_EntityExpandType(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::GlobalNamespace::XmlTextReaderImpl_EntityExpandType const All;

/// @brief Field OnlyCharacter value: I32(2)
static ::GlobalNamespace::XmlTextReaderImpl_EntityExpandType const OnlyCharacter;

/// @brief Field OnlyGeneral value: I32(1)
static ::GlobalNamespace::XmlTextReaderImpl_EntityExpandType const OnlyGeneral;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14054};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_EntityExpandType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextReaderImpl_EntityExpandType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
