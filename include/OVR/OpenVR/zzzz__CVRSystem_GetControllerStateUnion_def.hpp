#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem_GetControllerStateUnion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CVRSystem_GetControllerStateUnion)
namespace OVR::OpenVR {
class CVRSystem__GetControllerStatePacked;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerState;
}
// Forward declare root types
namespace GlobalNamespace {
struct CVRSystem_GetControllerStateUnion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CVRSystem_GetControllerStateUnion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CVRSystem_GetControllerStateUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateUnion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVR.OpenVR.CVRSystem/GetControllerStateUnion
struct CORDL_TYPE CVRSystem_GetControllerStateUnion {
public:
// Declarations
/// @brief Field pGetControllerState, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pGetControllerState, put=__cordl_internal_set_pGetControllerState)) ::OVR::OpenVR::IVRSystem__GetControllerState*  pGetControllerState;

/// @brief Field pGetControllerStatePacked, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pGetControllerStatePacked, put=__cordl_internal_set_pGetControllerStatePacked)) ::OVR::OpenVR::CVRSystem__GetControllerStatePacked*  pGetControllerStatePacked;

constexpr ::OVR::OpenVR::IVRSystem__GetControllerState* const& __cordl_internal_get_pGetControllerState() const;

constexpr ::OVR::OpenVR::IVRSystem__GetControllerState*& __cordl_internal_get_pGetControllerState() ;

constexpr ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* const& __cordl_internal_get_pGetControllerStatePacked() const;

constexpr ::OVR::OpenVR::CVRSystem__GetControllerStatePacked*& __cordl_internal_get_pGetControllerStatePacked() ;

constexpr void __cordl_internal_set_pGetControllerState(::OVR::OpenVR::IVRSystem__GetControllerState*  value) ;

constexpr void __cordl_internal_set_pGetControllerStatePacked(::OVR::OpenVR::CVRSystem__GetControllerStatePacked*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CVRSystem_GetControllerStateUnion() ;

// Ctor Parameters [CppParam { name: "pGetControllerState", ty: "::OVR::OpenVR::IVRSystem__GetControllerState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "pGetControllerStatePacked", ty: "::OVR::OpenVR::CVRSystem__GetControllerStatePacked*", modifiers: "", def_value: None, comment: None }]
constexpr CVRSystem_GetControllerStateUnion(::OVR::OpenVR::IVRSystem__GetControllerState*  pGetControllerState, ::OVR::OpenVR::CVRSystem__GetControllerStatePacked*  pGetControllerStatePacked) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pGetControllerState_padding[0x0];
/// @brief Field pGetControllerState, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVRSystem__GetControllerState*  ___pGetControllerState;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pGetControllerState_padding_forAlignment[0x0];
/// @brief Field pGetControllerState, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVRSystem__GetControllerState*  ___pGetControllerState_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pGetControllerStatePacked_padding[0x0];
/// @brief Field pGetControllerStatePacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVRSystem__GetControllerStatePacked*  ___pGetControllerStatePacked;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pGetControllerStatePacked_padding_forAlignment[0x0];
/// @brief Field pGetControllerStatePacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVRSystem__GetControllerStatePacked*  ___pGetControllerStatePacked_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CVRSystem_GetControllerStateUnion) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
