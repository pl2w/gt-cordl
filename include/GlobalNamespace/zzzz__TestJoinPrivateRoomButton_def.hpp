#pragma once
// IWYU pragma private; include "GlobalNamespace/TestJoinPrivateRoomButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TestJoinPrivateRoomButton)
// Forward declare root types
namespace GlobalNamespace {
class TestJoinPrivateRoomButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TestJoinPrivateRoomButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestJoinPrivateRoomButton*, "", "TestJoinPrivateRoomButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestJoinPrivateRoomButton
class CORDL_TYPE TestJoinPrivateRoomButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::TestJoinPrivateRoomButton* New_ctor() ;

/// @brief Method .ctor, addr 0x5ae0044, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestJoinPrivateRoomButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestJoinPrivateRoomButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestJoinPrivateRoomButton(TestJoinPrivateRoomButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestJoinPrivateRoomButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestJoinPrivateRoomButton(TestJoinPrivateRoomButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3446};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TestJoinPrivateRoomButton) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
