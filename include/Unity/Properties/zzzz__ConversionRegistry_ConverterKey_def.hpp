#pragma once
// IWYU pragma private; include "Unity/Properties/ConversionRegistry_ConverterKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ConversionRegistry_ConverterKey)
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
struct ConversionRegistry_ConverterKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConversionRegistry_ConverterKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConversionRegistry_ConverterKey, "Unity.Properties", "ConversionRegistry/ConverterKey");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Properties.ConversionRegistry/ConverterKey
struct CORDL_TYPE ConversionRegistry_ConverterKey {
public:
// Declarations
/// @brief Method .ctor, addr 0xb69872c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  source, ::System::Type*  destination) ;

// Ctor Parameters []
// @brief default ctor
constexpr ConversionRegistry_ConverterKey() ;

// Ctor Parameters [CppParam { name: "SourceType", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DestinationType", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }]
constexpr ConversionRegistry_ConverterKey(::System::Type*  SourceType, ::System::Type*  DestinationType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29507};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field SourceType, offset: 0x0, size: 0x8, def value: None
 ::System::Type*  SourceType;

/// @brief Field DestinationType, offset: 0x8, size: 0x8, def value: None
 ::System::Type*  DestinationType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConversionRegistry_ConverterKey, SourceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConversionRegistry_ConverterKey, DestinationType) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConversionRegistry_ConverterKey) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
