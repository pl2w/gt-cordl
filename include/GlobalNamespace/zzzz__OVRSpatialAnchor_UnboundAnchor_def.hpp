#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_UnboundAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRSpatialAnchor_UnboundAnchor)
namespace GlobalNamespace {
struct OVRSpace;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct Guid;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, "", "OVRSpatialAnchor/UnboundAnchor");
// [IsReadOnly]
// Dependencies OVRSpace, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/UnboundAnchor
struct CORDL_TYPE OVRSpatialAnchor_UnboundAnchor {
public:
// Declarations
 __declspec(property(get=get_Localized)) bool  Localized;

 __declspec(property(get=get_Localizing)) bool  Localizing;

/// @brief [Obsolete("Use TryGetPose instead.")]
 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Uuid)) ::System::Guid  Uuid;

/// @brief Method BindTo, addr 0xa647ab8, size 0x330, virtual false, abstract: false, final false
inline void BindTo(::GlobalNamespace::OVRSpatialAnchor*  spatialAnchor) ;

/// [Obsolete("Use LocalizeAsync instead.")]
/// @brief Method Localize, addr 0xa647de8, size 0xd4, virtual false, abstract: false, final false
inline void Localize(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,bool>*  onComplete, double_t  timeout) ;

/// @brief Method LocalizeAsync, addr 0xa6478cc, size 0x1ec, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> LocalizeAsync(double_t  timeout) ;

/// @brief Method TryGetPose, addr 0xa6475d4, size 0x2f8, virtual false, abstract: false, final false
inline bool TryGetPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method .ctor, addr 0xa645508, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid) ;

/// @brief Method get_Localized, addr 0xa647498, size 0x9c, virtual false, abstract: false, final false
inline bool get_Localized() ;

/// @brief Method get_Localizing, addr 0xa647534, size 0xa0, virtual false, abstract: false, final false
inline bool get_Localizing() ;

/// @brief Method get_Pose, addr 0xa647ebc, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_Pose() ;

/// [CompilerGenerated]
/// @brief Method get_Uuid, addr 0xa64748c, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_Uuid() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor_UnboundAnchor() ;

// Ctor Parameters [CppParam { name: "_space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpatialAnchor_UnboundAnchor(::GlobalNamespace::OVRSpace  _space, ::System::Guid  _Uuid_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12461};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _space, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRSpace  _space;

/// [CompilerGenerated]
/// @brief Field <Uuid>k__BackingField, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  _Uuid_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, _space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, _Uuid_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
