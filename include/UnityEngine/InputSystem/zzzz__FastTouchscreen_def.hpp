#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastTouchscreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FastTouchscreen)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastTouchscreen;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::FastTouchscreen*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::FastTouchscreen*, "UnityEngine.InputSystem", "FastTouchscreen");
// Dependencies UnityEngine.InputSystem.Touchscreen
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.FastTouchscreen
class CORDL_TYPE FastTouchscreen : public ::UnityEngine::InputSystem::Touchscreen {
public:
// Declarations
/// @brief Method Initialize_ctrlTouchscreendelta, addr 0xaf77fa8, size 0x1c8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreendelta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltadown, addr 0xaf7d140, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaleft, addr 0xaf7d350, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaright, addr 0xaf7d560, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaup, addr 0xaf7cf38, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltax, addr 0xaf7d768, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltay, addr 0xaf7d944, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendisplayIndex, addr 0xaf78728, size 0x1a4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreendisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenposition, addr 0xaf77dc0, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenposition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositionx, addr 0xaf7cb20, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositiony, addr 0xaf7cd2c, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpress, addr 0xaf78528, size 0x200, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenpress(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpressure, addr 0xaf78170, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpressure(::UnityEngine::InputSystem::Utilities::InternedString  kAnalogLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouch, addr 0xaf77bfc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreenprimaryTouch(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdelta, addr 0xaf79de4, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreenprimaryTouchdelta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltadown, addr 0xaf7b9d0, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaleft, addr 0xaf7bbe0, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaright, addr 0xaf7bdf0, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaup, addr 0xaf7b7c8, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltax, addr 0xaf7bff8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltay, addr 0xaf7c1d4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdisplayIndex, addr 0xaf7a980, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchdisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchindirectTouch, addr 0xaf7ab5c, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchindirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchphase, addr 0xaf7a390, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreenprimaryTouchphase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchposition, addr 0xaf79bcc, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchposition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositionx, addr 0xaf7b3b0, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositiony, addr 0xaf7b5bc, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpress, addr 0xaf7a580, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenprimaryTouchpress(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpressure, addr 0xaf79fcc, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradius, addr 0xaf7a1a8, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchradius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusx, addr 0xaf7c3b0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusy, addr 0xaf7c58c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPosition, addr 0xaf7b1b4, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchstartPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositionx, addr 0xaf7c768, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositiony, addr 0xaf7c944, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartTime, addr 0xaf7afc4, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreenprimaryTouchstartTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtap, addr 0xaf7ad94, size 0x230, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchtap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtapCount, addr 0xaf7a7a4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtouchId, addr 0xaf799ac, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtouchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenradius, addr 0xaf78360, size 0x1c8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenradius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusx, addr 0xaf7db20, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusy, addr 0xaf7dcfc, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0, addr 0xaf788cc, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch0(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0delta, addr 0xaf7e310, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch0delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltadown, addr 0xaf7fef0, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaleft, addr 0xaf80100, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaright, addr 0xaf80310, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaup, addr 0xaf7fce8, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltax, addr 0xaf80518, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltay, addr 0xaf806f4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0displayIndex, addr 0xaf7eeac, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0indirectTouch, addr 0xaf7f088, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0phase, addr 0xaf7e8bc, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch0phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0position, addr 0xaf7e0f8, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positionx, addr 0xaf7f8d0, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positiony, addr 0xaf7fadc, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0press, addr 0xaf7eaac, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch0press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0pressure, addr 0xaf7e4f8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radius, addr 0xaf7e6d4, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusx, addr 0xaf808d0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusy, addr 0xaf80aac, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPosition, addr 0xaf7f6d4, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositionx, addr 0xaf80c88, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositiony, addr 0xaf80e64, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startTime, addr 0xaf7f4e4, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch0startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tap, addr 0xaf7f2c0, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tapCount, addr 0xaf7ecd0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0touchId, addr 0xaf7ded8, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1, addr 0xaf78a7c, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch1(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1delta, addr 0xaf81478, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch1delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltadown, addr 0xaf83058, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaleft, addr 0xaf83268, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaright, addr 0xaf83478, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaup, addr 0xaf82e50, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltax, addr 0xaf83680, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltay, addr 0xaf8385c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1displayIndex, addr 0xaf82014, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1indirectTouch, addr 0xaf821f0, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1phase, addr 0xaf81a24, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch1phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1position, addr 0xaf81260, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positionx, addr 0xaf82a38, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positiony, addr 0xaf82c44, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1press, addr 0xaf81c14, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch1press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1pressure, addr 0xaf81660, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radius, addr 0xaf8183c, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusx, addr 0xaf83a38, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusy, addr 0xaf83c14, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPosition, addr 0xaf8283c, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositionx, addr 0xaf83df0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositiony, addr 0xaf83fcc, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startTime, addr 0xaf8264c, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch1startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tap, addr 0xaf82428, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tapCount, addr 0xaf81e38, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1touchId, addr 0xaf81040, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2, addr 0xaf78c2c, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch2(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2delta, addr 0xaf845e0, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch2delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltadown, addr 0xaf861c0, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaleft, addr 0xaf863d0, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaright, addr 0xaf865e0, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaup, addr 0xaf85fb8, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltax, addr 0xaf867e8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltay, addr 0xaf869c4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2displayIndex, addr 0xaf8517c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2indirectTouch, addr 0xaf85358, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2phase, addr 0xaf84b8c, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch2phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2position, addr 0xaf843c8, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positionx, addr 0xaf85ba0, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positiony, addr 0xaf85dac, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2press, addr 0xaf84d7c, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch2press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2pressure, addr 0xaf847c8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radius, addr 0xaf849a4, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusx, addr 0xaf86ba0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusy, addr 0xaf86d7c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPosition, addr 0xaf859a4, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositionx, addr 0xaf86f58, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositiony, addr 0xaf87134, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startTime, addr 0xaf857b4, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch2startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tap, addr 0xaf85590, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tapCount, addr 0xaf84fa0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2touchId, addr 0xaf841a8, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3, addr 0xaf78ddc, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch3(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3delta, addr 0xaf87748, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch3delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltadown, addr 0xaf89328, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaleft, addr 0xaf89538, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaright, addr 0xaf89748, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaup, addr 0xaf89120, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltax, addr 0xaf89950, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltay, addr 0xaf89b2c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3displayIndex, addr 0xaf882e4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3indirectTouch, addr 0xaf884c0, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3phase, addr 0xaf87cf4, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch3phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3position, addr 0xaf87530, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positionx, addr 0xaf88d08, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positiony, addr 0xaf88f14, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3press, addr 0xaf87ee4, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch3press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3pressure, addr 0xaf87930, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radius, addr 0xaf87b0c, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusx, addr 0xaf89d08, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusy, addr 0xaf89ee4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPosition, addr 0xaf88b0c, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositionx, addr 0xaf8a0c0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositiony, addr 0xaf8a29c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startTime, addr 0xaf8891c, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch3startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tap, addr 0xaf886f8, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tapCount, addr 0xaf88108, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3touchId, addr 0xaf87310, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4, addr 0xaf78f8c, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch4(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4delta, addr 0xaf8a8b0, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch4delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltadown, addr 0xaf8c490, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaleft, addr 0xaf8c6a0, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaright, addr 0xaf8c8b0, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaup, addr 0xaf8c288, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltax, addr 0xaf8cab8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltay, addr 0xaf8cc94, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4displayIndex, addr 0xaf8b44c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4indirectTouch, addr 0xaf8b628, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4phase, addr 0xaf8ae5c, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch4phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4position, addr 0xaf8a698, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positionx, addr 0xaf8be70, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positiony, addr 0xaf8c07c, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4press, addr 0xaf8b04c, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch4press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4pressure, addr 0xaf8aa98, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radius, addr 0xaf8ac74, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusx, addr 0xaf8ce70, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusy, addr 0xaf8d04c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPosition, addr 0xaf8bc74, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositionx, addr 0xaf8d228, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositiony, addr 0xaf8d404, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startTime, addr 0xaf8ba84, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch4startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tap, addr 0xaf8b860, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tapCount, addr 0xaf8b270, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4touchId, addr 0xaf8a478, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5, addr 0xaf7913c, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch5(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5delta, addr 0xaf8da18, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch5delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltadown, addr 0xaf8f5f8, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaleft, addr 0xaf8f808, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaright, addr 0xaf8fa18, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaup, addr 0xaf8f3f0, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltax, addr 0xaf8fc20, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltay, addr 0xaf8fdfc, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5displayIndex, addr 0xaf8e5b4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5indirectTouch, addr 0xaf8e790, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5phase, addr 0xaf8dfc4, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch5phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5position, addr 0xaf8d800, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positionx, addr 0xaf8efd8, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positiony, addr 0xaf8f1e4, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5press, addr 0xaf8e1b4, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch5press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5pressure, addr 0xaf8dc00, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radius, addr 0xaf8dddc, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusx, addr 0xaf8ffd8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusy, addr 0xaf901b4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPosition, addr 0xaf8eddc, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositionx, addr 0xaf90390, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositiony, addr 0xaf9056c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startTime, addr 0xaf8ebec, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch5startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tap, addr 0xaf8e9c8, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tapCount, addr 0xaf8e3d8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5touchId, addr 0xaf8d5e0, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6, addr 0xaf792ec, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch6(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6delta, addr 0xaf90b80, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch6delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltadown, addr 0xaf92760, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaleft, addr 0xaf92970, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaright, addr 0xaf92b80, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaup, addr 0xaf92558, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltax, addr 0xaf92d88, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltay, addr 0xaf92f64, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6displayIndex, addr 0xaf9171c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6indirectTouch, addr 0xaf918f8, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6phase, addr 0xaf9112c, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch6phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6position, addr 0xaf90968, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positionx, addr 0xaf92140, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positiony, addr 0xaf9234c, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6press, addr 0xaf9131c, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch6press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6pressure, addr 0xaf90d68, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radius, addr 0xaf90f44, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusx, addr 0xaf93140, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusy, addr 0xaf9331c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPosition, addr 0xaf91f44, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositionx, addr 0xaf934f8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositiony, addr 0xaf936d4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startTime, addr 0xaf91d54, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch6startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tap, addr 0xaf91b30, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tapCount, addr 0xaf91540, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6touchId, addr 0xaf90748, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7, addr 0xaf7949c, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch7(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7delta, addr 0xaf93ce8, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch7delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltadown, addr 0xaf958c8, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaleft, addr 0xaf95ad8, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaright, addr 0xaf95ce8, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaup, addr 0xaf956c0, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltax, addr 0xaf95ef0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltay, addr 0xaf960cc, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7displayIndex, addr 0xaf94884, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7indirectTouch, addr 0xaf94a60, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7phase, addr 0xaf94294, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch7phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7position, addr 0xaf93ad0, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positionx, addr 0xaf952a8, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positiony, addr 0xaf954b4, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7press, addr 0xaf94484, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch7press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7pressure, addr 0xaf93ed0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radius, addr 0xaf940ac, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusx, addr 0xaf962a8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusy, addr 0xaf96484, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPosition, addr 0xaf950ac, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositionx, addr 0xaf96660, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositiony, addr 0xaf9683c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startTime, addr 0xaf94ebc, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch7startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tap, addr 0xaf94c98, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tapCount, addr 0xaf946a8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7touchId, addr 0xaf938b0, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8, addr 0xaf7964c, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch8(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8delta, addr 0xaf96e50, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch8delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltadown, addr 0xaf98a30, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaleft, addr 0xaf98c40, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaright, addr 0xaf98e50, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaup, addr 0xaf98828, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltax, addr 0xaf99058, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltay, addr 0xaf99234, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8displayIndex, addr 0xaf979ec, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8indirectTouch, addr 0xaf97bc8, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8phase, addr 0xaf973fc, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch8phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8position, addr 0xaf96c38, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positionx, addr 0xaf98410, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positiony, addr 0xaf9861c, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8press, addr 0xaf975ec, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch8press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8pressure, addr 0xaf97038, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radius, addr 0xaf97214, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusx, addr 0xaf99410, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusy, addr 0xaf995ec, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPosition, addr 0xaf98214, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositionx, addr 0xaf997c8, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositiony, addr 0xaf999a4, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startTime, addr 0xaf98024, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch8startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tap, addr 0xaf97e00, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tapCount, addr 0xaf97810, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8touchId, addr 0xaf96a18, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9, addr 0xaf797fc, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch9(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9delta, addr 0xaf99fb8, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch9delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltadown, addr 0xaf9bb98, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaleft, addr 0xaf9bda8, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaright, addr 0xaf9bfb8, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaup, addr 0xaf9b990, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltax, addr 0xaf9c1c0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltay, addr 0xaf9c39c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9displayIndex, addr 0xaf9ab54, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9indirectTouch, addr 0xaf9ad30, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9phase, addr 0xaf9a564, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch9phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9position, addr 0xaf99da0, size 0x218, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positionx, addr 0xaf9b578, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positiony, addr 0xaf9b784, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9press, addr 0xaf9a754, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch9press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9pressure, addr 0xaf9a1a0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radius, addr 0xaf9a37c, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusx, addr 0xaf9c578, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusy, addr 0xaf9c754, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPosition, addr 0xaf9b37c, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositionx, addr 0xaf9c930, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositiony, addr 0xaf9cb0c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startTime, addr 0xaf9b18c, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch9startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tap, addr 0xaf9af68, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tapCount, addr 0xaf9a978, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9touchId, addr 0xaf99b80, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

static inline ::UnityEngine::InputSystem::FastTouchscreen* New_ctor() ;

/// @brief Method .ctor, addr 0xaf741c8, size 0x3a34, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastTouchscreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FastTouchscreen(FastTouchscreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastTouchscreen(FastTouchscreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13463};

/// @brief Field metadata offset 0xffffffff size 0x8
static constexpr ::ConstString  metadata{u"AutoWindowSpace;Touch;Vector2;Delta;Analog;TouchPress;Button;Axis;Integer;TouchPhase;Double;Touchscreen;Pointer"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::FastTouchscreen) == 0x1d0, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
