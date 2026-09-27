#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleButton)
namespace GlobalNamespace {
class IClickable;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimpleButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleButton*, "", "SimpleButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleButton
class CORDL_TYPE SimpleButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Press, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Press, put=__cordl_internal_set_Press)) ::UnityEngine::Events::UnityEvent*  Press;

/// @brief Field Release, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Release, put=__cordl_internal_set_Release)) ::UnityEngine::Events::UnityEvent*  Release;

/// @brief Field activator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_activator, put=__cordl_internal_set_activator)) ::UnityW<::UnityEngine::GameObject>  activator;

/// @brief Field audioCLipIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioCLipIndex, put=__cordl_internal_set_audioCLipIndex)) int32_t  audioCLipIndex;

/// @brief Field coolDown, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDown, put=__cordl_internal_set_coolDown)) float_t  coolDown;

/// @brief Field pressTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressTime, put=__cordl_internal_set_pressTime)) float_t  pressTime;

/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr operator  ::GlobalNamespace::IClickable*() noexcept;

/// @brief Method Click, addr 0x5ac2c10, size 0x30, virtual true, abstract: false, final true
inline void Click(bool  leftHand) ;

/// @brief Method DoPress, addr 0x5ac2b04, size 0x3c, virtual false, abstract: false, final false
inline void DoPress(bool  isLeft) ;

static inline ::GlobalNamespace::SimpleButton* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5ac2820, size 0x2e4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerExit, addr 0x5ac2b40, size 0xcc, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  collider) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_Press() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_Press() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_Release() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_Release() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activator() ;

constexpr int32_t const& __cordl_internal_get_audioCLipIndex() const;

constexpr int32_t& __cordl_internal_get_audioCLipIndex() ;

constexpr float_t const& __cordl_internal_get_coolDown() const;

constexpr float_t& __cordl_internal_get_coolDown() ;

constexpr float_t const& __cordl_internal_get_pressTime() const;

constexpr float_t& __cordl_internal_get_pressTime() ;

constexpr void __cordl_internal_set_Press(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_Release(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_activator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_audioCLipIndex(int32_t  value) ;

constexpr void __cordl_internal_set_coolDown(float_t  value) ;

constexpr void __cordl_internal_set_pressTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5ac2c40, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method handlePress, addr 0x5ac2c0c, size 0x4, virtual true, abstract: false, final false
inline void handlePress(bool  isLeft) ;

/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* i___GlobalNamespace__IClickable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleButton(SimpleButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleButton(SimpleButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3353};

/// @brief Field activator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___activator;

/// @brief Field pressTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___pressTime;

/// [SerializeField]
/// @brief Field coolDown, offset: 0x2c, size: 0x4, def value: None
 float_t  ___coolDown;

/// [SerializeField]
/// @brief Field audioCLipIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___audioCLipIndex;

/// [SerializeField]
/// @brief Field Press, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___Press;

/// [SerializeField]
/// @brief Field Release, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___Release;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleButton, ___activator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButton, ___pressTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButton, ___coolDown) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButton, ___audioCLipIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButton, ___Press) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleButton, ___Release) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleButton) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
