#pragma once
// IWYU pragma private; include "GlobalNamespace/UIMatchRotation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UIMatchRotation_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIMatchRotation)
namespace GlobalNamespace {
struct UIMatchRotation_State;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class UIMatchRotation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UIMatchRotation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UIMatchRotation*, "", "UIMatchRotation");
// Dependencies UIMatchRotation::State, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UIMatchRotation
class CORDL_TYPE UIMatchRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::UIMatchRotation_State;

/// @brief Field lerpSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpSpeed, put=__cordl_internal_set_lerpSpeed)) float_t  lerpSpeed;

/// @brief Field referenceTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_referenceTransform, put=__cordl_internal_set_referenceTransform)) ::UnityW<::UnityEngine::Transform>  referenceTransform;

/// @brief Field state, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::UIMatchRotation_State  state;

/// @brief Field threshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_threshold, put=__cordl_internal_set_threshold)) float_t  threshold;

static inline ::GlobalNamespace::UIMatchRotation* New_ctor() ;

/// @brief Method Start, addr 0x5b1ae5c, size 0x78, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b1af94, size 0x18c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_lerpSpeed() const;

constexpr float_t& __cordl_internal_get_lerpSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_referenceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_referenceTransform() ;

constexpr ::GlobalNamespace::UIMatchRotation_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::UIMatchRotation_State& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_threshold() const;

constexpr float_t& __cordl_internal_get_threshold() ;

constexpr void __cordl_internal_set_lerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::UIMatchRotation_State  value) ;

constexpr void __cordl_internal_set_threshold(float_t  value) ;

/// @brief Method .ctor, addr 0x5b1b120, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method x0z, addr 0x5b1aed4, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 x0z(::UnityEngine::Vector3  vector) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIMatchRotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIMatchRotation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIMatchRotation(UIMatchRotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIMatchRotation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIMatchRotation(UIMatchRotation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3574};

/// [SerializeField]
/// @brief Field referenceTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___referenceTransform;

/// [SerializeField]
/// @brief Field threshold, offset: 0x28, size: 0x4, def value: None
 float_t  ___threshold;

/// [SerializeField]
/// @brief Field lerpSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___lerpSpeed;

/// @brief Field state, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::UIMatchRotation_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIMatchRotation, ___referenceTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIMatchRotation, ___threshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIMatchRotation, ___lerpSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIMatchRotation, ___state) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UIMatchRotation) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
