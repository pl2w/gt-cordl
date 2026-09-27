#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRRenderModels_GetComponentStateUnion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CVRRenderModels_GetComponentStateUnion)
namespace OVR::OpenVR {
class CVRRenderModels__GetComponentStatePacked;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentState;
}
// Forward declare root types
namespace GlobalNamespace {
struct CVRRenderModels_GetComponentStateUnion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CVRRenderModels_GetComponentStateUnion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CVRRenderModels_GetComponentStateUnion, "OVR.OpenVR", "CVRRenderModels/GetComponentStateUnion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVR.OpenVR.CVRRenderModels/GetComponentStateUnion
struct CORDL_TYPE CVRRenderModels_GetComponentStateUnion {
public:
// Declarations
/// @brief Field pGetComponentState, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pGetComponentState, put=__cordl_internal_set_pGetComponentState)) ::OVR::OpenVR::IVRRenderModels__GetComponentState*  pGetComponentState;

/// @brief Field pGetComponentStatePacked, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pGetComponentStatePacked, put=__cordl_internal_set_pGetComponentStatePacked)) ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*  pGetComponentStatePacked;

constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState* const& __cordl_internal_get_pGetComponentState() const;

constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState*& __cordl_internal_get_pGetComponentState() ;

constexpr ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* const& __cordl_internal_get_pGetComponentStatePacked() const;

constexpr ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*& __cordl_internal_get_pGetComponentStatePacked() ;

constexpr void __cordl_internal_set_pGetComponentState(::OVR::OpenVR::IVRRenderModels__GetComponentState*  value) ;

constexpr void __cordl_internal_set_pGetComponentStatePacked(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CVRRenderModels_GetComponentStateUnion() ;

// Ctor Parameters [CppParam { name: "pGetComponentState", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "pGetComponentStatePacked", ty: "::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*", modifiers: "", def_value: None, comment: None }]
constexpr CVRRenderModels_GetComponentStateUnion(::OVR::OpenVR::IVRRenderModels__GetComponentState*  pGetComponentState, ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*  pGetComponentStatePacked) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pGetComponentState_padding[0x0];
/// @brief Field pGetComponentState, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVRRenderModels__GetComponentState*  ___pGetComponentState;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pGetComponentState_padding_forAlignment[0x0];
/// @brief Field pGetComponentState, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVRRenderModels__GetComponentState*  ___pGetComponentState_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pGetComponentStatePacked_padding[0x0];
/// @brief Field pGetComponentStatePacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*  ___pGetComponentStatePacked;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pGetComponentStatePacked_padding_forAlignment[0x0];
/// @brief Field pGetComponentStatePacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*  ___pGetComponentStatePacked_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CVRRenderModels_GetComponentStateUnion) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
