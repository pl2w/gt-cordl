#pragma once
// IWYU pragma private; include "GlobalNamespace/RubberDuckEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RubberDuckEvents)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class PhotonEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class RubberDuckEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RubberDuckEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RubberDuckEvents*, "", "RubberDuckEvents");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RubberDuckEvents
class CORDL_TYPE RubberDuckEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Activate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Activate, put=__cordl_internal_set_Activate)) ::GlobalNamespace::PhotonEvent*  Activate;

/// @brief Field Deactivate, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Deactivate, put=__cordl_internal_set_Deactivate)) ::GlobalNamespace::PhotonEvent*  Deactivate;

/// @brief Field PlayerId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerId, put=__cordl_internal_set_PlayerId)) int32_t  PlayerId;

/// @brief Field PlayerIdString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerIdString, put=__cordl_internal_set_PlayerIdString)) ::StringW  PlayerIdString;

/// @brief Method Dispose, addr 0x5793ea0, size 0x58, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Init, addr 0x5793a58, size 0x2a0, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::NetPlayer*  player) ;

static inline ::GlobalNamespace::RubberDuckEvents* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5794d84, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5794d50, size 0x34, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5794d1c, size 0x34, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::PhotonEvent* const& __cordl_internal_get_Activate() const;

constexpr ::GlobalNamespace::PhotonEvent*& __cordl_internal_get_Activate() ;

constexpr ::GlobalNamespace::PhotonEvent* const& __cordl_internal_get_Deactivate() const;

constexpr ::GlobalNamespace::PhotonEvent*& __cordl_internal_get_Deactivate() ;

constexpr int32_t const& __cordl_internal_get_PlayerId() const;

constexpr int32_t& __cordl_internal_get_PlayerId() ;

constexpr ::StringW const& __cordl_internal_get_PlayerIdString() const;

constexpr ::StringW& __cordl_internal_get_PlayerIdString() ;

constexpr void __cordl_internal_set_Activate(::GlobalNamespace::PhotonEvent*  value) ;

constexpr void __cordl_internal_set_Deactivate(::GlobalNamespace::PhotonEvent*  value) ;

constexpr void __cordl_internal_set_PlayerId(int32_t  value) ;

constexpr void __cordl_internal_set_PlayerIdString(::StringW  value) ;

/// @brief Method .ctor, addr 0x5794d88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RubberDuckEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RubberDuckEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RubberDuckEvents(RubberDuckEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RubberDuckEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RubberDuckEvents(RubberDuckEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1453};

/// @brief Field PlayerId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___PlayerId;

/// @brief Field PlayerIdString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PlayerIdString;

/// @brief Field Activate, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::PhotonEvent*  ___Activate;

/// @brief Field Deactivate, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::PhotonEvent*  ___Deactivate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RubberDuckEvents, ___PlayerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuckEvents, ___PlayerIdString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuckEvents, ___Activate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuckEvents, ___Deactivate) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RubberDuckEvents) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
