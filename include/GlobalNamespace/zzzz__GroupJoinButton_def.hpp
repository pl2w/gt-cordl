#pragma once
// IWYU pragma private; include "GlobalNamespace/GroupJoinButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupJoinButton)
namespace GlobalNamespace {
class GorillaFriendCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class GroupJoinButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GroupJoinButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GroupJoinButton*, "", "GroupJoinButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GroupJoinButton
class CORDL_TYPE GroupJoinButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field friendCollider, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendCollider, put=__cordl_internal_set_friendCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  friendCollider;

/// @brief Field gameModeIndex, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameModeIndex, put=__cordl_internal_set_gameModeIndex)) int32_t  gameModeIndex;

/// @brief Field inPrivate, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_inPrivate, put=__cordl_internal_set_inPrivate)) bool  inPrivate;

/// @brief Method ButtonActivation, addr 0x594824c, size 0x98, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::GroupJoinButton* New_ctor() ;

/// @brief Method Update, addr 0x59482e4, size 0xa4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_friendCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_friendCollider() ;

constexpr int32_t const& __cordl_internal_get_gameModeIndex() const;

constexpr int32_t& __cordl_internal_get_gameModeIndex() ;

constexpr bool const& __cordl_internal_get_inPrivate() const;

constexpr bool& __cordl_internal_get_inPrivate() ;

constexpr void __cordl_internal_set_friendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_gameModeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_inPrivate(bool  value) ;

/// @brief Method .ctor, addr 0x5948388, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupJoinButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupJoinButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupJoinButton(GroupJoinButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupJoinButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupJoinButton(GroupJoinButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2283};

/// @brief Field gameModeIndex, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___gameModeIndex;

/// @brief Field friendCollider, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___friendCollider;

/// @brief Field inPrivate, offset: 0xc8, size: 0x1, def value: None
 bool  ___inPrivate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GroupJoinButton, ___gameModeIndex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupJoinButton, ___friendCollider) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupJoinButton, ___inPrivate) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GroupJoinButton) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
