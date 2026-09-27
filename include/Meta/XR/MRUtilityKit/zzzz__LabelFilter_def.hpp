#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/LabelFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_ComponentType_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LabelFilter)
namespace GlobalNamespace {
struct MRUKAnchor_ComponentType;
}
namespace GlobalNamespace {
struct MRUKAnchor_SceneLabels;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
struct LabelFilter;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::LabelFilter);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::LabelFilter, "Meta.XR.MRUtilityKit", "LabelFilter");
// Dependencies Meta.XR.MRUtilityKit.MRUKAnchor::ComponentType, Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels, System.Nullable`1<T>
namespace Meta::XR::MRUtilityKit {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.LabelFilter
struct CORDL_TYPE LabelFilter {
public:
// Declarations
/// [Obsolete("String-based labels are deprecated (v65). Please use the equivalent enum-based methods.")]
/// @brief Method Excluded, addr 0x9f1f514, size 0x5c, virtual false, abstract: false, final false
static inline ::Meta::XR::MRUtilityKit::LabelFilter Excluded(::System::Collections::Generic::List_1<::StringW>*  excluded) ;

/// [Obsolete("Use `new LabelFilter(~labelFlags)` instead")]
/// @brief Method Excluded, addr 0x9f1f570, size 0x64, virtual false, abstract: false, final false
static inline ::Meta::XR::MRUtilityKit::LabelFilter Excluded(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags) ;

/// [Obsolete("Use \'Included()\' instead.")]
/// @brief Method FromEnum, addr 0x9f1f5d4, size 0x4, virtual false, abstract: false, final false
static inline ::Meta::XR::MRUtilityKit::LabelFilter FromEnum(::GlobalNamespace::MRUKAnchor_SceneLabels  labels) ;

/// [Obsolete("String-based labels are deprecated (v65). Please use the equivalent enum-based methods.")]
/// @brief Method Included, addr 0x9f1f454, size 0x5c, virtual false, abstract: false, final false
static inline ::Meta::XR::MRUtilityKit::LabelFilter Included(::System::Collections::Generic::List_1<::StringW>*  included) ;

/// [Obsolete("Use `new LabelFilter(labelFlags)` instead")]
/// @brief Method Included, addr 0x9f1f4b0, size 0x64, virtual false, abstract: false, final false
static inline ::Meta::XR::MRUtilityKit::LabelFilter Included(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags) ;

/// @brief Method PassesFilter, addr 0x9f1f648, size 0x74, virtual false, abstract: false, final false
inline bool PassesFilter(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags) ;

/// [Obsolete("String-based labels are deprecated (v65). Please use the equivalent enum-based methods.")]
/// @brief Method PassesFilter, addr 0x9f1f5d8, size 0x70, virtual false, abstract: false, final false
inline bool PassesFilter(::System::Collections::Generic::List_1<::StringW>*  labels) ;

/// @brief Method .ctor, addr 0x9f1f44c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Nullable_1<::GlobalNamespace::MRUKAnchor_SceneLabels>  labelFlags, ::System::Nullable_1<::GlobalNamespace::MRUKAnchor_ComponentType>  componentTypes) ;

// Ctor Parameters []
// @brief default ctor
constexpr LabelFilter() ;

// Ctor Parameters [CppParam { name: "SceneLabels", ty: "::System::Nullable_1<::GlobalNamespace::MRUKAnchor_SceneLabels>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentTypes", ty: "::System::Nullable_1<::GlobalNamespace::MRUKAnchor_ComponentType>", modifiers: "", def_value: None, comment: None }]
constexpr LabelFilter(::System::Nullable_1<::GlobalNamespace::MRUKAnchor_SceneLabels>  SceneLabels, ::System::Nullable_1<::GlobalNamespace::MRUKAnchor_ComponentType>  ComponentTypes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25857};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field SceneLabels, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::MRUKAnchor_SceneLabels>  SceneLabels;

/// @brief Field ComponentTypes, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::MRUKAnchor_ComponentType>  ComponentTypes;

/// @brief Size padding 0x10 - 0x20 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::LabelFilter, SceneLabels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::LabelFilter, ComponentTypes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::LabelFilter) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
