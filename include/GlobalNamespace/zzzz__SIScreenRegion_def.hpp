#pragma once
// IWYU pragma private; include "GlobalNamespace/SIScreenRegion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SIScreenRegion)
namespace GlobalNamespace {
class GorillaTriggerColliderHandIndicator;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class SIScreenRegion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIScreenRegion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIScreenRegion*, "", "SIScreenRegion");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIScreenRegion
class CORDL_TYPE SIScreenRegion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HasPressedButton)) bool  HasPressedButton;

/// @brief Field _hasPressedButton, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasPressedButton, put=__cordl_internal_set__hasPressedButton)) bool  _hasPressedButton;

/// @brief Field handIndicators, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handIndicators, put=__cordl_internal_set_handIndicators)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*  handIndicators;

/// @brief Method ClearPressedIndicator, addr 0x5aed3fc, size 0x8, virtual false, abstract: false, final false
inline void ClearPressedIndicator() ;

static inline ::GlobalNamespace::SIScreenRegion* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5aed2cc, size 0x8c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5aed358, size 0xa4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method RegisterButtonPress, addr 0x5aed404, size 0x58, virtual false, abstract: false, final false
inline void RegisterButtonPress() ;

constexpr bool const& __cordl_internal_get__hasPressedButton() const;

constexpr bool& __cordl_internal_get__hasPressedButton() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>* const& __cordl_internal_get_handIndicators() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*& __cordl_internal_get_handIndicators() ;

constexpr void __cordl_internal_set__hasPressedButton(bool  value) ;

constexpr void __cordl_internal_set_handIndicators(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*  value) ;

/// @brief Method .ctor, addr 0x5aed45c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasPressedButton, addr 0x5aed2c4, size 0x8, virtual false, abstract: false, final false
inline bool get_HasPressedButton() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIScreenRegion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIScreenRegion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIScreenRegion(SIScreenRegion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIScreenRegion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIScreenRegion(SIScreenRegion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{356};

/// @brief Field handIndicators, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*  ___handIndicators;

/// @brief Field _hasPressedButton, offset: 0x28, size: 0x1, def value: None
 bool  ____hasPressedButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIScreenRegion, ___handIndicators) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIScreenRegion, ____hasPressedButton) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIScreenRegion) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
