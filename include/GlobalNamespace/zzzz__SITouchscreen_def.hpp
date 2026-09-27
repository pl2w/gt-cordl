#pragma once
// IWYU pragma private; include "GlobalNamespace/SITouchscreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SITouchscreen)
namespace GlobalNamespace {
class GorillaTriggerColliderHandIndicator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SITouchscreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SITouchscreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITouchscreen*, "", "SITouchscreen");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITouchscreen
class CORDL_TYPE SITouchscreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field controllingTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllingTransform, put=__cordl_internal_set_controllingTransform)) ::UnityW<::UnityEngine::Transform>  controllingTransform;

/// @brief Field fingerTouchDict, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_fingerTouchDict, put=__cordl_internal_set_fingerTouchDict)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*  fingerTouchDict;

/// @brief Field lastPosition, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field lastTouched, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTouched, put=__cordl_internal_set_lastTouched)) float_t  lastTouched;

/// @brief Field notFingerTouchDict, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_notFingerTouchDict, put=__cordl_internal_set_notFingerTouchDict)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  notFingerTouchDict;

/// @brief Method GetIndicator, addr 0x5af627c, size 0x174, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetIndicator(::UnityEngine::Collider*  other) ;

static inline ::GlobalNamespace::SITouchscreen* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5af61d8, size 0x4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5af63f0, size 0xd0, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x5af61dc, size 0xa0, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_controllingTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_controllingTransform() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>* const& __cordl_internal_get_fingerTouchDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*& __cordl_internal_get_fingerTouchDict() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr float_t const& __cordl_internal_get_lastTouched() const;

constexpr float_t& __cordl_internal_get_lastTouched() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_notFingerTouchDict() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_notFingerTouchDict() ;

constexpr void __cordl_internal_set_controllingTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_fingerTouchDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastTouched(float_t  value) ;

constexpr void __cordl_internal_set_notFingerTouchDict(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value) ;

/// @brief Method .ctor, addr 0x5af64c0, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITouchscreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITouchscreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITouchscreen(SITouchscreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITouchscreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITouchscreen(SITouchscreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{372};

/// @brief Field controllingTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___controllingTransform;

/// @brief Field lastTouched, offset: 0x28, size: 0x4, def value: None
 float_t  ___lastTouched;

/// @brief Field lastPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field fingerTouchDict, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*  ___fingerTouchDict;

/// @brief Field notFingerTouchDict, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  ___notFingerTouchDict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITouchscreen, ___controllingTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreen, ___lastTouched) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreen, ___lastPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreen, ___fingerTouchDict) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreen, ___notFingerTouchDict) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITouchscreen) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
