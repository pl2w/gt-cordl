#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedTmpFont.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
CORDL_MODULE_EXPORT(LocalizedTmpFont)
namespace System {
class Object;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine::Localization {
class LocalizedTmpFont_UxmlSerializedData;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedTmpFont;
}
namespace UnityEngine::Localization {
class LocalizedTmpFont_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedTmpFont*);
MARK_REF_T(::UnityEngine::Localization::LocalizedTmpFont_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedTmpFont*, "UnityEngine.Localization", "LocalizedTmpFont");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedTmpFont_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedTmpFont/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.LocalizedAsset`1<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedTmpFont
class CORDL_TYPE LocalizedTmpFont : public ::UnityEngine::Localization::LocalizedAsset_1<::UnityW<::TMPro::TMP_FontAsset>> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedTmpFont_UxmlSerializedData;

static inline ::UnityEngine::Localization::LocalizedTmpFont* New_ctor() ;

/// @brief Method .ctor, addr 0xb00f194, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedTmpFont() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTmpFont", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedTmpFont(LocalizedTmpFont && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTmpFont", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedTmpFont(LocalizedTmpFont const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25035};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedTmpFont) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedAsset`1::UxmlSerializedData<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedTmpFont/UxmlSerializedData
class CORDL_TYPE LocalizedTmpFont_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<::UnityW<::TMPro::TMP_FontAsset>> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb00f1e0, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::LocalizedTmpFont_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb00f1dc, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb00f230, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedTmpFont_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTmpFont_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedTmpFont_UxmlSerializedData(LocalizedTmpFont_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTmpFont_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedTmpFont_UxmlSerializedData(LocalizedTmpFont_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25034};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedTmpFont_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
