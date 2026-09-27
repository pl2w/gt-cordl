#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/GtfcPriceLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GtfcPriceLabel)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class GtfcPriceLabel;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::GtfcPriceLabel*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::GtfcPriceLabel*, "GorillaNetworking.Store", "GtfcPriceLabel");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.GtfcPriceLabel
class CORDL_TYPE GtfcPriceLabel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _label, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TMP_Text>  _label;

static inline ::GorillaNetworking::Store::GtfcPriceLabel* New_ctor() ;

/// @brief Method SetText, addr 0x5ca8318, size 0x20, virtual false, abstract: false, final false
inline void SetText(::StringW  text) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__label() ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5ca8338, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtfcPriceLabel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtfcPriceLabel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtfcPriceLabel(GtfcPriceLabel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtfcPriceLabel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtfcPriceLabel(GtfcPriceLabel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4427};

/// [SerializeField]
/// @brief Field _label, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____label;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::GtfcPriceLabel, ____label) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::GtfcPriceLabel) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
