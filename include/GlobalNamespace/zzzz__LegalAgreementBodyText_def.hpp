#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreementBodyText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LegalAgreementBodyText_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LegalAgreementBodyText)
namespace GlobalNamespace {
struct LegalAgreementBodyText_State;
}
namespace GlobalNamespace {
struct LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class LegalAgreementBodyText;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LegalAgreementBodyText*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreementBodyText*, "", "LegalAgreementBodyText");
// Dependencies LegalAgreementBodyText::State, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegalAgreementBodyText
class CORDL_TYPE LegalAgreementBodyText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::LegalAgreementBodyText_State;

using _UpdateTextFromPlayFabTitleData_d__10 = ::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10;

 __declspec(property(get=get_Height)) float_t  Height;

/// @brief Field cachedText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedText, put=__cordl_internal_set_cachedText)) ::StringW  cachedText;

/// @brief Field rectTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rectTransform, put=__cordl_internal_set_rectTransform)) ::UnityW<::UnityEngine::RectTransform>  rectTransform;

/// @brief Field state, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::LegalAgreementBodyText_State  state;

/// @brief Field textAsset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textAsset, put=__cordl_internal_set_textAsset)) ::UnityW<::UnityEngine::TextAsset>  textAsset;

/// @brief Field textBox, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textBox, put=__cordl_internal_set_textBox)) ::UnityW<::UnityEngine::UI::Text>  textBox;

/// @brief Field textCollection, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_textCollection, put=__cordl_internal_set_textCollection)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*  textCollection;

/// @brief Method Awake, addr 0x5a5ee40, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearText, addr 0x5a5f1b4, size 0x158, virtual false, abstract: false, final false
inline void ClearText() ;

static inline ::GlobalNamespace::LegalAgreementBodyText* New_ctor() ;

/// @brief Method OnPlayFabError, addr 0x5a5f444, size 0x9c, virtual false, abstract: false, final false
inline void OnPlayFabError(::PlayFab::PlayFabError*  obj) ;

/// @brief Method OnTitleDataReceived, addr 0x5a5f4e0, size 0x20, virtual false, abstract: false, final false
inline void OnTitleDataReceived(::StringW  text) ;

/// @brief Method SetText, addr 0x5a5eee4, size 0x2d0, virtual false, abstract: false, final false
inline void SetText(::StringW  text) ;

/// [AsyncStateMachine(typeof(LegalAgreementBodyText::<UpdateTextFromPlayFabTitleData>d__10))]
/// @brief Method UpdateTextFromPlayFabTitleData, addr 0x5a5f30c, size 0x138, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* UpdateTextFromPlayFabTitleData(::StringW  key, ::StringW  version) ;

constexpr ::StringW const& __cordl_internal_get_cachedText() const;

constexpr ::StringW& __cordl_internal_get_cachedText() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_rectTransform() ;

constexpr ::GlobalNamespace::LegalAgreementBodyText_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::LegalAgreementBodyText_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_textAsset() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_textAsset() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_textBox() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_textBox() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>* const& __cordl_internal_get_textCollection() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*& __cordl_internal_get_textCollection() ;

constexpr void __cordl_internal_set_cachedText(::StringW  value) ;

constexpr void __cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::LegalAgreementBodyText_State  value) ;

constexpr void __cordl_internal_set_textAsset(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_textBox(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_textCollection(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*  value) ;

/// @brief Method .ctor, addr 0x5a5f524, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Height, addr 0x5a5f500, size 0x24, virtual false, abstract: false, final false
inline float_t get_Height() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreementBodyText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreementBodyText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegalAgreementBodyText(LegalAgreementBodyText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegalAgreementBodyText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegalAgreementBodyText(LegalAgreementBodyText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3057};

/// [SerializeField]
/// @brief Field textBox, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___textBox;

/// [SerializeField]
/// @brief Field textAsset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___textAsset;

/// [SerializeField]
/// @brief Field rectTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___rectTransform;

/// @brief Field textCollection, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*  ___textCollection;

/// @brief Field cachedText, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___cachedText;

/// @brief Field state, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::LegalAgreementBodyText_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText, ___textBox) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText, ___textAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText, ___rectTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText, ___textCollection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText, ___cachedText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText, ___state) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreementBodyText) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
