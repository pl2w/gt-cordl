#pragma once
// IWYU pragma private; include "GlobalNamespace/SwipeGesture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SwipeGesture_Axis_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SwipeGesture)
namespace GlobalNamespace {
struct SwipeGesture_Axis;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SwipeGesture;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SwipeGesture*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SwipeGesture*, "", "SwipeGesture");
// Dependencies SwipeGesture::Axis, UnityEngine.EventSystems.UIBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: SwipeGesture
class CORDL_TYPE SwipeGesture : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using Axis = ::GlobalNamespace::SwipeGesture_Axis;

/// @brief Field gestureMaxDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gestureMaxDuration, put=__cordl_internal_set_gestureMaxDuration)) float_t  gestureMaxDuration;

/// @brief Field gestureMinDistanceNormalized, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_gestureMinDistanceNormalized, put=__cordl_internal_set_gestureMinDistanceNormalized)) float_t  gestureMinDistanceNormalized;

/// @brief Field invertScroll, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertScroll, put=__cordl_internal_set_invertScroll)) bool  invertScroll;

/// @brief Field startLocalPosition, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_startLocalPosition, put=__cordl_internal_set_startLocalPosition)) ::UnityEngine::Vector2  startLocalPosition;

/// @brief Field startTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Field swipeAxis, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_swipeAxis, put=__cordl_internal_set_swipeAxis)) ::GlobalNamespace::SwipeGesture_Axis  swipeAxis;

/// @brief Field swipeExecuted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_swipeExecuted, put=__cordl_internal_set_swipeExecuted)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  swipeExecuted;

/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

static inline ::GlobalNamespace::SwipeGesture* New_ctor() ;

/// @brief Method OnBeginDrag, addr 0xa426764, size 0x100, virtual true, abstract: false, final true
inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnEndDrag, addr 0xa426864, size 0x2e0, virtual true, abstract: false, final true
inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

constexpr float_t const& __cordl_internal_get_gestureMaxDuration() const;

constexpr float_t& __cordl_internal_get_gestureMaxDuration() ;

constexpr float_t const& __cordl_internal_get_gestureMinDistanceNormalized() const;

constexpr float_t& __cordl_internal_get_gestureMinDistanceNormalized() ;

constexpr bool const& __cordl_internal_get_invertScroll() const;

constexpr bool& __cordl_internal_get_invertScroll() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_startLocalPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_startLocalPosition() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr ::GlobalNamespace::SwipeGesture_Axis const& __cordl_internal_get_swipeAxis() const;

constexpr ::GlobalNamespace::SwipeGesture_Axis& __cordl_internal_get_swipeAxis() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_swipeExecuted() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_swipeExecuted() ;

constexpr void __cordl_internal_set_gestureMaxDuration(float_t  value) ;

constexpr void __cordl_internal_set_gestureMinDistanceNormalized(float_t  value) ;

constexpr void __cordl_internal_set_invertScroll(bool  value) ;

constexpr void __cordl_internal_set_startLocalPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

constexpr void __cordl_internal_set_swipeAxis(::GlobalNamespace::SwipeGesture_Axis  value) ;

constexpr void __cordl_internal_set_swipeExecuted(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xa426b44, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* i___UnityEngine__EventSystems__IEndDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SwipeGesture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SwipeGesture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SwipeGesture(SwipeGesture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SwipeGesture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SwipeGesture(SwipeGesture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28237};

/// @brief Field gestureMaxDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___gestureMaxDuration;

/// @brief Field gestureMinDistanceNormalized, offset: 0x24, size: 0x4, def value: None
 float_t  ___gestureMinDistanceNormalized;

/// [Space(10)]
/// @brief Field invertScroll, offset: 0x28, size: 0x1, def value: None
 bool  ___invertScroll;

/// @brief Field swipeAxis, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::SwipeGesture_Axis  ___swipeAxis;

/// @brief Field startTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___startTime;

/// @brief Field startLocalPosition, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___startLocalPosition;

/// [Space(10)]
/// [SerializeField]
/// @brief Field swipeExecuted, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___swipeExecuted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SwipeGesture, ___gestureMaxDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SwipeGesture, ___gestureMinDistanceNormalized) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SwipeGesture, ___invertScroll) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SwipeGesture, ___swipeAxis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SwipeGesture, ___startTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SwipeGesture, ___startLocalPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SwipeGesture, ___swipeExecuted) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SwipeGesture) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
