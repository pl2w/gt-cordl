#pragma once
// IWYU pragma private; include "GlobalNamespace/SIHandScanner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIHandScanner)
namespace GlobalNamespace {
class SIPlayer;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SIHandScanner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIHandScanner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIHandScanner*, "", "SIHandScanner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIHandScanner
class CORDL_TYPE SIHandScanner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field onHandScanned, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHandScanned, put=__cordl_internal_set_onHandScanned)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onHandScanned;

/// @brief Method HandScanned, addr 0x59deaf0, size 0xc4, virtual false, abstract: false, final false
inline void HandScanned(::GlobalNamespace::SIPlayer*  scannedPlayer) ;

static inline ::GlobalNamespace::SIHandScanner* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onHandScanned() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onHandScanned() ;

constexpr void __cordl_internal_set_onHandScanned(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x59debb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIHandScanner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIHandScanner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIHandScanner(SIHandScanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIHandScanner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIHandScanner(SIHandScanner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{323};

/// @brief Field onHandScanned, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onHandScanned;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIHandScanner, ___onHandScanned) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIHandScanner) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
