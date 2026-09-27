#pragma once
// IWYU pragma private; include "CosmeticRoom/FittingRoom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FittingRoomButton_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FittingRoom)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GorillaNetworking {
class CosmeticsController_CosmeticSet;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace CosmeticRoom {
class FittingRoom;
}
// Write type traits
MARK_REF_T(::CosmeticRoom::FittingRoom*);
DEFINE_IL2CPP_CLASS(::CosmeticRoom::FittingRoom*, "CosmeticRoom", "FittingRoom");
// Dependencies FittingRoomButton, UnityEngine.MonoBehaviour
namespace CosmeticRoom {
// Is value type: false
// CS Name: CosmeticRoom.FittingRoom
class CORDL_TYPE FittingRoom : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field addOnEnable, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_addOnEnable, put=__cordl_internal_set_addOnEnable)) bool  addOnEnable;

/// @brief Field consoleMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_consoleMesh, put=__cordl_internal_set_consoleMesh)) ::UnityW<::UnityEngine::GameObject>  consoleMesh;

/// @brief Field fittingRoomButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fittingRoomButtons, put=__cordl_internal_set_fittingRoomButtons)) ::ArrayW<::UnityW<::GlobalNamespace::FittingRoomButton>>  fittingRoomButtons;

/// @brief Field iterator, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_iterator, put=__cordl_internal_set_iterator)) int32_t  iterator;

/// @brief Method InitializeForCustomMap, addr 0x5c4dd44, size 0x8c, virtual false, abstract: false, final false
inline void InitializeForCustomMap(bool  useCustomConsoleMesh) ;

static inline ::CosmeticRoom::FittingRoom* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c4df3c, size 0x84, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c4deb8, size 0x84, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateFromCart, addr 0x5c4e040, size 0x230, virtual false, abstract: false, final false
inline void UpdateFromCart(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  currentCart, ::GorillaNetworking::CosmeticsController_CosmeticSet*  tryOnSet) ;

constexpr bool const& __cordl_internal_get_addOnEnable() const;

constexpr bool& __cordl_internal_get_addOnEnable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_consoleMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_consoleMesh() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::FittingRoomButton>> const& __cordl_internal_get_fittingRoomButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::FittingRoomButton>>& __cordl_internal_get_fittingRoomButtons() ;

constexpr int32_t const& __cordl_internal_get_iterator() const;

constexpr int32_t& __cordl_internal_get_iterator() ;

constexpr void __cordl_internal_set_addOnEnable(bool  value) ;

constexpr void __cordl_internal_set_consoleMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fittingRoomButtons(::ArrayW<::UnityW<::GlobalNamespace::FittingRoomButton>>  value) ;

constexpr void __cordl_internal_set_iterator(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c4e414, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FittingRoom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FittingRoom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FittingRoom(FittingRoom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FittingRoom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FittingRoom(FittingRoom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4241};

/// @brief Field fittingRoomButtons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::FittingRoomButton>>  ___fittingRoomButtons;

/// @brief Field consoleMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___consoleMesh;

/// @brief Field iterator, offset: 0x30, size: 0x4, def value: None
 int32_t  ___iterator;

/// @brief Field addOnEnable, offset: 0x34, size: 0x1, def value: None
 bool  ___addOnEnable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CosmeticRoom::FittingRoom, ___fittingRoomButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::FittingRoom, ___consoleMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::FittingRoom, ___iterator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::FittingRoom, ___addOnEnable) == 0x34, "Offset mismatch!");

static_assert(sizeof(::CosmeticRoom::FittingRoom) == 0x38, "Size mismatch!");

} // namespace end def CosmeticRoom
