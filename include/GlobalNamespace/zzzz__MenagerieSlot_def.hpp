#pragma once
// IWYU pragma private; include "GlobalNamespace/MenagerieSlot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MenagerieSlot)
namespace GlobalNamespace {
class MenagerieCritter;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MenagerieSlot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenagerieSlot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenagerieSlot*, "", "MenagerieSlot");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenagerieSlot
class CORDL_TYPE MenagerieSlot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field critter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_critter, put=__cordl_internal_set_critter)) ::UnityW<::GlobalNamespace::MenagerieCritter>  critter;

/// @brief Field critterMountPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_critterMountPoint, put=__cordl_internal_set_critterMountPoint)) ::UnityW<::UnityEngine::Transform>  critterMountPoint;

/// @brief Field label, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_label, put=__cordl_internal_set_label)) ::UnityW<::TMPro::TMP_Text>  label;

static inline ::GlobalNamespace::MenagerieSlot* New_ctor() ;

/// @brief Method Reset, addr 0x56fcb20, size 0x24, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::GlobalNamespace::MenagerieCritter> const& __cordl_internal_get_critter() const;

constexpr ::UnityW<::GlobalNamespace::MenagerieCritter>& __cordl_internal_get_critter() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_critterMountPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_critterMountPoint() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_label() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_label() ;

constexpr void __cordl_internal_set_critter(::UnityW<::GlobalNamespace::MenagerieCritter>  value) ;

constexpr void __cordl_internal_set_critterMountPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_label(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x56fcb44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenagerieSlot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenagerieSlot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MenagerieSlot(MenagerieSlot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenagerieSlot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenagerieSlot(MenagerieSlot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{141};

/// @brief Field critterMountPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___critterMountPoint;

/// @brief Field label, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___label;

/// @brief Field critter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenagerieCritter>  ___critter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenagerieSlot, ___critterMountPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieSlot, ___label) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieSlot, ___critter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenagerieSlot) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
