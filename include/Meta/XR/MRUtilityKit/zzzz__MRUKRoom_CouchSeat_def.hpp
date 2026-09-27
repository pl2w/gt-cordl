#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKRoom_CouchSeat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(MRUKRoom_CouchSeat)
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUKRoom_CouchSeat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKRoom_CouchSeat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKRoom_CouchSeat, "Meta.XR.MRUtilityKit", "MRUKRoom/CouchSeat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKRoom/CouchSeat
struct CORDL_TYPE MRUKRoom_CouchSeat {
public:
// Declarations
 __declspec(property(get=get_couchAnchor, put=set_couchAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  couchAnchor;

 __declspec(property(get=get_couchPoses, put=set_couchPoses)) ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  couchPoses;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_couchAnchor, addr 0x9f39c3c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> get_couchAnchor() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_couchPoses, addr 0x9f39c4c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Pose>* get_couchPoses() ;

/// [CompilerGenerated]
/// @brief Method set_couchAnchor, addr 0x9f39c44, size 0x8, virtual false, abstract: false, final false
inline void set_couchAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_couchPoses, addr 0x9f39c54, size 0x8, virtual false, abstract: false, final false
inline void set_couchPoses(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MRUKRoom_CouchSeat() ;

// Ctor Parameters [CppParam { name: "_couchAnchor_k__BackingField", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_couchPoses_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityEngine::Pose>*", modifiers: "", def_value: None, comment: None }]
constexpr MRUKRoom_CouchSeat(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _couchAnchor_k__BackingField, ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  _couchPoses_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25889};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <couchAnchor>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _couchAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <couchPoses>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  _couchPoses_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKRoom_CouchSeat, _couchAnchor_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom_CouchSeat, _couchPoses_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKRoom_CouchSeat) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
