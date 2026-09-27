#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Localization/ModioUILocalizedText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUILocalizedText)
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizedText;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Localization::ModioUILocalizedText*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Localization::ModioUILocalizedText*, "Modio.Unity.UI.Components.Localization", "ModioUILocalizedText");
// Dependencies System.Object, TMPro.TMP_Text, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components::Localization {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Localization.ModioUILocalizedText
class CORDL_TYPE ModioUILocalizedText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _args, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__args, put=__cordl_internal_set__args)) ::ArrayW<::System::Object*>  _args;

/// @brief Field _initialKey, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__initialKey, put=__cordl_internal_set__initialKey)) ::StringW  _initialKey;

/// @brief Field _key, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__key, put=__cordl_internal_set__key)) ::StringW  _key;

/// @brief Field _splitFormatArgs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__splitFormatArgs, put=__cordl_internal_set__splitFormatArgs)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  _splitFormatArgs;

/// @brief Field _tmpText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpText, put=__cordl_internal_set__tmpText)) ::UnityW<::TMPro::TMP_Text>  _tmpText;

static inline ::Modio::Unity::UI::Components::Localization::ModioUILocalizedText* New_ctor() ;

/// @brief Method OnDisable, addr 0x9fcaeb0, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fcae10, size 0xa0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0x9fcadb8, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetKey, addr 0x9fcb254, size 0x30, virtual false, abstract: false, final false
inline void ResetKey() ;

/// @brief Method SetFormatArgs, addr 0x9fc0970, size 0x1c, virtual false, abstract: false, final false
inline void SetFormatArgs(/* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method SetKey, addr 0x9fbafc8, size 0x54, virtual false, abstract: false, final false
inline void SetKey(::StringW  key) ;

/// @brief Method SetKey, addr 0x9fcb284, size 0x30, virtual false, abstract: false, final false
inline void SetKey(::StringW  key, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method SetKeyIfItExists, addr 0x9fcb1c8, size 0x8c, virtual false, abstract: false, final false
inline bool SetKeyIfItExists(::StringW  key) ;

/// @brief Method UpdateText, addr 0x9fcaf50, size 0x278, virtual false, abstract: false, final false
inline void UpdateText() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get__args() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get__args() ;

constexpr ::StringW const& __cordl_internal_get__initialKey() const;

constexpr ::StringW& __cordl_internal_get__initialKey() ;

constexpr ::StringW const& __cordl_internal_get__key() const;

constexpr ::StringW& __cordl_internal_get__key() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get__splitFormatArgs() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get__splitFormatArgs() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__tmpText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__tmpText() ;

constexpr void __cordl_internal_set__args(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set__initialKey(::StringW  value) ;

constexpr void __cordl_internal_set__key(::StringW  value) ;

constexpr void __cordl_internal_set__splitFormatArgs(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set__tmpText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fcb2b4, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUILocalizedText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUILocalizedText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUILocalizedText(ModioUILocalizedText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUILocalizedText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUILocalizedText(ModioUILocalizedText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27253};

/// [SerializeField]
/// @brief Field _key, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____key;

/// [SerializeField]
/// @brief Field _tmpText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____tmpText;

/// [SerializeField]
/// @brief Field _splitFormatArgs, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ____splitFormatArgs;

/// @brief Field _args, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ____args;

/// @brief Field _initialKey, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____initialKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Localization::ModioUILocalizedText, ____key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Localization::ModioUILocalizedText, ____tmpText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Localization::ModioUILocalizedText, ____splitFormatArgs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Localization::ModioUILocalizedText, ____args) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Localization::ModioUILocalizedText, ____initialKey) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Localization::ModioUILocalizedText) == 0x48, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Localization
