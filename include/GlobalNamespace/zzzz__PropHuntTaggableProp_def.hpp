#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntTaggableProp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(PropHuntTaggableProp)
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHuntTaggableProp;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHuntTaggableProp*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntTaggableProp*, "", "PropHuntTaggableProp");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntTaggableProp
class CORDL_TYPE PropHuntTaggableProp : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field offset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field ownerRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

static inline ::GlobalNamespace::PropHuntTaggableProp* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x563faec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntTaggableProp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntTaggableProp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntTaggableProp(PropHuntTaggableProp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntTaggableProp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntTaggableProp(PropHuntTaggableProp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{642};

/// @brief Field ownerRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field offset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHuntTaggableProp, ___ownerRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntTaggableProp, ___offset) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHuntTaggableProp) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
