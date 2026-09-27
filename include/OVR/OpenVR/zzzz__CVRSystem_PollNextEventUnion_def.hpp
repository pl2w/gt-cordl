#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem_PollNextEventUnion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CVRSystem_PollNextEventUnion)
namespace OVR::OpenVR {
class CVRSystem__PollNextEventPacked;
}
namespace OVR::OpenVR {
class IVRSystem__PollNextEvent;
}
// Forward declare root types
namespace GlobalNamespace {
struct CVRSystem_PollNextEventUnion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CVRSystem_PollNextEventUnion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CVRSystem_PollNextEventUnion, "OVR.OpenVR", "CVRSystem/PollNextEventUnion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVR.OpenVR.CVRSystem/PollNextEventUnion
struct CORDL_TYPE CVRSystem_PollNextEventUnion {
public:
// Declarations
/// @brief Field pPollNextEvent, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pPollNextEvent, put=__cordl_internal_set_pPollNextEvent)) ::OVR::OpenVR::IVRSystem__PollNextEvent*  pPollNextEvent;

/// @brief Field pPollNextEventPacked, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pPollNextEventPacked, put=__cordl_internal_set_pPollNextEventPacked)) ::OVR::OpenVR::CVRSystem__PollNextEventPacked*  pPollNextEventPacked;

constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent* const& __cordl_internal_get_pPollNextEvent() const;

constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent*& __cordl_internal_get_pPollNextEvent() ;

constexpr ::OVR::OpenVR::CVRSystem__PollNextEventPacked* const& __cordl_internal_get_pPollNextEventPacked() const;

constexpr ::OVR::OpenVR::CVRSystem__PollNextEventPacked*& __cordl_internal_get_pPollNextEventPacked() ;

constexpr void __cordl_internal_set_pPollNextEvent(::OVR::OpenVR::IVRSystem__PollNextEvent*  value) ;

constexpr void __cordl_internal_set_pPollNextEventPacked(::OVR::OpenVR::CVRSystem__PollNextEventPacked*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CVRSystem_PollNextEventUnion() ;

// Ctor Parameters [CppParam { name: "pPollNextEvent", ty: "::OVR::OpenVR::IVRSystem__PollNextEvent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "pPollNextEventPacked", ty: "::OVR::OpenVR::CVRSystem__PollNextEventPacked*", modifiers: "", def_value: None, comment: None }]
constexpr CVRSystem_PollNextEventUnion(::OVR::OpenVR::IVRSystem__PollNextEvent*  pPollNextEvent, ::OVR::OpenVR::CVRSystem__PollNextEventPacked*  pPollNextEventPacked) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pPollNextEvent_padding[0x0];
/// @brief Field pPollNextEvent, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVRSystem__PollNextEvent*  ___pPollNextEvent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pPollNextEvent_padding_forAlignment[0x0];
/// @brief Field pPollNextEvent, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVRSystem__PollNextEvent*  ___pPollNextEvent_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pPollNextEventPacked_padding[0x0];
/// @brief Field pPollNextEventPacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVRSystem__PollNextEventPacked*  ___pPollNextEventPacked;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pPollNextEventPacked_padding_forAlignment[0x0];
/// @brief Field pPollNextEventPacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVRSystem__PollNextEventPacked*  ___pPollNextEventPacked_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13097};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CVRSystem_PollNextEventUnion) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
