#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPressableDelayButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaPressableDelayButton)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPressableDelayButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPressableDelayButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPressableDelayButton*, "", "GorillaPressableDelayButton");
// Dependencies GorillaPressableButton, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPressableDelayButton
class CORDL_TYPE GorillaPressableDelayButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field delayTime, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayTime, put=__cordl_internal_set_delayTime)) float_t  delayTime;

/// @brief Field fillBar, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fillBar, put=__cordl_internal_set_fillBar)) ::UnityW<::UnityEngine::Transform>  fillBar;

/// @brief Field fillBarScale, offset 0xe4, size 0xc 
 __declspec(property(get=__cordl_internal_get_fillBarScale, put=__cordl_internal_set_fillBarScale)) ::UnityEngine::Vector3  fillBarScale;

/// @brief Field fillbarStartingScale, offset 0xd8, size 0xc 
 __declspec(property(get=__cordl_internal_get_fillbarStartingScale, put=__cordl_internal_set_fillbarStartingScale)) ::UnityEngine::Vector3  fillbarStartingScale;

/// @brief Field onPressAbort, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressAbort, put=__cordl_internal_set_onPressAbort)) ::System::Action*  onPressAbort;

/// @brief Field onPressBegin, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressBegin, put=__cordl_internal_set_onPressBegin)) ::System::Action*  onPressBegin;

/// @brief Field pressStartTime, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressStartTime, put=__cordl_internal_set_pressStartTime)) float_t  pressStartTime;

/// @brief Field progress, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field touching, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_touching, put=__cordl_internal_set_touching)) ::UnityW<::UnityEngine::Collider>  touching;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x57ed7cc, size 0x98, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaPressableDelayButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x57edb08, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57edafc, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x57ed8fc, size 0x148, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerExit, addr 0x57eda44, size 0xb8, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method SetFillBar, addr 0x57edc0c, size 0xbc, virtual false, abstract: false, final false
inline void SetFillBar(::UnityEngine::Transform*  newFillBar) ;

/// @brief Method SliceUpdate, addr 0x57edb14, size 0xf8, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateFillBar, addr 0x57ed864, size 0x98, virtual false, abstract: false, final false
inline void UpdateFillBar() ;

constexpr float_t const& __cordl_internal_get_delayTime() const;

constexpr float_t& __cordl_internal_get_delayTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_fillBar() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_fillBar() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_fillBarScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_fillBarScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_fillbarStartingScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_fillbarStartingScale() ;

constexpr ::System::Action* const& __cordl_internal_get_onPressAbort() const;

constexpr ::System::Action*& __cordl_internal_get_onPressAbort() ;

constexpr ::System::Action* const& __cordl_internal_get_onPressBegin() const;

constexpr ::System::Action*& __cordl_internal_get_onPressBegin() ;

constexpr float_t const& __cordl_internal_get_pressStartTime() const;

constexpr float_t& __cordl_internal_get_pressStartTime() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_touching() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_touching() ;

constexpr void __cordl_internal_set_delayTime(float_t  value) ;

constexpr void __cordl_internal_set_fillBar(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_fillBarScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_fillbarStartingScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_onPressAbort(::System::Action*  value) ;

constexpr void __cordl_internal_set_onPressBegin(::System::Action*  value) ;

constexpr void __cordl_internal_set_pressStartTime(float_t  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_touching(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x57edcc8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onPressAbort, addr 0x57ed694, size 0x9c, virtual false, abstract: false, final false
inline void add_onPressAbort(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onPressBegin, addr 0x57ed55c, size 0x9c, virtual false, abstract: false, final false
inline void add_onPressBegin(::System::Action*  value) ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_onPressAbort, addr 0x57ed730, size 0x9c, virtual false, abstract: false, final false
inline void remove_onPressAbort(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onPressBegin, addr 0x57ed5f8, size 0x9c, virtual false, abstract: false, final false
inline void remove_onPressBegin(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPressableDelayButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPressableDelayButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPressableDelayButton(GorillaPressableDelayButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPressableDelayButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPressableDelayButton(GorillaPressableDelayButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{180};

/// @brief Field touching, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___touching;

/// @brief Field pressStartTime, offset: 0xc0, size: 0x4, def value: None
 float_t  ___pressStartTime;

/// @brief Field progress, offset: 0xc4, size: 0x4, def value: None
 float_t  ___progress;

/// [SerializeField]
/// [Range(0.01, 5)]
/// @brief Field delayTime, offset: 0xc8, size: 0x4, def value: None
 float_t  ___delayTime;

/// [SerializeField]
/// @brief Field fillBar, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___fillBar;

/// @brief Field fillbarStartingScale, offset: 0xd8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___fillbarStartingScale;

/// @brief Field fillBarScale, offset: 0xe4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___fillBarScale;

/// [CompilerGenerated]
/// @brief Field onPressBegin, offset: 0xf0, size: 0x8, def value: None
 ::System::Action*  ___onPressBegin;

/// [CompilerGenerated]
/// @brief Field onPressAbort, offset: 0xf8, size: 0x8, def value: None
 ::System::Action*  ___onPressAbort;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPressableDelayButton, ___touching) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableDelayButton, ___pressStartTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableDelayButton, ___progress) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableDelayButton, ___delayTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableDelayButton, ___fillBar) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableDelayButton, ___fillbarStartingScale) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableDelayButton, ___fillBarScale) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableDelayButton, ___onPressBegin) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableDelayButton, ___onPressAbort) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPressableDelayButton) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
