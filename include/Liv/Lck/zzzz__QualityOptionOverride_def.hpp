#pragma once
// IWYU pragma private; include "Liv/Lck/QualityOptionOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__DeviceModel_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QualityOptionOverride)
namespace Liv::Lck {
struct QualityOption;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Liv::Lck {
struct QualityOptionOverride;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::QualityOptionOverride);
DEFINE_IL2CPP_CLASS(::Liv::Lck::QualityOptionOverride, "Liv.Lck", "QualityOptionOverride");
// Dependencies Liv.Lck.DeviceModel
namespace Liv::Lck {
// Is value type: true
// CS Name: Liv.Lck.QualityOptionOverride
struct CORDL_TYPE QualityOptionOverride {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr QualityOptionOverride() ;

// Ctor Parameters [CppParam { name: "DeviceModel", ty: "::Liv::Lck::DeviceModel", modifiers: "", def_value: None, comment: None }, CppParam { name: "QualityOptions", ty: "::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*", modifiers: "", def_value: None, comment: None }]
constexpr QualityOptionOverride(::Liv::Lck::DeviceModel  DeviceModel, ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  QualityOptions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24784};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field DeviceModel, offset: 0x0, size: 0x4, def value: None
 ::Liv::Lck::DeviceModel  DeviceModel;

/// @brief Field QualityOptions, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  QualityOptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::QualityOptionOverride, DeviceModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::QualityOptionOverride, QualityOptions) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::QualityOptionOverride) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
