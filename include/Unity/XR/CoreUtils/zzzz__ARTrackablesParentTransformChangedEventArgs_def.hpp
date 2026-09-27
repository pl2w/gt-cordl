#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ARTrackablesParentTransformChangedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ARTrackablesParentTransformChangedEventArgs)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
struct ARTrackablesParentTransformChangedEventArgs;
}
// Write type traits
MARK_VAL_T(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs, "Unity.XR.CoreUtils", "ARTrackablesParentTransformChangedEventArgs");
// [IsReadOnly]
// Dependencies 
namespace Unity::XR::CoreUtils {
// Is value type: true
// CS Name: Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs
struct CORDL_TYPE ARTrackablesParentTransformChangedEventArgs {
public:
// Declarations
 __declspec(property(get=get_Origin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  Origin;

 __declspec(property(get=get_TrackablesParent)) ::UnityW<::UnityEngine::Transform>  TrackablesParent;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>"
constexpr operator  ::System::IEquatable_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*() ;

/// @brief Method Equals, addr 0xb3edc74, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb3edbc8, size 0xac, virtual true, abstract: false, final true
inline bool Equals(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs  other) ;

/// @brief Method GetHashCode, addr 0xb3edcf0, size 0x58, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0xb3edaac, size 0x11c, virtual false, abstract: false, final false
inline void _ctor(::Unity::XR::CoreUtils::XROrigin*  origin, ::UnityEngine::Transform*  trackablesParent) ;

/// [CompilerGenerated]
/// @brief Method get_Origin, addr 0xb3eda9c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> get_Origin() ;

/// [CompilerGenerated]
/// @brief Method get_TrackablesParent, addr 0xb3edaa4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_TrackablesParent() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>"
constexpr ::System::IEquatable_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* i___System__IEquatable_1___Unity__XR__CoreUtils__ARTrackablesParentTransformChangedEventArgs_() ;

/// @brief Method op_Equality, addr 0xb3edd6c, size 0x2c, virtual false, abstract: false, final false
static inline bool op_Equality(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs  lhs, ::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs  rhs) ;

/// @brief Method op_Inequality, addr 0xb3edd98, size 0x30, virtual false, abstract: false, final false
static inline bool op_Inequality(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs  lhs, ::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr ARTrackablesParentTransformChangedEventArgs() ;

// Ctor Parameters [CppParam { name: "_Origin_k__BackingField", ty: "::UnityW<::Unity::XR::CoreUtils::XROrigin>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TrackablesParent_k__BackingField", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }]
constexpr ARTrackablesParentTransformChangedEventArgs(::UnityW<::Unity::XR::CoreUtils::XROrigin>  _Origin_k__BackingField, ::UnityW<::UnityEngine::Transform>  _TrackablesParent_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <Origin>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Unity::XR::CoreUtils::XROrigin>  _Origin_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TrackablesParent>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  _TrackablesParent_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs, _Origin_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs, _TrackablesParent_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
