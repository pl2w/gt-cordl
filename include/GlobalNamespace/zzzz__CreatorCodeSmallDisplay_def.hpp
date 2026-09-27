#pragma once
// IWYU pragma private; include "GlobalNamespace/CreatorCodeSmallDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreatorCodeSmallDisplay)
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class CreatorCodeSmallDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreatorCodeSmallDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreatorCodeSmallDisplay*, "", "CreatorCodeSmallDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreatorCodeSmallDisplay
class CORDL_TYPE CreatorCodeSmallDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field codeText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_codeText, put=__cordl_internal_set_codeText)) ::UnityW<::UnityEngine::UI::Text>  codeText;

/// @brief Method Awake, addr 0x577ec2c, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::CreatorCodeSmallDisplay* New_ctor() ;

/// @brief Method SetCode, addr 0x577c878, size 0xc4, virtual false, abstract: false, final false
inline void SetCode(::StringW  code) ;

/// @brief Method SuccessfulPurchase, addr 0x577db14, size 0xa8, virtual false, abstract: false, final false
inline void SuccessfulPurchase(::StringW  memberName) ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_codeText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_codeText() ;

constexpr void __cordl_internal_set_codeText(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x577ed2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreatorCodeSmallDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodeSmallDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreatorCodeSmallDisplay(CreatorCodeSmallDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodeSmallDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreatorCodeSmallDisplay(CreatorCodeSmallDisplay const& ) = delete;

/// @brief Field CreatorCode offset 0xffffffff size 0x8
static constexpr ::ConstString  CreatorCode{u"CREATOR CODE: "};

/// @brief Field CreatorSupported offset 0xffffffff size 0x8
static constexpr ::ConstString  CreatorSupported{u"SUPPORTED: "};

/// @brief Field NoCreator offset 0xffffffff size 0x8
static constexpr ::ConstString  NoCreator{u"<NONE>"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1394};

/// @brief Field codeText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___codeText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreatorCodeSmallDisplay, ___codeText) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreatorCodeSmallDisplay) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
