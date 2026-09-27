#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizeStringEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Components/zzzz__LocalizedMonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizeStringEvent)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Events {
class UnityEventString;
}
namespace UnityEngine::Localization {
class LocalizedString_ChangeHandler;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization::Components {
class LocalizeStringEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Components::LocalizeStringEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Components::LocalizeStringEvent*, "UnityEngine.Localization.Components", "LocalizeStringEvent");
// [AddComponentMenu("Localization/Localize String Event")]
// Dependencies UnityEngine.Localization.Components.LocalizedMonoBehaviour
namespace UnityEngine::Localization::Components {
// Is value type: false
// CS Name: UnityEngine.Localization.Components.LocalizeStringEvent
class CORDL_TYPE LocalizeStringEvent : public ::UnityEngine::Localization::Components::LocalizedMonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_OnUpdateString, put=set_OnUpdateString)) ::UnityEngine::Localization::Events::UnityEventString*  OnUpdateString;

 __declspec(property(get=get_StringReference, put=set_StringReference)) ::UnityEngine::Localization::LocalizedString*  StringReference;

/// @brief Field m_ChangeHandler, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChangeHandler, put=__cordl_internal_set_m_ChangeHandler)) ::UnityEngine::Localization::LocalizedString_ChangeHandler*  m_ChangeHandler;

/// @brief Field m_FormatArguments, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FormatArguments, put=__cordl_internal_set_m_FormatArguments)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  m_FormatArguments;

/// @brief Field m_StringReference, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StringReference, put=__cordl_internal_set_m_StringReference)) ::UnityEngine::Localization::LocalizedString*  m_StringReference;

/// @brief Field m_UpdateString, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UpdateString, put=__cordl_internal_set_m_UpdateString)) ::UnityEngine::Localization::Events::UnityEventString*  m_UpdateString;

/// @brief Method ClearChangeHandler, addr 0xb04f468, size 0x1c, virtual true, abstract: false, final false
inline void ClearChangeHandler() ;

static inline ::UnityEngine::Localization::Components::LocalizeStringEvent* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb04f1e0, size 0xc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb04f1d4, size 0xc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb04f1c8, size 0xc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xb04f244, size 0x14, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RefreshString, addr 0xb04f030, size 0x14, virtual false, abstract: false, final false
inline void RefreshString() ;

/// @brief Method RegisterChangeHandler, addr 0xb04f258, size 0x210, virtual true, abstract: false, final false
inline void RegisterChangeHandler() ;

/// @brief Method SetEntry, addr 0xb04f118, size 0xb0, virtual false, abstract: false, final false
inline void SetEntry(::StringW  entryName) ;

/// @brief Method SetTable, addr 0xb04f044, size 0xd4, virtual false, abstract: false, final false
inline void SetTable(::StringW  tableReference) ;

/// @brief Method UpdateString, addr 0xb04f1ec, size 0x58, virtual true, abstract: false, final false
inline void UpdateString(::StringW  value) ;

constexpr ::UnityEngine::Localization::LocalizedString_ChangeHandler* const& __cordl_internal_get_m_ChangeHandler() const;

constexpr ::UnityEngine::Localization::LocalizedString_ChangeHandler*& __cordl_internal_get_m_ChangeHandler() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_FormatArguments() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_FormatArguments() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_m_StringReference() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_m_StringReference() ;

constexpr ::UnityEngine::Localization::Events::UnityEventString* const& __cordl_internal_get_m_UpdateString() const;

constexpr ::UnityEngine::Localization::Events::UnityEventString*& __cordl_internal_get_m_UpdateString() ;

constexpr void __cordl_internal_set_m_ChangeHandler(::UnityEngine::Localization::LocalizedString_ChangeHandler*  value) ;

constexpr void __cordl_internal_set_m_FormatArguments(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_StringReference(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_m_UpdateString(::UnityEngine::Localization::Events::UnityEventString*  value) ;

/// @brief Method .ctor, addr 0xb04f484, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnUpdateString, addr 0xb04f020, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Events::UnityEventString* get_OnUpdateString() ;

/// @brief Method get_StringReference, addr 0xb04efb4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedString* get_StringReference() ;

/// @brief Method set_OnUpdateString, addr 0xb04f028, size 0x8, virtual false, abstract: false, final false
inline void set_OnUpdateString(::UnityEngine::Localization::Events::UnityEventString*  value) ;

/// @brief Method set_StringReference, addr 0xb04efbc, size 0x64, virtual false, abstract: false, final false
inline void set_StringReference(::UnityEngine::Localization::LocalizedString*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizeStringEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizeStringEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizeStringEvent(LocalizeStringEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizeStringEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizeStringEvent(LocalizeStringEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25324};

/// [SerializeField]
/// @brief Field m_StringReference, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___m_StringReference;

/// [SerializeField]
/// @brief Field m_FormatArguments, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___m_FormatArguments;

/// [SerializeField]
/// @brief Field m_UpdateString, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::Events::UnityEventString*  ___m_UpdateString;

/// @brief Field m_ChangeHandler, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString_ChangeHandler*  ___m_ChangeHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Components::LocalizeStringEvent, ___m_StringReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Components::LocalizeStringEvent, ___m_FormatArguments) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Components::LocalizeStringEvent, ___m_UpdateString) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Components::LocalizeStringEvent, ___m_ChangeHandler) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Components::LocalizeStringEvent) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Components
