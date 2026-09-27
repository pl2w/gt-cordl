#pragma once
// IWYU pragma private; include "GlobalNamespace/GRReadyRoom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRReadyRoom)
namespace GlobalNamespace {
class GRNameDisplayPlate;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GRReadyRoom;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRReadyRoom*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRReadyRoom*, "", "GRReadyRoom");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRReadyRoom
class CORDL_TYPE GRReadyRoom : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field nameDisplayPlates, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameDisplayPlates, put=__cordl_internal_set_nameDisplayPlates)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRNameDisplayPlate>>*  nameDisplayPlates;

static inline ::GlobalNamespace::GRReadyRoom* New_ctor() ;

/// @brief Method RefreshRigs, addr 0x58a77dc, size 0x17c, virtual false, abstract: false, final false
inline void RefreshRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  vrRigs) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRNameDisplayPlate>>* const& __cordl_internal_get_nameDisplayPlates() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRNameDisplayPlate>>*& __cordl_internal_get_nameDisplayPlates() ;

constexpr void __cordl_internal_set_nameDisplayPlates(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRNameDisplayPlate>>*  value) ;

/// @brief Method .ctor, addr 0x58a7958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRReadyRoom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRReadyRoom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRReadyRoom(GRReadyRoom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRReadyRoom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRReadyRoom(GRReadyRoom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2015};

/// @brief Field nameDisplayPlates, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRNameDisplayPlate>>*  ___nameDisplayPlates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRReadyRoom, ___nameDisplayPlates) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRReadyRoom) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
