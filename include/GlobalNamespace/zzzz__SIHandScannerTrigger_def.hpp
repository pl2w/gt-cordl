#pragma once
// IWYU pragma private; include "GlobalNamespace/SIHandScannerTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SIHandScannerTrigger)
namespace GlobalNamespace {
class IClickable;
}
namespace GlobalNamespace {
class SIHandScanner;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class SIHandScannerTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIHandScannerTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIHandScannerTrigger*, "", "SIHandScannerTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIHandScannerTrigger
class CORDL_TYPE SIHandScannerTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field onHandScanned, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHandScanned, put=__cordl_internal_set_onHandScanned)) ::UnityEngine::Events::UnityEvent*  onHandScanned;

/// @brief Field parentScanner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentScanner, put=__cordl_internal_set_parentScanner)) ::UnityW<::GlobalNamespace::SIHandScanner>  parentScanner;

/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr operator  ::GlobalNamespace::IClickable*() noexcept;

/// @brief Method Awake, addr 0x59debbc, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Click, addr 0x59ded3c, size 0xb8, virtual true, abstract: false, final true
inline void Click(bool  leftHand) ;

static inline ::GlobalNamespace::SIHandScannerTrigger* New_ctor() ;

/// @brief Method OnPlayerScanned, addr 0x59ded10, size 0x2c, virtual false, abstract: false, final false
inline void OnPlayerScanned(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method OnTriggerEnter, addr 0x59dec60, size 0xb0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onHandScanned() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onHandScanned() ;

constexpr ::UnityW<::GlobalNamespace::SIHandScanner> const& __cordl_internal_get_parentScanner() const;

constexpr ::UnityW<::GlobalNamespace::SIHandScanner>& __cordl_internal_get_parentScanner() ;

constexpr void __cordl_internal_set_onHandScanned(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_parentScanner(::UnityW<::GlobalNamespace::SIHandScanner>  value) ;

/// @brief Method .ctor, addr 0x59dedf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* i___GlobalNamespace__IClickable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIHandScannerTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIHandScannerTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIHandScannerTrigger(SIHandScannerTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIHandScannerTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIHandScannerTrigger(SIHandScannerTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{324};

/// @brief Field parentScanner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIHandScanner>  ___parentScanner;

/// @brief Field onHandScanned, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onHandScanned;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIHandScannerTrigger, ___parentScanner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIHandScannerTrigger, ___onHandScanned) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIHandScannerTrigger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
