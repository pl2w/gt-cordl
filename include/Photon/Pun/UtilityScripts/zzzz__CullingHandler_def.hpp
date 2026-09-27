#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CullingHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingHandler)
namespace Photon::Pun::UtilityScripts {
class CullArea;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class CullingHandler;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::CullingHandler*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::CullingHandler*, "Photon.Pun.UtilityScripts", "CullingHandler");
// [RequireComponent(typeof(Photon.Pun.PhotonView))]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.CullingHandler
class CORDL_TYPE CullingHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activeCells, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCells, put=__cordl_internal_set_activeCells)) ::System::Collections::Generic::List_1<uint8_t>*  activeCells;

/// @brief Field cullArea, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cullArea, put=__cordl_internal_set_cullArea)) ::UnityW<::Photon::Pun::UtilityScripts::CullArea>  cullArea;

/// @brief Field currentPosition, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentPosition, put=__cordl_internal_set_currentPosition)) ::UnityEngine::Vector3  currentPosition;

/// @brief Field lastPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field orderIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_orderIndex, put=__cordl_internal_set_orderIndex)) int32_t  orderIndex;

/// @brief Field pView, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_pView, put=__cordl_internal_set_pView)) ::UnityW<::Photon::Pun::PhotonView>  pView;

/// @brief Field previousActiveCells, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousActiveCells, put=__cordl_internal_set_previousActiveCells)) ::System::Collections::Generic::List_1<uint8_t>*  previousActiveCells;

/// @brief Field timeBetweenUpdatesMin, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeBetweenUpdatesMin, put=__cordl_internal_set_timeBetweenUpdatesMin)) float_t  timeBetweenUpdatesMin;

/// @brief Field timeSinceUpdate, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSinceUpdate, put=__cordl_internal_set_timeSinceUpdate)) float_t  timeSinceUpdate;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method HaveActiveCellsChanged, addr 0xa7301d0, size 0x1dc, virtual false, abstract: false, final false
inline bool HaveActiveCellsChanged() ;

static inline ::Photon::Pun::UtilityScripts::CullingHandler* New_ctor() ;

/// @brief Method OnEnable, addr 0xa72fe00, size 0x1c4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGUI, addr 0xa730654, size 0x3dc, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnPhotonSerializeView, addr 0xa730a30, size 0x154, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Start, addr 0xa72ffc4, size 0x140, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa730104, size 0xcc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateInterestGroups, addr 0xa7303ac, size 0x2a8, virtual false, abstract: false, final false
inline void UpdateInterestGroups() ;

constexpr ::System::Collections::Generic::List_1<uint8_t>* const& __cordl_internal_get_activeCells() const;

constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get_activeCells() ;

constexpr ::UnityW<::Photon::Pun::UtilityScripts::CullArea> const& __cordl_internal_get_cullArea() const;

constexpr ::UnityW<::Photon::Pun::UtilityScripts::CullArea>& __cordl_internal_get_cullArea() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr int32_t const& __cordl_internal_get_orderIndex() const;

constexpr int32_t& __cordl_internal_get_orderIndex() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_pView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_pView() ;

constexpr ::System::Collections::Generic::List_1<uint8_t>* const& __cordl_internal_get_previousActiveCells() const;

constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get_previousActiveCells() ;

constexpr float_t const& __cordl_internal_get_timeBetweenUpdatesMin() const;

constexpr float_t& __cordl_internal_get_timeBetweenUpdatesMin() ;

constexpr float_t const& __cordl_internal_get_timeSinceUpdate() const;

constexpr float_t& __cordl_internal_get_timeSinceUpdate() ;

constexpr void __cordl_internal_set_activeCells(::System::Collections::Generic::List_1<uint8_t>*  value) ;

constexpr void __cordl_internal_set_cullArea(::UnityW<::Photon::Pun::UtilityScripts::CullArea>  value) ;

constexpr void __cordl_internal_set_currentPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_orderIndex(int32_t  value) ;

constexpr void __cordl_internal_set_pView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_previousActiveCells(::System::Collections::Generic::List_1<uint8_t>*  value) ;

constexpr void __cordl_internal_set_timeBetweenUpdatesMin(float_t  value) ;

constexpr void __cordl_internal_set_timeSinceUpdate(float_t  value) ;

/// @brief Method .ctor, addr 0xa730b84, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingHandler(CullingHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingHandler(CullingHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31205};

/// @brief Field orderIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___orderIndex;

/// @brief Field cullArea, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::UtilityScripts::CullArea>  ___cullArea;

/// @brief Field previousActiveCells, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint8_t>*  ___previousActiveCells;

/// @brief Field activeCells, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint8_t>*  ___activeCells;

/// @brief Field pView, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___pView;

/// @brief Field lastPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field currentPosition, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentPosition;

/// @brief Field timeSinceUpdate, offset: 0x60, size: 0x4, def value: None
 float_t  ___timeSinceUpdate;

/// @brief Field timeBetweenUpdatesMin, offset: 0x64, size: 0x4, def value: None
 float_t  ___timeBetweenUpdatesMin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::CullingHandler, ___orderIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullingHandler, ___cullArea) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullingHandler, ___previousActiveCells) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullingHandler, ___activeCells) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullingHandler, ___pView) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullingHandler, ___lastPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullingHandler, ___currentPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullingHandler, ___timeSinceUpdate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullingHandler, ___timeBetweenUpdatesMin) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::CullingHandler) == 0x68, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
