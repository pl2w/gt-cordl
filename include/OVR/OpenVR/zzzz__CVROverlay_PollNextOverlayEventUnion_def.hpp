#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVROverlay_PollNextOverlayEventUnion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CVROverlay_PollNextOverlayEventUnion)
namespace OVR::OpenVR {
class CVROverlay__PollNextOverlayEventPacked;
}
namespace OVR::OpenVR {
class IVROverlay__PollNextOverlayEvent;
}
// Forward declare root types
namespace GlobalNamespace {
struct CVROverlay_PollNextOverlayEventUnion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CVROverlay_PollNextOverlayEventUnion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CVROverlay_PollNextOverlayEventUnion, "OVR.OpenVR", "CVROverlay/PollNextOverlayEventUnion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVR.OpenVR.CVROverlay/PollNextOverlayEventUnion
struct CORDL_TYPE CVROverlay_PollNextOverlayEventUnion {
public:
// Declarations
/// @brief Field pPollNextOverlayEvent, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pPollNextOverlayEvent, put=__cordl_internal_set_pPollNextOverlayEvent)) ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*  pPollNextOverlayEvent;

/// @brief Field pPollNextOverlayEventPacked, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pPollNextOverlayEventPacked, put=__cordl_internal_set_pPollNextOverlayEventPacked)) ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*  pPollNextOverlayEventPacked;

constexpr ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* const& __cordl_internal_get_pPollNextOverlayEvent() const;

constexpr ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*& __cordl_internal_get_pPollNextOverlayEvent() ;

constexpr ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked* const& __cordl_internal_get_pPollNextOverlayEventPacked() const;

constexpr ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*& __cordl_internal_get_pPollNextOverlayEventPacked() ;

constexpr void __cordl_internal_set_pPollNextOverlayEvent(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*  value) ;

constexpr void __cordl_internal_set_pPollNextOverlayEventPacked(::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CVROverlay_PollNextOverlayEventUnion() ;

// Ctor Parameters [CppParam { name: "pPollNextOverlayEvent", ty: "::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "pPollNextOverlayEventPacked", ty: "::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*", modifiers: "", def_value: None, comment: None }]
constexpr CVROverlay_PollNextOverlayEventUnion(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*  pPollNextOverlayEvent, ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*  pPollNextOverlayEventPacked) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pPollNextOverlayEvent_padding[0x0];
/// @brief Field pPollNextOverlayEvent, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*  ___pPollNextOverlayEvent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pPollNextOverlayEvent_padding_forAlignment[0x0];
/// @brief Field pPollNextOverlayEvent, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*  ___pPollNextOverlayEvent_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pPollNextOverlayEventPacked_padding[0x0];
/// @brief Field pPollNextOverlayEventPacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*  ___pPollNextOverlayEventPacked;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pPollNextOverlayEventPacked_padding_forAlignment[0x0];
/// @brief Field pPollNextOverlayEventPacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*  ___pPollNextOverlayEventPacked_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CVROverlay_PollNextOverlayEventUnion) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
