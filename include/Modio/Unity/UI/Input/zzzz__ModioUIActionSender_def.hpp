#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIActionSender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Input/zzzz__ModioUIInput_ModioAction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUIActionSender)
// Forward declare root types
namespace Modio::Unity::UI::Input {
class ModioUIActionSender;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIActionSender*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIActionSender*, "Modio.Unity.UI.Input", "ModioUIActionSender");
// Dependencies Modio.Unity.UI.Input.ModioUIInput::ModioAction, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIActionSender
class CORDL_TYPE ModioUIActionSender : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _action, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__action, put=__cordl_internal_set__action)) ::GlobalNamespace::ModioUIInput_ModioAction  _action;

static inline ::Modio::Unity::UI::Input::ModioUIActionSender* New_ctor() ;

/// @brief Method PressedAction, addr 0x9fb4514, size 0x58, virtual false, abstract: false, final false
inline void PressedAction() ;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction const& __cordl_internal_get__action() const;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction& __cordl_internal_get__action() ;

constexpr void __cordl_internal_set__action(::GlobalNamespace::ModioUIInput_ModioAction  value) ;

/// @brief Method .ctor, addr 0x9fb4958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIActionSender() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIActionSender", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIActionSender(ModioUIActionSender && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIActionSender", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIActionSender(ModioUIActionSender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27122};

/// [SerializeField]
/// @brief Field _action, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ModioUIInput_ModioAction  ____action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIActionSender, ____action) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIActionSender) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
