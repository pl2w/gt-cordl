#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableGeneric.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TappableGeneric)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class TappableGeneric;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TappableGeneric*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableGeneric*, "", "TappableGeneric");
// Dependencies Tappable
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableGeneric
class CORDL_TYPE TappableGeneric : public ::GlobalNamespace::Tappable {
public:
// Declarations
/// @brief Field OnTapped, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTapped, put=__cordl_internal_set_OnTapped)) ::UnityEngine::Events::UnityEvent*  OnTapped;

static inline ::GlobalNamespace::TappableGeneric* New_ctor() ;

/// @brief Method OnTapLocal, addr 0x595fb5c, size 0x14, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTapped() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTapped() ;

constexpr void __cordl_internal_set_OnTapped(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x595fb70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TappableGeneric() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableGeneric", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableGeneric(TappableGeneric && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableGeneric", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableGeneric(TappableGeneric const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2355};

/// [Tooltip("Invoked when this object is tapped. Fires on every client by default; if localOnly is true, fires only on the tapping player\'s client.")]
/// [SerializeField]
/// @brief Field OnTapped, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTapped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableGeneric, ___OnTapped) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableGeneric) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
