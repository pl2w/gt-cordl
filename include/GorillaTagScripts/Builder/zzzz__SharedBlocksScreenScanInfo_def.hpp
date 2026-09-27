#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksScreenScanInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksScreen_def.hpp"
CORDL_MODULE_EXPORT(SharedBlocksScreenScanInfo)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class SharedBlocksScreenScanInfo;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*, "GorillaTagScripts.Builder", "SharedBlocksScreenScanInfo");
// Dependencies GorillaTagScripts.Builder.SharedBlocksScreen
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksScreenScanInfo
class CORDL_TYPE SharedBlocksScreenScanInfo : public ::GorillaTagScripts::Builder::SharedBlocksScreen {
public:
// Declarations
/// @brief Field mapIDText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapIDText, put=__cordl_internal_set_mapIDText)) ::UnityW<::TMPro::TMP_Text>  mapIDText;

/// @brief Method DrawScreen, addr 0x5c40ab0, size 0xd4, virtual false, abstract: false, final false
inline void DrawScreen() ;

static inline ::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo* New_ctor() ;

/// @brief Method OnDownPressed, addr 0x5c40414, size 0x4, virtual true, abstract: false, final false
inline void OnDownPressed() ;

/// @brief Method OnSelectPressed, addr 0x5c40418, size 0x18, virtual true, abstract: false, final false
inline void OnSelectPressed() ;

/// @brief Method OnUpPressed, addr 0x5c40410, size 0x4, virtual true, abstract: false, final false
inline void OnUpPressed() ;

/// @brief Method Show, addr 0x5c40a98, size 0x18, virtual true, abstract: false, final false
inline void Show() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_mapIDText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_mapIDText() ;

constexpr void __cordl_internal_set_mapIDText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5c40dec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksScreenScanInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksScreenScanInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksScreenScanInfo(SharedBlocksScreenScanInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksScreenScanInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksScreenScanInfo(SharedBlocksScreenScanInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4214};

/// [SerializeField]
/// @brief Field mapIDText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___mapIDText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo, ___mapIDText) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
