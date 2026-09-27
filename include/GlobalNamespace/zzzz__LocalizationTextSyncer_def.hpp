#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationTextSyncer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LocalizationTextSyncer)
namespace GlobalNamespace {
struct LocalisationFontPair;
}
namespace GlobalNamespace {
struct LocalizationTextSyncer_TextCompSyncData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizationTextSyncer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalizationTextSyncer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizationTextSyncer*, "", "LocalizationTextSyncer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizationTextSyncer
class CORDL_TYPE LocalizationTextSyncer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TextCompSyncData = ::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData;

/// @brief Field _textComponentsToSync, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__textComponentsToSync, put=__cordl_internal_set__textComponentsToSync)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>*  _textComponentsToSync;

/// @brief Field _universalFontOverrides, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__universalFontOverrides, put=__cordl_internal_set__universalFontOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  _universalFontOverrides;

static inline ::GlobalNamespace::LocalizationTextSyncer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5a689b8, size 0xa0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5a68918, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a687e8, size 0x130, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLanguageChanged, addr 0x5a684c0, size 0x328, virtual false, abstract: false, final false
inline void OnLanguageChanged() ;

/// @brief Method Start, addr 0x5a684bc, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetFontDataOverride, addr 0x5a68a58, size 0x144, virtual false, abstract: false, final false
inline bool TryGetFontDataOverride(::by_ref<::GlobalNamespace::LocalisationFontPair>  fontDataOverride) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>* const& __cordl_internal_get__textComponentsToSync() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>*& __cordl_internal_get__textComponentsToSync() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>* const& __cordl_internal_get__universalFontOverrides() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*& __cordl_internal_get__universalFontOverrides() ;

constexpr void __cordl_internal_set__textComponentsToSync(::System::Collections::Generic::List_1<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>*  value) ;

constexpr void __cordl_internal_set__universalFontOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  value) ;

/// @brief Method .ctor, addr 0x5a68ce0, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationTextSyncer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationTextSyncer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationTextSyncer(LocalizationTextSyncer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationTextSyncer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationTextSyncer(LocalizationTextSyncer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3086};

/// [SerializeField]
/// [Tooltip("List of all the Text Components - and optional overrides - that will be updated when langauge changes")]
/// @brief Field _textComponentsToSync, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>*  ____textComponentsToSync;

/// [SerializeField]
/// [Tooltip("List of optional overrides that will be applied to ALL Text Components on this object")]
/// @brief Field _universalFontOverrides, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  ____universalFontOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizationTextSyncer, ____textComponentsToSync) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationTextSyncer, ____universalFontOverrides) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizationTextSyncer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
