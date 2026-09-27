#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedSprite.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
CORDL_MODULE_EXPORT(LocalizedSprite)
namespace System {
class Object;
}
namespace UnityEngine::Localization {
class LocalizedSprite_UxmlSerializedData;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedSprite;
}
namespace UnityEngine::Localization {
class LocalizedSprite_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedSprite*);
MARK_REF_T(::UnityEngine::Localization::LocalizedSprite_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedSprite*, "UnityEngine.Localization", "LocalizedSprite");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedSprite_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedSprite/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.LocalizedAsset`1<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedSprite
class CORDL_TYPE LocalizedSprite : public ::UnityEngine::Localization::LocalizedAsset_1<::UnityW<::UnityEngine::Sprite>> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedSprite_UxmlSerializedData;

static inline ::UnityEngine::Localization::LocalizedSprite* New_ctor() ;

/// @brief Method .ctor, addr 0xb00ef10, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedSprite() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedSprite", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedSprite(LocalizedSprite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedSprite", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedSprite(LocalizedSprite const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25031};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedSprite) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedAsset`1::UxmlSerializedData<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedSprite/UxmlSerializedData
class CORDL_TYPE LocalizedSprite_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<::UnityW<::UnityEngine::Sprite>> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb00ef5c, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::LocalizedSprite_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb00ef58, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb00efac, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedSprite_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedSprite_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedSprite_UxmlSerializedData(LocalizedSprite_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedSprite_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedSprite_UxmlSerializedData(LocalizedSprite_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedSprite_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
