#pragma once
// IWYU pragma private; include "GlobalNamespace/GRNameDisplayPlate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRNameDisplayPlate)
namespace GlobalNamespace {
class VRRig;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class GRNameDisplayPlate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRNameDisplayPlate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRNameDisplayPlate*, "", "GRNameDisplayPlate");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRNameDisplayPlate
class CORDL_TYPE GRNameDisplayPlate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field namePlateLabel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_namePlateLabel, put=__cordl_internal_set_namePlateLabel)) ::UnityW<::TMPro::TMP_Text>  namePlateLabel;

/// @brief Method Clear, addr 0x589f0c4, size 0x5c, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GlobalNamespace::GRNameDisplayPlate* New_ctor() ;

/// @brief Method RefreshPlayerName, addr 0x589ef70, size 0x154, virtual false, abstract: false, final false
inline void RefreshPlayerName(::GlobalNamespace::VRRig*  vrRig) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_namePlateLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_namePlateLabel() ;

constexpr void __cordl_internal_set_namePlateLabel(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x589f120, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRNameDisplayPlate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRNameDisplayPlate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRNameDisplayPlate(GRNameDisplayPlate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRNameDisplayPlate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRNameDisplayPlate(GRNameDisplayPlate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1993};

/// @brief Field namePlateLabel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___namePlateLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRNameDisplayPlate, ___namePlateLabel) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRNameDisplayPlate) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
