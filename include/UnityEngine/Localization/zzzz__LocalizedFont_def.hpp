#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedFont.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
CORDL_MODULE_EXPORT(LocalizedFont)
namespace System {
class Object;
}
namespace UnityEngine::Localization {
class LocalizedFont_UxmlSerializedData;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedFont;
}
namespace UnityEngine::Localization {
class LocalizedFont_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedFont*);
MARK_REF_T(::UnityEngine::Localization::LocalizedFont_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedFont*, "UnityEngine.Localization", "LocalizedFont");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedFont_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedFont/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.LocalizedAsset`1<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedFont
class CORDL_TYPE LocalizedFont : public ::UnityEngine::Localization::LocalizedAsset_1<::UnityW<::UnityEngine::Font>> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedFont_UxmlSerializedData;

static inline ::UnityEngine::Localization::LocalizedFont* New_ctor() ;

/// @brief Method .ctor, addr 0xb00f278, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedFont() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedFont", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedFont(LocalizedFont && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedFont", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedFont(LocalizedFont const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25037};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedFont) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedAsset`1::UxmlSerializedData<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedFont/UxmlSerializedData
class CORDL_TYPE LocalizedFont_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<::UnityW<::UnityEngine::Font>> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb00f2c4, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::LocalizedFont_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb00f2c0, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb00f314, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedFont_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedFont_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedFont_UxmlSerializedData(LocalizedFont_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedFont_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedFont_UxmlSerializedData(LocalizedFont_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25036};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedFont_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
