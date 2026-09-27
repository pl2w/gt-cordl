#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/ToolGUILayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToolGUILayout)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class ToolGUILayout;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::ToolGUILayout*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::ToolGUILayout*, "Technie.PhysicsCreator", "ToolGUILayout");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.ToolGUILayout
class CORDL_TYPE ToolGUILayout : public ::System::Object {
public:
// Declarations
/// @brief Field buttonPositions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_buttonPositions, put=setStaticF_buttonPositions)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector2>*  buttonPositions;

/// @brief Method Button, addr 0xadd60f8, size 0x1b8, virtual false, abstract: false, final false
static inline bool Button(::StringW  buttonId, ::StringW  buttonName) ;

/// @brief Method Button, addr 0xadd5f8c, size 0x16c, virtual false, abstract: false, final false
static inline bool Button(::StringW  buttonId, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*>  options) ;

/// @brief Method Button, addr 0xadd5e20, size 0x16c, virtual false, abstract: false, final false
static inline bool Button(::StringW  buttonId, ::UnityEngine::Rect  rect, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style) ;

/// @brief Method Button, addr 0xadd5cc8, size 0x158, virtual false, abstract: false, final false
static inline bool Button(::StringW  buttonName, ::by_ref<::UnityEngine::Vector2>  buttonPos) ;

/// @brief Method GetButtonPosition, addr 0xadd62b0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetButtonPosition(::StringW  buttonId) ;

static inline ::Technie::PhysicsCreator::ToolGUILayout* New_ctor() ;

/// @brief Method .ctor, addr 0xadd6330, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector2>* getStaticF_buttonPositions() ;

static inline void setStaticF_buttonPositions(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector2>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToolGUILayout() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToolGUILayout", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToolGUILayout(ToolGUILayout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToolGUILayout", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToolGUILayout(ToolGUILayout const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30522};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::ToolGUILayout) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
