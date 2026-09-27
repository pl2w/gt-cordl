#pragma once
// IWYU pragma private; include "GlobalNamespace/UseableObjectEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UseableObjectEvents)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class PhotonEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class UseableObjectEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UseableObjectEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UseableObjectEvents*, "", "UseableObjectEvents");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UseableObjectEvents
class CORDL_TYPE UseableObjectEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Activate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Activate, put=__cordl_internal_set_Activate)) ::GlobalNamespace::PhotonEvent*  Activate;

/// @brief Field Deactivate, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Deactivate, put=__cordl_internal_set_Deactivate)) ::GlobalNamespace::PhotonEvent*  Deactivate;

/// @brief Field PlayerId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerId, put=__cordl_internal_set_PlayerId)) int32_t  PlayerId;

/// @brief Field PlayerIdString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerIdString, put=__cordl_internal_set_PlayerIdString)) ::StringW  PlayerIdString;

/// @brief Method DisposeEvents, addr 0x5795c74, size 0x58, virtual false, abstract: false, final false
inline void DisposeEvents() ;

/// @brief Method Init, addr 0x579570c, size 0x234, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::NetPlayer*  player) ;

static inline ::GlobalNamespace::UseableObjectEvents* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5795d34, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5795d00, size 0x34, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5795ccc, size 0x34, virtual false, abstract: false, final false
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

/// @brief Method .ctor, addr 0x5795d38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UseableObjectEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UseableObjectEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UseableObjectEvents(UseableObjectEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UseableObjectEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UseableObjectEvents(UseableObjectEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1458};

/// @brief Field PlayerIdString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayerIdString;

/// @brief Field PlayerId, offset: 0x28, size: 0x4, def value: None
 int32_t  ___PlayerId;

/// @brief Field Activate, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::PhotonEvent*  ___Activate;

/// @brief Field Deactivate, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::PhotonEvent*  ___Deactivate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UseableObjectEvents, ___PlayerIdString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObjectEvents, ___PlayerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObjectEvents, ___Activate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UseableObjectEvents, ___Deactivate) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UseableObjectEvents) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
