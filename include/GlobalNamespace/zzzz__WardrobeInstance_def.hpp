#pragma once
// IWYU pragma private; include "GlobalNamespace/WardrobeInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WardrobeItemButton_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(WardrobeInstance)
namespace GlobalNamespace {
class HeadModel;
}
// Forward declare root types
namespace GlobalNamespace {
class WardrobeInstance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WardrobeInstance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WardrobeInstance*, "", "WardrobeInstance");
// Dependencies UnityEngine.MonoBehaviour, WardrobeItemButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: WardrobeInstance
class CORDL_TYPE WardrobeInstance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field selfDoll, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_selfDoll, put=__cordl_internal_set_selfDoll)) ::UnityW<::GlobalNamespace::HeadModel>  selfDoll;

/// @brief Field wardrobeItemButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_wardrobeItemButtons, put=__cordl_internal_set_wardrobeItemButtons)) ::ArrayW<::UnityW<::GlobalNamespace::WardrobeItemButton>>  wardrobeItemButtons;

static inline ::GlobalNamespace::WardrobeInstance* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57893d0, size 0x74, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x578935c, size 0x74, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::HeadModel> const& __cordl_internal_get_selfDoll() const;

constexpr ::UnityW<::GlobalNamespace::HeadModel>& __cordl_internal_get_selfDoll() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::WardrobeItemButton>> const& __cordl_internal_get_wardrobeItemButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::WardrobeItemButton>>& __cordl_internal_get_wardrobeItemButtons() ;

constexpr void __cordl_internal_set_selfDoll(::UnityW<::GlobalNamespace::HeadModel>  value) ;

constexpr void __cordl_internal_set_wardrobeItemButtons(::ArrayW<::UnityW<::GlobalNamespace::WardrobeItemButton>>  value) ;

/// @brief Method .ctor, addr 0x5789444, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WardrobeInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WardrobeInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WardrobeInstance(WardrobeInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WardrobeInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WardrobeInstance(WardrobeInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1420};

/// @brief Field wardrobeItemButtons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::WardrobeItemButton>>  ___wardrobeItemButtons;

/// @brief Field selfDoll, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeadModel>  ___selfDoll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WardrobeInstance, ___wardrobeItemButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WardrobeInstance, ___selfDoll) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WardrobeInstance) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
