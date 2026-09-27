#pragma once
// IWYU pragma private; include "GlobalNamespace/StageMicrophone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StageMicrophone)
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class StageMicrophone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StageMicrophone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StageMicrophone*, "", "StageMicrophone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StageMicrophone
class CORDL_TYPE StageMicrophone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AmplifiedSpatialBlend, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_AmplifiedSpatialBlend, put=__cordl_internal_set_AmplifiedSpatialBlend)) float_t  AmplifiedSpatialBlend;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::StageMicrophone>  Instance;

/// @brief Field PickupRadius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PickupRadius, put=__cordl_internal_set_PickupRadius)) float_t  PickupRadius;

/// @brief Method Awake, addr 0x5986d28, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetPlayerSpatialBlend, addr 0x5986e50, size 0x28, virtual false, abstract: false, final false
inline float_t GetPlayerSpatialBlend(::GlobalNamespace::VRRig*  player) ;

/// @brief Method IsPlayerAmplified, addr 0x5986d80, size 0xd0, virtual false, abstract: false, final false
inline bool IsPlayerAmplified(::GlobalNamespace::VRRig*  player) ;

static inline ::GlobalNamespace::StageMicrophone* New_ctor() ;

constexpr float_t const& __cordl_internal_get_AmplifiedSpatialBlend() const;

constexpr float_t& __cordl_internal_get_AmplifiedSpatialBlend() ;

constexpr float_t const& __cordl_internal_get_PickupRadius() const;

constexpr float_t& __cordl_internal_get_PickupRadius() ;

constexpr void __cordl_internal_set_AmplifiedSpatialBlend(float_t  value) ;

constexpr void __cordl_internal_set_PickupRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x5986e78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::StageMicrophone> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::StageMicrophone>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StageMicrophone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StageMicrophone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StageMicrophone(StageMicrophone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StageMicrophone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StageMicrophone(StageMicrophone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2552};

/// [SerializeField]
/// @brief Field PickupRadius, offset: 0x20, size: 0x4, def value: None
 float_t  ___PickupRadius;

/// [SerializeField]
/// @brief Field AmplifiedSpatialBlend, offset: 0x24, size: 0x4, def value: None
 float_t  ___AmplifiedSpatialBlend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StageMicrophone, ___PickupRadius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StageMicrophone, ___AmplifiedSpatialBlend) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StageMicrophone) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
